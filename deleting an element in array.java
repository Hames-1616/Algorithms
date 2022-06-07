import java.util.Scanner;
public class Delete
{
    public static void main(String a[])
    {
        int x;
        int[] arr = new int[5];
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the elements");
        for(int i=0;i<5;i++)
        {
            arr[i]=s.nextInt();
        }
        System.out.println("Enter the element that you want to delete");
        x=s.nextInt();
        for(int i=0;i<5;i++)
        {
            if(arr[i]==x)
            {
                System.out.println("Element found at place "+i);
                arr[i]=-1;
                break;
            }
            else
            {
                System.out.println("Element is not present at "+i);
            }
        }
        for(int i=0;i<5;i++)
        {
            if(arr[i]!=-1)
            {
                System.out.println(arr[i]);
            }
        }

    }
}