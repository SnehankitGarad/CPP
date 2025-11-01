#include<iostream>
using namespace std;
class Student
{
    private:
    string name,add,mob;
    float sal;
    
    public:
        Student(string n,string a,string m, float s)
        {
            cout << "parametarised const" << endl;
            name=n;
            add=a;
            mob=m;
            sal=s;
        }
        void display()
            {
                cout << "Name: " << name << endl;
                cout << "address: " << add << endl;
                cout << "moble num: " << mob << endl;
                cout << "salary: " << sal << endl;
            }
        
};
int main()
{
    Student s1("Ankit","Latur","7822011784",7);
    s1.display();
}
