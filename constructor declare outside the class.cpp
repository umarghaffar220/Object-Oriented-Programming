#include<iostream>
using namespace std;
class student{
	int rno;
	char name[50];
	double fee;
public:
	student(); //function declare inside the class
	void display(){
		cout<<endl<<rno<<"\n"<<name<<"\n"<<fee<<endl;
	}
};
student::student(){ //function define outside the class
		cout<<"Enter the roll Number: ";
		cin>>rno;
		cout<<"Enter the name: ";
		cin>>name;
		cout<<"Enter the fee: ";
		cin>>fee;
	}
int main(){
	student s; //constructor called automatically
	
	s.display();
	return 0;
}
