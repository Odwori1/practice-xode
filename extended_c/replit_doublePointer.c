#include <stdio.h>

int main(void) {
  int a = 10, b = 20;
  int *p, *q;
  int c;
  p = &a;
  q = &b;
  c = *q;

  int **k = &p;

  printf("a = %d\n", *p);
  printf("b = %d\n", *q);
  printf("address of a = %p\n", &a);
  printf("adress of b = %p\n", &b);
  printf("address of a = %p\n", p);
  printf("adress of b = %p\n", q);
  printf("address of p = %p\n", &p);
  printf("adress of q = %p\n", &q);
  printf("c = %d\n", c);
  printf("address of c = %p\n", &c);
   printf("address of k = %p\n", &k);
  printf("k= %d\n", **k);
  **k = 35;/* k is a double pointer to p and p is a pointer to a, so by changing the value at **k we ultimately change the value at &p and &a*/
  printf("a = %d\n", a);
  return 0;
}
