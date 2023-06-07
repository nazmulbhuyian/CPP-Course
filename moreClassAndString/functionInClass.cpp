#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm, int ag, int m1, int m2){
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }
    void fun(){
        cout<<"This is function inside class"<<endl;
    }
    int totalMarks(){
        return marks1+marks2;
    }
};

int main()
{
    Person nazmul("Nazmul Bhuyian", 22, 60, 75);
    cout<<nazmul.name<<" "<<nazmul.age;
    nazmul.fun();
    cout<<nazmul.totalMarks()<<endl;
    return 0;
}