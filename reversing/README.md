gdb를 이용한 리버싱 과정<br>
disas main : 메인 함수 보기 <br>
disas func : func 함수 보기<br>

![KakaoTalk_20221216_220939407_01](https://user-images.githubusercontent.com/107084512/208105583-47b3c169-ebf3-4d82-991d-9c4e02ac61f0.jpg)
![KakaoTalk_20221216_220939407](https://user-images.githubusercontent.com/107084512/208105594-b563384d-d345-41b2-90e0-6a2cf38eaeff.jpg)
두 번째 그림에 있는 것처럼 52byte + 그 이후부터 0xcafebabe값을 넣어주면 버퍼 오버플로우를 이용한 해결을 할 수 있게 됩니다

*어셈블리어
push ebp<br>
mov ebp,esp --> sfp 생성<br>

DWORD PRT[ebp-0xc] : epb-0xc에 주소에 있는 데이터를 뜻한다.
