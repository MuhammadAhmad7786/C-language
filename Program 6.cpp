#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << setw(20) << setfill('-') << "1 2 3 4 5 6 7 8 9 10" << endl;
    cout << setw(20) << setfill('+') << "9 10" << endl;
    cout << setw(20) << setfill('=') << "8 9 10" << endl;
    cout << setw(20) << setfill('_') << "7 8 9 10" << endl;
    cout << setw(20) << setfill('~') << "6 7 8 9 10" << endl;
    cout << setw(20) << setfill('|') << "5 6 7 8 9 10" << endl;
    cout << setw(20) << setfill(':') << "4 5 6 7 8 9 10" << endl;
    cout << setw(20) << setfill('?') << "3 4 5 6 7 8 9 10" << endl;
    cout << setw(20) << setfill('`') << "2 3 4 5 6 7 8 9 10" << endl;
    cout << setw(20) << setfill('*') << "1 2 3 4 5 6 7 8 9 10" << endl;
    return 0;
}