#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,char s,int c,char* n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
int main()
{
    Student rahim(29,'A',7,"Rahim Ullah");
    Student karim(55,'D',7,"Karim Cholimullah");
    size_t size = sizeof(Student);
    cout<<size;

    
    

    cout<<karim.roll<<endl;
    cout<<rahim.roll<<endl;
    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;
// class Person
// {
//     public:
//         char name[100];
//         float height;
//         int age;

//         Person(char *na,float hei,int ag)
//         {
//             strcpy(name,na);
//             height = hei;
//             age = ag;
//         }
// };
// int main()
// {
//     Person nazmul("Nazmul Bhuyian", 5.5, 22);
    

//     cout<<nazmul.name<<endl;
//     cout<<nazmul.height<<endl;
//     cout<<nazmul.age<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Person
// {
//     public:
//         char name[100];
//         float height;
//         int age;

//         Person(char *na,float hei,int ag)
//         {
//             strcpy(name,na);
//             height = hei;
//             age = ag;
//         }
// };
// int main()
// {
//     Person nazmul("Nazmul Bhuyian", 5.5, 22);
//     Person nafiz("Nafiz Bhuyian", 4.8, 13);
    

//     if (nazmul.age > nafiz.age) {
//         cout << "The person with the greater age is: " << nazmul.name <<endl;
//     } else if (nazmul.age < nafiz.age) {
//         cout << "The person with the greater age is: " << nafiz.name <<endl;
//     } else {
//         cout << "Both persons have the same age." <<endl;
//     }

//     return 0;
// }