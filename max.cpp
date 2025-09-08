#include <iostream>
using namespace std;

int main() {
    cout << "Enter your nums" << endl;
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << "max:" << max(max(max(a, b), max(c, d)), max(e, f)) << endl;
    return 0;
}