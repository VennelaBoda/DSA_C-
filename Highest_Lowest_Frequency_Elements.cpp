vector<int> getFrequencies(vector<int>& v) {

    //pre-compute
    
    map<int,int>map;

    for(int i=0;i<v.size();i++){

        map[v[i]]++;

    }
   
    //iterating in the map

    int minFreq=v.size(),maxFreq=0;

    int minele=0, maxele=0;

    for(auto it:map){

        int count=it.second;

        int ele = it.first;

 
        if(count>maxFreq){

            maxele=ele;

            maxFreq=count;

        }

        if(count<minFreq){

            minele=ele;

            minFreq=count;

        }

    }

    vector<int>freq;

    freq.push_back(maxele);

    freq.push_back(minele);

    return freq;
}
