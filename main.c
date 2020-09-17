#include <stdio.h>
#include <string.h>

int sum_n(int n) {
  if (!n) return 0;
  return n + sum_n(n - 1);
}

void print_n(const char *s, int n) {
  if (!n) return ;
  printf("%s\n", s);
  print_n(s, n - 1);
}

int main() {
  int n;
  char s[1000];
  printf("Enter an int: ");
  scanf("%d", &n);
  printf("sum is %d.\n", sum_n(n));
  printf("Enter a string: ");
  getchar();
  fgets(s, 999, stdin);
  print_n(s, n);
  return 0;
}