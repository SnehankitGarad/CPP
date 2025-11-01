#include <iostream>
using namespace std;
void swap(int& r1,int& r2)
{
    int t = r1;
    r1 = r2;
    r2 = t;

    //r1 =r1^r2;
    //r2 = r1^r2;
    //r1^ r1^r2;
}
int main()
{
    int x =5;
    int y=10;

    swap(x,y);
    cout << x << " " << y << endl;

}