//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int find_mn(int i,int j,vector<vector<int>> &dp,string &s)
    {
        if(i>=j)
        return 0;
        
        if(dp[i][j]!=-1)
        return dp[i][j];
        
        int eq = INT_MAX;
        int not_eq1 = INT_MAX;
        int not_eq2 = INT_MAX;
        
        if(s[i]==s[j])
        eq = find_mn(i+1,j-1,dp,s);
        else
        {
            not_eq1 = 1 + find_mn(i+1,j,dp,s);
            not_eq2 = 1 + find_mn(i,j-1,dp,s);
        }
        
        return dp[i][j] = min(eq,min(not_eq1,not_eq2));
    }
  
    int countMin(string str)
    {
        //complete the function here
        int n = str.size();
        vector<vector<int>> dp(n,vector<int> (n,-1));
        
        int ans = find_mn(0,n-1,dp,str);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends