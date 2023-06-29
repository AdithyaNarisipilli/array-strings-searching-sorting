//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        sort(arr,arr+N);
        int a=arr[0].size();
        int b=arr[N-1].size();
        int i=0,j=0;
        string s="";
        while(i<a&&j<b){
            if(arr[0][i]==arr[N-1][j]){
                s+=arr[0][i];
                i++;
                j++;
            }
            else
            break;
        }
        if(s==""){
            return "-1";
        }
        return s;
       
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends