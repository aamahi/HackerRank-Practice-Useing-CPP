#include <iostream>
#include <cstdio>
using namespace std;

int main() {  
           
       string x[10]={"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cin>>a>>b;
   for(int i=a;i<=b;i++)
   {
       if(i>0&&i<10)
       {   for(int c=1;c<10;c++)
       {if(i==c)
           {
               cout<<x[c-1]<<"\n";
           }
       }
       }
       if(i>9)
       {
           if(i%2==0)
           {cout<<"even"<<"\n";
           }
         else 
         {cout<<"odd"<<"\n";  
         }
         }    
   }
    return 0;
}