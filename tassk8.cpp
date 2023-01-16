#include <iostream>
using namespace std;


float checkcost(string product,string city,int quantity);

main()
{
  string city;
  string product;
  int quantity;
  float result;
  
  cout<<"Enter city: ";
  cin>>city;
  cout<<"Enter product: ";
  cin>>product;
  cout<<"Enter product quantity: ";
  cin>>quantity;

  result=checkcost(product,city,quantity);
  cout<<result;

  

}

float checkcost(string product,string city,int quantity);

 {
       int price1;
       int price2;
       int price3;
       int price4;
       int price5;
       int price6;
       int price7;
       int price8;
       int price9;
       int price10;
       int price11;
       int price12;
       int price13;
       int price14;
       int price15;
       
     if(product=="coffee")
      {
        if(city=="sofia")
          {
             
            price1=quantity*0.50;
            return price1;

          }
      
        if(city=="varna")
          {
             
            price2=quantity*0.45;
            return price2;

          }
        if(city=="plovdiv")
          {
             
            price1=quantity*0.40;
            return price1;

          }
      

      }

   
    
     if(product=="water")
      {
        if(city=="sofia")
          {
             
            price4=quantity*0.80;
            return price4;

          }
      
        if(city=="varna")
          {
             
            price5=quantity*0.70;
            return price5;

          }
        if(city=="plovdiv")
          {
             
            price6=quantity*0.70;
            return price6;

          }
      

      }

      if(product=="beer")
      {
        if(city=="sofia")
          {
             
            price7=quantity*1.20;
            return price7;

          }
      
        if(city=="varna")
          {
             
            price8=quantity*1.10;
            return price8;

          }
        if(city=="plovdiv")
          {
             
            price9=quantity*1.15;
            return price9;

          }
      

      }

       if(product=="sweets")
      {
        if(city=="sofia")
          {
             
            price10=quantity*1.45;
            return price10;

          }
      
        if(city=="varna")
          {
             
            price11=quantity*1.35;
            return price11;

          }
        if(city=="plovdiv")
          {
             
            price12=quantity*1.30;
            return price12;

          }
      

      }

       if(product=="peanuts")
      {
        if(city=="sofia")
          {
             
            price13=quantity*1.60;
            return price13;

          }
      
        if(city=="varna")
          {
             
            price14=quantity*1.55;
            return price14;

          }
        if(city=="plovdiv")
          {
             
            price15=quantity*1.50;
            return price15;

          }
      

      }



       return 0;




 }