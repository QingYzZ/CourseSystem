#ifndef MANAGEMENT_HPP
#define MANAGEMENT_HPP
#include <string>
#include "Macros.hpp"
#include "Course.hpp"

using namespace std;

class Management {
	public:
	static int createCourse(const string* department, int id, const string* courseName, int numOfTAs, Course *new_course);

	private:
	string schoolName;

};

#endif
