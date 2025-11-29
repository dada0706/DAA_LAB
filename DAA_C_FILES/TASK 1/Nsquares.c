#include <stdio.h>
int Squares(int n) {
int sum = 0;
for (int i = 1; i <= n; i++) {
  sum += i * i;
}
return sum;
}
int main() {
int n;
printf("Enter n: ");
scanf("%d", &n);
printf("Sum of squares = %d\n",Squares(n));
return 0;
}

