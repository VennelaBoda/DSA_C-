long long factorial(long long i){
    
    //base case
    if(i==1){

        return 1;
    }

    return i*factorial(i-1); 
}

void checkFunction(long long n,long long i,vector<long long>&ans){

    long long value=factorial(i);

    if(value>n){

        return;
    }

    ans.push_back(value);

    checkFunction(n,i+1,ans);

}

vector<long long> factorialNumbers(long long n) {

    // Write Your Code Here

    vector<long long>ans;

    long long i=1;

    checkFunction(n,i,ans);

    return ans;

}
