#include<iostream>
using namespace std;
int calculatesum(int number);
main()
 {
    int number=1;
    int sum;
    sum = calculatesum(number);
    cout<<"The sum of first 100 natural numbers is " <<sum;
 }
 int calculatesum(int number)
  {
    int finalsum=0;
    while(number<=100)
     {
        finalsum = number + finalsum;
        number = number + 1;
     }
     return finalsum; 
  }
