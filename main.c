#include <stdio.h>

int search(const int search_domain[], int search_value) {
    int i;
    for(i = 0; i < 20; i++) {
        if(search_domain[i] == search_value) {
            return i;
        }
    }

    return -1;
}

int main() {
    printf("Hello, World!\n");

    int search_domain[20] = {1,2,4,5,6,7,55,6,10,99,11,12,13,14,15,16,17,18,19,30};
    int search_value;
    int found = 0;

    printf("Please input an integer\n");
    scanf("%d", &search_value);

    found = search(search_domain, search_value);
    if(found != -1) {
        printf("Found input at position: %d", found + 1);
    }
    else {
        printf("Could not find the input");
    }

    return 0;
}