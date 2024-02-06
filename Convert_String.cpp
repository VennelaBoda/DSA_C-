#include <bits/stdc++.h> 
string convertString(string str) 
{
	if(str.size()>0){

    	for(int i=0;i<str.size();i++){

            if(i==0){

                str[i]=toupper(str[i]);

            }

            else if( str[i]==' '){

                str[i+1]=toupper(str[i+1]);

            }

        }

    }

    return str;
}
