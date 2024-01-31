void rec(int i, int n, vector<int>& ans) {

    //base case
    if(i < 1){ 
        return;
    }

    ans.push_back(i);
    
    //recusive step
    rec(i - 1, n, ans); 
}

vector<int> printNos(int x) {
    
    vector<int> ans;
    rec(x, x, ans);
    return ans;
}
 
