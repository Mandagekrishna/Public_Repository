/*****************************************************************************************************

Statement : detecting the number of subsets that have set of unique elements for a given string

Input : 
            1   -------   number of test cases
            4   -------   length of string
            abbc  -----    string

output : 6


explaination : a {a}, ab {a,b}, abb {a,b}, abbc {a,b,c}, b {b}, bb{b}, bbc{b,c}, b {b}, bc {b,c}, c {c}

there are 6 subsets having unique elements {a}, ab{a,b}, abbc {a,b,c}, b {b}, bbc{b,c}, c{c}.

Author : Krishna Shivshankar Mandage

Date  : 17 may 2021


*****************************************************************************************************/



#include<bits/stdc++.h>
using namespace std;





std::vector<string> substring(string A)    //function to calculate all possible subset of string and put in vector
                                        // named sub
{
    vector<string> sub;
    for(int i=0;i<A.length();i++)
    {
        string substri="";
        for(int j=1;j<=A.length()-i;j++)
        {
            substri = A.substr(i,j);
            //cout<<substri<<"\n";
            sub.push_back(substri);
         }
    }
return sub;
}





int count_sets (int N, string A) {

    
vector<string> subst;

subst = substring(A);






set<set<char> > sets;              //notice sets is used for unique subsets        

auto it = subst.begin();
while(it<subst.end()){
    string next = *it;
    set<char> s;
    for(int i=0;i<next.size();i++)    //creating set of characters for each possible subset-string  abc - {a,b,c}
    {
        s.insert(next[i]);
    }
    sets.insert(s);
    it++;
}

/*
set<set<char> > s1;
int count  = sets.size();

for(int i=0;i<count;i++)
{
   
    s1.insert(sets[i]);

}*/
return sets.size();
   
}

int main() {

 
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        string A;
        cin >> A;

        int out_;
        out_ = count_sets(N, A);
        cout << out_;
        cout << "\n";
    }
}


