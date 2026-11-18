#include<iostream>
using namespace std;
class example{
	int size;
	int *p;
	public:
		example(int s){
			size = s;
			p = new int[size];
		}
	void input(){
		cout<<"Enter the values: ";
		for(int i = 0; i<size; i++){
		cin>>p[i];
		}
	}
		void output(){
		cout<<"Entered values are: ";
		for(int i = 0; i<size; i++){
		cout<<p[i]<<" ";
		}
	}
};

int main(){
	int d;
	cout<<"Enter the Number of Values: ";
	cin>>d;
	example e1(d);
	e1.input();
	cout<<endl;
	e1.output();
	return 0;
}
