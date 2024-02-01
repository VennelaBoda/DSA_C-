void revarray(vector<int> &nums,int l,int r ){

    //base case
    if(l>r)
        return;

    swap(nums[l],nums[r]);

    //recursion
    revarray(nums,l+1,r-1);
}

vector<int> reverseArray(int n, vector<int> &nums){


    revarray(nums,0,n-1);
    return nums;

}

