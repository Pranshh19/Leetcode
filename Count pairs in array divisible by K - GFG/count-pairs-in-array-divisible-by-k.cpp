//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int time[], int n, int K)
    {
        long long count=0;
        vector<int>v(K,0);
        for(int i=0;i<n;i++)
        {
            int a=time[i]%K;
            if(a==0)
                count+=v[0];
            else
                count+=v[K-a];
            v[a]++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}

// } Driver Code Ends