//4. Create a class Point with data members as x,y.
// Create Default and Parameterized constructors.
//  Write getters and setters for all the data members.
//   Also add the display function. Create the object of this 
//class in main method and invoke all the methods in that class. 
#include<iostream>

using namespace std;

class Point{
	private: int x,y;
	
	public: Point(){
		x=5;
		y=10;
	}
	
	Point(int x,int y){
		this->x=x;
		this->y=y;
	}
	
	int getx(){
		return x;
	}
	
	void setx(int x){
		this->x=x;
	}
	int gety(){
		return y;
	}
	
	void sety(int y){
		this->y=y;
	}
	void display(){
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
	}
};

int main(){
	Point p1;
	
	p1.display();
	
	Point p2(1254,5487);
	p2.display();
	
	cout<<p2.getx()<<endl;
	cout<<"After changing"<<endl;
	p2.setx(1111);
	p2.display();
	
}
