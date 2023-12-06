int countDigits(int n){

	int x=n,count=0;

	while(x>0){

		int rem=x%10;
		if(rem!=0){
			if(n%rem==0)
			count++;
		}
		x/=10;

	}
	return count;
		
}
