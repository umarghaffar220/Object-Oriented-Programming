#include<iostream>
using namespace std;
class Area{
	public:
		int length;
		int width;
	//Constructor with No Arguments
	Area():length(5),width(2){}
	
	//Constructor with Arguments
	Area(int l,int w): length(l),width(w){}
	
	//Area Calculation
	int AreaCal(){return length*width;}
	
	//display area
	void DisplayArea(int temp){
		cout<<"Area: "<<temp<<endl;
	}
};
int main(){
	Area A1,A2(2,1);
	int temp;
	
	cout<<"Default Area When No parameter is Passed"<<endl;
	temp = A1.AreaCal();
	A1.DisplayArea(temp);
	
	cout<<"Parametrized Constructor"<<endl;
	temp = A2.AreaCal();
	A2.DisplayArea(temp);
	
	return 0; 
}
