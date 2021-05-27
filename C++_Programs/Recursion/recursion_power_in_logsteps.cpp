/*****************************************************************************************************
 
Statement : Calculte the n-th power of number x for the given number in logn steps
Input : x,n

output : n-th power of x

Author : Krishna Shivshankar Mandage

Date  : 22 may 2021


*****************************************************************************************************/

#include<iostream>
using namespace std;

int powerLogarithmic(int x,int n){
int result;
if(n==1) return x;
 
 if(n%2!=0){result = powerLogarithmic(x,n/2)+ powerLogarithmic(x,n/2);}
 else result = powerLogarithmic(x,n/2+1)+powerLogarithmic(x,n/2);
 
 return result;

    
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}