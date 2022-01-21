#include <iostream>

using namespace std;

// Structures

struct store_Address {

string Hno_StreetName;

string CTY;

string STATE;

string ZIP_CODE;

};

struct store_Date {

int YEAR;

int MONTH;

int DAY;

};

// Class to store student data

class studentINFO {

private:

string name;

int ID;

store_Date dob;

store_Address address;

int credits;

double GPA;

public:

// default constrcutor

studentINFO() {

name = "";

ID = 0;

dob.DAY = 0;

dob.MONTH = 0;

dob.YEAR = 0;

address.Hno_StreetName = "";

address.CTY = "";

address.STATE = "";

address.ZIP_CODE = "";

credits = 0;

GPA = 0.0;

}

// Parametarised constructor

studentINFO(string name, int ID, int DAY, int MONTH, int YEAR, string Hno_StreetName, string CTY, string STATE, string ZIP_CODE, int credits, double GPA) {

this -> name = name;

this -> ID = ID;

dob.DAY = DAY;

dob.MONTH = MONTH;

dob.YEAR = YEAR;

address.Hno_StreetName = Hno_StreetName;

address.CTY = CTY;

address.STATE = STATE;

address.ZIP_CODE = ZIP_CODE;

this -> credits = credits;

this -> GPA = GPA;

}

void setName(string x) {

name = x;

}

void setID(int x) {

ID = x;

}

void setDOB(int DAY, int MONTH, int YEAR) {

dob.DAY = DAY;

dob.MONTH = MONTH;

dob.YEAR = YEAR;

}

void setAdress(string Hno_StreetName, string CTY, string STATE, string ZIP_CODE) {

address.Hno_StreetName = Hno_StreetName;

address.CTY = CTY;

address.STATE = STATE;

address.ZIP_CODE = ZIP_CODE;

}

void setcredits(int x) {

credits = x;

}

void setGPA(double x) {

GPA = x;

}

double getGPA() {

return GPA;

}

int getcredits() {

return credits;

}

store_Address getAdress() {

return address;

}

store_Date getDOB() {

return dob;

}

int getID() {

return ID;

}

// This function is defined outside this class.

string getName();

};

string studentINFO::getName() {

return name;

}

int main() {

string name, hno_street, city, state, zip;

int ID, day, month, year, credits;

double gpa;

cout << "Enter student-1 Information: " << endl;

cout << "------------------------------------------\n";

cout << "Enter Student Name: ";

getline(cin >> ws, name);

cout << "Enter Student ID: ";

cin >> ID;

cout << "\nEnter Student Date of birth: " << endl;

cout << "Enter Day(1-30): ";

cin >> day;

cout << "Enter Month(1-12): ";

cin >> month;

cout << "Enter YEAR(xxxx): ";

cin >> year;

cout << "\nEnter Student address: " << endl;

cout << "Enter house number and street Name: ";

getline(cin >> ws, hno_street);

cout << "Enter City: ";

getline(cin, city);

cout << "Enter state: ";

getline(cin, state);

cout << "Enter zip code: ";

getline(cin, zip);

cout << "\nEnter total credits earned: ";

cin >> credits;

cout << "Enter GPA: ";

cin >> gpa;

// Create an object of student_INFO class using parametrasied constructor

studentINFO student1(name, ID, day, month, year, hno_street, city, state, zip, credits, gpa);

cout << "\n\nStudent 1 Information is as follows:" << endl;

cout << "------------------------------------------\n";

cout << "Name: " << student1.getName() << endl;

store_Date dob1;

dob1 = student1.getDOB();

cout << "DOB: " << dob1.DAY << " / " << dob1.MONTH << " / " << dob1.YEAR << endl;

store_Address address1;

address1 = student1.getAdress();

cout << "Address: " << address1.Hno_StreetName << ", " << address1.CTY << ", " << address1.STATE << ", " << address1.ZIP_CODE << endl;

cout << "Total credit earned : " << student1.getcredits() << endl;

cout << "GPA: " << student1.getGPA() << endl;

cout << "\n\n###########################################################\n";

///////////////////////////////// Student 2 /////////////////////////

studentINFO student2; // this will call default constrcutor

cout << "Enter student-2 Information: " << endl;

cout << "------------------------------------------\n";

cout << "Enter Student Name: ";

getline(cin >> ws, name);

student2.setName(name);

cout << "Enter Student ID: ";

cin >> ID;

student2.setID(ID);

cout << "\nEnter Student Date of birth: " << endl;

cout << "Enter Date(1-30): ";

cin >> day;

cout << "Enter Month(1-12): ";

cin >> month;

cout << "Enter YEAR(xxxx): ";

cin >> year;

student2.setDOB(day, month, year);

cout << "\nEnter Student address: " << endl;

cout << "Enter house number and street Name: ";

getline(cin >> ws, hno_street);

cout << "Enter City: ";

getline(cin >> ws, city);

cout << "Enter state: ";

getline(cin >> ws, state);

cout << "Enter zip code: ";

getline(cin >> ws, zip);

student2.setAdress(hno_street, city, state, zip);

cout << "\nEnter total credits earned: ";

cin >> credits;

student2.setcredits(credits);

cout << "Enter GPA: ";

cin >> gpa;

student2.setGPA(gpa);

cout << "\n\nStudent 2 Information is as follows:" << endl;

cout << "------------------------------------------\n";

cout << "Name: " << student2.getName() << endl;

store_Date dob;

dob = student2.getDOB();

cout << "DOB: " << dob.DAY << " / " << dob.MONTH << " / " << dob.YEAR << endl;

store_Address add;

add = student2.getAdress();

cout << "Address: " << add.Hno_StreetName << ", " << add.CTY << ", " << add.STATE << ", " << add.ZIP_CODE << endl;

cout << "Total credit earned : " << student2.getcredits() << endl;

cout << "GPA: " << student2.getGPA() << endl;

// Lets check wheter student1 lives in 11235 zip code

cout << "\n###########################################################\n";

if (student1.getAdress().ZIP_CODE == "11235") {

cout << "\nStudent 1 lives in zip code of 11235(close to school)\n";

} else

cout << "\nStudent 1 doesn't live in zip code of 11235(close to school)\n";

// To check wheter student 1 birthDAY is in november

if (student1.getDOB().MONTH == 11) {

cout << "\nStudent 1 birthDAY is in November\n";

} else

cout << "\nStudent 1 birthday is not in November\n";

return 0;

}
