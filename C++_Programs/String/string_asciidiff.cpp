/*****************************************************************************************************
 
Statement :  You are given a string that contains only lowercase and uppercase alphabets. 
            You have to form a string that contains the difference of ASCII values of every two
            consecutive characters between those characters

Input : abecd

output :   For "abecd", the answer should be "a1b3e-2c1d",

Author : Krishna Shivshankar Mandage

Date  : 18 may 2021


*****************************************************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string in;
    cin>>in;
    string out;

    for(int i=0;i<in.length();i++)
    {
        out = out+in[i];
        if(i!=in.length()-1){
        int diff = (int)in[i+1]-(int)in[i];
        out = out+to_string(diff);
        }
    }
    cout<<out;
    return 0;
}