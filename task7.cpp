#include<iostream>
using namespace std;
int digitsum(int number);
 main()
  {
    int number, result;
    cout<<"Enter a number : ";
    cin>>number;
    result = digitsum(number);
    cout<<result;
  }
  int digitsum(int number)
   {
    int digit = number % 10;
    for(int quotient = number / 10 ; quotient != 0 ; quotient = quotient/10)
     {
        digit= (quotient % 10) + digit;
     }
     return digit;
   }



