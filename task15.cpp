#include<iostream>
using namespace std;
float calculateprice(float money, float timemachineyear);
main()
 {
    float money, timemachineyear, finalresult;
    cout<< "Enter inherited money: ";
    cin>>money;
    cout<< "Enter the year until which you want to live: ";
    cin>>timemachineyear;
    finalresult = calculateprice(money, timemachineyear);
    if(finalresult > 0)
     {
       cout<< "Yes! he will have a carefree life and will have " <<finalresult <<" dollars left "; 
     }
    else 
     {
           finalresult = -finalresult;
           cout<< "He will need  " <<finalresult << "  dollars to survive ";
     }


 }
float calculateprice(float money, float timemachineyear)
 {
    int age = 17;
    int price = money;
    for(int year = 1800 ; year <= timemachineyear ; year = year + 1)
     {
        age = age + 1;
        if(year % 2 == 0)
         {
          
            price = price - 12000;
         }
        if(year % 2 != 0)
         {
            price = price - (12000 +(50 * age));
         }
     }
     return price;

 }



