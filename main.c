#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if (n == 0){
    return 0;
  }
    else{
      return n + sum_n(n-1)
    }
}
void print_n(const char *s, int n){
  if (n != 0){
    printf("%s\n",s);
    print_n(s, n-1);
  }
}

int main(void){
  int number = atoi(readline("Enter an int: "));
  printf("sum is %d.\n",sum_n(number));
  char *string = readline("Enter a string: ");
  print_n(string,number);
  return 0;
}