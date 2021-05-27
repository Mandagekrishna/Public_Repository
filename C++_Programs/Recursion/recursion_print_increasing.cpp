/*****************************************************************************************************
 
Statement :You are given a positive number n. You are required to print the counting from 1 to n using only
            recursion and you cannot use iterative logic. Use only recursion.

Input :5

output : 1 2 3 4 5
Author : Krishna Shivshankar Mandage

Date  : 17 may 2021


*****************************************************************************************************/




#include<iostream>
using namespace std;

void printIncreasing(int n){
if(n==1){cout<<n<<"\n";return;}
else {printIncreasing(n-1);
cout<<n<<"\n";}
    
}


int main(){
    int n; cin>>n;
    printIncreasing(n);
}
