#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    while (x<=0) {
        if (x ==1999) {
            cout << "Correct" << endl;
            break;
        } 
        else{
            cout << "wrong"<< endl;
        }
        
    }
    return 0;
}