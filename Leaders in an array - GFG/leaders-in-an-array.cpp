//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        // vector<int>v;
        // int flag = 0;
        // for(int i = 0;i<n-1; i++){
        //     flag = 0;
        //     for(int j = i+1; j<n; j++){
        //         if(a[i]<a[j]){
        //             flag = 1;
        //         }
        //     }
        //     if(flag==0)
        //     v.push_back(a[i]);
        // }
        // v.push_back(a[n-1]);
        // return v;
        
        
        vector<int>v;
        reverse(a,a+n);
        v.push_back(a[0]);
        int local_max = a[0];
        
        
        for(int i = 1; i<n; i++){
            if(local_max<=a[i]){
                local_max=a[i];
                v.push_back(a[i]);
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends