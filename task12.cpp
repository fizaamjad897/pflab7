#include<iostream>
using namespace std;
int calchcsf(int number1, int number2, int highernumber);
int calclcm(int number1, int number2, int hcf);
main()
 {
    int number1, number2, hcf, lcm;
    cout<< "Enter the first number ";
    cin>>number1;
    cout<< "Enter second number ";
    cin>>number2;
    int highernumber;
    if(number1>number2)
     {
        highernumber = number1;    
     }
    else 
     {
        highernumber = number2;
     }
    hcf = calchcsf(number1, number2, highernumber);
    lcm = calclcm(number1, number2, hcf);
    cout<< "HCF of two numbers is: " <<hcf <<endl;
    cout<< "LCM of two numbers is: " <<lcm;
 }
 int calchcsf(int number1, int number2, int highernumber)
  {
    int answer;
     for(int hcf = 1; hcf <= highernumber; hcf = hcf + 1)
       {
        if(number1 % hcf == 0 && number2 % hcf == 0)
         {
           
            answer = hcf;
         }
       }
    return answer;
  }
int calclcm(int number1, int number2, int hcf)
 {
    int calculatedlcm;
    if(hcf != 0)
     {
        calculatedlcm= (number1 * number2) / hcf;
     }
    return calculatedlcm;
 }
 



