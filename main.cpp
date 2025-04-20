#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class Student
{

	private:
	std::string firstName;
	std::string lastName;	
	double GPA;
	int GradYear;
	int GradSem;
	int EnrolledY;
	int EnrolledS;
	bool Undergrad;
	bool Grad;
	public:
	
	Student()
	{	
		
		firstName = " ";
		lastName = " ";
		GPA = 0.0;
		GradYear = 0;
		GradSem = 0 ;
		EnrolledY = 0;
		Undergrad = false;
		Grad = false;
	}
	
	void setName(std::string first, std::string last);
	std::string getfirstName();
	std::string getlastName();
	void setGPA(double g);
	double getGPA();
	void setGyear(int gy);
	int getGyear();
	void  setGradSem(int gs);
	int getGradSem();
	void  setEnrolledY(int ey);
	int getEnrolledY();
	void setUndergrad(bool u);
	bool getUndergrad();
	void setGrad(bool g);
	bool getGrad();
	~Student() {} 
	
};
	
void Student::setName(std::string first, std::string last)
{
	firstName = first;
	lastName = last;
}
std::string Student::getfirstName() 
{
	return firstName;
}
std::string Student::getlastName() 
{
        return lastName; 
}
void Student::setGPA(double g)
{
	GPA = g;
}
double Student::getGPA()
{
	return GPA;
}

void Student::setGyear(int gy)
{
	GradYear = gy;
}
int Student::getGyear()
{
	return GradYear;
}

void  Student::setGradSem(int gs)
{
	GradSem = gs;
}
int Student::getGradSem()
{
	return GradSem;
}

void  Student::setEnrolledY(int ey)
{
	EnrolledY = ey;
}
int Student::getEnrolledY()
{
	return EnrolledY;
}
void Student::setUndergrad(bool u) 
{
	Undergrad = u;
}

bool Student::getUndergrad()  
{
	return Undergrad;
}

void Student::setGrad(bool g)
{
	Grad = g;
}

bool Student::getGrad() 
{
	return Grad;
}




class Art_Student : public Student
{
	private:
        std::string art_emphasis;
	

	public:
	Art_Student()
	{		
		art_emphasis = " ";
	}
	
	 ~Art_Student() {} 	
	void setArtEmphasis(std::string emphasis)
	{
        	if (emphasis == "Art Studio" || emphasis == "Art History" || emphasis == "Art Education")
		{
        		art_emphasis = emphasis;
        	} 
		else 
		{
            		std::cout << "Invalid art emphasis." << std::endl;
        	}
    	}
	std::string getArtEmphasis() 
	{
        	return art_emphasis;
	}


};







class Physics_Student : public Student
{
	private:
        std::string concentration;
	

	public: 
	Physics_Student()
	{
        	concentration = " ";
	}

	~Physics_Student() {}
	void setConcentration(std::string c)
	{
        	if (c == "Biophysics" || c == "Earth and Planetary Sciences")
		{
            	concentration = c;
        	} 
		else 
		{
            		std::cout << "Invalid concentration." << std::endl;
       		}
    	}

	std::string getConcentration()
	{
        	return concentration;
    	}




};


int main()
{
    	std::vector<Art_Student*> art_students;
    	std::vector<Physics_Student*> physics_students;
	std::ofstream outFile("student_info.dat");
	
	Art_Student* a1 = new Art_Student;
	a1->setName("Javi", "Ortega");
	a1->setGPA(3.8);
	a1->setGyear(2025);
	a1->setGradSem(1);
	a1->setEnrolledY(2021);
	a1->setUndergrad(true);
	a1->setGrad(false);
	a1->setArtEmphasis("Art Studio");
	art_students.push_back(a1);

	Art_Student* a2 = new Art_Student;
	a2->setName("Maria", "Lopez");
	a2->setGPA(3.4);
	a2->setGyear(2024);
	a2->setGradSem(2);
	a2->setEnrolledY(2020);
	a2->setUndergrad(true);
	a2->setGrad(false);
	a2->setArtEmphasis("Art History");
	art_students.push_back(a2);

	Art_Student* a3 = new Art_Student;
	a3->setName("Noah", "Smith");
	a3->setGPA(3.7);
	a3->setGyear(2023);
	a3->setGradSem(1);
	a3->setEnrolledY(2019);
	a3->setUndergrad(true);
	a3->setGrad(false);
	a3->setArtEmphasis("Art Education");
	art_students.push_back(a3);

	Art_Student* a4 = new Art_Student;
	a4->setName("Lila", "Martinez");
	a4->setGPA(3.6);
	a4->setGyear(2025);
	a4->setGradSem(2);
	a4->setEnrolledY(2021);
	a4->setUndergrad(true);
	a4->setGrad(false);
	a4->setArtEmphasis("Art History");
	art_students.push_back(a4);

	Art_Student* a5 = new Art_Student;
	a5->setName("Omar", "Chen");
	a5->setGPA(3.3);
	a5->setGyear(2026);
	a5->setGradSem(1);
	a5->setEnrolledY(2022);
	a5->setUndergrad(true);
	a5->setGrad(false);
	a5->setArtEmphasis("Art Studio");
	art_students.push_back(a5);

	Physics_Student* p1 = new Physics_Student;
	p1->setName("Alan", "Nguyen");
	p1->setGPA(3.9);
	p1->setGyear(2026);
	p1->setGradSem(1);
	p1->setEnrolledY(2022);
	p1->setUndergrad(false);
	p1->setGrad(true);
	p1->setConcentration("Biophysics");
	physics_students.push_back(p1);

	Physics_Student* p2 = new Physics_Student;
	p2->setName("Sofia", "Garcia");
	p2->setGPA(3.6);
	p2->setGyear(2025);
	p2->setGradSem(2);
	p2->setEnrolledY(2021);
	p2->setUndergrad(false);
	p2->setGrad(true);
	p2->setConcentration("Earth and Planetary Sciences");
	physics_students.push_back(p2);

	Physics_Student* p3 = new Physics_Student;
	p3->setName("Ethan", "Brown");
	p3->setGPA(3.5);
	p3->setGyear(2024);
	p3->setGradSem(1);
	p3->setEnrolledY(2020);
	p3->setUndergrad(false);
	p3->setGrad(true);
	p3->setConcentration("Biophysics");
	physics_students.push_back(p3);

	Physics_Student* p4 = new Physics_Student;
	p4->setName("Chloe", "Davis");
	p4->setGPA(3.7);
	p4->setGyear(2026);
	p4->setGradSem(2);
	p4->setEnrolledY(2022);
	p4->setUndergrad(false);
	p4->setGrad(true);
	p4->setConcentration("Earth and Planetary Sciences");
	physics_students.push_back(p4);

	Physics_Student* p5 = new Physics_Student;
	p5->setName("Leo", "Singh");
	p5->setGPA(3.3);
	p5->setGyear(2023);
	p5->setGradSem(1);
	p5->setEnrolledY(2019);
	p5->setUndergrad(false);
	p5->setGrad(true);
	p5->setConcentration("Biophysics");
	physics_students.push_back(p5);


    	outFile << "=== Art Students ===\n";
    	for (int i = 0; i < art_students.size(); i++)
	{
        	outFile << art_students[i]->getfirstName() << " "
                << art_students[i]->getlastName() << ", GPA: "
                << art_students[i]->getGPA() << ", Grad Year: "
                << art_students[i]->getGyear() << ", Emphasis: "
                << art_students[i]->getArtEmphasis() << "\n";
   	}
 	
	outFile << "\n=== Physics Students ===\n";
    	for (int i = 0; i < physics_students.size(); i++)
    	{
        	outFile << physics_students[i]->getfirstName() << " "
                << physics_students[i]->getlastName() << ", GPA: "
                << physics_students[i]->getGPA() << ", Grad Year: "
                << physics_students[i]->getGyear() << ", Concentration: "
                << physics_students[i]->getConcentration() << "\n";
    	}

    	outFile.close();
	
	for (int i = 0; i < art_students.size(); i++)
    	{
        	delete art_students[i];
    	}

    	for (int i = 0; i < physics_students.size(); i++)
    	{
        	delete physics_students[i];
    	}

    	return 0;
}
