#include <stdio.h>
void main(){
  char c;
  printf ("c_ %u (%p)\n", &c, &c);

  int i;
  printf ("i_ %u (%p)\n", &i, &i);

  int v[137];
  printf ("v_ %u (%p)\n", &v, &v);
  i=0;
  printf ("v[%d] %u (%p)\n", i, &v[i], &v[i]);
  for (i=128; i<137; i++){ 
    printf ("v[%d] %u (%p)\n", i, &v[i], &v[i]);
  }

  struct {
    int dia, mes, ano;
  } data;
  printf ("data_ %u (%p)\n", &data, &data);

  typedef struct {
    double latitude, longitude;
  } Coordenadas;
  Coordenadas cefetmg2_coord;
  printf ("cefetmg2_coord_ %u (%p)\n", &cefetmg2_coord, &cefetmg2_coord);

  printf ("\n\n");

  cefetmg2_coord.latitude=-19.9392326;  //19°56'21.2''S
  cefetmg2_coord.longitude=-43.9992625; //43°59'57.3''W
  printf ("cefetmg2_coord %lf %lf\n", cefetmg2_coord.latitude, cefetmg2_coord.longitude);

  printf ("\n\n");

  printf ("sizeof (char) = %d\n", sizeof (char));
  printf ("sizeof (int) = %d\n", sizeof (int));
  printf ("sizeof (v) = %d\n", sizeof (v));
  printf ("sizeof (data) = %d\n", sizeof (data));
  printf ("sizeof (Coordenadas) = %d\n", sizeof (Coordenadas));
  printf ("sizeof (cefetmg2_coord) = %d\n", sizeof (cefetmg2_coord));
}
