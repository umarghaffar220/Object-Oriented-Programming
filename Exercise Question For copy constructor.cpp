#include<iostream>
using namespace std;
class Circle{
	private:
		double radius, xCoord, yCoord;
	public:
	Circle(double r, double x, double y){ //parameterized Constructor
		radius = r; 
		xCoord = x;
		yCoord = y;
	}
	showDataMembers(){ //display Function 
			cout<<"Radius is: "<<radius<<endl;
			cout<<"xCoord is: "<<xCoord<<endl;
			cout<<"YCoord is: "<<yCoord<<endl;			
		}
	Circle(const Circle &c){ //Custom Copy constructor
		radius = c.radius;
		xCoord = c.xCoord;
		yCoord = c.yCoord;
	}
		
	
};
int main(){
	Circle c1(20,50,30);
	Circle c2(c1);
	cout<<"Values for C1 is "<<endl;
	c1.showDataMembers();
	cout<<endl;
	cout<<"Values for C2 is "<<endl;
	c2.showDataMembers();
	return 0;
}
