#include<iostream>
using namespace std;
int positivenumber(int usernum);
main()
 {
    int usernum, num;
    cout<< "Enter a number: ";
    cin>>usernum;
    num = positivenumber(usernum);
 }
 int positivenumber(int usernum)
  {
    while(usernum <= 0)
     {
        cout<< "Error! Enter number greater than 0 " <<endl;
        cout<<"Enter the number again ";
        cin>>usernum;
     }
     return usernum;
  }
