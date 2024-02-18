#include <bits/stdc++.h> 
vector<long long int> kthRow(int k) 
{
	vector<long long int> ans;

	long long int temp=1;

		ans.push_back(1);
		
	for(int i=1;i<k;i++){

		temp=temp*(k-i);

		temp=temp/i;

		ans.push_back(temp);

	}

	return ans;
} 
