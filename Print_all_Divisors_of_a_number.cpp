vector<int> printDivisors(int n) {

    // Write your code here

    vector<int> arr;

    for(int i=1;i<=n;i++){

        if(n%i==0){

            arr.push_back(i);
        }
    }

    return arr;
}
