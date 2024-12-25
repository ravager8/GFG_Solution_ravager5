//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        
        int n = mat.size();
        int m = mat[0].size();
        set<int> sr;
        set<int> sc;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(mat[i][j]!=0){
                    continue;
                } else{
                    
                    sr.insert(i);
                    sc.insert(j);
                }
            }
        }
        
        for(auto k:sr){
            
            for(int j=0;j<m;j++){
                mat[k][j] = 0;
            }
        }
        
        for(auto k:sc){
            
            for(int i=0;i<n;i++){
                mat[i][k] = 0;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends