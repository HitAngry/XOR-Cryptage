int xor(char *src,char *dest,char *key){

  FILE *source, *destination;

  if (((source = fopen(src, "rb"))!= NULL)&&((destination = fopen(dest, "wb"))!= NULL)){

    writeFile(source, destination, key);

    fclose(source);
    fclose(destination);

    printf("Chiffrage termier. [%lu]",sizeof(destination));
    return 1;
  }

  return 0;
}
