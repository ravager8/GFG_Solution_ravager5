//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int alternatingMaxLength(vector<int>& arr) 
    {
        // Code here
        
        int n = arr.size();
        int prev = arr[0];
        bool small = false;
        int ans1 = 1;
        int ans2 = 1;
        
        for(int i=1;i<n;i++)
        {
            if(small)
            {
                if(arr[i]<prev)
                {
                    ans1++;
                    small = false;
                }
            }
            else
            {
                if(arr[i]>prev)
                {
                    small = true;
                    ans1++;
                }
                
            }
            
            prev = arr[i];
        }
        
        small = true;
        prev = arr[0];
        
        for(int i=1;i<n;i++)
        {
            if(small)
            {
                if(arr[i]<prev)
                {
                    ans2++;
                    small = false;
                }
            }
            else
            {
                if(arr[i]>prev)
                {
                    small = true;
                    ans2++;
                }
                
            }
            
            prev = arr[i];
        }
        
        return max(ans1,ans2);
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }
        Solution obj;
        int ans = obj.alternatingMaxLength(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends