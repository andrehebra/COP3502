#include <stdio.h>
#include <stdlib.h>

typedef struct present {
    char *present_name;
    float price;
} present;

struct present* delete_present_list(present *present_list, int num) {
    for (int i = 0; i < num; i++) {
        free(&present_list[i]);
    }

    return present_list;
}

int main() {


    return 0;
}