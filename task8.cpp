#include<iostream>
using namespace std;
float required_amount(float,string,int);
float left_amount(float,int);  
main()
{
  float r1,r2,bu;
  string category;
  int m;
  float required;
  cout << "Enter the budget:";
   cin >> bu;
   cout << "Enter the category:";
   cin >> category; 
   cout << "Enter the number:";
   cin >> m;
   r1 = required_amount(bu,category,m);
   r2 = left_amount(bu,m);
   if(r1>r2 )
   {
       required = r1 - r2;
       cout<<"Not enough money, You required: "<<required<<endl;
   }
   else
   {
       required=r2-r1;
       cout<<"No required amount....You have left amount: "<<required<<endl;
   }
}
float required_amount(float bu,string category,int m)
{
    float required;
     if(category=="vip") 
     {
         required=m*499.99;
     }
     else
     {
         required=m*249.99;
     }
     return required;
}
float left_amount(float bu,int m)
{
    float left;
    if(m>=1||m<=4)
    {
        left=bu-(bu*(75.0/100));
    }
    else if(m>=5||m<=9)
    {
        left=bu-(bu*(60.0/100));
    }
    else if(m>=10||m<=24)
    {
        left=bu-(bu*(50.0/100));
    }
    else if(m>=25||m<=49)
    {
        left=bu-(bu*(0.4));
    }

    else if(m>49) 
    {
        left=bu-(bu*(25.0/100));
    }
    return left;
}  
