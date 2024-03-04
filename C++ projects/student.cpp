#include <iostream>
using namespace std;

class Student {
    private:
        double gpa;
    public:
        string name;
        string major;  
        Student (string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            setRating(aGpa);
        }

        bool hasHonors() {
            if(gpa >= 2.0) {
                return true;
            }
            return false;
        }

        void setRating(double aGpa) {
            gpa = aGpa;
        }
};

int main() {

    Student student1("Abderrachid", "CSE", 4.0);
    Student student2("Muhaymn", "ECE", 2.4); 

    cout << student2.hasHonors() << endl;

    return 0;
}