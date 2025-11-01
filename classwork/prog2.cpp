#include <iostream>
using namespace std;
void print(string n,string add,string mob, int sal)
{
    cout << "Name is: " << n << endl;
    cout << "add is: " << add << endl;
    cout << "mob is: " << mob << endl;
    cout << "sal is: " << sal << endl;
}
int main()
{
    string name;
    string add;
    string mob;
    int sal;

    getline(cin,name);
    getline(cin,add);
    getline(cin,mob);
    cin >> sal;

    print(name,add,mob,sal);
}