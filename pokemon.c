//Richard Wong & Jason Kim
//System Level Programming -- Pd.5
//Work#06 -- Con-struct-ion
//10-3-18

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

struct dex {int num; char pokemon[64];};
char* poke[] = {"Bulbasaur", "Ivysaur", "Venusaur", "Charmander", "Charmeleon", "Charizard", "Squirtle", "Wartortle", "Blastoise"};

struct dex example() {
  struct dex ex;
  int a = rand()%9;
  strcpy(ex.pokemon, poke[a]);
  ex.num = (a+1);
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
  return 0;
}

int main() {
  srand(time(NULL));
  
  struct dex poke1;
  poke1 = example();
  
  struct dex poke2;
  poke2 = example();

  struct dex overrated;
  overrated = example();
  modify(&overrated, 6, "Charizard");
  
  print(poke1);
  print(poke2);
  print(overrated);
  return 0;
}
