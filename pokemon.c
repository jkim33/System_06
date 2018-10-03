#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct dex {int num; char pokemon[64];};

struct dex example() {
  struct dex ex;
  return ex;
}

int print(struct dex poke) {
  printf("%d: ", poke.num);
  printf("%s\n", poke.pokemon);
  return 0;
}

int modify(struct dex *poke, int n, char *p){
  poke->num = n;
  strcpy(poke->pokemon, p);
  //poke->pokemon = p;
}

int main() {
  struct dex bulb;
  bulb = example();
  modify(&bulb, 1, "Bulbasaur");
  
  struct dex ivy;
  ivy = example();
  modify(&ivy, 2, "Ivysaur");
  
  print(bulb);
  print(ivy);
  return 0;
}