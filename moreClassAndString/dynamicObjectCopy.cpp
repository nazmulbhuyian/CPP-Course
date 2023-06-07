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
    Person * nazmul = new Person("Nazmul Bhuyian", 22);
    Person * nobel = new Person("Nazmul nobel", 22);
    // nazmul->name=nobel->name;
    // nazmul->age=nobel->age;
    *nazmul=*nobel;
    delete nobel;
    cout<<nazmul->name<<" "<<nazmul->age;
    return 0;
}