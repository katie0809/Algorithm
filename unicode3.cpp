#include "stdafx.h"
#include <iostream>
#include <locale>

int start[3] = {0x1100, 0x1161, 0x11A8 - 1};
int value, cho, jung, jong;

bool extract(wchar_t *str){

  //번수 초기화
  value = cho = jung = jong = 0;

  //한글만 입력되었는지 문자열검사
  /*~~~~~~~~~~~~스킵~~~~~~~~~~~*/

  for(int i = 0; i<wcslen(str); i++){

    //공백검사
    if(str[i] == 0x00){
      wprintf(L" ");
      continue;
    }

    value = str[i] - 0xAC00;
    jong = value % 28;
    jung = ((value - jong) / 28) % 21;
    cho = ((value - jong) / 28) / 21;

    if(jong == 0x11A8) jong = 0;
    cho += start[0];
    jung = += start[1];
    jong += start[2];

    wprintf(L"%c %c %c", cho, jung, (jong == 0x11A8 - 1) ? NULL : jong);
  }
  printf("\n\\n");

  return true;
}

int _tmain(int argc, _TCHAR* argv[]){

  setlocale(LC_ALL, "Korean");

  wchar_t str[] = L"급할수록";
  wprintf(L"입력 : %s\n변환 : ", str);

  extract(str);

  return 0;
}
