import java.util.Scanner;
public class Delete
{
    public static void main(String a[])
    {
        int x,n;
        System.out.println("enter the number of elements that you want to enter\n");
        Scanner s = new Scanner(System.in);
        n=s.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements\n");
        for(int i=0;i<n;i++)
        {
            arr[i]=s.nextInt();
        }
        System.out.println("enter the number that you want to delete\n");
        x=s.nextInt();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                System.out.println("element Found\n");
                for(int p=i;i<n;i++)
                {
                    arr[p]=arr[p+1];
                }
                break;
            }
            else
            {
                System.out.println("Element not found\n");
            }
        }
        n=n-1;
        System.out.println("Printing elements\n");
        for(int i=0;i<n;i++)
        {
            System.out.println(arr[i]);
        }
    }
}