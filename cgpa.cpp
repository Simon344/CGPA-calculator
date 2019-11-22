# include "cgpa.h"

Course::Course(stdstring cCode, int cUnit):
	courseCode(cCode),
	courseUnit(cUnit){}
	
Course::~Course(){
}

void Course::setCourse(float cScore, float cPoint, float cgPoint){
	courseScore = cScore;
	coursePoint = cPoint;
	courseGradePoint = cgPoint;
}

void Course::getCourse(){
	std::cout<<"Course code is "<<courseCode<<"\n";
	std::cout<<courseCode<< "is "<< courseUnit<< " units"<<"\n";
	std::cout<<"You scored "<<courseScore<<"\n";
	std::cout<<"You obtained a Point of "<<coursePoint<<"\n";
	std::cout<<"You obtained a Grade point of "<< courseGradePoint<<"\n";
	std::cout<<"\n";
}

Student::Student(int matno): matricNo(matno){}
Student::~Student(){
}

void Student::setData(stdstring name, int lvl) {
	Name = name;
	Level = lvl;
}

void Student::setDataR(float cmgPoint, float tUnit, float cgpa){
	cumGradePoint = cmgPoint;
 	totalUnit = tUnit;
 	CGPA = cgpa;
}

void Student::getData(){
	std::cout<<"Matric No is "<<matricNo<<"\n";
	std::cout<<matricNo<<" Name is "<<Name<<"\n";
	std::cout<<matricNo<<" is in "<<Level<<" level"<<"\n";
	std::cout<<matricNo<<" has a Cumm grade point of "<<cumGradePoint<<"\n";
	std::cout<<matricNo<<" took a total of "<<totalUnit<< " units"<<"\n";
	std::cout<<matricNo<<" obtained a CGPA of "<<CGPA<<"\n";

}

// other functions
 float sevenPoint(float CS){
 	float CP;
 	if(CS>=70 && CS<101){
		 	CP=7;
	}
	else if(CS>=65 && CS<70){
	 	CP=6;
	}
	else if(CS>=60 && CS<65){
	 	CP=5;
	}
	else if(CS>=55 && CS<60){
	 	CP=4;
	}
	else if(CS>=50 && CS<55){
	 	CP=3;
	}
	else if(CS>=45 && CS<50){
	 	CP=2;
	}
	else if(CS>=40 && CS<45){
	 	CP=1;
	}
	else if(CS>=0 && CS<40){
	 	CP=0;
	}
	else CP = 0;
	return CP;
 }

 float fourPoint(float CS){
 	float CP;
 	if(CS>=70 && CS<101){
		 	CP=4;
	}
	else if(CS>=60 && CS<70){
	 	CP=3;
	}
	else if(CS>=50 && CS<60){
	 	CP=2;
	}
	else if(CS>=45 && CS<50){
	 	CP=1;
	}
	else if(CS>=0 && CS<45){
	 	CP=0;
	}
	else CP = 0;
	return CP;
 }

 float fivePoint(float CS){
 	float CP;
 	if(CS>=70 && CS<101){
		 	CP=5;
	}
	else if(CS>=60 && CS<70){
	 	CP=4;
	}
	else if(CS>=50 && CS<60){
	 	CP=3;
	}
	else if(CS>=45 && CS<50){
	 	CP=2;
	}
	else if(CS>=40 && CS<45){
	 	CP=1;
	}
	else if(CS>=0 && CS<40){
	 	CP=0;
	}
	else CP = 0;
	return CP;
 }
