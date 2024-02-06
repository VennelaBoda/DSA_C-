vector<int> getSecondOrderElements(int n, vector<int> a) {

    vector<int> ans;

    int largest=a[0];

    int smallest=a[0];

    int slargest=INT_MIN;

    int ssmallest=INT_MAX;

    for(int i=0;i<n;i++){

        if(a[i]>largest){

            slargest=largest;

            largest=a[i];

        }

        else if(a[i] < largest && a[i] >slargest ){

            slargest=a[i];

        }

        if(a[i]<smallest){

            ssmallest=smallest;

            smallest=a[i];

        }

        else if(a[i] > smallest && a[i] < ssmallest){

            ssmallest=a[i];

        }

    }

        ans={slargest,ssmallest};

        return ans;
    
 
    
}

