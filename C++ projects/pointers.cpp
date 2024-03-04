#include <iostream>


using namespace std;

int main() {

    int age = 21;
    int *pAge = &age;
    double gpa = 4.0;
    double *pGpa = &gpa;
    string name = "Abderrachid";
    string *pName = &name;

    cout << pAge;
    cout << *pAge;
    cout << *&age;
    cout << &*&age;

    return 0;
}