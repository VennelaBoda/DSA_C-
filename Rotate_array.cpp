vector<int> rotateArray(vector<int>arr, int k) {
    
    int n=arr.size();

    reverse(arr.begin(),arr.begin()+k);

    reverse(arr.begin()+k,arr.begin()+n);

    reverse(arr.begin(),arr.begin()+n);

    return arr;
    

}

