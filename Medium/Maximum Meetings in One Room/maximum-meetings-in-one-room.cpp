//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> maxMeetings(int n,vector<int> &S,vector<int> &F)
    {
        // vector<pair<int,pair<char,int>>> v;
        
        // for(int i=0;i<n;i++)
        // {
        //     v.push_back({S[i],{'a',i+1}});
        // }
        
        // for(int i=0;i<n;i++)
        // {
        //     v.push_back({F[i],{'f',i+1}});
        // }
        
        // sort(v.begin(),v.end());
        
        // int start = 0;
        // // int temp = -1;
        // int end = 0;
        // // int ans = 0;
        // vector<int> ans;
        
        // for(auto i:v)
        // {
        //     if(i.second.first=='a')
        //     {
        //         start = 1;
        //         // temp = i.second.second;
        //     }
        //     else
        //     {
        //         if(start==1)
        //         ans.push_back(i.second.second);
                
        //         start = 0;
        //     }
        // }
        
        // return ans;
        
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++)
        {
            ans.push_back({F[i],S[i],i+1});
        }
        
        sort(ans.begin(),ans.end());
        
        vector<int> result;
        int prev = 0;
        
        result.push_back(ans[0][2]);
        
        for(int i=1;i<n;i++)
        {
            if(ans[i][1]>ans[prev][0])
            {
                prev = i;
                result.push_back(ans[i][2]);
            }
        }
        
        sort(result.begin(),result.end());
        return result;
    }
};

































//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends