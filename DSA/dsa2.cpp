#include<iostream>
using namespace std;
// char a;
// cin>>a;
// if ( a>='a' and a<='z')
// {
//     cout<<"enterd number is small"<<endl;
// }
// else if(a>='A' and a<='Z')
// {
//     cout<<"enterd number is capital"<<endl;
// }
// else {
//    cout<<"number is not alphabet"<<endl;
//     return 0;
// }

// --------------sum of n numbers------------------------------------
// int n;

// cout<<"enter number to find its sum : "<<endl;
// cin>>n;
// int sum = 0;
// int count=1;
// while(count<=n){
//      sum=sum+count;
//     count++;
  
// }
//   cout<<"sum of "<<n<<" is : "<<sum;

//   --------------------------------------------------------------------------
//   ================= sum of all even numbers =============================

// int d;
// cout<<"enter the limit ";
// cin >> d ;
// int i = 0;
// int sum = 0;
// while(i<=d ){
//     sum+=i;
//     i+=2;
// } 
// cout<<"sum of all even numbers are : "<<sum<<endl;

// -------------------------------------------------------------------------------
// =========================Degree to Ferenhit==============================
void degree(){

int a;
cout<<"enter degree celsius to convert into ferenhit : ";
cin>>a;
float b=1.8*a + 32;
cout<<"ferenhit is : "<<b<<endl;

}

void feren(){
int x;
cout<<"enter ferenhit to convert into degree celsius : ";
cin>>x;
float y=((x-32))*5/9;
cout<<"degree celsious is : "<<y<<endl;
}
int main(){

cout<<"enter 1 for degree celsious and 2 for ferenhit convertion"<<endl;
int c;
cin>>c;

switch(c){
    case 1:
    degree();
    break;
    case 2:
    feren();
    break;
}



} 
  


