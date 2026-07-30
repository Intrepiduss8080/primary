#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>



int main()
{
  char *array[256];

  DIR *dir = opendir("/home/opensor/");
  
  if (dir == NULL)
  {
    printf("Ошибка с открытием файла. \n");
    return 1;
  }


  struct dirent *file;
  
  int i = 0;
  while((file = readdir(dir)) != NULL && i < 256)
  {
    array[i] = strdup(file->d_name);
    i++;
  }

  printf("\n \n");
  printf(array[8]);


  for (int j =0; j<i; j++)
  {
    free(array[j]);
  }

  closedir(dir);
  return 0;
}
