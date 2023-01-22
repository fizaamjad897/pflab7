#include<iostream>
using namespace std;
int totaldigits(int number);
main()
 {
    int number, finaldigits;
    cout<<"Enter a number ";
    cin>>number;
    finaldigits = totaldigits(number);
    cout<<finaldigits;
 }
 int totaldigits(int number)
  {
    int digit = 1;
    for(int quotient= number / 10 ; quotient != 0 ; quotient= quotient / 10 )
     {
          digit = digit + 1;
     }   
    return digit;                                                            
 }
  

    