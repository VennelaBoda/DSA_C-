bool palindrome(int i,int n,string& str){

    //base case
    if(i>=n/2){

        return true;
    }

    if(str[i]!=str[n-i-1]){

        return false;
    }

    //recursive
    return palindrome(i+1,n,str);
    
}

bool isPalindrome(string& str) {
    
    return palindrome(0,str.length(),str);
}

