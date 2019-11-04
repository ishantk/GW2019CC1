#include<iostream>
using namespace std;

template<class T, class U>

class Point{

    T x;
    U y;

    public:
    Point(T x, U y){
        this->x = x;
        this->y = y;
    }

    void showPoint(){
        cout<<"Point is: "<<x<<" | "<<y<<"\n";
    }
};

int main()
{
    
    Point<int, int> p1(10, 20);
    Point<float, int> p2(10.22, 20);
    Point<char, float> p3('A', 2.2);

    p1.showPoint();
    p2.showPoint();
    p3.showPoint();

    return 0;
}

