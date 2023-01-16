#include <iostream>
using namespace std;

float income(int rows,int columns,string type);
main()
{
  int rows;
  int columns;
  string type;
  float result;

  cout<<"enter rows: ";
  cin>>rows;

  cout<<"enter columns: ";
  cin>>columns;

  cout<<"enter type of screening: ";
  cin>>type;


 result = income(rows,columns,type);
 cout<<result;




}


float income(int rows,int columns,string type)
{
   float amount;
  if(type=="premiere")
  {
    amount = rows*columns*12;
    return amount;
   


  }


 else if(type=="normal")
  {
    amount = rows*columns*7.50;
    return amount;
   


  }


 else if(type=="discount")
  {
    amount = rows*columns*5;
    return amount;
   


  }

  return 0;



}