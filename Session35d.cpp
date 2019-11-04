#include<iostream>
using namespace std;

template<class T>

class Point{

    T x;
    T y;

    public:
    Point(T x, T y){
        this->x = x;
        this->y = y;
    }

    void showPoint(){
        cout<<"Point is: "<<x<<" | "<<y<<"\n";
    }
};

int main()
{
    
    Point<int> p1(10, 20);
    Point<float> p2(10.22, 20.33);
    Point<char> p3('A', 'B');

    p1.showPoint();
    p2.showPoint();
    p3.showPoint();

    return 0;
}

