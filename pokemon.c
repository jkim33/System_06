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

int modify(struct dex poke, int n, char* p){
  int* add1 = &(poke.num);
  char* add2 = poke.pokemon;
  *add1 = n;
  strcpy(add2, p);
  return 0;
}

int main() {
  struct dex bulb;
  bulb = example();
  modify(bulb, 1, "Bulbasaur");
  
  struct dex ivy;
  ivy = example();
  modify(ivy, 2, "Ivysaur");
  
  print(bulb);
  print(ivy);
  return 0;
}
