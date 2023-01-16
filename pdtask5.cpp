#include <iostream>
using namespace std;


float fruitprice(string day,string fruit,float quantity);
main()
{

 string day;
 string fruit;
 float quantity;

 cout<<"enter day: ";
 cin>>day;
 cout<<"enter fruit: ";
 cin>>fruit;
 cout<<"enter quantity in kg's: ";
 cin>>quantity;



 fruitprice(day,fruit,quantity);

}


 float fruitprice(string day,string fruit,float quantity)
{

   float price1;
   float price2;
   float price3;
   float price4;
   float price5;
   float price6;
   float price7;
   float price8;
   float price9;
   float price10;
   float price11;
   float price12;
   float price13;
   float price14;
   
    if(day=="sunday" || day=="saturday")
    {
     
        if(fruit=="banana")
        {
            price1=2.70*quantity;
            cout<<price1;

        }
        else if(fruit=="apple")
        {
            price2=1.25*quantity;
            cout<<price2;

        }
        else if(fruit=="orange")
        {
            price3=0.90*quantity;
            cout<<price3;

        }
        else  if(fruit=="grapefruit")
        {
            price4=1.60*quantity;
            cout<<price4;
        }
        else if(fruit=="kiwi")
        {
            price5=3*quantity;
            cout<<price5;

        }
        else if(fruit=="pineapple")
        {
            price6=6.50*quantity;
            cout<<price6;

        }
        else if(fruit=="grapes")
        {
            price7=4.20*quantity;
            cout<<price7;

        }
        else
        {
            cout << "everytime";
        cout<<"error";

        }
      
    }
    
    

    


    if(day=="monday" || day=="tuesday" || day=="wednesday" ||day=="thursday" ||day=="friday")
    {
     
        if(fruit=="banana")
        {
            price8=2.50*quantity;
            cout<<price8;

        }
        else if(fruit=="apple")
        {
            price9=1.20*quantity;
            cout<<price9 << endl;

        }
        else if(fruit=="orange")
        {
            price10=0.85*quantity;
            cout<<price10;

        }
        else if(fruit=="grapefruit")
        {
            price11=1.45*quantity;
            cout<<price11;

        }
        else if(fruit=="kiwi")
        {
            price12=2.70*quantity;
            cout<<price12;

        }
        else if(fruit=="pineapple")
        {
            price13=5.50*quantity;
            cout<<price13;

        }
        else if(fruit=="grapes")
        {
            price14=3.85*quantity;
            cout<<price14;
        }
        else
        {
            cout << "everytime";
            cout<<"error";
        } 
    }

    else
    {
        cout<<"error";
    } 

    

   



   


   return 0;




}

