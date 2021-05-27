/*****************************************************************************************************
 
Statement : Calculte the n-th power of number x for the given number
Input : x,n

output : n-th power of x

Author : Krishna Shivshankar Mandage

Date  : 22 may 2021


*****************************************************************************************************/
#include<iostream>
using namespace std;

int power(int x,int n){
    int result;
 if(n==0) return 1;
    
result = x * power(x,n-1);
return result;

}


int main(){
    int n,x; cin>>x>>n;
    cout<<power(x,n);
}
