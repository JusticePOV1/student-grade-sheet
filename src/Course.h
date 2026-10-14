// Course.h

/**
 * Author(s): Jhonatan Parada & Tazim Ahmed & Justin Rodriguez
 * Date: Oct 17, 2026
 * Group: 7
 */

#ifndef COURSE_H
#define COURSE_H

#include <iostream>

using namespace std;

class Course {
private:
  string courseName;
  int creditHours;
  string letterGrade;

public:
  Course(std::string theCourseName, unsigned theCreditHours,
         std::string theLetterGrade) {
    courseName = theCourseName;
    creditHours = theCreditHours;
    letterGrade = theLetterGrade;
  }
};

#endif
