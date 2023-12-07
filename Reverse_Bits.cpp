long reverseBits(long n) {
    int arr[32] = {0};
    int index = 31;

    while(n != 0){
        arr[index] = n%2;
        n = n / 2;
        index--;
    }

    int temp;
    for(int i = 0;i < 16;i++){
        temp = arr[i];
        arr[i] = arr[31-i];
        arr[31-i] = temp;
    }

    unsigned int rev=0;

    for(int i = 31,j = 1; i >= 0; i--, j *= 2){
        rev = rev + j * arr[i];
    }

    return rev;

}
