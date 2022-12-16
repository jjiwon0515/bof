#system(): 명령어를 수행하는 함수. 프로그램을 실행하는 함수. 
#예제를 통해서 봐야겠다

#target.exe
#include<stdio.h>

int main(void)
{
  printf("타겟\n");
  return 3;
}

#사용 예시
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
  int re;
  re = system("notepad");
  printf("notepad return : %d\n",re);
  re = system("target");
  printf("target return : %d\n",re);

  return 0;
}

#결과

#notpad return : 0 실제로 notepad라는 경로는 없었기 때문에 실패 -> 0을 반환
#타겟
#target return : 3 
