#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  FILE *file = fopen("tech1.txt", "a");

  if (file == NULL)
  {
    printf("Ошибка. Проблемы с файлом \n");
  }

  char buffer[512];
  char change[256];


  printf("Ввод данных. \n");
  printf(": ");
  fgets(buffer, sizeof(buffer), stdin);
  
  int i = 0;
  int j= 0;

  while (buffer[i] != '\0')
  {
    if (buffer[i] == '\\' && buffer[i+1] == 'n')
    {
      buffer[j] = '\n';
      i+= 2;
      j++;
    }
    else{
      buffer[j] = buffer[i];
      i++;
      j++;
    }
  }
  buffer[j] = '\0';

  fprintf(file, "%s", buffer);

  printf("%s", buffer);
  fclose(file);
  return 0;
  
}
