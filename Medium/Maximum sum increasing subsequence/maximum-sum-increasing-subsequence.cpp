//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
// 	int f(int i,int prev,int arr[],int n,vector<vector<int>> &dp)
// 	{
// 	    if(i==n)
// 	    return 0;
	    
// 	    if(dp[i][prev+1]!=-1)
// 	    return dp[i][prev+1];
	    
// 	    int take = 0;
	    
// 	    if(prev==-1)
// 	    take = f(i+1,i,arr,n,dp) + arr[i];
// 	    else if(arr[i]>arr[prev])
// 	    take = f(i+1,i,arr,n,dp) + arr[i];
	    
// 	    int not_take = f(i+1,prev,arr,n,dp);
	    
// 	    return dp[i][prev+1] = max(take,not_take);
// 	}
	
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	   // vector<vector<int>> dp(n,vector<int>(n+1,-1));
	   // return f(0,-1,arr,n,dp);
	   
	   vector<int> dp(n,0);
	   int ans = arr[0];
	   
	   for(int i=0;i<n;i++)
	   {
	       dp[i] = arr[i];
	       //cout<<dp[i]<<endl;
	   }
	   
	   for(int i=1;i<n;i++)
	   {
	       for(int j=0;j<i;j++)
	       {
	           if(arr[j]<arr[i])
	           {
	               dp[i] = max(dp[i],arr[i]+dp[j]);
	           }
	           ans = max(ans,dp[i]);
	       }
	   }
	   
	   return ans;
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends