#system(): 명령어를 수행하는 함수. 프로그램을 실행하는 함수. 
#예제를 통해서 봐야겠다

#include<stdio.h>
#include<stdlib.h>

int main(){
  int ret = system("ls -l");
  printf("ret : %d\n",ret);
  return 0;
}


#결과
