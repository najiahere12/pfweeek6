#include <iostream>
using namespace std;
float discount(float amount,string day ,string month);
main()
{
  float amount;
  float result;
  string day;
  string month;
  cout<<"enter amount: ";
  cin>>amount;
  cout<<"enter day: ";
  cin>>day;
cout<<"enter month: ";
  cin>>month;


  result=discount(amount,day,month);
  cout<<result;
}

float discount(float amount,string day ,string month)
{

    float payable= amount;
    


if(day=="sunday" && month=="march" || month=="october" || month=="august")
{
  
  payable = amount -(amount*0.1);
  return payable;

}

return payable;
}
