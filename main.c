#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LONG_MAX 5555

void xor_file (FILE* source, FILE* destination, char* key);
void error(FILE *file, char *filename);
int xor(char *src, char *dest, char *key);

int main(int argc, char *argv[])
{
  long double e = LONG_MAX;

  if(argc > 3)
  {
    xor (argv[1], argv[2], argv[3]);   
  }

  return EXIT_SUCCESS;
}

int xor(char *src, char *dest, char *key)
{
  FILE *source, *destination;

  if(((source = fopen (src,"rb")) != NULL) && ((destination = fopen (dest,"wb")) != NULL))
  {
      xor_file(source, destination, key);

      fclose (source);

      fclose (destination);

      return 1;
  }

  return 0;
}

void xor_file (FILE *source, FILE *destination, char *key)
{
  long taille,h;
  int i,c;

  i = 0;
  
  taille = strlen (key);
  
  h = fgetc (source);

  while (!feof (source))
  {
      c = h ^ key [i];
      
      fputc (c, destination);
      
      i++;
      
      if(i == taille) 
      {
	i = 0;
      }
      
      h = fgetc (source);
  }
}
