#include<iostream>
using namespace std;
int main()
{
    int i=0;
    //table of 6
  // while (i<10)
   //{
   // i++;
   // cout<<""<<i*6<<endl;
   //}
   cout<<"table of 6\n"<<endl;
   do
   {
    
    i++;
    cout<<"6*";
    cout<<""<<i;
    cout<<"="<<i*6<<endl;
    
   } while (i<10);

   for ( i =1; i <=10; i++)
   {
    
    cout<<"6 * ";
    cout<<""<<i;
     cout<<" = "<<i*6<<endl;
    
     
   }
   for ( i = 1; i < 4; i++)
   {
    
    if (i==2)
    {
      continue;
    }
    cout<<""<<i<<endl;
    
   }
   
   
   
    
}