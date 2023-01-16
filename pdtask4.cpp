#include <iostream>
using namespace std;

int calculatebill(char type,char time,int min);

main()
{

char type;
char time;
int min;
int result;
cout<<"which type of customer you are? (premium or regular: ";
cin>>type;
cout<<"Press D for day call and press N for night calls: ";
cin>>time;
cout<<"enter minutes you have used: ";
cin>>min;


calculatebill(type,time,min);






}

calculatebill(char type,char time,int min)

{
  int min1;
  float totalmin1;
  int min2;
  float totalmin2;
  int min3;
  float totalmin3;
  if(type='p' && time=='d')
  {
    
    if(min>=75)
    {
      min1=min-75;
      totalmin1=(min1*0.10)+25;
      cout<<totalmin1;
    

    }
    if(min<75)
     {
       cout <<"25$"<<endl;

     }
    



   }

    if(type='p' && time=='n')
    {
    
    if(min>=100)
    {
      min2=min-100;
      totalmin2=(min2*0.05)+25;
      cout<<totalmin2;
    

    }
    if(min<100)
     {
       cout <<"25$"<<endl;

     }



  }


    if(type=='r')
    {
    
    if(min>=50)
    {
      min3=min-100;
      totalmin3=(min3*0.20)+10;
      cout<<totalmin3;
    

    }
    if(min<50)
     {
       cout <<"10$"<<endl;

     }

    
  }





  return 0;






}