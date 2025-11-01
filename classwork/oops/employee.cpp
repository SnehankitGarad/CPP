#include<iostream>
using namespace std;
class Employe
{
    public:
    string name,add,mob;
    float* sal;

    public:
    Employe(string n ,string a, string m,float s)
    {
        name = n;
        add =a;
        mob =m;
        *sal = s;
    }

    void display()
    {
        cout << name << endl;
        cout << add << endl;
        cout << mob << endl;
        cout << *sal << endl;
    }

    Employe(Employe& ref)
    {
        cout << "ankit" << endl;
        name = ref.name;
        add = ref.add;
        mob = ref.mob;
        sal = new float;
        *sal = *(ref.sal);
    }
    // ~Employe()
    // {
    //     delete sal;
    // }

};
int main()
{
    Employe na1("ram","maharashtra","1234567",0);
    na1.display();

    Employe na2=na1;
    na2.display();

    *(na2.sal) = 10;
    na1.display();
    na2.display();


}