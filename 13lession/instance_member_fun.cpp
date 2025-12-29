#include <iostream>
using namespace std;

class student
{
private:
    int age;
    char name[20];
    float marks;

public:
    void print();
    void input();
};

void student::print()
{
    cout << "age= " << age << " name= " << name << " marks= " << marks << endl;
}
void student::input()
{
    cout << "Enter age, name and marks" << "  ";
    cin >> age;
    cin.ignore();
    cin.getline(name, 20);
    cin >> marks;
};
int main()
{
    struct student s1, s2;
    s1.input();
    s2.input();
    s1.print();
    s2.print();

    return 0;
}
