void symmetry(int n) {

    int star=n;//for printing stars

    int gap=0;//for printing space

        for(int i=0;i<n;i++){

            for(int j=0;j<star;j++){

                cout << "* ";

            }

            for(int j=0;j<gap;j++){

               cout << " ";

            }

            for(int j=0;j<star;j++){
                
                cout << "* ";

            }

            cout << endl;

            gap+=2;

            star--;

 

        }

 

        int starr=1; //for printing stars

        int gapr=(n*2)-2; //for printing space

        for(int i=0;i<n;i++){

            for(int j=0;j<starr;j++){

               cout << "* ";

            }

            for(int j=0;j<gapr;j++){

                cout << " ";

            }

            for(int j=0;j<starr;j++){

                cout << "* ";

            }

            cout << endl;

            starr++;

            gapr-=2;

        }

}
