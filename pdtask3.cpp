#include <iostream>
using namespace std;

string zodiacsign(int day,string month);
main()
{

 int day;
 string month;
 string result;
 
 cout<<"enter day: ";
 cin>>day;
 cout<<"enter month: ";
 cin>>month;
 result=zodiacsign(day,month);
 cout<<result;





}
string zodiacsign(int day,string month)
{

    string sign;
  
  if(month=="march" && day>=21||month=="april" && day<=19)
      {
      

        
           sign="aries";

        


      }

    if(month=="april" && day>=20||month=="may" && day<=20)

    {
      
        {
           sign="taurus";
         

        }


    }


    if(month=="may" && day>=21||month=="june" && day<=20)
    {
      

        
           sign="gemini";

        


    }


     if(month=="june" && day>=21|| month=="july" && day<=22)
      {
     

        {
           sign="cancer";

        }


     }

     
     if(month=="july" && day>=23||month=="august" && day<=22)
      {
       

        {
           sign="leo";

        }


     }

      if(month=="august" && day>=23||month=="september" && day<=22)
      {
      

        
          sign="virgo";

        


      }
       
       if(month=="september" && day>=23||month=="october" && day<=22)
       {
          

           {
              sign="libra";

           }


       }
      
        
       if(month=="october" && day>=23||month=="november" && day<=21)
       {
        

          {
           sign="scorpio";

          }


       }  

        if(month=="november" && day>=22||month=="december" && day<=21)
        {
      

          {
           sign="sagittarius";

          }


       }  

        if(month=="december" && day>=22||month=="january" && day<=19)
         {
           

          {
           sign="capricorn";

          }


        }  

         
        if(month=="january" && day>=20||month=="february" && day<=18)

         {
           
          {
          sign="aquarius";

          }


        }  
        
         if(month=="february" && day>=19||month=="february" && day<=20)
         {
          

           {
             sign="pisces";

           }


        }  


        return sign; 

}


