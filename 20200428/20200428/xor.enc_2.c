// XOR 연산자를 통해 char형 변수에 저장된 문자를 암호화하는 프로그램
#include <stdio.h> // printf와 scanf를 사용하기 위해 stdio.h를 불러온다.

int main() // main 함수 호출
{
	char data; // char형 변수 data를 선언한다.
	char key = 0xff; // char형 변수 key에 XOR 연산자를 통한 암호화에 사용할 키를 저장한다. 예시에서는 '0xff'다.

	printf("영문자 1개를 입력하세요 : "); // 사용자에게 영문자 1개 입력을 요청한다.
	scanf("%c", &data); // char형 변수 data에 사용자로부터 입력받은 값을 저장한다.

	char encrypted_data; // char형 변수 encrypted_data를 선언한다.
	encrypted_data = data ^ key; // XOR 연산자로 변수 key를 암호화 키 삼아 data를 암호화한다.

	printf("암호화된 문자 = %c \n", encrypted_data); // 암호화된 data가 저장된 encrypted_data가 출력된다.

	char orig_data; // char형 변수 orig_data를 선언한다.
	orig_data = encrypted_data ^ key; // encrypted_data와 key가 원래의 값과 동일하다면 암호화 이전의 data에 저장된 값을 확인할 수 있다.
	printf("원래의 데이터 = %c \n", orig_data); // orig_data에는 암호화되기 이전 data에 저장된 값이 똑같이 저장되어있다.

	return 0; // 프로그램을 끝낸다.
}