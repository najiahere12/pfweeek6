#include <iostream>
using namespace std;

float discount(float amount,string day,string month);
main()
{

float amount;
float result;
cout<<"enter amount: ";
cin>>amount;

result = discount();


}

float discount(float amount,string day,string month)
{
  float payable = amount;
 
 if(day=="sunday" && month=="october")
 {

  payable =  amount - ((amount*10)/100);
  return payable;



 }

if(day=="sunday" && month!="october")
 {

  payable =  amount - ((amount*5)/100);
  return payable;



 }
if(day!="sunday" && month!="october")
 {

  
  return payable;



 }


return payable;



}