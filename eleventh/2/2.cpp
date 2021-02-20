#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
public:
    int id;
    string name, grade;
    Student() {};
    Student(int id, string name, string grade) :id(id), name(name), grade(grade) {};
    bool operator < (const Student& s) {
        if (this->id < s.id)
            return false;
    }
};

istream& operator >> (istream& in, Student& s) {
    in >> s.id >> s.name >> s.grade;
    return in;
}
ostream& operator << (ostream& out, Student& s) {
    out << s.id << ' ' << s.name << ' ' << s.grade << endl;
    return out;
}


int main()
{
    vector<Student> sv;
    Student temp;
    while (cin >> temp)
    {
        sv.push_back(temp);
    }
    sort(sv.begin(), sv.end());
    for (int i = 0; i < sv.size(); ++i)
        cout << sv[i];
    return 0;
}