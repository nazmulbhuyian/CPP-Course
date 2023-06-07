// Given a string S
// . For each word in S
//  reverse its letters then print it.

// Note: words are separated by space.

// Input
// Only one line contains a strings S
//  (1≤|S|≤106)
//  where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces.

// Output
// Print the answer required above.

// Examples
// inputCopy
// I love you
// outputCopy
// I evol uoy
// inputCopy
// You love me
// outputCopy
// uoY evol em
// inputCopy
// We are a happy family
// outputCopy
// eW era a yppah ylimaf


#include<bits/stdc++.h>
using namespace std;

void print(stringstream & ss){
    string word;
    if(ss>>word){
        reverse(word.begin(), word.end());
        cout<<word<<" ";
        print(ss);
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    print(ss);
    return 0;
}