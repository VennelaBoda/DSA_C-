void nStarTriangle(int n) {

    for (int i = 0; i < n; i++)
    {
        //space
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
       
        // starts
        for(int j=0;j< 2*n-(2*i+1);j++){
            
            cout << "*";
        }
        
        //space
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        
        cout << endl;
    }
}


