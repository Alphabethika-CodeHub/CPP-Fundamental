// Daffa's Cleaning Service.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to Daffa's Cleaning Service Company!" << endl;
    cout << "##############################################" << endl;
    cout << "\nHow Many Carpet You Want to Get Clean? ";
    int numberOfCarpet;
    cin >> numberOfCarpet;

    int numberOfSmallRoom;
    cout << "\nHow Many Small Room You Want to Get Clean? ";
    cin >> numberOfSmallRoom;

    int numberOfLargeRoom;
    cout << "\nHow Many Large Room You Want to Get Clean? ";
    cin >> numberOfLargeRoom;
    cout << endl;

    const double salesTax{ 0.03 };
    const double priceOfSmallRoom{ 25 };
    const double priceOfLargeRoom{ 25 };
    const double priceOfCarpet{ 10 };

    cout << "##############################################" << endl;
    cout << "Number of Carpet: " << numberOfCarpet << endl;
    cout << "Number of Small Room: " << numberOfSmallRoom << endl;
    cout << "Number of Large Room: " << numberOfLargeRoom << endl;
    cout << "Estimated Expenses: $" <<
        (numberOfCarpet * priceOfCarpet) +
        (numberOfSmallRoom * priceOfSmallRoom) +
        (numberOfLargeRoom * priceOfLargeRoom) << endl;
    cout << "Tax: $" << 
        (numberOfCarpet * priceOfCarpet) +
        (numberOfSmallRoom * priceOfSmallRoom) +
        (numberOfLargeRoom * priceOfLargeRoom) * salesTax << endl;
    cout << "Total Cost: $" << (numberOfCarpet * priceOfCarpet) +
        (numberOfSmallRoom * priceOfSmallRoom) +
        (numberOfLargeRoom * priceOfLargeRoom) + ((numberOfCarpet * priceOfCarpet) +
            (numberOfSmallRoom * priceOfSmallRoom) +
            (numberOfLargeRoom * priceOfLargeRoom) * salesTax) << endl;

    return 0;
}
