#include<iostream>
#include<conio.h>
using namespace std;
void insertion_sort(int arr[],int n){
    int key;
    for(int i=0;i<n;i++){
      key=arr[i];
      int j=i-1;
      while(key<arr[j]&&j>=0){
        arr[j+1]=arr[j];
        --j;
      }
      arr[j+1]=key;
    }
}
int main(){
        int arr[10];
        int n,i,j;
        cout<<"enter the length of array"<<endl;
        cin>>n;
        cout<<"enter the array elements"<<endl;
        for( i=0;i<n;i++){
            cin>>arr[i];
        }
        insertion_sort(arr,n);
        cout<<"the array after sorting:"<<endl;
        for(i=0;i<n;i++){
            cout<<"\t"<<arr[i];
        }
        return 0;
}