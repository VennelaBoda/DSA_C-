bool checkArmstrong(int n){
	
    int original = n;
    int sum = 0;
    int temp = n;

    while (temp != 0)
    {
        sum++;
        temp = temp / 10;
    }

    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit,sum);
        n /= 10;
    }
    return (sumofpower == original);

}

