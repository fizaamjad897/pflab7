#include<iostream>
using namespace std;
void naturalnumbers();
main()
 {
    naturalnumbers();
    return 0;
 }
void naturalnumbers() 
 {
    int sum = 0;
    for(int num = 1; num<=5; num = num +1)
     {
        sum = sum + num;
     }
     cout<<sum;
 }
