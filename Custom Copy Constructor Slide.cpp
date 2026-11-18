#include<iostream>
using namespace std;
class Point{
	public:
		double x,y;
		Point(double nx, double ny){
			x = nx;
			y = ny;
			cout<<"2 Parameter Constructor"<<endl;
		}
		Point(const Point &O){
			x = O.x;
			y = O.y;
			cout<<"Custom Copy Constructor"<<endl;
		}
		void display(){
			cout<<"Value of X is: "<<x<<endl;
			cout<<"Value of y is: "<<y<<endl;
		}
};
int main(){
	Point p1(21,22);
	Point p2(p1);
	cout<<"Values of P1"<<endl;
	p1.display();
	cout<<endl;
	cout<<"Values of P2"<<endl;
	p2.display();
	return 0;
}
