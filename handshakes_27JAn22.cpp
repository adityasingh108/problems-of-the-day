#include<bits/stdc++.h>
using namespace std; 

/* Question: We have N persion setting on the round table Any persion ca do handshakes  with any other persion
  How many people can handshakes so THAT NO OF HANDSHAKES DONT CROSS EACH OTHER
  N would be even
*/ 



int count(int N){
     vector<int>dp(N+1,0);
     dp[0]= 1;
     for (int n = 2; n<=N;n+=2){
         for (int i = 0; i <= n-2; i+=2)
         {
             dp[n]+= dp[i]*dp[n-2-i];
         }
         
     }
    return dp[N]; 
}

int main(){
    int N = 8;
    cout<<count(N)<<endl;
}
