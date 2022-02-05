//Fadilah Syakirah
//G1A021022

#include <stdio.h>

int main()
{
  int alas, tinggi, luas;

  printf("Masukkan panjang alas : ");
  scanf("%d", &alas);
  printf("Masukkan tinggi : ");
  scanf("%d", &tinggi);

  luas = alas * tinggi;

  printf("Luas jajar genjang adalah %d\n", luas);

  return 0;
}