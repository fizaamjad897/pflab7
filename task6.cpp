#include<iostream>
using namespace std;
int frequencychecker(int usernumber, int digit);
main()
 {
    int usernumber,  digit, frequency;
    cout<< "Enter number: ";
    cin>>usernumber;
    cout<< "Enter digit: ";
    cin>>digit;
    frequency = frequencychecker(usernumber, digit);
    cout<<"Number of digits: " <<frequency;

 }
 int frequencychecker(int usernumber, int digit)
  {
    int calcfrequency=0;
    for(int quotient = usernumber ; quotient != 0 ; quotient = quotient/10)
     {
        int rem = quotient % 10;
        if(rem == digit)
         {
            calcfrequency++;
         }
     }
    return calcfrequency;
     
        
     
  }
