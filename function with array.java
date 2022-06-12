import java.util.Scanner;
class funct
{
    Scanner s = new Scanner(System.in);
    void scan(int[] a,int x )
    {
      System.out.println("enter the elements\n");
      for(int i=0;i<x;i++)
      {
        a[i]=s.nextInt();
      }
    }
     static void disp(int[] a,int x )
    {
        for(int i=0;i<x;i++)
        {
            System.out.println(a[i]);
        }
        
    }
     static void add(int[] a,int x )
    {
        int p=0;
        for(int i=0;i<x;i++)
        {
            p=p+a[i];
        }
        System.out.println("Sum = "+p);
    }
     static void product(int[] a,int x )
    {
        int p =1;
        for(int i=0;i<x;i++)
        {
           p=p*a[i];
        }
        System.out.println("product = "+p); 
        
    }
}
public class array
{
    public static void main(String a[])
    {
        int x;
        System.out.println("enter the number of elements the you want to enter\n");
        Scanner s = new Scanner(System.in);
        x=s.nextInt();
        int[] arr = new int[x];
        funct f = new funct();
        f.scan(arr,x);
        f.disp(arr,x);
        f.add(arr,x);
        f.product(arr,x);

    }
}