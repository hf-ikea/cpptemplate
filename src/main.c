#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define QUADP(a, b, c) ((-(b) + sqrt(((b) * (b)) - (4 * (a) * (c)))) / (2 * (a)))
#define QUADM(a, b, c) ((-(b) - sqrt(((b) * (b)) - (4 * (a) * (c)))) / (2 * (a)))
#define QUAD(a, b, c) QUADP(a, b, c), QUADM(a, b, c)
#define SOLVE(x, a, b, c) (((a) * ((x) * (x))) + ((b) * (x)) + c)

int main() {
    int a = 2;
    int b = 10;
    int c = 5;

    double solve1 = QUADP(a, b, c);
    double solve2 = QUADM(a, b, c);
    printf("x = %f or x = %f\n", solve1, solve2);


    double output1 = SOLVE(solve1, a, b, c);
    double output2 = SOLVE(solve2, a, b, c);

    printf("Solve1: %f, Solve2: %f", output1, output2);

    return 0;
}