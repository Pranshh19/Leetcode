//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthStair(int n){
		    //  Code here
		    if(n==1)return 1;
		    if(n%2==0){
		        return n/2+1;
		    }
		    int count = 0;
		    
		    count+=n/2;
		    
		    count = count + (n-count*2);
		    
		    return count;
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends