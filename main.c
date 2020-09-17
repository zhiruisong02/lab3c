/Author: Song Zhirui zjs5301@psu.edu
/Collaborator: Jack Hillman jsh5719@psu.edu
/Collaborator:  Shrey Hillman sxs6588@psu.edu
/Collaborator: Alexandros Condeelis afc5865@psu.edu
/Section: 5
/Breakout Room: 2

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if (n == 0){
    return 0;
  }
    else{
      return n + sum_n(n-1);
    }
}
void print_n(const char *s, int n){
  if (n != 0){
    printf("%s\n",s);
    print_n(s, n-1);
  }
}

int main(void){
  int result = atoi(readline("Enter an int: "));
  printf("sum is %d.\n",sum_n(result));
  char *string = readline("Enter a string: ");
  print_n(string,result);
  return 0;
}