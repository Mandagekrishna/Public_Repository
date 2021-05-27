/*****************************************************************************************************
 
Statement : Compressing the given string

Input : aabb 

output : a2b2

Author : Krishna Shivshankar Mandage

Date  : 17 may 2021


*****************************************************************************************************/

#include<bits/stdc++.h>

using namespace std;


int main(){
        string a;
        cin >> a;
        string b = "";

        auto it = a.begin();

        while(it!= a.end()){
            
            int count = 1;
            char curr = *it;
            b= b+curr;

            while(curr == *(++it))
                { 
                    count+=1;
                }
                if(count!=1)
            b = b + to_string(count);         // "to_string(variable)" converts the variable of any data-type into string
        }

cout<<b;


    return 0;
}