/*****************************************************************************************************
 
Statement : Calculte the factorial for the given number
Input : n

output : factorial of n

Author : Krishna Shivshankar Mandage

Date  : 17 may 2021


*****************************************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int factorial(int n){

    int fact;
    if(n==1)return 1;
    else
     fact = n*(factorial(n-1));

     return fact;
}

int main(){
    int n;

    cin>>n;

    cout<<factorial(n);
return 0;}