#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main()
{
  DIR* dir = opendir("/home/opensor/");

  if (dir == NULL){
    printf("Ошибка с директорией \n");
  }

  struct dirent* file;

  while((file = readdir(dir)) != NULL)
  {
    printf("%s \n", file->d_name);
  }
  closedir(dir);

  return 0;
}
