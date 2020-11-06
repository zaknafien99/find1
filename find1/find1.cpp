// find1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <list>
#include <iostream>
using namespace std;

int main()
{
    list <int> coll;

    //insert elements from 20 to 40
    for (int i = 20; i <= 40; ++i) {
        coll.push_back(i);
    }

    //find position of element with value 3
    // - there is none, so pos3 gets coll.end()
    auto pos3 = find(coll.begin(), coll.end(), //range
        3);                                     // value

    // reverse the order of elements between found element and the end
    // - because pos3 is coll.end() it reverses an empty range
    reverse(pos3, coll.end());

    // find position of values 25 and 35
    list<int>::iterator pos25, pos35;
    pos25 = find(coll.begin(), coll.end(), // range
        25);                               // value


    pos35 = find(coll.begin(), coll.end(), // range
        35);                               // value

    //print the maximum of the corresponding range
    // - note: including pos25 but excluding the last position
    cout << "max: " << *max_element(pos25, ++pos35) << endl;
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
