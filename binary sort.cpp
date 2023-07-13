#include<iostream>
using namespace std;

void print(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i];
        cout << endl;
    }
}

void SS(int a[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (a[j] < a[i]){
                int k = a[j];
                a[j] = a[i];
                a[i] = k;
            }
        }
    }
}

void BS(int a[], int high){
    int low = 1;
    int key;
    cout << "Enter the number which you want to find : ";
    cin >> key;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if (key < a[mid]){
            high = mid - 1;
        }
        else if(key > a[mid]){
            low = mid + 1;
        }
        else if(key == a[mid]){
            cout << "Number found.";
            break;
        }
        else{
            cout << "Can't find the number.";
            break;
        }
    }
}

int main(){
    int n;
    cout << "How many numbers would you like to generate? : ";
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        a[i] = rand() % n;
    print(a,n);
    SS(a,n);
    cout << "After Sorting : ";
    print(a,n);
    BS(a,n);
    return 0;
}