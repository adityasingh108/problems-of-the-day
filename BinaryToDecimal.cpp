#include<bits/stdc++.h>
using namespace std; 
 
// Function to convert binary to decimal
int binaryToDecimal(string str){
    int c = 0;
		    int ans = 0;
		    for(int i=0;i<str.size();i++){
		        ans = ans*2;
		        ans+=str[i]-'0';
		    }
		    return ans;
}

int main()
{
    string str1 = "10001000";
    cout<<binaryToDecimal(str1)<<endl;
    return 0;
}