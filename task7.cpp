#include <iostream>
using namespace std;

float cheapest(float km,string time);
main()
{
 float km;
 string time;
 float result;
 cout<<"enter kilometer: ";
 cin>>km;
 cout<<"enter time to travel: ";
 cin>>time;
 result = cheapest(km,time);
 cout<<"cheapest is:  "<<result;

}

float cheapest(float km,string time)
{
  float bus;
  float taxi;
  float train;
  
   if(km<=20)
   {
       if(time=="day")
         { 
           taxi = (km*0.79)+0.70;
           return taxi;
         }
   else if(time=="night")
      {
         taxi = (km*0.90)+0.70;
        return taxi;

    }

   }
 
  if(km>=20 && km<=100)
  {
     if(time=="night" || time=="day")
       {
         bus = km*0.09;
         return bus;
        }

   }


    if(km>=100)
    {
          if(time=="night" || time=="day")
             {
                train = km*0.06;
                return train;
              }

     }





  return 0;







}
