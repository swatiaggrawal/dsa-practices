#include<iostream>
using namespace std;
void swap_temp(int a ,int b){
    int temp;
    temp = a;
    a=b;
    b=temp;
    cout<<"with temp variable"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
void swap_notemp_add_sub(int a ,int b){
    a=a-b;
    b=a+b;
    a=b-a;
    cout<<"without temp variable using addition and subtraction"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
void swap_notemp_mul_div(int a ,int b){
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"without temp variable using multiplication and division"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
void swap_notemp_xor(int a ,int b){
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"without temp variable using xor bitwise operator"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

int main(){
    int a=8;
    int b=9;
    swap_temp(a,b);
    swap_notemp_add_sub(a,b);
    swap_notemp_mul_div(a,b);
    swap_notemp_xor(a,b);


    return 0;
}