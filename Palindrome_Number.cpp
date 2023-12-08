bool palindrome(int n)
{
   int num = 0;
   int revNum = n;

   while (n > 0) {

      //Extract the last digit
      int digit = n % 10;

      //Appending last digit
      num = num * 10 + digit;

      // Shrinking n by discarding the last digit
      n = n / 10;
   }
   
   return num == revNum;
}

