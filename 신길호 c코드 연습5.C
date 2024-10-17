#include <stdio.h>

void print_star1() {
      for(int x=0; x<10; x++)
            printf("*");
}

void print_star2(int b) {
      for(int l=0; l<b; l++) {
            for(int q=0; q<10; q++)
                  printf("*");
                  printf("\n");
      }
}

void print_stars3 (int m, int n) {
      for(int k=0; k<n; k++) {
            for(int v=0; v<m; v++)
                  printf("*");
            printf("\n");
      }
}

int main(void) {

int m,n,b;

print_star1();
printf("\n");
printf("별 10를 몇줄?");
scanf("%d", &b);

print_star2(b);
printf("별 몇 개를 몇 줄?");
scanf("%d %d",&m, &n);

print_stars3(m,n);
printf("별 총개수는: %d", m*n);
}
