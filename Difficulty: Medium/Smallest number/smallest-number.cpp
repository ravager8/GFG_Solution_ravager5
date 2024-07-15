//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) 
    {
        // code here
        string ans = "";
        
        if(d*9<s)
        return "-1";
        
        s = s-1;
        
        if(d==1)
        return to_string(s+1);
        
        for(int i=0;i<d;i++)
        {
            if(i==d-1)
            {
                ans = to_string(s+1) + ans;
            }
            else if(s>=9)
            {
                ans = '9' + ans;
                s -= 9;
            }
            else
            {
                ans = to_string(s) + ans;
                s -= s;
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
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends