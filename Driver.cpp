#include <iostream>
#include "Management.hpp"
#include "CourseSystem.hpp"

int main() {
	string department = "CS";
	string courseName = "Introduction to Computer Programming";
	
	Course *newCourse = nullptr;
	Management::createCourse(&department, 107, &courseName, 10, newCourse);

	CourseSystem *newSystem = new CourseSystem(10);
	newSystem->addCourse(newCourse);
	cout << newSystem->getCourse(0) << endl;

	return 0;
}