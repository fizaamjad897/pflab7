#include<iostream>
using namespace std;
void printtable(int usernum);
main()
 {
   int usernum, counter;
   cout<< "Enter a number: ";
   cin>>usernum;
   printtable(usernum); 
 }
void printtable(int usernum)
 {
    for(int c= 1 ; c <= 10 ; c = c + 1)
     {
        int resultedvalue;
        resultedvalue = usernum * c;
        cout<<usernum << " * " <<c << " = " <<resultedvalue <<endl;
     }
 }
