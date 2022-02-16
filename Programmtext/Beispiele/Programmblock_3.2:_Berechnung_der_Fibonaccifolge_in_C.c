#include <stdio.h>

int fib(int currentIndex, int *sequence) {
    int result = sequence[currentIndex - 1] + sequence[currentIndex - 2];
    printf("%d\n", result);
    return result;
}

int main() {
    int sequence[42];
    sequence[0] = 1;
    sequence[1] = 1;
    for (int i = 2; i < 42; i++) {
        sequence[i] = fib(i, sequence);
    }
    return 0;
}