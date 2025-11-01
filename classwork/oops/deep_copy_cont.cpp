#include<iostream>
using namespace std;
class Test
{
    public: 
    int x,y;
    int* ptr;

    Test(int a=0,int b=0,int c=0)
    {
        x=a;
        y=b;
        ptr=new int;
        *ptr = c;
    }

    void display()
    {
        cout << x << endl;
        cout << y << endl;
        cout << *ptr << endl;

    }

    Test(Test& ref)
    {
        
        x = ref.x;
        y = ref.y;
        ptr = new int;
        *ptr = *(ref.ptr);
    }
};


int main()
{
    Test o1(5,7,10);
    o1.display();

    Test o2  = o1;
   // o2 = o1;
    o2.display();

    *(o2.ptr) = 78;
    o1.display();
    o2.display();

}