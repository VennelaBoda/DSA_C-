/*
	The function is called with the parameters:

    quickSort(input, 0, size - 1);

*/

 int partitionArray(int input[], int start, int end) {

    int p=input[start];

    int i=start;

    int j=end;

    while(i<j){

    	while(p>=input[i] && i<=end-1){

		i++;
	}

    	while(p<input[j] && j>=start+1){

		j--;
	}

    	if(i<j){

		swap(input[i],input[j]);
	}

   }

   swap(input[start],input[j]);

	return j;
}

void quickSort(int input[], int start, int end) {

    if(start<end){

        int partition=partitionArray(input,start,end);

        quickSort(input,start,partition-1);

        quickSort(input,partition+1,end);
    }

}
