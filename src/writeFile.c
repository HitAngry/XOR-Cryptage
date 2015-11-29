void writeFile(FILE *source, FILE *destination, char *key){

  long taille, h;
  int i, c;

  i = 0;

  taille = strlen(key);
  
  printf("key size [%ld]bits",taille);

  h = fgetc(source);

  while(!feof(source)){

    c = h ^ key[i];

    fputc(c, destination);

    i++;

    if(i == taille){
      i = 0;
    }

    h = fgetc(source);
  }
}
