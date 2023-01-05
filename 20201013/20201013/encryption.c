#include <stdio.h>
void encrypt(char cipher[], int shift);
void decrypt(char cipher[], int shift);

int main()
{
	char cipher[50];
	int choose, shift;

	printf("암호화는 1, 복호화는 2를 입력하세요: ");
	scanf("%d", &choose);

	if (choose == 1)
	{
		printf("암호화할 문자열을 입력하세요: ");
		scanf("%s", cipher);
		// gets(cipher)
		printf("암호화할 자릿수를 입력하세요: ");
		scanf("%d", &shift);

		encrypt(cipher, shift);
	}
	else if (choose == 2)
	{
		printf("복호화할 문자열을 입력하세요: ");
		scanf("%s", cipher);
		// gets(cipher)
		printf("복호화할 자릿수를 입력하세요: ");
		scanf("%d", &shift);

		decrypt(cipher, shift);
	}
	else
	{
		printf("잘못된 입력입니다!");
	}

	return 0;
}

void encrypt(char cipher[], int shift)
{
	int i = 0;

	while (cipher[i] != '\0') // \0을 만나기 전까지
	{
		if (cipher[i] >= 'a' && cipher[i] <= 'z') // 소문자에 대해서만 처리한다.
		{
			cipher[i] += shift; // 아스키 코드값을 shift만큼 이동한다.

			if (cipher[i] > 'z') // 만약 문자가 대문자로 밀려나갔다면
			{
				cipher[i] -= 26; // 소문자로 되돌린다.
			}
		}
		i++;
	}
	printf("암호화된 문자열: %s", cipher);
}

void decrypt(char cipher[], int shift)
{
	int i = 0;

	while (cipher[i] != '\0') // \0을 만나기 전까지
	{
		if (cipher[i] >= 'a' && cipher[i] <= 'z') // 소문자에 대해서만 처리한다.
		{
			cipher[i] -= shift; // 아스키 코드값을 shift만큼 이동한다.

			if (cipher[i] < 'a') // 만약 문자가 소문자 앞으로 밀려나갔다면
			{
				cipher[i] += 26; // 소문자로 되돌린다.
			}
		}
		i++;
	}
	printf("복호화된 문자열: %s", cipher);
}