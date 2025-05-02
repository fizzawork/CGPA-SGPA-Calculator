#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include <string>
#include <vector>

using namespace std;

void reg();
void login();
void report();
void calculator();

class teacher{
	private:
		string name,id_no;
		double S1,S2,S3,S4,S5,S6,GP1,GP2,GP3,GP4,GP5,GP6,GP,SGPA;
		
	public:
		void menu();
		void insert();
		void display();
		void modify();
		void deleted();
};

void teacher::menu(){
	menustart:
	int choice;
	char x;
	system("CLS");
	
	cout<<"\t\t\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;
	cout<<"\t\t\t\t@____________________________________ @"<<endl;
	cout<<"\t\t\t\t@|     WELCOME  TO  `F&S PROJECT`    |@"<<endl;
	cout<<"\t\t\t\t@|___________________________________|@"<<endl;
	cout<<"\t\t\t\t@|PRESENTED BY:                      |@"<<endl;
	cout<<"\t\t\t\t@|             SANA KHALID(21K-3421) |@"<<endl;
	cout<<"\t\t\t\t@|             FIZZA RASHID(21K-3390)|@"<<endl;
	cout<<"\t\t\t\t@|___________________________________|@"<<endl;
	cout<<"\t\t\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  "<<endl;
	cout<<endl;
	
	cout<<"\t\t\t\t ---------------------------------- "<<endl;
	cout<<"\t\t\t\t|==================================|"<<endl;
	cout<<"\t\t\t\t|            SGPA REPORT           |"<<endl;
	cout<<"\t\t\t\t|==================================|"<<endl;
	cout<<"\t\t\t\t|          TEACHER'S  MENU         |"<<endl;
	cout<<"\t\t\t\t|==================================|"<<endl;
	cout<<"\t\t\t\t|                                  |"<<endl;
	cout<<"\t\t\t\t|   1)Enter New Data               |"<<endl;
	cout<<"\t\t\t\t|   2)Show Data Record             |"<<endl;
	cout<<"\t\t\t\t|   3)Modify Data                  |"<<endl;
	cout<<"\t\t\t\t|   4)Delete Data                  |"<<endl;
	cout<<"\t\t\t\t|   5)Exit Program                 |"<<endl;
	cout<<"\t\t\t\t|                                  |"<<endl;
	cout<<"\t\t\t\t|==================================|"<<endl;
	cout<<"\t\t\t\t|       F&S SCHOOL PROJECT         |"<<endl;
	cout<<"\t\t\t\t ================================== "<<endl;


	cout<<"\t\t\t\t ================================== "<<endl;
	cout<<"\t\t\t\t|   Enter your choice:             |"<<endl;
	cout<<"\t\t\t\t|      (1/2/3/4/5)                 |"<<endl;
	cout<<"\t\t\t\t ================================== "<<endl;
	cin>>choice;
	
	switch(choice){
	case 1:
		do{
		insert();
	    cout<<"\n\t\t\tAdd another Student's record?(Y/N)";
	    cin>>x;
		}while(x=='y'||x=='Y');
		break;
	
	case 2:
		display();
		break;
		
	case 3:
		modify();
		break;	
		
	case 4:
		deleted();
		break;	
	
	case 5:
		exit(0);
			
	default:
		cout<<"Invalid Choice entered...\nTry again..."<<endl;
	}
	getch();
	goto menustart;
}

void teacher::insert(){
	fstream data;
	system("cls");
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|            SGPA REPORT             |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|       STUDENT'S REPORT CARD        |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t ============================================ "<<endl;
	cout<<"\t\t\t|   Enter Name -->              	          |";
	cin>>name;
	cout<<"\t\t\t|   Enter ID -->                             |";
	cin>>id_no;
	cout<<"\t\t\t|   Enter GradePoints of Subject01(1-10) --> |";
	cin>>S1;
	cout<<"\t\t\t|   Enter GradePoints of Subject02(1-10) --> |";
	cin>>S2;
	cout<<"\t\t\t|   Enter GradePoints of Subject03(1-10) --> |";
	cin>>S3;
	cout<<"\t\t\t|   Enter GradePoints of Subject04(1-10) --> |";
	cin>>S4;
	cout<<"\t\t\t|   Enter GradePoints of Subject05(1-10) --> |";
	cin>>S5;
	cout<<"\t\t\t|   Enter GradePoints of Subject06(1-10) --> |";
	cin>>S6;
	cout<<"\t\t\t ============================================ "<<endl;
	GP1=S1*10;
	GP2=S2*10;
	GP3=S3*10;
	GP4=S4*10;
	GP5=S5*10;
	GP6=S6*10;
	GP=GP1+GP2+GP3+GP4+GP5+GP6;
	SGPA=GP/60;
	cout<<"\t\t\t ================================================ "<<endl;
	cout<<"\t\t\t|      DATA RECORDED SUCCESSFULLY.......         |\n";
	cout<<"\t\t\t ================================================ "<<endl;
	data.open("studentRecord.txt", ios::app | ios::out);
	data<<"\nName:  "<<name<<"\nStudent ID: "<<id_no<<"\nGP-01:\t"<<S1<<"\nGP-02:\t"<<S2<<"\nGP-03:\t"<<S3<<"\nGP-04:\t"<<S4<<"\nGP-05:\t"<<S5<<"\nGP-06:\t"<<S6<<"\nSGPA:\t"<<SGPA<<"\n";
	data.close();
}

void teacher::display(){
	fstream data;
	system("cls");
	int total=0;
	
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|            SGPA REPORT             |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|       STUDENT'S REPORT CARD        |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|           DISPLAY DATA             |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<endl;
	cout<<endl;
	
	data.open("studentRecord.txt", ios::in | ios::trunc);

	if(!data){
		cout<<"\t\t\tNo Data is recorded yet!"<<endl;
		data.close();
	}
	else{
		data >> name >> id_no >> S1 >> S2 >> S3 >> S4 >> S5 >> S6;
		
		while(!data.eof()){
			cout<<"\n\n\t\t\tStudent No. ->"<<++total;	
			cout<<"\n\t\t\tStudent Name ->"<<name;
			cout<<"\n\t\t\tStudent ID ->"<<id_no;
			cout<<"\n\t\t\tGP of Subject 01 ->"<<S1;
			cout<<"\n\t\t\tGP of Subject 02 ->"<<S2;
			cout<<"\n\t\t\tGP of Subject 03 ->"<<S3;
			cout<<"\n\t\t\tGP of Subject 04 ->"<<S4;
			cout<<"\n\t\t\tGP of Subject 05 ->"<<S5;
			cout<<"\n\t\t\tGP of Subject 06 ->"<<S6;
			cout<<"\n\t\t\tSGPA ->"<<SGPA<<endl;
			data >> name >> id_no >> S1 >> S2 >> S3 >> S4 >> S5 >> S6;
			data.close();	
		}
		
		if(total==0){
			cout<<"\t\t\t No Data Present!"<<endl;
			data.close();	
		}	
	}
	
}

void teacher::modify(){
	fstream data,data1;
	system("cls");
	string r_no;
	int found=0;
	
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|            SGPA REPORT             |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|       STUDENT'S REPORT CARD        |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|           MODIFY DATA              |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<endl;
	cout<<endl;
	
	data.open("studentRecord.txt", ios::in);
	if(!data){
		cout<<"\t\t\tNo Data is recorded yet!"<<endl;
		data.close();
	}
	
	else{
		cout<<"Enter the Roll number which is to be modified: ";
		cin>>r_no;
		data1.open("Record.txt", ios::app | ios::out);
		data >> name >> id_no >> S1 >> S2 >> S3 >> S4 >> S5 >> S6;
		
		while(!data.eof()){
			if(r_no!=id_no){
			data1<<"\nName:  "<<name<<"\nStudent ID: "<<id_no<<"\nGP-01:\t"<<S1<<"\nGP-02:\t"<<S2<<"\nGP-03:\t"<<S3<<"\nGP-04:\t"<<S4<<"\nGP-05:\t"<<S5<<"\nGP-06:\t"<<S6<<"\nSGPA:\t"<<SGPA<<"\n";	
			}
			
		else{
			cout<<"\t\t\t ============================================ "<<endl;
			cout<<"\t\t\t|   Enter Name -->              	          |";
			cin>>name;
			cout<<"\t\t\t|   Enter ID -->                             |";
			cin>>id_no;
			cout<<"\t\t\t|   Enter GradePoints of Subject01(1-10) --> |";
			cin>>S1;
			cout<<"\t\t\t|   Enter GradePoints of Subject02(1-10) --> |";
			cin>>S2;
			cout<<"\t\t\t|   Enter GradePoints of Subject03(1-10) --> |";
			cin>>S3;
			cout<<"\t\t\t|   Enter GradePoints of Subject04(1-10) --> |";
			cin>>S4;
			cout<<"\t\t\t|   Enter GradePoints of Subject05(1-10) --> |";
			cin>>S5;
			cout<<"\t\t\t|   Enter GradePoints of Subject06(1-10) --> |";
			cin>>S6;
			cout<<"\t\t\t ============================================ "<<endl;
			
			data1<<"\nName:  "<<name<<"\nStudent ID: "<<id_no<<"\nGP-01:\t"<<S1<<"\nGP-02:\t"<<S2<<"\nGP-03:\t"<<S3<<"\nGP-04:\t"<<S4<<"\nGP-05:\t"<<S5<<"\nGP-06:\t"<<S6<<"\nSGPA:\t"<<SGPA<<"\n";
			found++;
			}
		data >> name >> id_no >> S1 >> S2 >> S3 >> S4 >> S5 >> S6;	
		
		if(found==0){
			cout<<"\n\n\t\t\tSTUDENT ROLL.NO NOT FOUND!"<<endl;
		}
		data1.close();
		data.close();
		remove("studentRecord.txt");
		rename("Record.txt","studentRecord.txt");
		}
	}
}
	

void teacher::deleted(){
	fstream data,data1;
	system("cls");
	string rollno;
	int found=0;
	
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|            SGPA REPORT             |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|       STUDENT'S REPORT CARD        |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|           DELETE DATA              |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<endl;
	cout<<endl;
	
	data.open("studentRecord.txt", ios::in);
	if(!data){
		cout<<"\t\t\tNo Data found!"<<endl;
	}
	else{
		cout<<"Enter ID number to be deleted :";
		cin>>rollno;
		data1.open("Record.txt",ios::out);
		data >> name >> id_no >> S1 >> S2 >> S3 >> S4 >> S5 >> S6;	
		
		while(!data.eof()){
			if(rollno!=id_no){
				data1<<"\nName:  "<<name<<"\nStudent ID: "<<id_no<<"\nGP-01:\t"<<S1<<"\nGP-02:\t"<<S2<<"\nGP-03:\t"<<S3<<"\nGP-04:\t"<<S4<<"\nGP-05:\t"<<S5<<"\nGP-06:\t"<<S6<<"\nSGPA:\t"<<SGPA<<"\n";
				}
			else{
			    found++;
				cout<<"\t\t\tData deleted successfully........."<<endl;	
				}
			
		data >> name >> id_no >> S1 >> S2 >> S3 >> S4 >> S5 >> S6;	
			}
		if(found==0){
			cout<<"\t\t\tNo related ID number found!"<<endl;
		}				
		data1.close();
		data.close();
		remove("studentRecord.txt");
		rename("Record.txt","studentRecord.txt");
		}
}




//-----------------------------------------------------------------------------------------------------------------------------------------------//



class student{
	private:
		string name,id_no;
		double S1,S2,S3,S4,S5,S6,GP1,GP2,GP3,GP4,GP5,GP6,GP,SGPA;
		
	public:
		void menu();
		void search();
};

void student::menu(){
	menustart:
	int choice;
	char x;
	system("CLS");
	
	cout<<"\t\t\t\t ___________________________________ "<<endl;
	cout<<"\t\t\t\t|     WELCOME  TO  `F&S PROJECT`    |"<<endl;
	cout<<"\t\t\t\t|___________________________________| "<<endl;
	cout<<"\t\t\t\t|PRESENTED BY:                      |"<<endl;
	cout<<"\t\t\t\t|             SANA KHALID(21K-3421) |"<<endl;
	cout<<"\t\t\t\t|             FIZZA RASHID(21K-3390)|"<<endl;
	cout<<"\t\t\t\t|___________________________________|"<<endl;
	cout<<endl;
	
	cout<<"\t\t\t\t ---------------------------------- "<<endl;
	cout<<"\t\t\t\t|==================================|"<<endl;
	cout<<"\t\t\t\t| STUDENT MARKS MANAGEMENT SYSTEM  |"<<endl;
	cout<<"\t\t\t\t|==================================|"<<endl;
	cout<<"\t\t\t\t|         STUDENT'S MENU           |"<<endl;
	cout<<"\t\t\t\t|==================================|"<<endl;
	cout<<"\t\t\t\t|                                  |"<<endl;
	cout<<"\t\t\t\t|   1)Search Marks                 |"<<endl;
	cout<<"\t\t\t\t|   2)Exit Program                 |"<<endl;
	cout<<"\t\t\t\t|                                  |"<<endl;
	cout<<"\t\t\t\t|==================================|"<<endl;
	cout<<"\t\t\t\t|       F&S SCHOOL PROJECT         |"<<endl;
	cout<<"\t\t\t\t ================================== "<<endl;


	cout<<"\t\t\t\t ================================== "<<endl;
	cout<<"\t\t\t\t|   Enter your choice:             |"<<endl;
	cout<<"\t\t\t\t|            (1/2)                 |"<<endl;
	cout<<"\t\t\t\t ================================== "<<endl;
	cin>>choice;
	
	switch(choice){
		
	case 1:
		search();
		break;	
		
	case 2:
		exit(0);
			
	default:
		cout<<"Invalid Choice entered.Try again!"<<endl;
	}
	getch();
	goto menustart;
}


	
void student::search(){
	fstream data;
	int found=0;
	system("cls");
	
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|            SGPA REPORT             |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|       STUDENT'S REPORT CARD        |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<"\t\t\t|           SEARCH DATA              |"<<endl;
	cout<<"\t\t\t ==================================== "<<endl;
	cout<<endl;
	cout<<endl;
	
	data.open("studentRecord.txt", ios::in);
	if(!data){
		cout<<"\t\t\tNo related Data found!"<<endl;
	}
	else{
		string rollno;
		cout<<"Enter ID number to be searched :";
		cin>>rollno;
		data >> name >> id_no >> S1 >> S2 >> S3 >> S4 >> S5 >> S6;
		
		while(!data.eof()){
			if(rollno==id_no){
			cout<<"\n\t\t\tStudent Name ->"<<name;
			cout<<"\n\t\t\tStudent ID ->"<<id_no;
			cout<<"\n\t\t\tGP of Subject 01 ->"<<S1;
			cout<<"\n\t\t\tGP of Subject 02 ->"<<S2;
			cout<<"\n\t\t\tGP of Subject 03 ->"<<S3;
			cout<<"\n\t\t\tGP of Subject 04 ->"<<S4;
			cout<<"\n\t\t\tGP of Subject 05 ->"<<S5;
			cout<<"\n\t\t\tGP of Subject 06 ->"<<S6;
			cout<<"\n\t\t\tSGPA ->"<<SGPA<<endl;
				found++;
			}
		data >> name >> id_no >> S1 >> S2 >> S3 >> S4 >> S5 >> S6;
		}
	if(found==0){
		cout<<"\t\t\tID number not found!"<<endl;
		}
	data.close();
	}	
}


//-----------------------------------------------------------------------------------------------------------------------------------------------//


class Cgpa
{
protected:
	double gpa;
	double cgpa;
	int coursenumber;
	vector<double>courseunit;//for various course unit
	vector<double>gradeequivalent;//point equivalent to the grade
	vector<double>unitsum;//sums the total unit
	vector<double>gradevsunit;//multiplies grade and unit
	vector<double>sumgradevsunit;//sum of the grade and unit multiplied

public:
	Cgpa();
	Cgpa(double cnumber) :
		coursenumber(cnumber), courseunit(cnumber), gradeequivalent(cnumber),
		unitsum(cnumber), gradevsunit(cnumber), sumgradevsunit(cnumber){}
	void getunit();
	void getgrade();
	double dounitsum();
	void multiplygradeunit();
	double dosumgradevsunit();
	double dogpa(int Tpoint, int Tunit);
	double docgpa(int T, int P);
	void grading(int Tp, int Tu);
	void gradecgpa(int U, int G);
	void gradeinfo();//displays the point equivalent to the user

};

class Fourpoint : public Cgpa//derived class for 4.0 grading system
{
public:
	Fourpoint(int cnumber) :Cgpa(cnumber){}
	void gradeinfo4();
	void grading4(int a, int b);
	void grading4b(int a, int b);

private:
	double gpa4;
	double cgpa4;

};

class Sevenpoint : public Cgpa//derived class for 7.0 grading system
{
public:
	Sevenpoint(int cnumber) :Cgpa(cnumber){}
	void gradeinfo7();
	void grading7(int a, int b);
	void grading7b(int c, int d);
private:
	double gpa7;
	double cgpa7;

};
//class Implementations
void Cgpa::getunit()
{
	for (int i = 0; i<coursenumber; i++)
	{
		cout << "Input the credit hours for course " << i + 1 << ": ";
		cin >> courseunit[i];
	}
}
void Cgpa::gradeinfo()
{
	cout << "Enter the point equivalent to the grade scored i.e A is 5 B is 4, C is 3, D is 2, E is 1, F is 1\n";
}
void Cgpa::getgrade()
{

	for (int i = 0; i<coursenumber; i++)
	{
		cout << "Input the gradeequivalent for course " << i + 1 << ": ";
		cin >> gradeequivalent[i];
	}
}

double Cgpa::dounitsum()
{
	int sumunit = 0;
	for (int i = 0; i<coursenumber; i++)
	{
		sumunit = sumunit + courseunit[i];
	}
	return sumunit;
}
void Cgpa::multiplygradeunit()
{
	for (int i = 0; i<coursenumber; i++)
	{
		gradevsunit[i] = courseunit[i] * gradeequivalent[i];
	}
}
double Cgpa::dosumgradevsunit()
{
	int sumgradeAndUnit = 0;
	for (int i = 0; i<coursenumber; i++)
	{
		sumgradeAndUnit = sumgradeAndUnit + gradevsunit[i];
	}
	return sumgradeAndUnit;
}
double Cgpa::dogpa(int Tpoint, int Tunit)
{
	return Tpoint / static_cast<double>(Tunit);
}
double Cgpa::docgpa(int T, int P)
{
	return T / static_cast<double>(P);
}
void Cgpa::grading(int Tp, int Tu)
{
	gpa = dogpa(Tp, Tu);
	if (gpa >= 4.5)
	{
		cout << "\nYour GPA is " << gpa << " which corresponds to the FIRST CLASS division\n What an exellent performance! Keep it up." << endl;
	}
	else if (gpa >= 3.5 && gpa < 4.50)
	{
		cout << "\nYour GPA is " << gpa << " which corresponds to the SECOND CLASS UPPER division\n That's a good performance, just some points away from first class. Strive harder next time" << endl;
	}
	else if (gpa >= 2.5 && gpa < 3.5)
	{
		cout << "\nYour GPA is " << gpa << " which corresponds to the SECOND CLASS LOWER division\n You can still do better, just some points away from second class upper. Strive harder next time" << endl;
	}
	else if (gpa >= 1.5 && gpa < 2.5)
	{
		cout << "\nYour GPA is " << gpa << " which corresponds to the THIRD CLASS division\n You are born to be great. Double your hustle to be in the class you belong to. You can always do better\n";
	}
	else
	{
		cout << "\nYour GPA is" << gpa << " which corresponds to the PASS category\n Being in this category does not imply that you are so poor academically, it only gives you a challenge of life which you must face. Sit yourself down and think of the best way(s) possible to sort things out, if possible, try to talk to the experienced ones or probably meet a coucellor\n Wish you best of luck!" << endl;

	}
}
void Cgpa::gradecgpa(int U, int G)
{
	cgpa = docgpa(U, G);
	if (cgpa >= 4.5)
	{
		cout << "\nYour CGPA is " << cgpa << " which corresponds to the FIRST CLASS division \n What an exellent performance! Keep it up. " << endl;
	}
	else if (cgpa >= 3.5 && cgpa < 4.50)
	{
		cout << "\nYour CGPA is " << cgpa << " which corresponds to the SECOND CLASS UPPER division\n That's a good performance, just some points away from first class. Strive harder next time " << endl;
	}
	else if (cgpa >= 2.5 && cgpa < 3.5)
	{
		cout << "\nYour CGPA is " << cgpa << " which corresponds to the SECOND CLASS LOWER division\n You can still do better, just some points away from second class upper. Strive harder next time " << endl;
	}
	else if (cgpa >= 1.5 && cgpa < 2.5)
	{
		cout << "\nYour CGPA is " << cgpa << " which corresponds to the THIRD CLASS division\n You are born to be great. Double your hustle to be in the class you belong to. You can always do better \n";
	}
	else
	{
		cout << "\nYour CGPA is" << cgpa << " which corresponds to the PASS category\n Being in this category does not imply that you are so poor academically, it only gives you a challenge of life which you must face. Sit yourself down and think of the best way(s) possible to sort things out, if possible, try to talk to the experienced ones or probably meet a coucellor\n Wish you best of luck! " << endl;

	}
}

void Fourpoint::gradeinfo4()
{
	cout << "Enter the point equivalent to the grade scored i.e A is 4.0,B is 3.5,c is 3.0, etc.\n";
}
void Fourpoint::grading4(int a, int b)
{
	gpa4 = dogpa(a, b);
	if (gpa4 >= 3.5)
	{
		cout << "Your GPA is " << gpa4 << "which corresponds to DISTINCTION\n What an exellent performance! Keep it up. ";
	}
	else if (gpa4 >= 3.0 && gpa4 <= 3.49)
	{
		cout << "Your GPA is " << gpa4 << " which corresponds to the UPPER CREDIT division\n That's a good performance, just some points away from distinction. Strive harder next time\n";
	}
	else if (gpa4 >= 2.5 && gpa4 <= 2.99)
	{
		cout << "Your GPA is " << gpa4 << " which corresponds to the LOWER CREDIT division\n You can still do better, just some points away from upper credit. Strive harder next time\n";
	}
	else if (gpa4 >= 2.00 && gpa4 <= 2.49)
	{
		cout << "Your GPA is " << gpa4 << " which corresponds to PASS\n You are born to be great. Double your hustle to be in the class you belong to. You can always do better \n";
	}
	else
	{
		cout << "Your GPA is " << gpa4 << " which corresponds to FAIL\n Being in this category does not imply that you are so poor academically, it only gives you a challenge of life which you must face. Sit yourself down and think of the best way(s) possible to sort things out, if possible, try to talk to the experienced ones or probably meet a coucellor\n Wish you best of luck! \n";
	}


}
void Fourpoint::grading4b(int a, int b)
{
	cgpa4 = dogpa(a, b);
	if (cgpa4 >= 3.5)
	{
		cout << "Your CGPA is " << cgpa4 << "which corresponds to DISTINCTION\n What an exellent performance! Keep it up. ";
	}
	else if (cgpa4 >= 3.0 && cgpa4 <= 3.49)
	{
		cout << "Your CGPA is " << cgpa4 << " which corresponds to the UPPER CREDIT division\n That's a good performance, just some points away from distiction. Strive harder next time\n";
	}
	else if (cgpa4 >= 2.5 && cgpa4 <= 2.99)
	{
		cout << "Your CGPA is " << cgpa4 << " which corresponds to the LOWER CREDIT division\n You can still do better, just some points away from upper credit. Strive harder next time \n";
	}
	else if (cgpa4 >= 2.00 && cgpa4 <= 2.49)
	{
		cout << "Your CGPA is " << cgpa4 << " which corresponds to PASS\n You are born to be great. Double your hustle to be in the class you belong to. You can always do better \n";
	}
	else
	{
		cout << "Your CGPA is " << cgpa4 << " which corresponds to FAIL\n Being in this category does not imply that you are so poor academically, it only gives you a challenge of life which you must face. Sit yourself down and think of the best way(s) possible to sort things out, if possible, try to talk to the experienced ones or probably meet a coucellor\n Wish you best of luck! \n";
	}
}
void Sevenpoint::gradeinfo7()
{
	cout << "Enter the point equivalent to the grade scored i.e A is 7.0,B 3.5,B 6.0,C 5,D 4/3, E 2/1 F 0 \n";
}
void Sevenpoint::grading7(int a, int b)
{
	gpa7 = dogpa(a, b);
	if (gpa7 >= 6)
	{
		cout << "\nYour GPA is " << gpa7 << " which corresponds to the FIRST CLASS division\n What an exellent performance! Keep it up. " << endl;
	}
	else if (gpa7 >= 4.6 && gpa7 <= 5.99)
	{
		cout << "\nYour GPA is " << gpa7 << " which corresponds to the SECOND CLASS UPPER division\n That's a good performance, just some points away from first class. Strive harder next time" << endl;
	}
	else if (gpa7 >= 2.6 && gpa7 <= 4.59)
	{
		cout << "\nYour GPA is " << gpa7 << " which corresponds to the SECOND CLASS LOWER division\n You can still do better, just some points away from second class upper. Strive harder next time " << endl;
	}
	else if (gpa7 >= 1.6 && gpa7 <= 2.59)
	{
		cout << "\nYour GPA is " << gpa7 << " which corresponds to the THIRD CLASS division\n You are born to be great. Double your hustle to be in the class you belong to. You can always do better \n";
	}
	else
	{
		cout << "\nYour GPA is" << gpa7 << " which corresponds to the PASS category\n Being in this category does not imply that you are so poor academically, it only gives you a challenge of life which you must face. Sit yourself down and think of the best way(s) possible to sort things out, if possible, try to talk to the experienced ones or probably meet a coucellor\n Wish you best of luck! " << endl;

	}
}
void Sevenpoint::grading7b(int c, int d)
{
	cgpa7 = dogpa(c, d);
	if (cgpa7 >= 6)
	{
		cout << "\nYour CGPA is " << cgpa7 << " which corresponds to the FIRST CLASS division\n What an exellent performance! Keep it up. " << endl;
	}
	else if (cgpa7 >= 4.6 && cgpa7 <= 5.99)
	{
		cout << "\nYour CGPA is " << cgpa7 << " which corresponds to the SECOND CLASS UPPER division\n That's a good performance, just some points away from first class. Strive harder next time" << endl;
	}
	else if (cgpa7 >= 2.6 && cgpa7 <= 4.59)
	{
		cout << "\nYour CGPA is " << cgpa7 << " which corresponds to the SECOND CLASS LOWER division\n You can still do better, just some points away from second class upper. Strive harder next time " << endl;
	}
	else if (cgpa7 >= 1.6 && cgpa7 <= 2.59)
	{
		cout << "\nYour CGPA is " << cgpa7 << " which corresponds to the THIRD CLASS division\n You are born to be great. Double your hustle to be in the class you belong to. You can always do better \n";
	}
	else
	{
		cout << "\nYour CGPA is" << cgpa7 << " which corresponds to the PASS category\n Being in this category does not imply that you are so poor academically, it only gives you a challenge of life which you must face. Sit yourself down and think of the best way(s) possible to sort things out, if possible, try to talk to the experienced ones or probably meet a coucellor\n Wish you best of luck! " << endl;

	}
}

int main(){
	fstream regster;
	system("cls");
	
	//----------MAIN MENU------------------//
	int ch;
	menu:
	cout<<"\t\t\t ____________________________________________ "<<endl;
	cout<<"\t\t\t|                   MENU                     |"<<endl;
	cout<<"\t\t\t|____________________________________________|"<<endl;
	cout<<"\t\t\t|1)Teacher's Registration.                   |"<<endl;
	cout<<"\t\t\t|2)Teacher's Login.                          |"<<endl;
	cout<<"\t\t\t|3)Student's Semester Report view.           |"<<endl;
	cout<<"\t\t\t|4)CGPA calculator(For student's ease only). |"<<endl;
	cout<<"\t\t\t|5)Exit the program.                         |"<<endl;
	cout<<"\t\t\t|____________________________________________|"<<endl;
	
	cout<<endl<<endl;
	
	cout<<"\t\t\tEnter your choice(i.e:1/2/3/4/5):";
	cin>>ch;
	
	switch(ch){
		case 1:
			reg();
			break;
		case 2:
			login();
			break;
		case 3:
			report();
			break;
		case 4:
			calculator();
		case 5:
			exit(0);
		default:
			cout<<"Irrelevant choice entered........\nTry Again......"<<endl;
	}
	getch();
	goto menu;
}




//======================  FUNCTION DEFINITIONS  ========================//
//======================================================================//
//======================================================================//
//======================================================================//


void reg(){
	fstream regster;
	system("cls");
	string r_user,r_pass;
	cout<<"\t\t ___________________________"<<endl;
	cout<<"\t\t|Enter the username:-       |";
	cin>>r_user;
	cout<<"\t\t|___________________________|"<<endl;
	cout<<"\t\t ___________________________ "<<endl;
	cout<<"\t\t|Enter the password:-       |";
	cin>>r_pass;
	cout<<"\t\t|___________________________|"<<endl;
	
	regster.open("database.txt",ios::app | ios::out);
	
	regster<<"\n\nUsername:  "<<r_user<<"\nPassword:  "<<r_pass<<endl;
	regster.close();
	cout<<"\t\t _______________________________"<<endl;
	cout<<"\t\t|Registered successfully........|"<<endl;
	cout<<"\t\t|_______________________________|"<<endl;
	getch();
	main();
	
}	




//======================================================================//



void login(){
	fstream input;
	system("cls");
	my:
	int flag=0;
	char retry;
	string user,pass,u,p;
	cout<<"\t\t ___________________________"<<endl;
	cout<<"\t\t|Enter the username:-       |";
	cin>>user;
	cout<<"\t\t|___________________________|"<<endl;
	
	cout<<"\t\t ___________________________ "<<endl;
	cout<<"\t\t|Enter the password:-       |";
	cin>>pass;
	cout<<"\t\t|___________________________|"<<endl;
	
	input.open("database.txt", ios::in);
	
	while(input>>u>>p){
	if(u==user && p==pass){
		flag++;
	}
	}
	
	input.close();
	
	if(flag==1){
		cout<<"\t\t _______________________________"<<endl;
		cout<<"\t\t|Logged In  successfully........|"<<endl;
		cout<<"\t\t|_______________________________|"<<endl;
		teacher t;
		t.menu();
	   }	 
	else{
		cout<<"\n\n\t\tIncorrect Username/Password......\n\t\t\tRetry to log In!"<<endl;
		cout<<"\t-----------------------------------------------------------\n"<<endl;
		
		cout<<"==> Do you want to Re-try? Press 'y/Y' else 'n/N':";
		cin>>retry;
		if(retry=='y' || retry=='Y'){
			goto my;
		}
		else{
			getch();
			main();
		}
		

	}   
}
	
	


//======================================================================//



void report(){
	system("cls");
	student s;
	s.menu();
	main();
}


//======================================================================//

void calculator(){
	system("cls");
	cout.setf(ios::fixed); //setting the
	cout.setf(ios::showpoint); //points to come
	cout.precision(2); //after decimal
	int n, a;//represents the call to constructor n
	double Totalunit, Gradevsunit;
	char ans;
	double grade;
	cout << "-------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\t\t\t ~~~~~~~~~~~~~~CGPA CALCULATOR~~~~~~~~~~~~~~\n";
	cout << "\t\t\t'OBJECTIVE:-Designed to calculate your gpa/cgpa effectively'.\n\n";
	cout << "\t\t\tWISH YOU BEST LUCK AS YOU CALCULATE!\n";
	cout<<endl<<endl;
	cout << "\t\tAre you calculating your GPA or CGPA?\n\n\t\t{'GPA' is just a semester result while 'CGPA' is a sessional result}.\n\n----Input (a) for GPA AND (b) for CGPA----\n\n";
	cin >> ans;
	cout << "What's your school's grading system? [i.e:- 4.0,5.0 or 7.0]\n";
	cin >> grade;

	if (ans == 'a' && grade == 5.0)
	{
		cout << "Enter the total number of courses offered for the semester\n";
		cin >> n;

		Cgpa semester(n);
		semester.getunit();
		semester.gradeinfo();
		semester.getgrade();
		Totalunit = semester.dounitsum();
		semester.multiplygradeunit();
		Gradevsunit = semester.dosumgradevsunit();
		semester.dogpa(Gradevsunit, Totalunit);
		semester.grading(Gradevsunit, Totalunit);
	}
	else if (ans == 'b' && grade == 5.0)
	{
		cout << " INPUT FOR FIRST SEMESTER\n";
		cout << "Enter the total number of courses offered in first semester\n";
		cin >> n;
		Cgpa semester1(n);
		semester1.getunit();
		semester1.gradeinfo();
		semester1.getgrade();
		double Totalunit1 = semester1.dounitsum();
		semester1.multiplygradeunit();
		double Gradevsunit1 = semester1.dosumgradevsunit();
		double gpa = semester1.dogpa(Gradevsunit1, Totalunit1);
		cout << "\nYour gpa for first semester is " << gpa << endl;

		cout << " INPUT FOR SECOND SEMESTER\n";
		cout << "Enter the total number of courses offered in second semester\n";
		cin >> a;
		Cgpa sessional(a);
		sessional.getunit();
		sessional.getgrade();
		double Totalunit2 = sessional.dounitsum();
		sessional.multiplygradeunit();
		double Gradevsunit2 = sessional.dosumgradevsunit();
		double gpa2 = sessional.dogpa(Gradevsunit2, Totalunit2);
		cout << "\nYour gpa for second semester is " << gpa2 << endl;

		double Unit = Totalunit1 + Totalunit2;
		double Grade = Gradevsunit1 + Gradevsunit2;
		double cgpa = sessional.docgpa(Unit, Grade);
		sessional.gradecgpa(Grade, Unit);



	}
	else if (ans == 'a' && grade == 4.0)
	{
		int b;
		cout << "Enter the total number of courses offered for the semester\n";
		cin >> b;
		Fourpoint gpa4(b);
		gpa4.getunit();
		gpa4.gradeinfo4();
		gpa4.getgrade();
		Totalunit = gpa4.dounitsum();
		gpa4.multiplygradeunit();
		Gradevsunit = gpa4.dosumgradevsunit();
		gpa4.dogpa(Gradevsunit, Totalunit);
		gpa4.grading4(Gradevsunit, Totalunit);

	}
	else if (ans == 'b' && grade == 4.0)
	{
		cout << " INPUT FOR FIRST SEMESTER\n";
		cout << "Enter the total number of courses offered in first semester\n";
		cin >> n;
		Fourpoint gpa41(n);
		gpa41.getunit();
		gpa41.gradeinfo4();
		gpa41.getgrade();
		double Totalunit41 = gpa41.dounitsum();
		gpa41.multiplygradeunit();
		double Gradevsunit41 = gpa41.dosumgradevsunit();
		double gpa41a = gpa41.dogpa(Gradevsunit41, Totalunit41);
		cout << "\nYour GPA for first semester is " << gpa41a << endl;

		cout << " INPUT FOR SECOND SEMESTER\n";
		cout << "Enter the total number of courses offered in second semester\n";
		cin >> n;
		Fourpoint gpa42(n);
		gpa42.getunit();
		gpa42.gradeinfo4();
		gpa42.getgrade();
		double Totalunit42 = gpa42.dounitsum();
		gpa42.multiplygradeunit();
		double Gradevsunit42 = gpa42.dosumgradevsunit();
		double gpa42a = gpa42.dogpa(Gradevsunit42, Totalunit42);

		cout << "\nYour GPA for second semester is " << gpa42a << endl;

		double Unit4 = Totalunit41 + Totalunit42;
		double Grade4 = Gradevsunit41 + Gradevsunit42;
		gpa42.grading4b(Grade4, Unit4);


	}
	else if (ans == 'a' && grade == 7.0)
	{
		cout << "Enter the total number of courses offered for the semester\n";
		cin >> n;
		Sevenpoint gpa7(n);
		gpa7.getunit();
		gpa7.gradeinfo7();
		gpa7.getgrade();
		Totalunit = gpa7.dounitsum();
		gpa7.multiplygradeunit();
		Gradevsunit = gpa7.dosumgradevsunit();
		gpa7.dogpa(Gradevsunit, Totalunit);
		gpa7.grading7(Gradevsunit, Totalunit);
	}

	else if (ans == 'b' && grade == 7.0)
	{
		cout << " INPUT FOR FIRST SEMESTER\n";
		cout << "Enter the total number of courses offered in first semester\n";
		cin >> n;
		Sevenpoint gpa71(n);
		gpa71.getunit();
		gpa71.gradeinfo7();
		gpa71.getgrade();
		double Totalunit71 = gpa71.dounitsum();
		gpa71.multiplygradeunit();
		double Gradevsunit71 = gpa71.dosumgradevsunit();
		double gpa71a = gpa71.dogpa(Gradevsunit71, Totalunit71);
		cout << "\nYour GPA for first semester is " << gpa71a << endl;

		cout << " INPUT FOR SECOND SEMESTER\n";
		cout << "Enter the total number of courses offered in second semester\n";
		cin >> n;
		Sevenpoint gpa72(n);
		gpa72.getunit();
		gpa72.gradeinfo7();
		gpa72.getgrade();
		double Totalunit72 = gpa72.dounitsum();
		gpa72.multiplygradeunit();
		double Gradevsunit72 = gpa72.dosumgradevsunit();
		double gpa72a = gpa72.dogpa(Gradevsunit72, Totalunit72);

		cout << "\nYour GPA for second semester is " << gpa72a << endl;

		double Unit7 = Totalunit71 + Totalunit72;
		double Grade7 = Gradevsunit71 + Gradevsunit72;
		gpa72.grading7b(Grade7, Unit7);
	}
	else
	{
		cout << "\nEither the grading system or input for cgpa/gpa is wrong. Return the program";
		exit(1);
	}
	system("pause");
}

//--------------------------------------------------------------------------------------------------------------------------------------------------//
