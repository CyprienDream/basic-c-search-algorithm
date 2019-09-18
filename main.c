#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    int search_domain[20] = {1,2,4,5,6,7,55,6,10,99,11,12,13,14,15,16,17,18,19,30};
    int search_value;

    printf("Please input an integer\n");
    scanf("%d", &search_value);


    printf("%d", search_value);

    return 0;
}