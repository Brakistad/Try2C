#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string start;
    int a, b, c, d, e;
    getline(cin, start);
    stringstream(start) >> a;

    a >> b;
    b >> c;
    c >> d;
    d >> e;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    return 0;
}