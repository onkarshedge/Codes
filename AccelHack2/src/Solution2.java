import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

/**
 * Created by onkar on 5/3/16.
 */
public class Solution2 {
    static long mod = 1000000007;
    static long fact[]=new long[1000004];


    public static void factorial(){
        fact[0]=fact[1]=1;
        for(int i=2;i<=1000000;i++){
            fact[i]=(fact[i-1]%mod*(i%mod))%mod;
        }
    }

    public static void main(String[] args) throws IOException {
        factorial();
        // Scanner sc=new Scanner(System.in);
        BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(buff.readLine());
        while (t > 0) {
            int n =Integer.parseInt(buff.readLine());
            int a = n / 2;
            System.out.println(fact[a]+" "+fact[n]);
            long v=((fact[a]%mod)*(fact[n]%mod))%mod;
            System.out.println(v);
            t--;
        }


    }
}
