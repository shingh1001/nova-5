#include <stdio.h>
 
int main()
{
    char str[100]; // 문자열 배열과 문자형 변수를 선언
    char ch;
// 대문자, 소문자, 숫자의 개수를 초기화 한다.
    int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
    int i;
 
    printf("문자열을 입력(100자 이내) : ");
    scanf("%s", str);
 
    i = 0;
    do {
        ch = str[i]; // 문자열에서 한 글자를 추출한다.
 
        if (ch >= 'A' && ch <= 'Z')
            upper_cnt++;
        if (ch >= 'a' && ch <= 'z')
            lower_cnt++;
        if (ch >= '0' && ch <= '9')
            digit_cnt++;
 
        i++;
    } while (ch != '\0');
 
    printf("대문자 %d개, 소문자 %d개, 숫자 %d개\n", upper_cnt, lower_cnt, digit_cnt);
}
