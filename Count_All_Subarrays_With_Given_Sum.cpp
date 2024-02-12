int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {

    int cnt = 0;

    int left = 0, right = 0;

    int sum = arr[0];

    int n = arr.size();

    while (right < n) {

        while (left <= right && sum > k) {

            sum -= arr[left];

            left++;

        }


        if (sum == k) {

            cnt++;

        }

        right++;

        if (right < n) {

            sum += arr[right];

        }

    }

    return cnt;

}
