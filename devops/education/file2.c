#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

  FILE *file;
  file = fopen("tech1.txt", "a");

  if (file == NULL)
  {
    printf("Произошла ошибка с октрытием файла! \n");
    return 1;
  }

  char buffer[256];

  printf("Введите то, что хотите в файл: \n");
  printf(": ");

  fgets(buffer, sizeof(buffer), stdin);

  char n[2] = "\n";

  if (strstr(buffer, n) != NULL)
  {
    strcat(buffer, "\n");
  }

  fprintf(file, "%s", buffer);

  fclose(file);
  return 0;
}
