#include <iostream>
#include <utility>
using namespace std;

// int findDuplicate(vector<int> &arr) 
// {
//     // Write your code here
//     int sum = 0;
//     for(int i=0;i<arr.size();i++){
//         sum^=arr[i];
//     }

//     for(int i=0 ; i<arr.size();i++){
//         sum^=i;
//     }
// 	return sum;
// }

pair<int,int> pairsum(int arr[],int size,int s){
   
   for(int i = 0 ; i<size;i++){
      for(int j = i+1 ; j<size;j++){
        int sum=arr[i]+arr[j];
         if(sum == s){
            
            return make_pair(arr[i],arr[j]);
         } 
      }
   }
   
   return make_pair(-1,-1);
}

int main() {
    int arr[] = {11, 5, 12, 5, 3, 2, 8};
    // int result = findDuplicate(arr);
    // cout << "Duplicate element: " << result << endl;
     
     pair<int,int> result = pairsum(arr,7,5);
     cout<<result.first<<" , "<<result.second;

    return 0;
}
