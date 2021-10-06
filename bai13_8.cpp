// bai13_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, demChan = 0, demle = 0, dem8 = 0;
      
    do
    {
        cin >> n;
        if (n % 2 == 0)
            demChan += 1;
        else demle += 1;
        if (n % 8 == 0)
            dem8 += 1;
    } while (n != 0);
    cout << "so luong so chan (khong tinh 0) la " << demChan - 1 << endl;
    cout << "so luong so le la " << demle << endl;
    cout << "so luong so chia het cho 8 ( khong tinh 0) la " << dem8 - 1;
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
