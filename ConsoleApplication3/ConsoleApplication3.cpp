//2025/09/03 수업내용

#include <iostream>

/*
비트 연산자
&	(and) 두 비트가 모두 1이면 1, 아니면 0
ex) int a = 10;		//	0b1010 : 이진수
	int b = 9;		//	0b1001 : 이진수
	int c = a & b;	//	0b1000 : 두 이진수에서 1인부분이 같은 부분만을 추출

|	(Or) 두 비트가 하나라도 1이면 1, 둘다 0이면 0
ex) int a = 10;		//	0b1010 : 이진수
	int b = 9;		//	0b1001 : 이진수
	int c = a | b;	//	0b1011 : 두 이진수에서 어느쪽이라도 1인부분을 추출
	(특정 비트에 추가 적인 셋팅을 하고 싶을때)
^	(xor) 두비트가 서로 다르면 1, 같으면 0
ex)	int a = 10;		//	0b1010 : 이진수
	int b = 9;		//	0b1001 : 이진수
	int c = a ^ b	//  0b0011 : 1이나 0 둘중 같은 수를 가지고 있는 곳이 1 다른곳이 0이된다.
	(특정비트를 토글하고 싶을때)
~	(not) 비트값을 반전 시킨다(0->1, 1->0)
	int a = 10;		//0b0111
	a = ~a;			//0b1000

<<	(Left Shift) 비트들을 왼쪽으로 이동
	(한번 움직일 떄 마다 수가 두배가 된다.)
	int a = 7;		//0b0111
	a = a << 1;		//0b1110
>>	(Right Shift) 비트들을 오른쪽으로 이동
	(한번 움직일 때 마다 수가 절반이 된다.)
	int a = 7;		//0b0111
	a = a >> 1;		//0b0011
*/

/*

반복문
	-제어문 중의 하나
		-특정 코드 블록을 조건에 따라 여러번 반복해서 실행할 수 있게 해주는 문
	for			반복 횟수가 명확할 때 좋음
	while		반복 횟수가 조건에 따라 반복할때
	do-while	일단 한번 실행 후 조건을 확인 하고 조건이 만족 될시 반복함


*/

/*
{

	int flag = 0b1010;
	//0b0001; = 왼쪽 키가 눌림.
	//0b0010; = 오른쪽 키가 눌림.
	//0b0100; = 우ㅣ쪽 키가 눌림.
	//0b1000; = 아랫쪽 키가 눌림.

	if (flag & 0b0010) ! = 0b0000)
	{
		// 오른쪽 키가 눌러져 있다.
	}
	else
	{
		//오른쪽 키가 눌러져 있지 않다.
	}
	return 0;



	int flag = 0b1010;
	flag = lag | 0b0001;	//결과는 flag = 0b1011;


	int flag = 0b1010;
	int result = flag ^ 0b0001;	// 결과 = 0b1011
	result = 0b1011 ^ 0b0001;	// 결과 = 0b1010

	flag = 0b1010;
	int test
		

		// enum : 상수들에게 사람이 알아보기 좋은 이름을 붙여 놓은 것
	enum Key
	{
		Up		= 1 << 0,	//0b0001
		Down	= 1 << 1,	//0b0010
		Left	= 1 << 2,	//0b0100
		Right,	= 1 << 3,	//0b1000
	};

	if ((flag & Up) ! = 0)

	int testFlag = Up;



	*/

/* 간단실습
int main()
{
int misnum1 = 0;
const int flag = 0b0001;

printf("수를 하나 입력해 주십시오 : ");

std::cin >> misnum1;

if ( (misnum1 & flag) !=0)
{
	printf(" 홀수 입니다.");
}
else
{
	printf("짝수 입니다.");
}
return 0;
}
*/
/*
int main()

{
	for (int i = 1; i < 11; i++)

	{
		printf("헬로우 월드 : %d \n", i);
	}


	int count = 1;
	while (count % 3 != 0)
	{
		printf("hello world while : %d\n", count);
		count++;
	}

	
	do
	{
		printf("hello world while : %d\n", count);
		count++;
	} while ((count % 3) !=0);
	

	return 0;
}
*/

//간단 실습1번

//int main()
//
//
//{
//	int insnumber = 0;
//	int outnumber = 0;
//
//	printf(" 숫자를 입력 해 주세요 : ");
//	std::cin >> insnumber;
//
//	while ( (insnumber ) !=0 )
//	{	
//		outnumber = (outnumber + insnumber);
//		printf(" 숫자를 입력 해 주세요 : ");
//		std::cin >> insnumber;
//	}
//			printf(" 답은 %d 입니다", outnumber);
//		return 0;
//	}
//간단 실습2번
//
//int main()
//{
//
//int insnember = 0;
//int outnember = 0;
//int i = 1;
//
//printf("1~9까지의 숫자를 입력해 주세요");
//std::cin >> insnember;
//
//while (i < 10)
//{	
//	(insnember * i);
//	
//	outnember = (insnember * i);
//
//	printf(" %d x %d = %d \n", insnember, i, outnember);
//	i++;
//	
//}
//return 0;
//}

int main()
{
	int insnum = 0;
	int outnum = 0;
	int i = 0;

	printf("수를 입력해 주세요 : ");
	std::cin >> insnum;

	if (insnum & 2 == 0)
	{
		outnum = (insnum - 1);

	}
	{

		while (insnum >= 1)
		{
			(outnum = (insnum - i * 2));

				printf("%d \n", outnum);

			i++;
		}

		return 0;
	}
}
