# bof

![bof](https://user-images.githubusercontent.com/107084512/208086790-9a08f0ad-1ea1-4deb-b6c7-34f77355413b.png)

코드를 보면서 하나씩 해석을 하면<br>
첫 번째로 func함수에서 overflow로 저장 공간을 할당하고 gets함수를 이용하여 입력값을 받아낸다.<br>
두 번째로 if문에서는 갑자기 key값과 0xcafebabe값을 비교하여 같다면 원하는 답을 얻을 수 있도록 했다.<br>
이것들을 보고 처음에는 내가 준 입력값이 이 코드에 무슨 영향을 줄 수 있을까 생각을 해봤고 문제에 있는 bof에 대해서 검색해봤다.<br>

예시로 다른 코드를 볼 수 있었다.<br>
#include<stdio.h><br>
int main(){<br>
char buffer[200];<br>
strcpy(argv[0],buffer);<br>
printf("hello %s",buffer);<br>
}<br>
위에 있는 코드도 버퍼 오버플로우 취약성이 있는 코드다. 저장 공간을 넘어가는, 즉 200자 이상을 입력하면 버퍼 오버플로우가 발생하게 된다.<br>

정확한 구조를 알기 위해서 리버싱을 이용해서 더 세밀한 솔루션을 찾아야한다고 생각했다.<br>
[리버싱 과정](https://github.com/huboca/bof/tree/main/reversing)<br>


