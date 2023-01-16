#include <iostream>
using namespace std;

void calculatebudget(float budget,string category,int people);

main()
{

 float budget;
 string category;
 int people;
 
 

 cout<<"Enter budget: ";
 cin>>budget;
 cout<<"Enter category: ";
 cin>>category;
 cout<<"Enter number of members: ";
 cin>>people;

 calculatebudget(budget,category,people);
 
 

}

 void calculatebudget(float budget,string category,int people)
 {
 
 float price1;
 float price2;
 float excess1;
 float excess2;
 float excess3;
 float excess4;
 float excess5;
 float excess6;
 float needmore1;
 float needmore2;
 float needmore3;
 float needmore4;
 float needmore5;
 float needmore6;
 float excess11;
 float excess22;
 float excess33;
 float excess44;
 float excess55;
 float excess66;
 float needmore11;
 float needmore22;
 float needmore33;
 float needmore44;
 float needmore55;
 float needmore66;
 float budget1;
 float budget2;
 float budget3;
 float budget4;
 float budget5;
 float budget6;
 float finalbudget1;
 float finalbudget2;
 float finalbudget3;
 float finalbudget4;
 float finalbudget5;
 float finalbudget6;


       price1=499.99*people;
       price2=249.99*people;
 

      if(people<=4)
        {
         
           budget1=(budget*75)/100;
           finalbudget1 = budget-budget1;

              if(category=="vip" && finalbudget1<=price1)
                 {
                   needmore1=price1-finalbudget1;
                   cout<<"not enough money . You need more QR: "<<needmore1;

                }

           
               else  if(category=="vip" && finalbudget1>=price1)
                  {
                    excess1=finalbudget1-price1;
                    cout<<" enough money . You have left QR: "<<excess1;

                    } 

                else if(category=="normal" && finalbudget1<=price2)
                           {
                            needmore11=price2-finalbudget2;
                            cout<<"not enough money . You need more QR: "<<needmore11;
   
                           }

           
                else   if(category=="normal" && finalbudget1>=price2)
                            {
                            excess11=finalbudget1-price2;
                             cout<<" enough money . You have left QR: "<<excess11;

                            }   

         }
         
          

         
        if(people>=5 && people<=9)
              {
                budget2=(budget*60)/100;
                finalbudget2 = budget-budget2;


                    if(category=="vip" && finalbudget2<=price1)
                     {
                         needmore2=price1-finalbudget2;
                         cout<<"not enough money . You need more QR: "<<needmore2;

                     }

           
                  else if(category=="vip" && finalbudget2>=price1)
                     {
                        excess2=finalbudget2-price1;
                        cout<<" enough money . You have left QR: "<<excess2;

                     } 


                   else  if(category=="normal" && finalbudget2<=price2)
                           {
                            needmore22=price2-finalbudget2;
                            cout<<"not enough money . You need more QR: "<<needmore22;
   
                           }

           
                    else if(category=="normal" && finalbudget2>=price2)
                            {
                            excess22=finalbudget2-price2;
                             cout<<" enough money . You have left QR: "<<excess22;

                            }   
              } 

        

        if(people>=5 && people<=9)
            {
               budget3=(budget*60)/100;
               finalbudget3 = budget-budget3;

                  if(category=="vip" && finalbudget3<=price1)
                     {
                         needmore3=price1-finalbudget3;
                         cout<<"not enough money . You need more QR: "<<needmore3;

                     }

           
                 else  if(category=="vip" && finalbudget3>=price1)
                     {
                        excess3=finalbudget3-price1;
                        cout<<" enough money . You have left QR: "<<excess3;

                     }  

                  else  if(category=="normal" && finalbudget3<=price2)
                           {
                            needmore33=price2-finalbudget3;
                            cout<<"not enough money . You need more QR: "<<needmore33;
   
                           }

           
                  else if(category=="normal" && finalbudget3>=price1)
                            {
                            excess33=finalbudget3-price2;
                             cout<<" enough money . You have left QR: "<<excess33;

                            }  

             }


       if(people>=10 && people<=24)
           {
                  budget4=(budget*50)/100;
                  finalbudget4 = budget-budget4; 
                  
                  if(category=="vip" && finalbudget4<=price1)
                     {
                         needmore4=price1-finalbudget4;
                         cout<<"not enough money . You need more QR: "<<needmore4;

                     }

           
                    else if(category=="vip" && finalbudget4>=price1)
                     {
                        excess4=finalbudget4-price1;
                        cout<<" enough money . You have left QR: "<<excess4;

                     }  


                     else if(category=="normal" && finalbudget4<=price2)
                           {
                            needmore44=price2-finalbudget4;
                            cout<<"not enough money . You need more QR: "<<needmore44;
   
                           }

           
                     else if(category=="normal" && finalbudget4>=price2)
                            {
                            excess44=finalbudget4-price2;
                             cout<<" enough money . You have left QR: "<<excess44;

                            }  

           }

      if(people>=25 && people<=49)
           {
             budget5=(budget*40)/100;
             finalbudget5 = budget-budget5; 


                    if(category=="vip" && finalbudget5<=price1)
                     {
                         needmore5=price1-finalbudget5;
                         cout<<"not enough money . You need more QR: "<<needmore5;

                     }

           
                  else if(category=="vip" && finalbudget5>=price1)
                     {
                        excess5=finalbudget5-price1;
                        cout<<" enough money . You have left QR: "<<excess5;

                     }  

                  else if(category=="normal" && finalbudget5<=price2)
                           {
                            needmore55=price2-finalbudget5;
                            cout<<"not enough money . You need more QR: "<<needmore55;
   
                           }

           
                  else  if(category=="normal" && finalbudget5>=price2)
                            {
                            excess55=finalbudget5-price2;
                             cout<<" enough money . You have left QR: "<<excess55;

                            }  

           }


        if(people>=50)
         {
          budget6=(budget*25)/100;
          finalbudget6 = budget-budget6; 

                      if(category=="vip" && finalbudget6<=price1)
                         {
                           needmore6=price1-finalbudget6;
                           cout<<"not enough money . You need more QR: "<<needmore6;

                          }

           
                        else  if(category=="vip" && finalbudget6>=price1)
                           {
                            excess6=finalbudget6-price1;
                           cout<<" enough money . You have left QR: "<<excess6;

                           }  
                           
                         else   if(category=="normal" && finalbudget6<=price2)
                           {
                            needmore66=price2-finalbudget6;
                            cout<<"not enough money . You need more QR: "<<needmore66;
   
                           }

           
                         else   if(category=="normal" && finalbudget6>=price2)
                            {
                            excess66=finalbudget6-price2;
                             cout<<" enough money . You have left QR: "<<excess66;

                            }  

         }  
  


 
   

}
 
