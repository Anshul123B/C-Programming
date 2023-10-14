#include<iostream>
using namespace std;
class vechile
{
	public:
		vechile()
		{
			cout<<"This is a vechile"<<endl;
		}
};
class fourwheeler
{
	public:
		fourwheeler()
		{
			cout<<"This is a four wheeler"<<endl;
		};
};
class car:public vechile,public fourwheeler
{
	public:
	car()
	{
	cout<<"I have a car"<<endl;
}
};
int main(){
	car vechile;
	return 0;
}
