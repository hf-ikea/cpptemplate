#include <stdio.h>
#include <stdlib.h>

struct cat {
    int age;
    int weight;
    char* name;
};

void set_weight(struct cat* kitty, int new_weight) {
    kitty->weight = new_weight;
}

int main() {
    struct cat kitty = {.age=8, .name="Xena"};
    set_weight(&kitty, 17);

    printf("Age: %d, Weight: %d, Name: %s", kitty.age, kitty.weight, kitty.name); // Age: 8, Weight: 17, Name: Xena
    return 0;
}