#include <iostream>
using namespace std;

void dis(int cls, int hostel)
{
    if (cls == hostel)
    {
        cout << "Pohoch gaya";
        return;
    }

    // cls ++;
    dis(++cls, hostel);
}

int main()
{
    int cls, hostel;
    cin >> cls >> hostel;

    dis(cls, hostel);
    return 0;
}

