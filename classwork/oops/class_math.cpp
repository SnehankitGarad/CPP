#include<iostream>
using namespace std;
class Math
{
    public: 
        int x,y,z;
        void print()
        {
            cout << "X: " << x << endl;
            cout << "Y: " << y << endl;
            cout << "Z: " << z << endl;

        }

};
int main()
{
    Math ob1,ob2;
    ob1.x=10;
    ob1.y=20;
    ob1.z=30;

    ob1.print();
    ob2.print();
}