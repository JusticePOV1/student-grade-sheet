# Student Grade Sheet
A student transcript manager.

## Requirements
- cmake
- C/C++ compiler such as g++

## Quick Start
```
$ cmake -B build # Run only once
$ cmake --build build
$ ./build/student-grade-sheet
```

Checkout the dashboard quickly using a sample file:  
```
$ ./build/student-grade-sheet < test-input.txt
```

## Progress
Student.h: Done  
Course.h: Done  
Student.cpp: Need reflections  
Course.cpp: Needs Tazim's reflections  
main.cpp: Needs reflections   

## Tasks
- Maybe remove the sort prompt since it is not specified in the instructions?
- Fix format for Total Credits entry (If enough time)
- add func to uppercase course names (If enough time)
