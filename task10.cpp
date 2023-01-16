#include <iostream>
using namespace std;
main()
{
  string leap;
  float holiday;
  float weekends;
  float sofia;
  int totaltime;
  float totaltime2;
  int finaltime;
  
  cout<<"Enter whether year is leap: ";
  cin>>leap;
  cout<<"Enter holidays: ";
  cin>>holiday;
  cout<<"Enter weekends: ";
  cin>>weekends;
  
  sofia=48-weekends;
 
  if(leap!="leap")
  { 
    
    totaltime=((holiday*2)/3)+weekends+((sofia*3)/4);
    cout<<totaltime;
  }
  else if(leap=="leap")
  {
   totaltime=((holiday*2)/3)+weekends+((sofia*3)/4);
   totaltime2=totaltime*0.15;
   finaltime=totaltime2+totaltime;
   cout<<finaltime;
  }
  
  
}


