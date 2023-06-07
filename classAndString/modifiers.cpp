#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string a="Hello";
    // string b="A";
    // a=a+b;    b="world";
    // a+=b;
    // a.append(b);
    // cout<<a<<endl;
    // cout<<b<<endl;
    // a="HelloA"; -> works
    // a=a+"A"; -> works
    // a[5]='A'; -> didn't work
    // a.push_back('A'); // works
    // a.pop_back();
    // a.pop_back();
    // cout<<a<<endl;

    // a="Gelo";
    // a.assign("Gelo");
    // cout<<a<<endl;


    string a="HelloWorld";
    // a.erase(4);   4 index theke sob delete hobe
    // a.erase(4,3); 4 index theke koyta delete korbe
    a.replace(5,0,"so");  // 5 index theke 0 ta delete hbe ar so bose jabe
    // a.insert(5,"Rahat");
    cout<<a<<endl;
    return 0;
}