/*****************************************************************************************************
 
Statement :You are given a positive number n. You are required to print the counting from n to 1 and 1 to n using only
            recursion and you cannot use iterative logic. Use only recursion.

Input :5

output : 5 4 3 2 1 1 2 3 4 5
Author : Krishna Shivshankar Mandage

Date  : 23 may 2021


*****************************************************************************************************/





#include<iostream>
using namespace std;

void printIncDec(int n){
    if(n==0)return;
cout<<n<<"\n";
printIncDec(n-1);
cout<<n<<"\n";
    
}


int main(){
    int n; cin>>n;
    printIncDec(n);
}
