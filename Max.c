Sure, I can help you with that! Here's a simple C program to find the maximum number from a given set of numbers:

```c
#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = num1;

    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
```

You can input three numbers, and the program will output the maximum number among them. Let me know if you have any questions!
