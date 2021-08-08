
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct StudentGrade
{
    string name;
    char grade;
};

class GradeMap
{
public:
    vector<StudentGrade> m_map;

    GradeMap()
    {
    }

    char& operator[](const string& name);

};

char& GradeMap::operator[](const string& name)
{
    for (StudentGrade student : m_map)
    {
        if (student.name == name)
        {
            return student.grade;

        }
    }
    StudentGrade stud;
    stud.name = name;
    stud.grade = '-';
    m_map.push_back(stud);
    return m_map.back().grade;

}

int main()
{
    GradeMap grades;
    grades["John"] = 'A';
    grades["Martin"] = 'B';
    cout << "John has a grade of " << grades["John"] << endl;
    cout << "Marthin has a grade of " << grades["Martin"] << endl;
    cout << "New name and grade?" << endl;
    string name;
    char grade;
    cin >> name >> grade;
    grades[name] = grade;
    std::cout << name << " has a grade of " << grades[name] << endl;
    return 0;

}