#include <iostream>
using namespace std;

// int main()
// {
//     int count = 5;
//     // saying that int Pointer of pCount equals the address of count. Thats what the and symbol means
//     int *pCount = &count;

//     int area = 1;
//     int *pArea = &area;

//     cout << "The value of count is " << count << endl;
//     cout << "The address of count is " << &count << endl;
//     cout << "The address of count is " << pCount << endl;
//     cout << "The value of count is " << *pCount << endl;
//     return 0;
// }

//#########################################
//#########################################
void firstExample()
{
    int x = 5;
    int *pX = &x;

    cout << "x is " << x << endl;
    cout << "pointer of x (pX) is " << pX << endl;
    system("pause>0");
};

void secondExample()
{
    int x = 30;
    int *p = &x;
    cout << *p << endl;
    int y = 40;
    p = &y;
    cout << *p << endl;
    system("pause>0");
};
void thirdExample()
{
    double x = 3.5;
    double *p1 = &x;
    double y = 4.5;
    double *p2 = &y;
    cout << *p1 + *p2 << endl;
    system("pause>0");
};
void fourthExample()
{
    string s = "ABCD";
    string *p = &s;
    cout << p << endl;
    cout << *p << endl;
    cout << (*p)[0] << endl;
};
void myArray()
{

    int list[6] = {11, 12, 13, 14, 15, 16};
    cout << "The starting address of the array is " << list << ". So, you're seeing the address because if you cout An array without a bracket and a subscript" << endl;
    cout << "it will represent the starting address of the array."
         << " In this sense, an array is essentially a pointer " << endl;
};

int arrayList()
{
    int list[6] = {11, 12, 13, 14, 15, 16};
    // int* p = list; = int* p = list;
    // because the name of the array is already the starting address of the array
    int *p = list;

    for (int i = 0; i < 6; i++)
        cout << "address: " << (list + i) << " value: " << *(list + i) << " "
             << " value: " << list[i] << " "
             << " value: " << *(p + i) << " "
             << " value: " << p[i] << endl;

    return 0;
};

void f1(int x, int &y, int *z)
{
    x++;
    y++;
    (*z)++;
}

int main()
{
    double *p1, p2;
    // firstExample();
    // secondExample();
    // thirdExample();
    // fourthExample();
    myArray();

    int i = 1, j = 1, k = 1;
    f1(i, j, &k);
    cout << "i is " << i << endl;
    cout << "j is " << j << endl;
    cout << "k is " << k << endl;


    return 0;
};