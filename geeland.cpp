/*
    problem: In Geekland there is a grid of coins of size N x N.
    You have to find the maximum sum of coins in any sub-grid of size K x K.
*/

#include <bits/stdc++.h>
using namespace std;

int Maximum_Sum(int mat[][], int n, int k)
{

    int mx = Integer.MIN_VALUE;
    int dp[][] = new int[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= n; j++)
        {

            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else
            {
                dp[i][j] = mat[i - 1][j - 1] +
                           dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
            }
            if (i >= k && j >= k)
            {
                mx = Math.max(dp[i][j] - (dp[i][j - k] +
                                          dp[i - k][j] - dp[i - k][j - k]),
                              mx);
            }
        }
    }
    return mx;
}