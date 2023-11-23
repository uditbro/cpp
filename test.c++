#include <iostream>
#include<string>
#include<ctime>

using namespace std;
class student
{
    int roll_no,marks;
    string name;
    char gender;
    public:
    void init(int x,int y, string nam, char g)
    {
        roll_no=x;
        marks=y;
        name=nam;
        gender=g;
    }

    virtual void display()
    {
        cout<<"The roll_no is: "<<roll_no<<endl;
        cout<<"The name of student is: "<<name<<endl;
        cout<< "The gender is: "<<gender<<endl;
        cout<<"The marks is: "<<marks<<endl;
    }
};


int main()
{
    student std1, std2;
    //student *ptr;
    std1.init(101,99,"Dev Poonia",'M');
    std2.init(102,90,"Shalini Budholiya",'F');
    //ptr=&std1;
    //ptr->display();
    //ptr=&std2;
    //ptr->display();
    std1.display();
    std2.display();
    return 0;
}
