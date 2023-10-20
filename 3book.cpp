//3. Create a class Book with data members as bname,id,author,price.
// Write AcceptBook function . Also add the display function.
// Create Default and Parameterized constructors. Create 
//the object of this class in main method and invoke all the methods in that class. 

#include<iostream>
using namespace std;

class Book{
private : string bname;
          int id;
          string author;
          double price;
public :  
		Book(){
			bname="Chetan Bhagat";
			id=12;
			author="Vinit";
			price=5000;
		}
		
		Book(string bname,int id,string author,double price){
			this->bname=bname;
			this->id=id;
			this->author=author;
			this->price=price;
		}
		
        void AcceptBook(){
        	cout<<"Enter book name : ";
        	cin>>bname;
        	cout<<"Enter book id:";
        	cin>>id;
        	cout<<"Enter author name:";
        	cin>>author;
        	cout<<"Enter price:\n";
        	cin>>price;
		}
		void display(){
			cout<<"Book Name:"<<bname<<endl<<"id:"<<id<<endl<<"Author name:"<<author<<endl<<"price:"<<price<<endl;
		}
	
};

int main()
{
	Book b0;
	b0.display();
	Book b1("Naruto",20,"Kishimoto",200);
	b1.display();
	
	
	
	
}
