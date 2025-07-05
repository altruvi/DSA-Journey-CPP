#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\tpnting done"<<endl;

}
int main(){
    //declare
    int number[15];

    //accessing an array
    cout<<"value at 0 index: "<<number[0]<<endl;
    cout<<"value at 12 index: "<<number[12]<<endl;
    cout<<"value at 20 index: "<<number[20]<<endl;

    int second[3]={3,5,7};
    cout<<"value at 1 index: "<<second[1]<<endl;

    int third[15]={2,1};
    
    // cout<<"Printing the array"<<endl;
    // for(int i = 0;i<n;i++){
    // cout<<" "<<third[i];}
    // cout<<endl;
    printArray(third,15);
    int thirdsize =sizeof(third)/sizeof(int);
    cout<< "Size of Fifth is "<<thirdsize<<endl;

    //intializing all location with 0
    int fourth[10]={0};
     
    // cout<<"Printing the array"<<endl;
    // for(int i = 0;i<n;i++){
    // cout<<" "<<fourth[i];}
    // cout<<endl;
    printArray(fourth,10);

    //intialisation all location with 1 [is not possible]
    int fifth[10]={1};
     
    // cout<<"Printing the array"<<endl;
    // for(int i = 0;i<n;i++){
    // cout<<" "<<fifth[i];}
    // cout<<endl;
    printArray(fifth,10);

    int fifthsize =sizeof(fifth)/sizeof(int);
    cout<< "Size of Fifth is "<<fifthsize<<endl;
    
   char ch[5]={'a','b','r','c','p'};
   cout<<ch[3]<<endl;

    int n =5;
    cout<<"Printing the array"<<endl;
    for(int i = 0;i<n;i++){
    cout<<" "<<ch[i];}
    cout<<endl;

    return 0;
}
