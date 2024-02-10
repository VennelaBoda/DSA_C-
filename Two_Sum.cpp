string read(int n, vector<int> book, int target)
{
    int left = 0, right = n-1;

    sort(book.begin(), book.end());

    while(left < right )

    {

        int sum = book[left] + book[right];

        if (sum == target) {

            return "YES";

        } 

        else if(sum < target )

            left++; 

        else right--;

    }

    return "NO";
    
}


/*if they asked for return index:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i];
            int moreNeeded=target-num;
            if(mpp.find(moreNeeded)!=mpp.end()){
                return{mpp[moreNeeded],i};
            }
            mpp[num]=i;
        }
        return {-1,-1};
    }
};*/
