#include <bits/stdc++.h>

long long calTotalHours(vector<int> &v, int mid) {

    long long t = 0;

    for(auto it:v)

    {

        t=ceil((double)it/(double)mid) + t;

    }

    return t;

}

int minimumRateToEatBananas(vector<int> v, int h) {

    int low = 1, high = *max_element(v.begin(),v.end());

    int ans=1;

    while (low <= high) {

        int mid = (low + high) / 2;

        long long totalhrs = calTotalHours(v, mid);

        if (totalhrs <= (long long)h) {

            ans=mid;

            high = mid - 1;

        }

        else {

            low = mid + 1;

        }

    }

    return ans;

}
