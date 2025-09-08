#include <iostream>
using namespace std;

int main() {
    int x;
    long long  y;
    char z;
    float w;
    double d;
    cout << "Enter an integer, long long, character, float and double respectively: ";
    cin >> x>> y >> z >> w >> d;
    cout << "You entered:\n";
    cout << "Integer: " << x << endl;
    cout << "Long Long: " << y << endl;
    cout << "Character: " << z << endl;
    cout << "Float: " << w << endl;
    cout << "Double: " << d << endl;
    return 0;
}