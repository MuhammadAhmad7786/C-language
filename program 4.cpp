#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x = 7786;

    float y = 1000.00;

    char str[] = "My instagram ID";
    char ID[] = "muhammadahmadgamer";
    cout << setw(10) << setfill('-') << x << endl;
    cout << setw(14) << setfill('!') << y << endl;
    cout << setw(20) << setfill('-') << str << endl;
    cout << setw(19) << setfill('@') << ID << endl;
    return 0;
}
