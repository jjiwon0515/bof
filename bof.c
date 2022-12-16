#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void func(int key){
  char overflow[32];
  printf("overflow: ");
  gets(overflow);
  if(key==0xcafebabe){
    system("/bin/sh");
  }
  else{
    printf("Nah...\n);
  }
}
int main(int argc, char * argv[]){
  func(0xdeadbeef);
}
         
