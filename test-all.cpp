/**
 * This is a program that will test all the operations of
 * the Student and ClassRoster classes.
 *
*/

#include "student.h"
#include "class_roster.h"

#include <cassert>
#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;

int main(int argc, char* argv[]){
    // Test Class Student
    //      - Test the Constructor
    //      - Test the ToString
    //      - Test Equals
    //      - Test Read
    //      - Test Write
    //      - Test GetName
    //      - Test GetID

    Student a("johny", "83888");
    assert(a.ToString() == "Student: johny, ID: 83888");
    assert(a.Equals(Student("johny", "83888")));
    assert(!a.Equals(Student("johny", "81888")));
    assert(a.Equals(a));
    stringstream data("Annie 98111\nPetra 99321");
    a.Read(data);
    assert(a.Equals(Student("Annie", "98111")));
    stringstream out;
    a.Write(out);
    assert(out.str() == "Annie 98111");
    assert(a.GetName() == "Annie");
    assert(a.GetID() == "98111");

    // Write all the tests for the ClassRoster class

    ClassRoster roster;
    assert(roster.GetNumberOfStudents() == 0);
    assert(roster.GetNumberOfSubjects() == 0);
    assert(roster.FindStudentPosition("0") == -1);
    assert(roster.FindSubjectPosition("X") == -1);
    assert(roster.GetStudent(0) == nullptr);
    assert(roster.GetSubject(0) == "");
    assert(roster.GetGrade(0,0) == -1);
    assert(roster.SetGrade(0,0,0) == false);
    assert(roster.GetCourseAverage() == 0);
    assert(roster.GetSubjectAverage(0) == 0);
    assert(roster.GetStudentAverage(0) == 0);
    out.str("");
    roster.Write(out);
    assert(out.str() == "");


    assert(roster.AddSubject("Math"));
    assert(!roster.AddSubject("Math"));





    cout << "ALL TEST PASSED.... YOU ARE AMAZING!!!" << endl;
    return 0;
}










