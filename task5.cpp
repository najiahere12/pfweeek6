#include <iostream>
using namespace std;

string calspeed(float speed);
main()
{

float speed;
string result;
cout<<"enter speed: ";
cin>>speed;

result = calspeed(speed);
cout<<result;

}

string calspeed(float speed)
{
 
 if(speed<=10)
 {

   return "slow";

 }


 else if(speed>=11 && speed<=50 )
 {

   return"average";

 }

else if(speed>=51 && speed<=150)
 {

   return "fast";

 }


 else if(speed>=151 && speed<=1000)
 {

   return "ultra fast";

 }

 else if(speed>1000)
 {

   return "extremely fast";

 }

return 0;

}
