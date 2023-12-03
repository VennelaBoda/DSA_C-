void nBinaryTriangle(int n) {
   
      // First row 
      int start = 1;
      
      // Outer loop 
      for(int i=0;i<n;i++){
          
          // if the row index is even then start=1
          if(i%2 == 0) start = 1;
          
          // if odd
          else start = 0;
          
          // alternatively printing 1's and 0's 
          for(int j=0;j<=i;j++){
              cout << start;
              start = 1-start;
          }

          cout<<endl;
      }
}
