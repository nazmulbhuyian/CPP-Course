// Problem Statement

// You will be given data for N students, where each student will have a name (nm), class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).

// Your task is to sort the students data according to the total marks (sum of math_marks and eng_marks) in descending order. If multiple student have the same total marks then sort them according to the id in ascending order as the id will be unique.

// Input Format

// First line will contain N.
// Next N lines will contain nm, cls, s, id, math_marks and eng_marks respectively.
// Constraints

// 1 <= N <= 100
// 1 <= |nm| <= 100 and will contain only English alphabets.
// 1 <= cls <= 10
// 'A' <= s <= 'Z'
// 1 <= id <= 1000
// 0 <= math_marks, eng_marks <= 100
// Output Format

// Output the students data in descending order according to the total marks.
// Sample Input 0

// 5
// Munna 8 D 25 50 30
// Shojoy 9 E 26 40 50
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Bijoy 7 E 29 68 99
// Sample Output 0

// Bijoy 7 E 29 68 99
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Shojoy 9 E 26 40 50
// Munna 8 D 25 50 30
// Sample Input 1

// 6
// Munna 8 D 30 50 40
// Shojoy 9 E 25 40 50
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Bijoy 7 E 29 68 99
// Khadija 8 E 26 40 50
// Sample Output 1

// Bijoy 7 E 29 68 99
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Shojoy 9 E 25 40 50
// Khadija 8 E 26 40 50
// Munna 8 D 30 50 40

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

bool cmp(Student a,Student b)
{
    // if (a.total_marks == a.total_marks) {
        
    //     return a.id < a.id;
    // }
    if(a.total_marks > b.total_marks){
        return true;
    }
    else if (a.total_marks == b.total_marks) { 
        return a.id < b.id;
    }
    else return false;
    // return a.total_marks > b.total_marks;

}

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
        a[i].total_marks = a[i].math_marks + a[i].eng_marks;
    }
    sort(a,a+n,cmp);
    cout<<"New Start";
    for(int i=0;i<n;i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<" "<<endl;
    }
    return 0;
}

