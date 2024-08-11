#include <iostream>
#include <string>
#include <list>

#include "CourseSystem.hpp"

CourseSystem::CourseSystem() {
	capacity = DEFAULT_COMPACITY;
	for (int i = 0; i < capacity; ++i) {
        courseList[i] = nullptr;
    }
	numOfCourse = 0;
}

CourseSystem::CourseSystem(int capacity) {
	this->capacity = capacity;
	courseList[capacity] = NULL;
	numOfCourse = 0;
}

/* add a course to courseList in CourseSystem */
int CourseSystem::addCourse(Course *newCourse) {
	if (newCourse == nullptr) { /* parameter not valid */
		return FAILURE;
	} else {
		courseList[numOfCourse] = newCourse;
		numOfCourse++;
		return SUCCESS;
	}
}

/* insert a course at a given index in the courseList in CourseSystem */
int CourseSystem::insertCourse(int index, Course *newCourse) {
	if (index < 0 || index > numOfCourse || newCourse == nullptr) {
		return FAILURE;
	} else {
		/* shifting courses to the right of the array */
		for (int i = numOfCourse; i > index; i--) {
			courseList[i] = courseList[i - 1];
		}
		courseList[index] = newCourse;
		return SUCCESS;
	}
}

Course* CourseSystem::getCourse(int index) {
	return index >= numOfCourse ? NULL : courseList[index];
}

int CourseSystem::resize() {
	Course* new_array[2 * capacity];
}