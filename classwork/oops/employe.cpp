#include<iostream>
using namespace std;
class emp
{
    private: 
        string name;
        string add;
        
        int sal;
        public: 
             void get_data()
            {
                cout << "Enter the name: " << endl;
                cin >> name;
                cout << "Enter the add: " << endl;
                cin >> add;
                cout << "Enter the sal: " << endl;
                cin >> sal;
            }
           

};
class printer
{
    public: 
     string name;
        string add;
        
        int sal;
    void display(emp& o)
    {
                cout << "Your name is: " << name << endl;
                cout << "your add is: " << add << endl;
                
                cout << "your sal is:" << sal << endl;
    }
};
int main()
{
    emp e1;
    e1.get_data();
    printer p;
    p.display(e1);
   

}