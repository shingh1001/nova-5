#include <stdio.h>

int s = 0;
int mul(int k)
{

  for(int i=1; i<10; i++){
    printf("%d * %d = %d\n", k, i, k*i);
     s += k*i;
  }
    return 0;
}

int main(void) {

int k = 0;
int i = 1;

printf("원하는 구구단 단수 입력:");
scanf("%d", &k);

mul(k);
  printf("값의 합은:%d", s);


  return 0;
}