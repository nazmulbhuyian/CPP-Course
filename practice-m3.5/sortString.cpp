// Given a number N
//  and a string S
//  of size N
// . Print S
//  after sorting it.

// Note : don't use built-in function and it's recommended to not solve this problem with python language.

// Input
// The first line contains a number N
//  (1≤N≤107)
//  size of string S
// .

// The second line contains a string S
//  consists of lowercase English letters.

// Output
// Print S
//  after sorting it.

// Examples
// inputCopy
// 4
// deab
// outputCopy
// abde
// inputCopy
// 5
// egypt
// outputCopy
// egpty





// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
    
//     return 0;
// }



#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d\n", &n);
    int arr[26] = {0};
    char ch;
    for(int i=0; i<n; i++){
        scanf("%c", &ch);
        arr[ch-'a']++;
    }
    for(int i=0; i<26; i++){
        
        if(arr[i]>0){
            while(arr[i]!=0){
                printf("%c",i+'a');
                arr[i]--;
            }
        }
    }
    return 0;
}