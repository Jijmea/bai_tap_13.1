// bai13_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Bang chu cai in thuong: " << endl;
    for (int i = 'a'; i <= 'z'; i++)
        cout << char(i) << '_' << i << ' ';
    cout << endl << "Bang chu cai in hoa: " << endl;
    for (int j = 'A'; j <= 'Z'; j++)
        cout << char(j) << '_' << j << ' ';
    cout << endl << "Bang chu so: " << endl;
    for (int k = '1'; k <= '9'; k++)
        cout << char(k) << '_' << k << ' ';
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