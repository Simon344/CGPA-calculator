#include <bits/stdc++.h>
typedef std::string stdstring;

float sevenPoint(float CS);
float fivePoint(float CS);
float fourPoint(float CS);

class Course{
	stdstring courseCode;
 	float courseUnit;
 	float courseScore;
 	float coursePoint;
 	float courseGradePoint;

 	public:
 		Course(stdstring cCode, int cUnit);
		void setCourse(float cScore, float cPoint, float cgPoint);
		void getCourse();
 		~Course();

};

class Student{
	int matricNo;
	stdstring Name;
	int Level;
	float cumGradePoint;
 	float totalUnit;
 	float CGPA;
	public:
		Student(int matno);
		void setData(stdstring name, int lvl);
		void setDataR(float cmgPoint, float tUnit, float cgpa);
		void getData();
		~Student();
};
