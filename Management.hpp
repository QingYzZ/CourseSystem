#include <string>
#include "Macros.hpp"

using namespace std;

class Management {
	public:
	static int createCourse(const string* department, int id, const string* courseName, int numOfTAs);

	private:
	string schoolName;

};