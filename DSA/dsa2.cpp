#include <iostream>
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
void degree()
{

    int a;
    cout << "enter degree celsius to convert into ferenhit : ";
    cin >> a;
    float b = 1.8 * a + 32;
    cout << "ferenhit is : " << b << endl;
}

void feren()
{
    int x;
    cout << "enter ferenhit to convert into degree celsius : ";
    cin >> x;
    float y = ((x - 32)) * 5 / 9;
    cout << "degree celsious is : " << y << endl;
}
// ====================simple pattern=======================
void patternone(){
    int n;
    cout<<"Enter number of lines : ";
    cin>>n;
for (int l=1;l<n;l++){
    for (int i=1 ; i<=5 ; i++){

        for(int j=i ; j<=5 ; j++){

            cout<<"*";

        }
    cout<<endl;

    }
   
    }
}

// ====================prime number wrost logic ever ===========

void prime(){
    int n;
    cout<<"Enter number to see its prime or not : ";
    cin>>n;
    bool x=0;

   for(int i=2;i<n;i++){

    if (n%i==0)
    {
        x=1;
        break;
    }
   }
   if (x==1)
   {
    cout<<"enterd number is not prime";
   }
   else{
    cout<<"Entered Number Is Prime";
   }
   

}

void fibbonacci(){

    int n;
    cout<<"Enter length of series : ";
    cin>>n;
    int a=0, b=1;
    cout<<a<<","<<b;

    for (int i=1;i<=n;i++){

    int s=a+b;
        cout<<","<<s;
        a=b;
        b=s;
    }    
}

int main()
{

//     cout << "enter 1 for degree celsious and 2 for ferenhit convertion" << endl;
//     int c;
//     cin >> c;    

//     switch (c)
//     {
//     case 1:
//         degree();
//         break;
//     case 2:
//         feren();
//         break;
//     }
        // prime();
        // patternone();
        // fibbonacci();
        // int x=113;
        // cout<<(x<<3)<<endl;
        // cout<<(x>>1)<<endl;
        // cout<<++x<<endl;
        // cout<<x++<<endl;
        // cout<<x<<endl;
        // cout<<x++<<endl;
        for (int i = 0; i <5; i+=2)
        {
            // cout<<i<<" ";
            // if(i&1){
            //     continue;
            // }
            // i++;
            for (int j = i; j <=5; j++)
            {
               cout<<i<<" "<<j<<endl;
            }
            
        }
        

}
