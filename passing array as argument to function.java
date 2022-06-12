import java.util.Scanner;
public class pass
{
    static void disp(int[] a,int n)
    {
        System.out.println("printing elements\n");
        for(int i=0;i<n;i++)
        {
            System.out.println(a[i]);
        }
    }
    public static void main(String a[])
    {
        int x;
        System.out.println("enter the number of elements that you want to enter\n");
        Scanner s = new Scanner(System.in);
        x=s.nextInt();
        int[] arr = new int[x];
        System.out.println("enter the elements\n");
        for(int i=0;i<x;i++)
        {
            arr[i]=s.nextInt();     
        }
        disp(arr,x);
       
    }
}