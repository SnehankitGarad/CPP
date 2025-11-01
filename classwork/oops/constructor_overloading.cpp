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

        Student()
        {
            cout<< "default const" << endl;
            name="none";
            add = "none";
            mob ="1234";
            sal = 0;
        }

        Student(string n,string a,string m)
        {
            cout << "3 parametarised const" << endl;
            name = n;
            add = a;
            mob = m;
            sal =1000;
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
    Student s1("ankit","latur","7822011784",1234);
    s1.display();

    Student s2 ;
    s2.display();

    Student s3("rushi","nagar","123456");
    s3.display();

}