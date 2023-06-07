// A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.

// Input
// The first line of the input contains an integer t
//  (1≤t≤103
// ) — the number of testcases.

// The description of each test consists of one line containing one string consisting of six digits.

// Output
// Output t
//  lines, each of which contains the answer to the corresponding test case. Output "YES" if the given ticket is lucky, and "NO" otherwise.

// You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

// Example
// inputCopy
// 5
// 213132
// 973894
// 045207
// 000000
// 055776
// outputCopy
// YES
// NO
// YES
// YES
// NO
// Note
// In the first test case, the sum of the first three digits is 2+1+3=6
//  and the sum of the last three digits is 1+3+2=6
// , they are equal so the answer is "YES".

// In the second test case, the sum of the first three digits is 9+7+3=19
//  and the sum of the last three digits is 8+9+4=21
// , they are not equal so the answer is "NO".

// In the third test case, the sum of the first three digits is 0+4+5=9
//  and the sum of the last three digits is 2+0+7=9
// , they are equal so the answer is "YES".


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        string ticket;
        cin>>ticket;

        int sum1=0;
        int sum2=0;

        for (int i = 0; i < 6; i++)
        {

            if(i<3){
                sum1+=ticket[i];
            }else{
                sum2+=ticket[i];
            }
            
        }

        if (sum1 == sum2)
        {
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        
    }
    
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// bool isLuckyTicket(string ticket) {
//     int sum_first = 0, sum_second = 0;
//     for (int i = 0; i < 3; i++) {
//         sum_first += ticket[i] - '0';
//         sum_second += ticket[i + 3] - '0';
//     }
//     return sum_first == sum_second;
// }

// int main()
// {
//     int n;
//     cin>>n;
//         string ticket;
//         cin>>ticket;     

//         if (isLuckyTicket(ticket)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
    
//     return 0;
// }