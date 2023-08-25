#include<iostream>
using namespace std;

//creating class
class Room{
    public:
    double l;
    double b;
    double h;
    
    double Area(){
        return l* b;
    }
    double Volume(){
        return l * b * h;
    }
};
int main(){
    Room a;
    
    a.l=42;
    a.b=30;
    a.h=20;
    
    cout<< "Area of Room= " << a.Area() <<endl;
    cout<< "Volume of Room= " << a.Volume() <<endl;
    
    return 0;
    
}