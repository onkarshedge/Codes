#include <bits/stdc++.h>

using namespace std;

int lps(string s){
    int n = s.length();
    int i,j,l;
    int Dp[n][n];

   for (i = 0; i < n; i++)
      Dp[i][i] = 1;

    for (l=2; l<=n; l++)
    {
        for (i=0; i<n-l+1; i++)
        {
            j = i+l-1;
            if (s[i] == s[j] && l == 2)
               Dp[i][j] = 2;
            else if (s[i] == s[j])
               Dp[i][j] = Dp[i+1][j-1] + 2;
            else
               Dp[i][j] = max(Dp[i][j-1], Dp[i+1][j]);
        }
    }

    return Dp[0][n-1];

}


int main()
{
    int t;string a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int l1=lps(a),l2=lps(b);
        if(l1%2==1 && l2%2==1)l1--;
        cout<<l1+l2<<endl;
    }
    return 0;
}
