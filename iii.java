import java.util.Scanner;
import java.util.Arrays;
public class iii {
    public static void main(String[] args) {
        int n=0;
        int flag=0;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int m=0;
        m=sc.nextInt();

        int [] arr =new int [n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        Arrays.sort(arr);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==m){
                System.out.println(i+1);
                flag=1;
            }


        }
if(flag==0)
    System.out.println(-1);
    }
}
