/* ****************************************************************************************************

Statement : Printing all the palindrome of the given string 

Input : abba

output : a, abba , b, bb, b, a

Author : Krishna Shivshankar Mandage

Date  : 17 may 2021


**************************************************************************************************** */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<bits/stdc++.h>

using namespace std;


void result(string i_compo,string v_composition)
{
   
    
      
        int count = i_compo.length();
        auto it1 = v_composition.end()-1;
        auto it2 = i_compo.end()-1;

        while(it1>=v_composition.begin()&&count>0)
        {
            if(*it1==*it2)
            {
                it1--;
            it2--;
            count--;
            }
            else
            {
                it1--;
            }
        }
       cout<<count;
if(count==0)cout<<"POSITIVE"<<"\n";
else cout<<"NEGATIVE"<<"\n";
    
return;}








int main(int argc, char *a[])
{
    string v_composition;
    cin>>v_composition;

    int no_person;
    cin>>no_person;

    vector<string> b_composition;

    for(int i=0;i<no_person;i++)
    {
        string ith_composition;
        cin>>ith_composition;
        b_composition.push_back(ith_composition);
    }
 for(int i =0 ;i<b_composition.size();i++)
 {
     cout<<b_composition[i];
    result(b_composition[i], v_composition);
    }
return 0;}


