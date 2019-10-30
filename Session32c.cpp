#include<iostream>
#include<string>

using namespace std;

class Point{
    int x;
    int y;

    public:

    Point():x(0), y(0){

    }
    Point(int x, int y):x(x), y(y){

    }

    void setPoint(int x, int y){
        this->x = x;
        this->y = y;
    }

    void showPoint(){
        cout<<"x is: "<<x<<" and y is: "<<y<<"\n";
    }

    Point operator+(Point &p){
        Point temp;
        temp.x = x + p.x;
        temp.y = y + p.y;
        return temp;
    }

    friend Point operator+(int num, Point &p);
    friend Point operator+(Point &p, int num);
};

Point operator+(int num, Point &p){
    Point temp;
    temp.x = num + p.x;
    temp.y = num + p.y;
    return temp;
}

Point operator+(Point &p, int num){
    Point temp;
    temp.x = num + p.x;
    temp.y = num + p.y;
    return temp;
}

int main()
{
    
    Point p1(10, 20);
    Point p2(30, 40);

    Point p3 = p1 + p2; // p1.operator+(p2);
    p1.showPoint();
    p2.showPoint();
    p3.showPoint();

    Point p4 = 10 + p1; // Add 10 to both x and y
    //  Point p4 = 10.operator+(p1);
    // Point p4 = operator+(10, p1); 
    p4.showPoint();


    Point p5 = p2 + 10;
    p5.showPoint();


    return 0;
}
