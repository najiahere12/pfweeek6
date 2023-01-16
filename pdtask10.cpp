#include <iostream>
using namespace std;



main()
{ 
  int h;
  int x;
  int y;
  int trippleh=h+h+h;
  int  doubleh=h+h;
  int quadh=h+h+h+h;
  
  cout<<"enter h: ";
  cin>>h;
  cout<<"enter x co-ordinate: ";
  cin>>x;
  cout<<"enter y co-ordinate: ";
  cin>>y;
  
  if((x>0 || x<=3*h) && y< h)
  {
    if(h<trippleh)
    {
      cout<<"inside";

    }
  }
  else if((x==h && y==h) || (x==0 && y==h) || (x==h && y==0) )
    {

     cout<<"border";

    }
  else if((x>h && x<(doubleh)) && y<quadh)
  {
   
    
         cout<<"inside";
    
  }
  else
   { 
    cout<<"outside";
   }

}