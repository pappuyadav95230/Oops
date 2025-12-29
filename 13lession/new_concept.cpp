// #include <iostream>
// using namespace std;

// class product
// {
// public:
//     int price;
//     char name[20];
//     static int s;
// };

// int main()
// {
//     cout << price;  // it's given error beause 'price' was not declared in this scope so we need to crete object
//     return 0;
// }


//declared in this scope so we need to crete object
#include <iostream>
using namespace std;

class product
{
public:
    int price;
    char name[20];
    static int s;
};

int main()
{
    product p1;
    cout << p1.price; // it's print the grabage value using the object 
    return 0;
}