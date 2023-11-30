#include<iostream>
using namespace std;

int main() {
    
    int d,evensum = 0,oddsum = 0;
	cin >> d;

    while(d!=0 ){

        d%10;
        if(d%2==0){

            evensum=evensum+d%10;
        }
        else{
            oddsum=oddsum+d%10;
        }
        d/=10;
    }
	
    cout<<evensum<<" "<<oddsum<<endl;

    return 0;
}

