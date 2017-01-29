#include <stdio.h>
#include <string.h>
//소문자, 대문자, 숫자, 공백의 개수
int main(){

	char n[101];
	int big, sm, sp, num, length, i;

	while(gets(n) != '\0'){

		length = strlen(n);

		big = 0; sm = 0; sp = 0; num = 0;

		for(i = 0; i < length; i++){

			if(n[i] >= 65 && n[i] <= 90) // big
				big++;

			else if (n[i] >= 97 && n[i] <= 122) // small
				sm++;

			else if (n[i] == 32) // space
				sp++;

			else if (n[i] >= 47 && n[i] <= 57) // num
				num++;
		}

		printf("%d %d %d %d\n", sm, big, num, sp);
	}
}
