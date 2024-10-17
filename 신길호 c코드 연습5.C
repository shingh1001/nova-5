#include <stdio.h>

int main(void) {

int k,s,z,x;
  
printf("시간을 입력:");
scanf("%d",&k);
printf("분을 입력:");
scanf("%d", &s);
printf("입력한 시간: %d시 %d분 입니다\n", k,s);

z = s-45;

  if(z<0) {
  k = k - 1 ;
  z = 60 + z ;
    if(k<12) 
      printf("오전%d시 %d분 입니다\n", k,z);
    
    else if(k>=12)
      k = k-12;
      printf("오후%d시 %d분 입니다\n", k,z);
  }

  else if(z>0) {
    if(k<12) 
      printf("오전%d시 %d분 입니다\n", k,z);

    else if(k>=12)
      k = k-12;
      printf("오후%d시 %d분 입니다\n", k,z);
  }
  
  else if (z == 0) {
    if(k<12) 
      printf("오전%d시 %d분 입니다\n", k,z);
  
  else if(k>=12)
      k = k-12;
      printf("오후%d시 %d분 입니다\n", k,z);
    }
  
  return 0;
}