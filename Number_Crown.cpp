void numberCrown(int n) {

    int space=2*(n-1);
    
    for(int i=1;i<=n;i++){

        //for numbers
        for (int j = 1; j <= i; j++) {
            
            cout << j << " ";

        }

        //for space
        for (int j= n - i; j >= 1; j--) {
            
            cout << " ";
        
        }

        //for numbers
        for (int j = i; j >= 1; j--) {

            cout << j << " ";

        }

        cout << endl;
        
    }
     
}

