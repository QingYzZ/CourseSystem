#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
#include "Macros.hpp"

using namespace std;

class Course {
	public:

    string getCourseName() const {
        return *courseName;
    }

	int setCourseName(const string &name) {
		if (name.empty()) {
			return FAILURE;
		}
		*courseName = name;
		return SUCCESS;
	}

	int setDepartment(const string &departmentName) {
		if (departmentName.empty()) {
			return FAILURE;
		}
		*department = departmentName;
		return SUCCESS;
	}

	int setID(int id) {
		this->id = id;
		return SUCCESS;
	}

	int setTANumber(int numOfTAs) {
		this->numOfTAs = numOfTAs;
		return SUCCESS;
	}

	private:
    int id;
    int numOfTAs;
    string *courseName;
    string *department;

};


#endif
