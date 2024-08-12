#include <iostream>
#include <string>

#include "Management.hpp"
#include "Course.hpp"
#include "CourseSystem.hpp"

using namespace std;

int Management::createCourse(const string* department, int id, const string* courseName, int numOfTAs) {
	if (department == nullptr || id <= 0 || courseName == nullptr || numOfTAs < 0) {
		return FAILURE;
	}
	
	Course *newRegularCourse = new Course();
	if (!newRegularCourse->setCourseName(*courseName)) {
		return FAILURE;
	}
	if (newRegularCourse->setDepartment(*department)) {
		return FAILURE;
	}
	newRegularCourse->setID(id);
	newRegularCourse->setTANumber(numOfTAs);
	return SUCCESS;
}