#include <stdio.h>
#include <string.h>

int main(void)
{
  char input_string[50];
  int number_of_characters;

  printf("What is the input string? ");

  scanf("%[^\n]s", input_string);

  number_of_characters = strlen(input_string);

  printf("%s has %d characters.\n", input_string, number_of_characters);

  return 0;
}
