#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

class Student
{
public:
    int marks;
    string name;

    Student(int a, string b)
    {
        this->marks = a;
        this->name = b;
    }
};

class compare
{
public:
    bool operator()(Student a, Student b)
    {
        // min marks -> high priority
        return a.marks < b.marks;
        // same logic as array but top is at end;
        //therefore
        // max marks -> high priority

    }
};
int main()
{

    // vector<Student> v;
    priority_queue<Student, vector<Student>, compare> v;

    v.push(Student(83, "vishal"));
    v.push(Student(34, "naresh"));
    v.push(Student(91, "prasad"));

    // sort(v.begin(), v.end() , compare());
    cout << v.top().marks << "  " << v.top().name << endl;
    v.pop();
    cout << v.top().marks << "  " << v.top().name << endl;
    v.pop();
    cout << v.top().marks << "  " << v.top().name << endl;
    v.pop();
   

    cout << "vishal";

    return 0;
}