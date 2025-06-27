#include <iostream>
using namespace std;

int calls;

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        calls += 2;
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int N, X;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;
        calls = 0;

        int result;
        if (X == 0) {
            result = 0;
        } else if (X == 1) {
            result = 1;
        } else {
            calls = 0;
            result = fib(X);
        }

        cout << "fib(" << X << ") = " << calls << " calls = " << result << endl;
    }

    return 0;
}
