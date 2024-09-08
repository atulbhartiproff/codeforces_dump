// You are using Java
import java.util.*;

class hmm
{
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        int N;
        char[][] arr;
        int[] final_arr;
        for(;T>0;T--)
        {
            int k=0;
            N=sc.nextInt();
            arr=new char[N][4];
            final_arr=new int[N];
            for(int i=0;i<N;i++)
            {
                String temp=sc.next();
                for(int j=0;j<4;j++)
                {
                    arr[i][j]=temp.charAt(j);
                    if(arr[i][j]=='#') final_arr[k++]=j;
                }
            }

            for(;k>=0;k--) System.out.println(final_arr[k]+" ");
        }
    }
}