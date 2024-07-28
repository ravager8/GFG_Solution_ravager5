//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string str) 
    {
        // Your code goes here
        vector<int> freq(26,0);
        int n = str.size();
        string ans = "";
        
        for(int i=0;i<n;i++)
        {
            freq[str[i]-'a']++;
        }
        
        for(auto i:str)
        {
            if(!freq[i-'a'])
            continue;
            else
            {
                ans += i;
                freq[i-'a'] = 0;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends