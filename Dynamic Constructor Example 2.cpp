#include<iostream>
using namespace std;
class Circle{
	double *radius, xCoord, yCoord;
	public:
		Circle(double r, double x, double y){
			radius = new double;
			*radius = r;
			xCoord = x;
			yCoord = y;
		}
		//getter Functions
		double* getRadius(){
			return radius;
		}
		double getxCoord(){
			return xCoord;
		}
		double getyCoord(){
			return yCoord;
		}
		//Setter Functions
		void setradius(double r){
			radius = new double;
			*radius = r;
		}
		void setxCoord(double x){
			xCoord = x;
		}
			void setyCoord(double y){
			yCoord = y;
		}
};
int main(){
	Circle c1(10,0,2);
	c1.getRadius();
	cout<<endl;
	c1.getxCoord();
	cout<<endl;
	c1.getyCoord();
	cout<<endl;
	return 0;
}
