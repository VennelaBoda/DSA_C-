
#include <bits/stdc++.h> 
long long int reverseNumber(long long int n)
{
	long long int revNum=0;
	
	while(n!=0){
		int num=n%10;
		revNum=(revNum*10)+num;
		n=n/10;
	}
	return revNum;
}

