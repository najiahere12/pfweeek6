#include <iostream>
using namespace std;

void printmaze();
void gotoxy(int x,int y);
void printpacman(int x,int y);
void printghost(int gx,int gy);
char getcharAtxy(int x,int y);
void clearscreen(int x,int y,int prev);
main()
{
 
 int gx = 1;
 int gy = 1;
 string direction=="right";
 char prevChar = ' ';
 system("cls");
 printmaze();
 printghost(gx,gy);
 while(true)
 {
    sleep(150);
 }
 
 if(direction=="right")
 {
    char nextLocation = getcharAtxy(gx + 1,gy);
    if(nextLocation=="|")
    {
        direction = "left";
    }
    else if(nextLocation== ' ' || nextLocation=='.')
    {
      clear(gx,gy,previousChar);
      gx= gx+1;
      previousChar = nextLocation;
      printghost(gx,gy);
      
    }

 }
 if(direction=="left")
 {
    char nextLocation = getcharAtxy(gx - 1,gy);
    if(nextLocation=="|")
    {
        direction = "right";
    }
    else if(nextLocation== ' ' || nextLocation=='.')
    {
      clear(gx,gy,previousChar);
      gx= gx-1;
      previousChar = nextLocation;
      printghost(gx,gy);
      
    }

 }




}
void printmaze()
{
  
cout<<"############################################################################# "<<endl;
cout<<"||.. .............................................................  ...... || "<<endl;
cout<<"||.. %%%%%%%%%%%%%%%%%%%%%%%      ...       %%%%%%%%%%%%%    |%|..   %%%%  || "<<endl;
cout<<"||..          |%|        |%|   |%|...       |%|       |%|    |%|..    |%|  || "<<endl;
cout<<"||..          |%|        |%|   |%|...       |%|       |%|    |%|..    |%|  || "<<endl;
cout<<"||..          %%%%%%%%%%%%% .. |%|...       %%%%%%%%%%%%%       ..   %%%%. || "<<endl;
cout<<"||..          |%|           .. |%|...       .............  |%|  ..       . || "<<endl;
cout<<"||..          %%%%%%%%%%%%%%.. |%|...       %%%%%%%%%%     |%|  ..   %%%%. || "<<endl;
cout<<"||..                     |%|.               |%|.....       |%|  ..    |%|. || "<<endl;
cout<<"||..     ...........     |%|.        p      |%|.....|%|         ..    |%|. || "<<endl;
cout<<"||..|%|  |%|.....|%| .   |%|. |%|              .....|%|         ..|%| |%|. || "<<endl;
cout<<"||..|%|  |%|.....|%| ..       %%%%%%%%%%%%%%   .....|%|          .|%|.     || "<<endl;
cout<<"||..|%|  |%|.....|%| ..              ....|%|      %%%%%         . |%|.     || "<<endl;
cout<<"||..|%|               .              ....|%|               |%|  ..|%|.     || "<<endl;
cout<<"||..|%|  %%%%%%%%%%%%%%%%%           ....|%|%%%%%%%%%%     |%|  ..|%|%%%%% || "<<endl;
cout<<"||.....................................................    |%|  .......... || "<<endl;
cout<<"||   ..................................................            ....... || "<<endl;
cout<<"||..|%|  |%|   |%|..   %%%%%%%%%%%%%%%%%     .......|%|    |%|    |%|...   ||"<<endl;
cout<<"||..|%|  |%|   |%|..              ...|%|        %%%%%%%    |%|    |%|...   ||"<<endl;
cout<<"||..|%|      .             G      ...|%|                   |%|    |%|...   ||"<<endl;
cout<<"||..|%|  %%%%%%%%%%%%%            ...|%|%%%%%%%%%%%%       |%|    |%|%%%%% ||"<<endl;
cout<<"||....................................................     |%|  .......... ||"<<endl;
cout<<"||   .................................................             ....... ||"<<endl;
cout<<"#############################################################################"<<endl;
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void clearscreen(int x,int y,int prev)
{

 gotoxy(x,y);
 cout << prev;

}
void printghost(int x,int y)
{

 goto(x,y);
 cout << "G";

}
char getcharAtxy(int x,int y)
{
  CHAR_INFO ci;
  COORD xy={0,0};
  SMALL_RECT rect = {X,x,Y,y};
  COORD coordbufSize;
  coordBufSize.X = 1;
  coordBufSize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci, coordBufSize,xy,&rect) ? ci.Char.AsciiChar : '  ';

    
}













