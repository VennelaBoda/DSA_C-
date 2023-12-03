void nStarTriangle(int n) {
   
    
      for(int i=1;i<=2*n-1;i++){
          
          // stars would be equal to the row no. uptill first half 
          int stars = i;
          
          // for the second half of the rotated triangle.
          if(i>n) stars = 2*n-i;
          
          for(int j=1;j<=stars;j++){
              cout << "*";
          }
          
          
          cout << endl;
      }
}
