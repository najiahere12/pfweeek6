#include <iostream> 
using namespace std;

 string calculatepercent(int english,int chemistry,int biology,int socialscience,int math);

main()
{

 string name;
 int math;
 int chemistry;
 int biology;
 int socialscience;
 int english;
 string result;
 cout<<"enter name: ";
 cin>>name;
 cout<<"enter math marks: ";
 cin>>math;
 cout<<"enter english marks: ";
 cin>>english;
 cout<<"enter social science marks: ";
 cin>>socialscience ;
 cout<<"enter chemistry marks: ";
 cin>>chemistry;
 cout<<"enter biology marks: ";
 cin>>biology;
 cout<<name<<endl;
 result=calculatepercent(english,chemistry,biology,socialscience,math);
 cout<<result;




}

 string calculatepercent(int english,int chemistry,int biology,int socialscience,int math)

{  
   int total;
   float percentage;
   string grade;


  
 
  total=math+english+biology+chemistry+socialscience;
  cout<<total<<endl;
  percentage=(total*100)/500;
  cout<<percentage<<endl;

      if(percentage<=100 && percentage>=90)
       {

         return grade="A+";
       }
   
     else if(percentage<=89 && percentage>=80)
       {

         return grade="A";
       }
      else if(percentage<=79 && percentage>=70)
       {

         return grade="B+";
       } 

       else if(percentage<=69 && percentage>=60)
       {

         return grade="B";
       }
       
        else if(percentage<=59 && percentage>=50)
       {

         return grade="C";
       }


       
        else if(percentage<=49 && percentage>=40)
       {

         return grade="D";
       }


        else if(percentage<40)
       {

         return grade="F";
       }




    return 0;



}