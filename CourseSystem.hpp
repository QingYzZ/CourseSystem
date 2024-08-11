#ifndef COURSESYSTEM_HPP
#define COURSESYSTEM_HPP

#include "Course.hpp"
#include "Macros.hpp"

class CourseSystem {
	public:
	CourseSystem();
	CourseSystem(int capacity);
	int addCourse(Course *newCourse);
	int insertCourse(int index, Course *newCourse);
	int getCurrentCapacity() { return capacity; }
	bool ifFull() { return capacity <= numOfCourse;}
	int capacityLeft() { return capacity - numOfCourse;}
	Course* getCourse(int index);
	int resize();
	int resize(int size);

	private:
	int capacity;
	int numOfCourse;
	Course* courseList[];
};

#endif
