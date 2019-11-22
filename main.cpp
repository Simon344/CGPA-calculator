#include <bits/stdc++.h>
#include "cgpa.h"

typedef std::string stdstring;

 int main(){
 	int no;
 	std::cout<<"How many students are you calculating for?"<< "\n";
 	std::cin>> no;
 	while (no--){
	 	//variables
	 	stdstring name;
	 	int gpSystem;
	 	int totalCourse;
	 	stdstring courseCode;
	 	float courseUnit;
	 	float courseScore;
	 	float coursePoint;
	 	float courseGradePoint;
	 	float cumGradePoint;
	 	float totalUnit;
	 	float CGPA;
	 	int matricNo;
	 	int Level;

	 	//Get initial info
	 	std::cout<<"STUDENT #"<<no<<"-"<<" What is your NAME?"<<"\n";
	 	std::cin>>name;
	 	std::cout<<"What is your MATRIC NO?"<<"\n";
	 	std::cin>>matricNo;
	 	std::cout<<"What is your level"<<"\n";
	 	std::cin>>Level;
	 	std::cout<< "What GP system do you use? (7, 5 or 4)"<< "\n";
	 	std::cin>> gpSystem;
	 	std::cout<<"Enter TOTAL NUMBER of Courses"<<"\n";
	 	std::cin>>totalCourse;

		Student student(matricNo);
		student.setData(name, Level);

	 	//loop to get info for all courses
	 	cumGradePoint=0;
	 	totalUnit=0;
	 	for(int n=1; n<= totalCourse; n++){
		 	//Get user input
		 	std::cout<<"Enter courseCODE "<< n <<"\n";
		 	std::cin>>courseCode;
		 	std::cout<<"Enter UNIT for "<< courseCode <<"\n";
		 	std::cin>>courseUnit;

		 	//create course object
		 	Course course(courseCode, courseUnit);

		 	//obtain score
		 	std::cout<<"Enter SCORE for "<< courseCode <<"\n";
		 	std::cin>>courseScore;

		 	//Obtain point
		 	if (gpSystem == 7) coursePoint = sevenPoint(courseScore);
		 	else if (gpSystem == 5) coursePoint = fivePoint(courseScore);
		 	else if (gpSystem == 4) coursePoint = fourPoint(courseScore);

			//obtain grade point
			courseGradePoint=courseUnit*coursePoint;

			//set course details
			course.setCourse(courseScore, coursePoint, courseGradePoint);

			//show course details
			course.getCourse();

			cumGradePoint+=courseGradePoint;
			totalUnit+=courseUnit;
		}
		// Final calculationof cgpa
		CGPA= cumGradePoint/totalUnit;
		student.setDataR(cumGradePoint, totalUnit, CGPA);

		student.getData();
	}
	return 0;
}


// functions for diffferent gp systems
// classes for courses
// courses for objects
// for lecturer use, student class
// save courses for long time use
//read from file
//save to a file
//read from spreadsheet
// web app- profile use and all
