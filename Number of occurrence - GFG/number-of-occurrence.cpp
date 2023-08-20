//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
    bool isPossible(int arr[], int n, int x){
        
        int start = 0;
        int end = n-1;
        int mid = start+(end-start)/2;
        
        while(start<=end){
            if(arr[mid]==x){
                return true;
            }
            else if(arr[mid]>x){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start+(end-start)/2;
        }
        
        return false;
    }
	
	int upper(int arr[], int n, int x){
        int start = 0;
        int end = n-1;
        int mid = start+(end-start)/2;
        int ans = 0;
        while(start<=end){
            if(arr[mid]==x){
                ans = mid;
                start = mid+1;
            }
            else if(arr[mid]>x){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
             mid = start+(end-start)/2;
        }
        
        return ans;
	}
	
	int lower(int arr[], int n, int x){
	    int start = 0;
        int end = n-1;
        int mid = start+(end-start)/2;
        int ans = 0;
        while(start<=end){
            if(arr[mid]==x){
                ans = mid;
                end = mid-1;
            }
            else if(arr[mid]>x){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
             mid = start+(end-start)/2;
        }
        
        return ans;
	}
		
	int count(int arr[], int n, int x) {
    
        //Step1=Check is element is present
        //Step2 Check upper Bound
        //Step3: Check Lower Bound
        
        
        if(isPossible(arr,n,x)){
            //Check UpperBound
            int ub = upper(arr,n,x);
            
            //check LoweBound
            int lb = lower(arr,n,x);
            
            return ub-lb+1;
        }	
        
        return 0;

	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends