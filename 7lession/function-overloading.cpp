// Same number of Argument
// #include <iostream>
// using namespace std;
// int add(int a, int b)
// {
//     return a + b;
// }
// double aad(double x, double y)
// {
//     return x + y;
// }

// int main()
// {
//     int r = 10, s = 20;
//     double p = 2.4, q = 5.7;

//     cout << "Integer sum is " << add(r, s) << endl;
//     cout << "Double sum is " << add(p, q) << " ";
//     return 0;
// }

// Diffrent argument
// #include <iostream>
// using namespace std;

// int area(int l, int b) { return l * b; }

// int area(int s) { return s * s; }

// int main()
// {
//     int r;
//     r = area(10, 20);
//     cout << "Rectangel Area is " << r << " " << endl;
//     r = area(20);
//     cout << "Square Area is " << r << " ";
//     return 0;
// }

// Exmple 1 , Exact match rule
// #include <iostream>
// using namespace std;
// void fun(char a) { cout << a << " "; } // exact match rule
// void fun(int b) { cout << b << " "; }
// int main()
// {
//     char a = 'A';
//     fun(a);
//     return 0;
// }

// Ex 2  Typepromtion char to integer
// #include <iostream>
// using namespace std;
// void fun(int a) { cout << a << " "; } // type promotion char to integer
// void fun(float b) { cout << b << " "; }
// int main()
// {
//     char a = 'A';
//     fun(a);
//     return 0;
// }

// Ex:3
// #include <iostream>
// using namespace std;
// void fun(float a) { cout << a << " "; }  // conversion , char to float
// int main()
// {
//     char a = 'A';
//     fun(a);
//     return 0;
// }

// Ex:4
// #include <iostream>
// using namespace std;
// struct student
// {
//     int age;
//     char name[20];
//     float marks;
// };
// int fun(float a){cout<<a<<" "; return 1;}       // char to int
// void fun(struct student b) {cout<<"Pankaj"<<" ";}
// int main()
// {
//     char a = 'A';
//     fun(a);
//     return 0;
// }

// ex 5 , Error beacuse there is both char to float and double conversion
// #include <iostream>
// using namespace std;
// struct student
// {
//     int age;
//     char name[20];
//     float marks;
// };
// int fun(float a){cout<<a<<" "; return 1;}
// void fun(double b) {cout<<"Pankaj"<<" ";}
// int main()
// {
//     char a = 'A';
//     fun(a);
//     return 0;
// }

// // Struct in c or c++
// #include <string.h>
// #include <iostream>
// using namespace std;
// struct student            // writing struct is mandatory
// {
//     int age;
//     char name[20];
//     float marks;
// };

// // crete function to call print the age,name,marks
// void printdetails(struct student x)    // but here you do not need of the struct,you can removed it then it work
// {
//     cout << "age= " << x.age << " " << "name= " << x.name << " " << "marks= " << x.marks << endl;
// }

// struct student input()
// {
//     struct student y;
//     cout << "Enter age, name and marks";
//     cin >> y.age;
//     cin.ignore();
//     cin.getline(y.name, 20);
//     cin >> y.marks;

//     return y;
// };

// int main()
// {
//     struct student s = {12, "Akash", 45.6};
//     struct student s2;
//     s2.age = 24;
//     strcpy(s2.name, "pankaj");
//     s2.marks = 34.9;
//     cout << "enter age , name and marks : ";
//     struct student s3;
//     cin >> s3.age;
//     cin.ignore();
//     cin.getline(s3.name, 20);
//     cin >> s3.marks;

//     struct student s4;
//     s4=input();

//     printdetails(s);
//     printdetails(s2);
//     printdetails(s3);

//     printdetails(s4);

//     return 0;
// }

// Struct is only need to defination rather then do not need to write
#include <string.h>
#include <iostream>
using namespace std;
struct student // writing struct is mandatory
{
    int age;
    char name[20];
    float marks;
};

// crete function to call print the age,name,marks
void printdetails(student x) // but here you do not need of the struct,you can removed it then it work
{
    cout << "age= " << x.age << " " << "name= " << x.name << " " << "marks= " << x.marks << endl;
}

student input()
{
    student y;
    cout << "Enter age, name and marks";
    cin >> y.age;
    cin.ignore();
    cin.getline(y.name, 20);
    cin >> y.marks;

    return y;
};

int main()
{
    student s = {12, "Akash", 45.6};
    student s2;
    s2.age = 24;
    strcpy(s2.name, "pankaj");
    s2.marks = 34.9;
    cout << "enter age , name and marks : ";
    student s3;
    cin >> s3.age;
    cin.ignore();
    cin.getline(s3.name, 20);
    cin >> s3.marks;

    student s4;
    s4 = input();

    printdetails(s);
    printdetails(s2);
    printdetails(s3);

    printdetails(s4);

    return 0;
}