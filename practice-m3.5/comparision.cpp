// Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

// The comparison is as follows: A < B, A > B, A = B.

// Where A, B are two integer numbers and S refers to the sign between them.

// Input
// Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.

// Output
// Print "Right" if the comparison is true, "Wrong" otherwise.

// Examples
// inputCopy
// 5 > 4
// outputCopy
// Right
// inputCopy
// 9 < 1
// outputCopy
// Wrong
// inputCopy
// 4 = 4
// outputCopy
// Right

// Test case এমন একটা  value,  সেই  value বার আমরা একটি প্রোগ্রামকে  চালাতে চাচ্ছি।
// #include <stdio.h>
// int main()
// {
// 	int a,b;
// 	scanf("%d %d",&a,&b);
// 	print("%d\n",a+b);
//  	return 0;
// }
// এই কোডটি ২টা নাম্বারের যোগ বের করে দিবে।
// এইটা শুধু একবার চলে execuution শেষ করে দিবে।
// এখন আমরা যদি চাই, একটা নিদিষ্ট বার যোগ করে ফলাফল দিবে।
// তখন আমরা test case use করি।
// #include <stdio.h>
// int main()
// {
// 	int test;
// 	scanf("%d",&test);
// 	for(int i=1; i<=test; i++)
// 	{
// 		int a,b;
// 		scanf("%d %d",&a,&b);
// 		print("%d\n",a+b);
// }
//  	return 0;
// }
// এখন, কিন্তু আমি যত test case দিব ততবার ইনপুট দিয়ে যোগ করে ফলাফল দেখতে পারবো।


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"Right";
    }
    else if(a==b){
        cout<<"Right";
    }
    else{
        cout<<"Wrong";
    }
    return 0;
}