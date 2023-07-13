#include<iostream>
using namespace std;
// int main(){
//     int c;
//     for (int i = 0; i <= 5; i++)//row
//     {
//         cout<<" ";
//         for (int j = i+1; j <= 5; j++)//column
//         {
//                 cout<<"*";
            
//         }
//        cout<<endl;
//     }
//     return 0;
// }
int main(){
    int n;
    int count = 1 ;
    cin>>n;
   for(int i=1 ;i<=n; i++){
       
        // cout<<i<<endl;
        for (int j = 1; j <=n; j++)
        { 
            cout<<count;
            count = count+1;
        }
        cout<<endl;
        
    }
    
}