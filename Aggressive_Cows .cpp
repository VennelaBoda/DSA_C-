bool canWePlace(vector<int> &stalls,int dist, int cows){

    int cntCows = 1, last = stalls[0];

    for(int i = 0; i<= stalls.size() - 1; i++){

        if(stalls[i] - last >= dist){

            cntCows++;

            last = stalls[i];

        }
    }

    if(cntCows >= cows) return true;

    else return false;

}

int aggressiveCows(vector<int> &stalls, int k)
{

    sort(stalls.begin(),stalls.end());

    int low = 1, high = stalls[stalls.size()-1] - stalls[0];

    while(low <= high){

        int mid = (low + high) / 2;

        if(canWePlace(stalls,mid,k) == true){

            low = mid + 1;

        }

        else high = mid - 1;

    }

    return high;
    
}
