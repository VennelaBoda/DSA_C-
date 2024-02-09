#include<vector>

int getSingleElement(vector<int> &arr){

	int x;

    for(int i=0;i<arr.size();i=i+2){

        if(arr[i]!=arr[i+1]){

            x=arr[i];

            break;

        }

    }

    return x;
}
/*#include<vector>

int getSingleElement(vector<int> &arr){

	int n = arr.size();

  	int ans = 0;

 	for (int i = 0; i < n; i++) {

 		ans = ans ^ arr[i];

  	}

 	return ans;
}*/
