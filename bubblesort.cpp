#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int arr[10];
    int n,i,j;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    cout<<"enter the array elements"<<endl;
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"the array after sorting:"<<endl;
    for(i=0;i<n;i++){
        cout<<"\t"<<arr[i];
    }
    return 0;
}