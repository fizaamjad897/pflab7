#include<iostream>
using namespace std;
float calculatemoney(int age, float w_mprice, float toysprice);
main()
 {
    int age;
    float w_mprice, toysprice, calculatedprice;
    cout<< "Enter Lily's age: ";
    cin>>age;
    cout<< "Enter price of washing machine: ";
    cin>>w_mprice;
    cout<< "Enter price of lily's each toy: ";
    cin>>toysprice;
    calculatedprice = calculatemoney(age, w_mprice, toysprice);
    cout<<calculatedprice <<"$";
 }
 float calculatemoney(int age, float w_mprice, float toysprice)
 {
    int even = 0;
    int odd = 1;
    int dollars = 0;
    int toysamount = 0;
    float totalamount;
    for(int num = 2 ; num <= age ; num = num+1)
     {
        if(num % 2 == 0)
         {
           even = even + 1;  
           for(int c=1 ; c<=even; c= c+1 )
            {
               dollars = (dollars + 10);
            }                 
         }
        if(num % 2 == 1)
        {
            odd = odd + 1;
           for(int c = 1 ; c<=odd; c= c+1)
            {
               toysamount = odd * toysprice;
            }
        }
     }
    dollars = dollars - even;
    totalamount = dollars + toysamount;
    if(totalamount > w_mprice)
     {
        int remaining;
        cout<< "Yes!" <<endl;
        remaining = totalamount - w_mprice;
        return remaining;
     }  
    if(w_mprice > totalamount)
      {
        int remaining;
        cout<< "No:( " <<endl;
        remaining = w_mprice - totalamount;
        return remaining;
      }  
    return 0.0;     
 }
