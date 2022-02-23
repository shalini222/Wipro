/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// remove Vowel from string
#include <bits/stdc++.h>

using namespace std;

string remVowel(string s)
{
    regex r("[aeiouAEIOU]");
     
    return regex_replace(s, r, "");
}

int main()
{
    string s;
    cin>>s;
    
   cout << (remVowel(s));
    return 0;
}
