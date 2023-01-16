#include <iostream>
using namespace std;

string calculatebudget(float need1,float need2, float need3, float need4);

main()
{

 float budget;
 string category;
 int people;
 string result;

 cout<<"Enter budget: ";
 cin>>budget;
 cout<<"Enter category: ";
 cin>>category;
 cout<<"Enter number of members: ";
 cin>>people;

 result = calculatebudget(need1,need2,need3,need4);
 cout<<result;

}

string calculatebudget(float need1,float need2, float need3, float need4)
{
 float budget;   
 int people;
 float price1;
 float price2;
 float need1;
 float need2;
 float need3;
 float need4;
 string category;

 price1=499.99*people;
 price2=249.99*people;


if (category=="vip")
{
   if(budget<=price1)
    {
      need1= price1-budget;
      return"not enough money you need more QR" ;
      return need1;
    }
    
    if(budget>=price1)
    {
      need2= budget-price1;
      return"yes you have enought QR";
      return need2;
    }



}

if (category=="normal")
{
   if(budget<=price2)
    {
      need3= price2-budget;
      return"not enough money you need more QR";
      return need3;
    }
    
    if(budget>=price2)
    {
      need4= budget-price2;
      return"yes you have enought QR" ;
      return need4;
    }



}
   return 0;

}
