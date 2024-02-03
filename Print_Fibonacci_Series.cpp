vector<int> generateFibonacciNumbers(int n) {

    //base case
    if (n == 0) {

        return {};

    } 
    else if (n == 1) {

        return {0};

    }

    vector<int> fib = {0, 1};

    for (int i = 2; i < n; i++) {

        fib.push_back(fib[i - 1] + fib[i - 2]);

    }

    return fib;

}

