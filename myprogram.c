
#include <stdio.h>

int main(void)

{
    int dogs;
    int cats;
    int pets;
    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("How many cats do you have?\n");
    scanf("%d", &cats);
    pets = dogs + cats;
    printf("So you have %d pet(s)!\n", pets);
    return 0;
}
