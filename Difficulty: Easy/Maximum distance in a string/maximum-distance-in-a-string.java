//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
	public static void main(String[] args) throws IOException
	{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while(t-->0)
        {
            String s = br.readLine().trim();
            Solution ob = new Solution();
            int res  = ob.maximum_distance(s);
            System.out.println(res);                        
        }
	}
}
// } Driver Code Ends


class Solution
{
    public int maximum_distance(String s)
    {
        // Code here
        List<Integer> freq = new ArrayList<>(Collections.nCopies(26,0));
        int n = s.length();
        int ans = -1;
        int j = 1;
        
        for(int i=1;i<n;i++){
            
            if(s.charAt(i) == ('a'+j)){
                freq.set(j,1);
                j++;
            }
        }
        
        for(int i=n-1;i>=0;i--) {
            
            if(freq.get(s.charAt(i)-'a')==1){
                ans = i+1;
                break;
            }
        }
        
        return ans;
    }
}


