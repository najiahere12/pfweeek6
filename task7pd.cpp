#include <iostream>
using namespace std;

int arrivaltime(int starthours,int startmins,int studentarrivehour,int studentarrivemin);
main()
{
  int starthours;
  int startmins;
  int studentarrivehour;
  int studentarrivemin;
  
  cout<<"Enter exam starting hours: ";
  cin>>starthours;
  cout<<"Enter exam starting minutes: ";
  cin>>startmins;
  cout<<"Enter student arrival time in hours: ";
  cin>>studentarrivehour;
  cout<<"Enter student arrival time in minutes: ";
  cin>>studentarrivemin;
  arrivaltime(starthours,startmins,studentarrivehour,studentarrivemin);
  

}

int arrivaltime(int starthours,int startmins,int studentarrivehour,int studentarrivemin)
{
  int before;
  int beforeh;
  int hrsrt;
  int hourstu;
  int a;
  int b;
  int c;
  int d;
  int totalh;
  int totalm;
  int diff;
  hourstu=studentarrivehour*60;
  hrsrt=starthours*60;
  a=hourstu+studentarrivemin;
  b=hrsrt+startmins;
  diff=a-b;
  c=diff/60;
  d=diff%60;
  totalh=c-d;
  totalm=studentarrivemin-startmins;

  if(diff>60 ||diff<60)
  {

   if(a>b)
   {
   
    cout<<"late";
    cout<<c;
    cout<<":";
    cout<<d;

   }
   else if(diff>=-30)
   {
    
    cout<<"On time";
    cout<<endl;
    cout<<-1*c;
    cout<<":";
    cout<<-1*d;
   }
    else if(diff<-30)
   {
    
    cout<<"Early";
    cout<<endl;
    cout<<-1*c;
    cout<<":";
    cout<<-1*d;
   }
 }

//  else if(starthours==studentarrivehour)
//  {
//     if(studentarrivemin>startmins)
//     {
//       time=studentarrivemin-startmins;
//       cout<<"Late"
//       cout<<starthours;
//       cout<<":";
//       cout<<time;
//     }
//     if(studentarrivemin<startmins)
//     {
//       time=studentarrivemin-startmins;
//       cout<<"early"
//       cout<<starthours;
//       cout<<":";
//       cout<<time;
//     }
  return 0; 

 }
  


