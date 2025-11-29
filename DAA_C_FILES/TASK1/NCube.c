#include <stdio.h>
int Cube(int n) {
int sum = 0;
for (int i = 1; i <= n; i++) {
  sum += i*i*i;
}
return sum;
}
int main() {
int n;
printf("Enter number: ");
scanf("%d", &n);
printf("Sum of cubes of first N numbers = %d\n",Cube(n));
return 0;
}

