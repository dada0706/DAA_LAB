#include <stdio.h>
int Natural(int n) {
int sum = 0;
for (int i = 1; i <= n; i++) {
sum += i;
}
return sum;
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
printf("Sum of natural numbers = %d\n", Natural(n));
return 0;
}

