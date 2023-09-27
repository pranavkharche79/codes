#include <iostream>
using namespace std;
#include <String.h>

class Student
{
    int rollno;
    char DOB[11];
    int marks;

public:
    // Student() {}
    // Student(int rollno, char DOB[], int marks)
    // {
    //     this->rollno = rollno;
    //     strcpy(this->DOB, DOB);
    //     this->marks = marks;
    // }
    void setter(int rollno, char DOB[], int marks)
    {
        this->rollno = rollno;
        strcpy(this->DOB, DOB);
        this->marks = marks;
    }
    void getter()
    {
        cout << "Student details : Roll no. : " << rollno << ", DOB : " << DOB << ", Total marks : " << marks << endl;
    }
    int getRoll()
    {
        return rollno;
    }
    int getMarks()
    {
        return marks;
    }
};
void sortArrayByRollNo(Student *);
void sortArrayByMarks(Student *);
int main()
{
    Student s[10];

    s[9].setter(1, "11/12/2001", 80);
    s[8].setter(2, "12/12/2001", 82);
    s[7].setter(3, "13/12/2001", 83);
    s[6].setter(4, "14/12/2001", 84);
    s[5].setter(5, "15/12/2001", 85);
    s[4].setter(6, "16/12/2001", 86);
    s[3].setter(7, "17/12/2001", 87);
    s[2].setter(8, "18/12/2001", 88);
    s[1].setter(9, "19/12/2001", 89);
    s[0].setter(10, "20/12/2001", 90);

    for (int i = 0; i < 10; i++)
    {
        s[i].getter();
    }
     sortArrayByRollNo(s);
     cout << "Student sorted by rollno : " << endl;
     for (int i = 0; i < 10; i++)
     {
         s[i].getter();
     }
     sortArrayByMarks(s);
     cout << "Student sorted by marks : " << endl;
     for (int i = 0; i < 10; i++)
     {
         s[i].getter();
     }
}
void sortArrayByRollNo(Student *s)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[j].getRoll() > s[j + 1].getRoll())
            {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
void sortArrayByMarks(Student *s)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[j].getMarks() > s[j + 1].getMarks())
            {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
