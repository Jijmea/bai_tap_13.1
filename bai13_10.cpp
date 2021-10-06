// bai13_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong n ";
    cin >> n;
    int fibo[1000], i = 2;
    fibo[0] = 1;
    fibo[1] = 1;
    while (fibo[i - 1] < n)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        i++;
        if (fibo[i - 1] == n)
        {
            cout << "n co thuoc day Fibo";
            return 0;
        }
    }
    cout << "n khong thuoc day Fibo";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
