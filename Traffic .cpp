int traffic(int n, int m, vector<int> vehicle) {

	int ans = 0, count = 0, j = 0;

	// Loop through the array 'vehicle' from index i = 0 to n - 1

        for (int i = 0; i < n; i++) {

	//to find the longest consecutive sequence with at most 'm' flipped 1s

      	while (j < n && count <= m) {

		// If the value at index 'j' is 0, increment the count

        	if (vehicle[j] == 0) {

            	count++;

            	if (count > m) {

                	count--;

                	break;

            	}

        	}

        	j++;

      	}

	// Update the answer with the maximum length of consecutive vehicles

      	ans = max(ans, j-i);

      	if (vehicle[i] == 0) {

          	count--;

      	}

    }

	return ans;
	
}

