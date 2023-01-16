#include <iostream>
using namespace std;

float billofstay(string month,float days);
main()
{
  string month;
  float days;
  

  cout<<"Enter the month : ";
  cin>>month;
  cout<<"Enter the days you stayed: ";
  cin>>days;
  billofstay(month,days);
  
}

float billofstay(string month,float days)
{
    float billappartment;
    float billstudio;
    float dis1;
    float dis2;
    float final1;
    float final2;

  if(month=="may" || month=="october")
  {

    if(days<=7)
    {
      billstudio=days*50;
      billappartment=days*65;
      cout<<billstudio;
      cout<<endl;
      cout<<billappartment;

    }
    if(days>7 && days<=14)
    {
      billstudio=days*50;
      billappartment=days*65;
      dis1=billstudio*0.05;
      final1=billstudio-dis1;
      cout<<final1;
      cout<<endl;
      cout<<billappartment;

    }
    if(days>14)
    {
      billstudio=days*50;
      billappartment=days*65;
      dis1=billstudio*0.3;
      final1=billstudio-dis1;
      dis2=billappartment*0.1;
      final2=billappartment-dis2;
      cout<<final1;
      cout<<endl;
      cout<<final2;
     

    }

  }

    if(month=="june" || month=="september")
   {

    if(days<=14)
    {
      billstudio=days*75.20;
      billappartment=days*68.70;
      cout<<billstudio<<endl;;
      cout<<billappartment;

    }
    if(days>14)
    {
      billstudio=days*75.20;
      billappartment=days*68.70;
      dis1=billstudio*0.2;
      final1=billstudio-dis1;
      dis2=billappartment*0.1;
      final2=billappartment-dis2;
      cout<<final1;
      cout<<endl;
      cout<<final2;

    }
  }
     if(month=="july" || month=="august")
   {  
     if(days<=14)
    {
      billstudio=days*76;
      billappartment=days*77;
      cout<<billstudio;
      cout<<endl;
      cout<<billappartment;

    }
    if(days>14)
    {
      billstudio=days*76;
      billappartment=days*77;
      dis2=billappartment*0.1;
      final2=billappartment-dis2;
      cout<<billstudio;
      cout<<endl;
      cout<<final2;

    } 
  }
   return 0;
} 

