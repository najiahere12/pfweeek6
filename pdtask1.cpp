#include <iostream>
using namespace std;

string printactivity(string temp,string humidity);

main()
{

 string temp;
 string humidity;
 string result;

cout<<"Enter temperature: ";
cin>>temp;
cout<<"enter humidity:  ";
cin>>humidity;

result=printactivity(temp,humidity);
cout<<result;


}

string printactivity(string temp,string humidity)
{
      if(temp=="warm")
       {
           if(humidity=="dry")
            {
              return "play tenis";
            }

           if(humidity=="humid")
            {
              return "swim";
            }



        }

       if(temp=="cold")
       {
           if(humidity=="dry")
            {
              return "play basket ball";
            }

           if(humidity=="humid")
            {
              return "watch tv";
            }



        }



     return 0;



}