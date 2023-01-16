#include <iostream>
using namespace std;
string gender(int age,string gen);
main()
{
 int age;
 string gen;
 string result;
 cout<<"enter age: ";
 cin>>age;
 cout<<"enter gender: ";
 cin>>gen;

 result=gender(age,gen);
 cout<<result;


}

string gender(int age,string gen)
{

 if(age>16 && gen=="female")

 {
    
    return "a woman";


 }

if(age<=16 && gen=="female")

 {
    
    return "a girl";


 }

if(age>16 && gen=="male")

 {
    
    return "a man";


 }

if(age<=16 && gen=="male")

 {
    
    return "a boy";


 }

return 0;


}