#include<iostream>
using namespace std;
class student{
	int rno;
	char name[50];
	double fee;
public:
	void display(){
		cout<<endl<<rno<<"\n"<<name<<"\n"<<fee<<endl;
	}
};
int main(){
	student s;
	
	s.display();
	return 0;
}
