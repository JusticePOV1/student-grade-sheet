// Student.h

/**
 * Author(s): Jhonatan Parada & Tazim Ahmed
 * Date: Oct 17, 2026
 * Group: 7
 */

#ifndef STUDENT_H
#define STUDENT_H

#include "Course.h"

#include <iostream>
#include <vector>

class Student {
private:
  std::string name;
  std::vector<Course> courses;

public:
};

#endif

/**
 * Jhonatan's Reflection: It was tricky to design the Student class due to the
 * lack of detail in the instructios. But, since it is mentioned that Student
 * should have Courses, I defined a vector with Course types. And I realized
 * that it makes sense.
 *
 * Tazim's Reflection:
 */
