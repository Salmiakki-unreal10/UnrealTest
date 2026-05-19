#include <iostream>

#include <iostream>

//printf("Hello World!\n");
	//int number = 0;
	//// intsize = scanf("%d", &number); // C 스타일의 표준 입력 방식 
	//std::cin >> number; //c++ 스타일의 표준입력 방식

	//printf("input number is %d", number);

	//printf("나이를 입력하세요 : ");
	//int user_age = 0;	//age라는 int 변수를 선언했다.
	//std::cin >> user_age;
	//printf("내 나이는 %d 살", user_age);

	// 변수 variable
		// 변하는 숫자 
		// 컴퓨터한테 값을 기억하게 하기 위해 사용한다. 
		// 메모리의 일정공간을 확보하고 이름을 붙여 사용하는 것.
		// ex) 데이터 타입; int age;  

	// int(인티저. Integer)
		// 정수형 타입 
		// 정수는 소숫점이 없는 숫자를 말함.
		// 일반적으로	 32비트의 크기를 가지고 있다.

	// 네이밍 규약 *중요*
	// 알아보기 쉽고 간결해야한다. (길이가 길어지더라도 알아보기 좋은 것이 권장된다.)
	// 수업중에는 언리얼 코딩 규약을 따를 것(Pascal Case 기반의 약간의 변형)
	// 문법적 금지
		// 예약어(컴파일러가 미리 사용하려고 잡아 놓은 이름)
		// 숫자로 시작하기
		// 대부분의 특수문자(언더바_는 가능. 하지만 비권장)
		// 띄어쓰기
	//비권장
		//영어가 아닌 문자
		//알파벳은 같지만 대소문자가 다른 두 변수

//int Number = 10; // ���Կ����ڷ� Number�� 10�� �־���.
	//printf("Number : %d\n", Number);
	//printf("Number : %5d\n", Number);	// Number�� ���� 5�ڸ��� ���
	//Number = 20; // ���Կ����ڷ� Number�� 20�� �־���.(���������)
	//printf("Number : %d\n", Number);	// 20
	//Number = 5 + 10; // ��� ������ +�� �̿��ؼ� 5�� 10�� ���ϰ� �� ����� Number�� �����Ѵ�.
	//printf("Number : %d\n", Number);	// 15
	//Number = 7 % 3; // ��������� %�� �̿��ؼ� 7�� 3���� ���� �������� ���ϰ� (1), �� ����� Number�� �����Ѵ�.
	//printf("Number : %d\n", Number);	// 1
	//int Temp1 = 7;

	//Number += Temp1;	// Number�� Temp1�� ���� ���ϰ� �� ����� Number�� �����. 
	//printf("Number : %d\n", Number);	// 8
	//Number *= Temp1;	// Number�� TEmp1�� ���� ���� ��W�� �� ����� Number�� �����. 
	//printf("Number : %d\n", Number);	// 56

	//Number--;	// 55
	//Number--;	// 54
	//Number--;	// 53
	//printf("Number : %d\n", Number);


// ������ (Operator)
// - ��������� (Arithematic Operator)
//		+, -, *, /, %
//		��Ģ���� ���� ���ڳ��� ���ϰų� ���ų� �ϴ� �͵� 
// - ���� ������
//		= 
//		= �����ʿ� �ִ� ���� = ���ʿ� �ִ� ������ �־��
//		int i = 20; // i��� ������ 20�̶�� ���� �־�� �־��
// - ���� ���� ������
//		�ٿ������. ���Կ����ڿ� �ٸ������ڸ� ���ļ� ���������� ����ϴ� ������.
//		int a, int b;
//		a = a + b;
//		a += b;	//���� ���� �ڵ�
// - ���� ������
//		�ٿ������. ������ 1�� ���ϰų� �� �� ����ϴ� ������.
//	a = a + 1;	a++; // same code
//	b = b - 1; b--;	// same code



	//	�ǽ�
	//	- �� ���� �Է¹޾� �����ϱ�
//int sutja = 0;
//int numero = 1;
//printf("a = %d\n", sutja);
//printf("b = %d\n��ȯ\n", numero);
//int temp;
//temp = sutja;
//sutja = numero;
//numero = temp;
//printf("a = %d\n", sutja);
//printf("b = %d\n", numero);
//
////	- �� ���� �Է¹޾� ���� ����ϱ�
//printf("(1)���ڸ� �Է����ּ���: ");
//std::cin >> sutja;
//printf("(2)���ڸ� �Է����ּ���: ");
//std::cin >> numero;
//printf("�� = %d\n", sutja + numero);
//
////  - �簢���� ����, ���θ� �Է¹޾� ���̸� ����ϱ�
//printf("���� ���̸� �Է����ּ���: ");
//std::cin >> sutja;
//printf("���� ���̸� �Է����ּ���: ");
//std::cin >> numero;
//printf("���� = %d\n", sutja* numero);
//
////	- �� ���� �Է¹޾� �������� ����ϱ�(%�����ڸ� ����� ��)
//printf("������ ���� �Է����ּ���: ");
//std::cin >> sutja;
//printf("���� ���� �Է����ּ���: ");
//std::cin >> numero;
//printf("������ = %d\n", sutja% numero);
////	- �� ���� �Է¹޾� �������� ����ϱ�(%�����ڸ� ����� ��)
//printf("������ ���� �Է����ּ���: ");
//int x;
//std::cin >> x;
//printf("���� ���� �Է����ּ���: ");
//int y;
//std::cin >> y;
//while (x > y)
//x = -y;
//printf("������ = %d", x);
//
//printf("�µ��� �Է����ּ��� (����) : ");
//std::cin >> sutja;
//printf("ȭ�� %d ��\n", sutja * 9 / 5 + 32);
//
////�� �� ��
//printf("�ð��� �Է����ּ��� (��) : ");
//std::cin >> sutja;
//int h = sutja / 3600;
//int m = (sutja - h * 3600) / 60;
//int s = sutja - h * 3600 - m * 60;
//printf("�ð��� %d ��", h);
//printf(" %d ��", m);
//printf(" %d ��", s);
//
////���� ����
//printf("\n�ݾ��� �Է����ּ��� (��) : ");
//std::cin >> sutja;
//int obaek = sutja / 500;
//int baek = (sutja - obaek * 500) / 100;
//int oship = (sutja - obaek * 500 - baek * 100) / 50;
//int ship = (sutja - obaek * 500 - baek * 100 - oship * 50) / 10;
//printf("500�� %d��\n", obaek);
//printf("100�� %d��\n", baek);
//printf("50�� %d��\n", oship);
//printf("10�� %d��\n", ship);
//
////�ڸ��� �и�
//printf("\n���ڸ����� �Է����ּ��� : ");
//std::cin >> sutja;
//int hundreds = sutja / 100;
//int tens = (sutja - hundreds * 100) / 10;
//int ones = sutja - hundreds * 100 - tens * 10;
//printf("100 * %d + ", hundreds);
//printf("10 * %d + ", tens);
//printf("1 * %d", ones);
//printf("\n sum = %d", hundreds + tens + ones);
//
////���� �뷮
//printf("\n�뷮�� �Է����ּ���(MB): ");
//std::cin >> sutja;
//printf("\n %d KB �Ǵ� ", sutja * 1024);
//printf("%d Bytes\n", sutja * 1024 * 1024);
//
////Ÿ�� ����
//printf("���� ���̸� �Է����ּ��� : ");
//std::cin >> sutja;
//printf("���� ���̸� �Է����ּ��� : ");
//std::cin >> numero;
//
//int tilesize = 30;
//int widthcount = (sutja + (tilesize - 1)) / tilesize;
//int heightcount = (numero + (tilesize - 1)) / tilesize;
//printf("\n�ʿ��� Ÿ�� ��:%d", widthcount * heightcount);