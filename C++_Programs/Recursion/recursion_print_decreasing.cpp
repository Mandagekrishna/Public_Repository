/*****************************************************************************************************
 
Statement :You are given a positive number n. You are required to print the counting from n to 1 using only
            recursion and you cannot use iterative logic. Use only recursion.

Input :5

output : 5 4 3 2 1 
Author : Krishna Shivshankar Mandage

Date  : 17 may 2021


*****************************************************************************************************/

#include<bits/stdc++.h>
using namespace std;


void counting(int n){
    if(n==0) return;

    else {cout<<n << "\n";
    counting(n-1);}
}

int main()
{
    int n;
    cin>>n;

    counting(n);
}