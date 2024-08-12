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
	/* parameter not valid or course system full */
	if (newCourse == nullptr || numOfCourse + 1 == MAX_COMPACITY) {
		return FAILURE;
	} else {
		if (capacity == numOfCourse + 1) {
			resize(capacity + 1);
		}
		courseList[numOfCourse] = newCourse;
		numOfCourse++;
		return SUCCESS;
	}
}

/* insert a course at a given index in the courseList in CourseSystem */
int CourseSystem::insertCourse(int index, Course *newCourse) {
	if (index < 0 || index > capacity || index > (numOfCourse + 1) || newCourse == nullptr) {
		return FAILURE;
	} else {
		if (index == (numOfCourse + 1)) {
			resize(capacity + 1);
		}
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

/* double the Course System size */
int CourseSystem::resize() {
	if (2 * capacity >= MAX_COMPACITY) {
		return FAILURE;
	} else {
		Course* new_array[2 * capacity];
		for (int i = 0; i < capacity; i++) {
			new_array[i] = courseList[i];
		}
		*courseList = *new_array;
		return SUCCESS;	
	}
}

/* adjust the Course System size to the passed in parameter */
int CourseSystem::resize(int capacity) {
	if (capacity > MAX_COMPACITY || capacity <= this->capacity) {
		return FAILURE;
	} else {
		Course* new_array[capacity];
		for (int i = 0; i < this->capacity; i++) {
			new_array[i] = courseList[i];
		}
		*courseList = *new_array;
		return SUCCESS;
	}
}

