// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 20;
//     int &y = x; // y is a refrence variable of x
//     cout << "x = " << x << endl;
//     cout << "y =" << y << endl;
//     cout << "&x" << &x << endl;
//     cout << "&y" << &y << endl; // No physical storage is provide to y
//     x = x - 10;
//     cout << "new value of y is  = " << y << endl;
//     y = y - 50;
//     cout << "new value of x is = " << x << endl;
// }

// it can not be change beacause it declare previosly  so this code is given error
// #include <iostream>
// using namespace std;
// int main()
// {
//     int z = 30;
//     int x = 20;
//     int &y = x; // y is a refrence variable of x
//     int &y = z; // Error divorce ni hoga na barekup ,it can not be dcleare again
//     cout << "x = " << x << endl;
//     cout << "y =" << y << endl;
//     cout << "&x" << &x << endl;
//     cout << "&y" << &y << endl; // No physical storage is provide to y
//     x = x - 10;
//     cout << "new value of y is  = " << y << endl;
//     y = y - 50;
//     cout << "new value of x is = " << x << endl;
// }

// other exmple for the error and valid code
// #include <iostream>
// using namespace std;
// int main()

// {
//     // int &x=10;   // cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'

//     int i = 1, j = 2;
//     int &y = i + j; // cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
//     return 0;
// }