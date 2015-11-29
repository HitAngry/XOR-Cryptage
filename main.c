#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Header files

#include "./src/header/main.h"
// Sources files
#include "./src/xor.c"
#include "./src/writeFile.c"

int main(int argc, char *argv[]){

  if(argc > 3){
    xor(argv[1], argv[2], argv[3]);
  }

  return EXIT_SUCCESS;
}

