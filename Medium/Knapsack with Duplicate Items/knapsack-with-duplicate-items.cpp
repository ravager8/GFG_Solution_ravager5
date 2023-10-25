//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    int f(int i,int n,int w,int val[],int wt[],vector<vector<int>> &dp)
    {
        if(i==n)
        return 0;
        
        if(dp[i][w]!=-1)
        return dp[i][w];
        
        int take = 0;
        
        if(wt[i]<=w)
        take = f(i,n,w-wt[i],val,wt,dp) + val[i];
        
        int not_take = f(i+1,n,w,val,wt,dp);
        
        return dp[i][w] =  max(take,not_take);
    }

    int knapSack(int n, int w, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(n,vector<int>(w+1,-1));
        return f(0,n,w,val,wt,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends