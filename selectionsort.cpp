#include<iostream>
#include<conio.h>
using namespace std;
void selection_sort(int arr[],int n){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
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
        selection_sort(arr,n);
        cout<<"the array after sorting:"<<endl;
        for(i=0;i<n;i++){
            cout<<"\t"<<arr[i];
        }
        return 0;
}