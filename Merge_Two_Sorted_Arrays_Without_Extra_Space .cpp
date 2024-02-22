#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){

    int n=a.size();

    int m=b.size();

    int l=n-1;

    int r=0;

    while(a[l]>b[r] && l!=0 && r!=m)

    {
		
	swap(a[l],b[r]);

        l--;

        r++;

    }

    sort(a.begin(),a.end());

    sort(b.begin(),b.end()); 
	
}
