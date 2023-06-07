// Given a mathematical expression. The expression will be one of the following expressions:

// A + B = C, A - B = C and A * B = C

// where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

// Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

// Input
// Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

// Output
// Output either "Yes" (without the quotation) or the right answer depending on the statement.

// Examples
// inputCopy
// 5 + 10 = 15
// outputCopy
// Yes
// inputCopy
// 3 - 1 = 2
// outputCopy
// Yes
// inputCopy
// 2 * 10 = 19
// outputCopy
// 20


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c){
        cout<<"Yes";
    }
    else if(a-b==c){
        cout<<"Yes";
    }
    else if(a*b==c){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}