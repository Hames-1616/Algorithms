import java.util.Scanner;
public class insertion
{
    public static void main(String c[])
    {
        System.out.println("enter the number of elements that you want to enter\n");
        int x;
        Scanner s = new Scanner(System.in);
        x=s.nextInt();
        int z=x+1;
        int[] a = new int[z];
        System.out.println("enter the elements");
        for(int i=0;i<x;i++)
        {
            a[i] = s.nextInt();
        }
        System.out.println("Enter the element that you want to insert\n");
        int item;
        item = s.nextInt();
        System.out.println("enter the index at which you want to insert\n");
        int index;
        index = s.nextInt();
        for(int i=x;i>index;i--)
        {
            a[i] = a[i-1];
        }
        a[index] = item;
        System.out.println("Printing elements\n");
        for(int i=0;i<z;i++)
        {
            System.out.println(a[i]);
        }
        s.close();
    }
}