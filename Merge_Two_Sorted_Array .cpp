vector < int > sortedArray(vector < int > a, vector < int > b) {

    int i=0;

    int j=0;

    int n1=a.size();

    int n2=b.size();

    vector<int>unionArr;

    while(i<n1 && j<n2){

        if(a[i]<=b[j]){

            if(unionArr.size()==0||unionArr.back()!=a[i]){

                unionArr.push_back(a[i]);
            }

            i++;

        }
        else{

            if(unionArr.size()==0||unionArr.back()!=b[j]){

                unionArr.push_back(b[j]);
            }

            j++;
        }
    }

    while(j<n2){

        if(unionArr.size()==0||unionArr.back()!=b[j]){

                unionArr.push_back(b[j]);
            }

            j++;
    }

    while(i<n1){

        if(unionArr.size()==0||unionArr.back()!=a[i]){

                unionArr.push_back(a[i]);
            }

            i++;
    }

    return unionArr;

    
}
