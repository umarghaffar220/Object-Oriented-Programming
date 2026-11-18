#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		int rNo;
		string name;
		float marks;
	public:
		Student(int r, string n, float m){ //parameterized Constructor
			rNo = r;
			name = n;
			marks = m;
		}
		Student(const Student &S){  //Copy Constructor
			rNo = S.rNo;
			name = S.name;
			marks = S.marks;
		}
		void display(){ //display function 
			cout<<"Roll Number: "<<rNo<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Marks: "<<marks<<endl;
		}
};
int main(){
	Student S1(2,"Umar",9.5); //Parameterized Constructor
	Student S2(S1); //Copy Constructor
	S1.display(); //display Values for S1
	cout<<endl;
	S2.display(); //display Values for S2 
	return 0;
}
