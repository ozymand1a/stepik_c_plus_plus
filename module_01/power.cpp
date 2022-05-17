#include<iostream>
using namespace std;

int power(int x, unsigned p) {
    int answer = 1;
    /* считаем answer */

    if (p == 0)
        return 1;

    for ( int i = 1; i <= p; ++i ) {
        answer *= x;
    }

    return answer;
}

int main() {
    int a = 10;
    int unsigned b = 2;
    int c = power(a, b);
    cout << c;
    return 0;
}
