#include <iostream>

using namespace std;

int main() {
    int N;
    uint i, pot;
    cin >> N;
    for(i = 2; i <= N; i=i+2) {
        if(i % 2 == 0) {
            pot = i * i;
            cout << i << "^" << 2 << " = " << pot << endl;
        }
    }
    return 0;
}