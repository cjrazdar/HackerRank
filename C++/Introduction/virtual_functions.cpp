#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
    Person() {}
    virtual void getdata() {}
    virtual void putdata() {
        cout << name << " " << age << " " << marks << " " << id << endl;
    }
    string name;
    int age, marks = 0, id;
};

class Professor : public Person {
public:
    Professor() : Person() { id = ++cur_id; }
    void getdata() {
        cin >> name >> age >> marks;
    }
private:
    static int cur_id;
};

class Student : public Person {
public:
    Student() : Person() { id = ++cur_id; }
    void getdata() {
        int temp_mark;
        cin >> name >> age;
        for (int i = 0; i < 6; ++i) {
            cin >> temp_mark;
            marks += temp_mark;
        }
    }
private:
    static int cur_id;
};

int Professor::cur_id = 0;
int Student::cur_id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}