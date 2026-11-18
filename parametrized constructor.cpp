#include<iostream>
using namespace std;
class cube{
	public:
		int side;
	cube(int a){
		side = a;
	}
};
int main(){
	cube c1(10);
	cube c2(20);
	cube c3(30);
	
	cout<<"Value of C1 is "<<c1.side<<endl;
	cout<<"Value of C2 is "<<c2.side<<endl;
	cout<<"Value of C3 is "<<c3.side<<endl;
}
