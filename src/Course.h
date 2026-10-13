// Course.h

#ifndef COURSE_H
#define COURSE_H

#include <iostream>

class Course {
private:
  std::string courseName;
  unsigned creditHours;
  std::string letterGrade;

public:
  Course(std::string theCourseName, unsigned theCreditHours,
         std::string theLetterGrade) {
    courseName = theCourseName;
    creditHours = theCreditHours;
    letterGrade = theLetterGrade;
  }
};

#endif
