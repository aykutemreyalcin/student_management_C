# Student Management System in C

## Overview
This C program is a **basic student management system** that allows users to:
- Add new students
- List all students
- Search for a student by ID
- Delete a student by ID

## How It Works
1. The program maintains a list of students (max **100**).
2. Users can interact through a **menu-driven system**.
3. Each student has an **ID, name, and grade**.
4. The program runs in a loop until the user chooses to exit.

## Compilation & Usage

### Requirements
- A C compiler (e.g., GCC, Clang, MSVC)

### Compiling the Program
```sh
gcc student_management_system.c -o student_management
```

### Running the Program
```sh
./student_management
```

### Expected Output
```
Student Management System
1. Add Student
2. List Students
3. Search Student
4. Delete Student
5. Exit
Choose an option: 1
Enter Student ID: 101
Enter Student Name: John Doe
Enter Student Grade: 85.5
Student added successfully!
```