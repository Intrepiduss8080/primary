#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(){
  FILE* file;

  file = fopen("tech.txt", "r");
  if (file == NULL){
    printf("Ошибка с файлом\n");
  }

  char buffer[256];

  while(fgets(buffer, sizeof(buffer), file) != NULL){
    printf("%s", buffer);
  }

  fclose(file);
  return 0;



}
