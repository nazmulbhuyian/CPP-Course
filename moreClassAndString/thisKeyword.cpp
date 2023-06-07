#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name, int age){
        (*this).name = name;
        this->age=age;
    }
};

int main()
{
    Person nazmul("Nazmul Bhuyian", 22);
    Person nobel("Nazmul nobel", 22);
    cout<<nazmul.name<<" "<<nazmul.age<<endl;
    cout<<nobel.name<<" "<<nobel.age<<endl;
    return 0;
}