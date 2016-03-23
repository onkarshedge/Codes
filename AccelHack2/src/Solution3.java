import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * Created by onkar on 5/3/16.
 */
public class Solution3 {

    public static void main(String[] args) throws IOException {
        int n;
        int[] C;
        int[] B;
        BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(buff.readLine());
        String[] first = buff.readLine().split(" ");
        String[] second = buff.readLine().split(" ");
        C = new int[n];
        B = new int[n];
        for (int i = 0; i < n; i++) {
            C[i] = Integer.parseInt(first[i]);
            B[i] = Integer.parseInt(second[i]);
        }
        int dp[] = new int[n];
        dp[0] = C[0] >= B[0] ? 1 : 0;
        long cal = C[0], bur = B[0];
        for (int i = 1; i < n; i++) {
            if (C[i]>=B[i])dp[i]=1;
            cal += C[i];
            bur += B[i];
            if (cal >= bur)
                dp[i]+= dp[i - 1];
        }

        long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += dp[i];
        }
        System.out.println(ans);

    }
}
