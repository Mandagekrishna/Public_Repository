/*****************************************************************************************************
 
Statement : Toggle the aplhabets in String

Input : aaBBcc 

output :AAbbCC

Author : Krishna Shivshankar Mandage

Date  : 17 may 2021


*****************************************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int main(){

    string in;
    cin>>in;

    for(int i=0;i<in.length();i++){
        if(isupper(in[i])){
            in[i]=tolower(in[i]);
        }
        else in[i]=toupper(in[i]);
    }
    cout<<in;
return 0;}