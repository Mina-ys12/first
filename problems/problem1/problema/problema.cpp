#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long long s, d, f;
    cin >> s >> d >> f;

    if (s <= 1 || d <= 1) {
        return 1;
    }

    long long row = ceil((double)s / f);
    long long col = ceil((double)d / f);

    cout << row * col << endl;

}


