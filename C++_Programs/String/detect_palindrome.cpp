/*****************************************************************************************************

Statement : Printing all the palindrome of the given string 

Input : abba

output : a, abba , b, bb, b, a

Author : Krishna Shivshankar Mandage

Date  : 17 may 2021


*****************************************************************************************************/


#include<bits/stdc++.h>

using namespace std;

//------------------------------------------------------------------------------------------------------
//function to check string is palindrome or not
bool ispal(string c){
    auto it = c.begin();
    auto it2  = c.end()-1;
    bool pal = 1;
    while(it2>it|| it == it2)
    {
        if(*it == *it2)
        {it++;it2--;}
        else{pal = 0;break;}
    }
    return pal;
}

//-----------------------------------------------------------------------------------------------------------
int main()
{

    string a;
    cin>>a;

    for(int i=0;i<a.length();i++)
    {
        for(int j=1;j<=a.length()-i;j++){

        string b = a.substr(i,j);            //all possible substrings are formed
        if(ispal(b))                          // check if substring is palindrome or not
        cout<<b<<"\n";
        
        
        
        }
    }
        
return 0;}