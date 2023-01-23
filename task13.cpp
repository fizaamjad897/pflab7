#include<iostream>
using namespace std;
void printpercentage(int number);
main()
 {
    int number;
    cout<< "Enter the number of integers: ";
    cin>>number;
    printpercentage(number);
 }
void printpercentage(int number)
 {
    float n = number;
    float n1=0, n2=0, n3=0, n4=0, n5=0;
    float p1= 0.00, p2= 0.00, p3=0.000, p4=0.00, p5=0.00;
    for(int c = 1 ; c <= number ; c++)
      {
        int usernum;
        cout<< "Enter a number: ";
        cin>>usernum;
        if(usernum < 200)
         {
            n1++;
            p1= (n1 * 100) / n;
         }
        if(usernum >= 200 && usernum <= 399)
         {
            n2++;
            p2 = (n2 * 100)/ n;
         }
        if(usernum >= 400 && usernum <= 599)
         {
            n3++;
            p3 = (n3 * 100) / n;
         }
        if(usernum >= 600 && usernum <= 799)
         {
            n4++;
            p4 = (n4 * 100) / n;
         }
        if(usernum>= 800)
         {
            n5++;
            p5 = (n5 * 100) / n;
         }
      }
      cout<<p1  <<"%" <<endl;
      cout<<p2  <<"%" <<endl;
      cout<<p3  <<"%"<<endl;
      cout<<p4  <<"%"<<endl;
      cout<<p5  <<"%"<<endl;
 }


