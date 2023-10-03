#include <iostream>
#include<cstring>
using namespace std;

int len(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        /* code */
        count++;
    }
    return count;
}

char tolowerrr(char arr[],int size){

    for (int i = 0; i<size; i++)
    {
        /* code */
         if (arr[i]>='A' && arr[i]<='Z')
        {
            arr[i]=arr[i]-'A'+'a';
        }
        
        
    }
    
}

char reverse(char arr[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
char palindrome(char arr[], int size)
{

    int i = 0, j = size - 1;
    int flag = 0;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    char name[] = "KEvek";
    int si = strlen(name);

    cout << "your name is : " << name << endl;
    int size = len(name);
    reverse(name, size);
    cout << "reversed array is : " << name<<endl;

    tolowerrr(name,si);
    // cout<<"lengh : "<<len(name);
    if(palindrome(name, si)){
        cout<<"enterd number is palindrome";
    }
    else
    {
        cout<<"Enterd number is not palindrome";
    }
    return 0;
}