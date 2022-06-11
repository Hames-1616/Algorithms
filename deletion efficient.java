import java.util.Scanner;
public class Delete
{
    public static void main(String a[])
    {
        int x,n;
        System.out.println("enter the elements that you want to enter");
        Scanner s = new Scanner(System.in);
        n=s.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=s.nextInt();
        }
        System.out.println("enter the number that you want to delete");
        x=s.nextInt();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                System.out.println("element Found");
                for(i;i<n;i++)
                {
                    arr[i]=arr[i+1];
                }
                break;
            }
            else
            {
                System.out.println("Element not found");
            }
        }
        n=n-1;
        System.out.println("Printing elements%n");
        for(int i=0;i<n;i++)
        {

        }
    }
}