#include<iostream>
using namespace std;
//Dutch National Flag Algorithm is used here
void sort012(int *arr, int n)
{
   int low=0,mid=0,high=n-1;
   while(mid<=high){
      if(arr[mid]==0){
         swap(arr[mid],arr[low]);
         low++;
         mid++;
      }
      else if(arr[mid]==1){
         mid++;
      }
      else{// arr[mid] ==2
         swap(arr[mid],arr[high]);
         high--;
      }
      }
   }
   void printarray(int arr[],int n){
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}
   int main(){
    int arr[6]={0,1,2,2,1,0};
    sort012(arr,6);
    printarray(arr,6);
    return 0;
   }