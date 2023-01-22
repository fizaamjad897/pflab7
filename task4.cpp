#include<iostream>
using namespace std;
void fabonacci(int usernum);
 main()
  {
    int usernum;
    cout<< "Enter numbers of fabonacci series you want to print: ";
    cin>>usernum;
    fabonacci(usernum);
  } 
  void fabonacci(int usernum)
    {
      int n1 = 0; 
      int n2 = 1;
      cout<<n1 <<"," <<n2;
      int next;
      for(int x = 0 ; x <= usernum ; x++)
       {
        next = n1 + n2;
        cout<<"," <<next;
        n1 = n2;
        n2 = next;
       }
    
    }