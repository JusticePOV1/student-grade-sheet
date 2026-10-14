// Course.cpp

#include "Course.h"
#include <string>

using namespace std; 

Course::Course(const string& theCourseName,
               int theCreditHours,const string& theLetterGrade) {
    this->courseName = theCourseName;
    this->creditHours = theCreditHours;
    this->letterGrade = theLetterGrade;
}

string Course::getCourseName() const { return courseName; }
int Course::getCreditHours() const { return creditHours; }
string Course::getLetterGrade() const { return letterGrade; }
 
double Course::getGradePoints() const {
    return gradeToPoints(letterGrade);
}
 
double Course::getTotalPoints() const {
    return creditHours * getGradePoints();
}

// Returns true only for the 12 allowed letter grades
bool Course::isValidLetterGrade(const string& theLetterGrade) const {
    return theLetterGrade == "A"  || theLetterGrade == "A-" ||
           theLetterGrade == "B+" || theLetterGrade == "B"  || theLetterGrade == "B-" ||
           theLetterGrade == "C+" || theLetterGrade == "C"  || theLetterGrade == "C-" ||
           theLetterGrade == "D+" || theLetterGrade == "D"  || theLetterGrade == "D-" ||
           theLetterGrade == "F";
}
 
// Find the grade points for a letter grade per credit
double Course::gradeToPoints(const string& theLetterGrade) const {
    if (theLetterGrade == "A")  return 4.0;
    if (theLetterGrade == "A-") return 3.7;
    if (theLetterGrade == "B+") return 3.35;
    if (theLetterGrade == "B")  return 3.0;
    if (theLetterGrade == "B-") return 2.7;
    if (theLetterGrade == "C+") return 2.35;
    if (theLetterGrade == "C")  return 2.0;
    if (theLetterGrade == "C-") return 1.7;
    if (theLetterGrade == "D+")  return 1.35;
    if (theLetterGrade == "D")  return 1.0;
    if (theLetterGrade == "D-") return 0.7;
    return 0.0;        // F (or anything unexpected)
}
