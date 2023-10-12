#include<iostream>
using namespace std;
struct person
{
	char name[50] ;
	int age;
	float salary;
	};
	int main(){
		person p;
		cout<<"Enter the Name: ";
		cin>>p.name;
		cout<<"\n Enter the age: ";
		cin>>p.age;
		cout<<"\nEnter the salary: ";
		cin>>p.salary;
		cout<< "\n Display massage ";
		cout<<"Name: "<<p.name<<endl;
		cout<<"age: "<<p.age<<endl;
		cout<<"salary: "<<p.salary;
		return 0;
	}
