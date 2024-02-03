#include<map>
vector<int> countFrequency(int n, int x, vector<int> &nums){

    map<int,int>mpp;

    vector<int>ans(n);

    for(int i=0;i<n;i++){
   
        mpp[nums[i]] ++;
    }
    
    for(int i =0;i<n;i++){
    
        ans[i] = mpp[i+1];
    }

    return ans;
}

