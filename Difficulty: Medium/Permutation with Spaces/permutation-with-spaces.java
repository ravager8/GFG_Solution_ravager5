//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {

        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S = read.readLine().trim();
            Solution ob = new Solution();
            ArrayList<String> ans = new ArrayList<String>();
            ans = ob.permutation(S);

            for (int i = 0; i < ans.size(); i++) {
                System.out.print("(" + ans.get(i) + ")");
            }
            System.out.println();
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    
    public void allpermutation(int i,int n,char prev,String s,String temp,ArrayList<String> result){
        
        if(i>=n){
            result.add(temp);
            return;
        }
        
        if(prev!=' '){
            
            allpermutation(i,n,' ',s,temp+' ',result);
            allpermutation(i+1,n,s.charAt(i),s,temp+s.charAt(i),result);
        }
        else{
            allpermutation(i+1,n,s.charAt(i),s,temp+s.charAt(i),result);
        }
        
        return;
    }

    ArrayList<String> permutation(String s) {
        // Code Here
        ArrayList<String> result = new ArrayList<>();
        String temp = "";
        temp += s.charAt(0);
        char prev = s.charAt(0);
        int n = s.length();
        
        allpermutation(1,n,prev,s,temp,result);
        
        Collections.sort(result);
        
        return result;
    }
}