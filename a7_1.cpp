/*
Janice Luong
Harden CCSF CS 110B
Assignment 7.1

This assignment performs simple tasks with pointers.
*/

#include <iostream>
using namespace std;

void noNegatives(int *x);
void swap(int *x, int *y);
int main()
{
        int x, y;
        int *p1;

        p1 = &x;
        *p1 = 99;

        cout << "value of x: " << x << "\n";
        cout << "value of p1: " << *p1 << "\n";

        p1 = &y;
        *p1 = -300;

        int temp;
        int *p2;

        p1 = &x;
        p2 = &y;

        temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        noNegatives(p1);
        noNegatives(p2);

        p2 = &x;
        cout << "value of x: " << *p2 << "\n";

        p2 = &y;
        cout << "value of y: " << *p2 << "\n";

        int a[2];

        p2 = &x;
        a[0] = *p2;

        p2 = &y;
        a[1] = *p2;

        cout << "value of x: " << a[0] << "\n";
        cout << "value of y: " << a[1] << "\n";

        p1 = &a[0];
        p2 = &a[1];

        temp = *p1;
        *p1 = *p2;
        *p2 = temp;n

        cout << "value of the first element: " << a[0] << "\n";
        cout << "value of the second element: " << a[1] << "\n";

        swap(&x, &y);
        cout << "value of x: " << x << "\n";
        cout << "value of y: " << y << "\n";

        swap(&a[0], &a[1]);
        cout << "value of a[0]: " << a[0] << "\n";
        cout << "value of a[1]: " << a[1] << "\n";

        return 0;n
}












void noNegatives(int *x)
{
        if (*x < 0)
                *x = 0;
}












void swap(int *x, int *y)
{
        int temp;

        temp = *x;
        *x = *y;
        *y = temp;
}