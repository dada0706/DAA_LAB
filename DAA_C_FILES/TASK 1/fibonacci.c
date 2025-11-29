#include <stdio.h>
int main() {
int n, i;
int t1 = 0, t2 = 1, n1;
printf("Enter the number of terms: ");
scanf("%d", &n);
printf("Fibonacci Series: ");
for (i = 1; i <= n; ++i) {
  printf("%d ", t1);
  n1 = t1 + t2;
  t1 = t2;
  t2 = n1
}

printf("\n");
return 0;
}

