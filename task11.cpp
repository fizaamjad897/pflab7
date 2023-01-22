#include<iostream>
using namespace std;
void userseries(int number);
main()
 {
    int number, series;
    cout<< "Enter a number: ";
    cin>>number;
    userseries(number);
 }
 void userseries(int number)
  {
    for(int counter = 1 ; counter <= number ; counter = counter+1)
     {
        cout<<counter <<endl;
     }
  }

 
 
