#include <stdio.h>
void Question();

int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: {
			int arr[3]; // 길이가 3인 int형 배열 arr 선언
			int* pa = arr; // arr의 첫 번째 주소값을 가리키는 int형 포인터 변수 pa 선언
			printf("%d %d\n", sizeof(arr), sizeof(pa)); // 4 * 3 = 12, 8
			break;
		}

		case 2: {
			int arr[3]; // 길이가 3인 int형 배열 arr 선언
			int* pa = arr; // arr의 첫 번째 주소값을 가리키는 int형 포인터 변수 pa 선언

			pa = pa + 1; // pa가 arr의 두 번째 주소값을 가리키도록 변경
			printf("%u\n", pa); // %u: 부호 없는 10진수, arr의 두 번째 주소값 출력

			// arr = arr + 1; 에러
			printf("%u\n", arr); // arr의 첫 번째 주소값 출력

			break;
		}

		case 3: {
			double arrd[4] = { 12.4, 23.1, 15.7, 31.2 }; // 길이가 4인 double형 배열 arrd를 선언과 동시에 초기화
			double* pb = arrd; // arrd의 첫 번째 요소를 가리키는 double형 포인터 변수 pb 선언

			int arrdLen = sizeof(arrd) / sizeof(double); // arrdLen = 8 * 4 / 8 = 4

			// 포인터 pb를 사용해 배열 요소를 처음부터 끝까지 출력
			for (int i = 0; i < arrdLen; i++) {
				printf("%.1f ", *pb);
				pb++;
			}
			printf("\n");
			break;
		}

		case 4: {
			char* p = "banana"; // 문자열 "banana"를 가리키는 포인터 p 선언

			int pLen = 0;
			for (int i = 0; p[i] != NULL; i++) {
				pLen++;
			} // pLen = 6

			for (int i = 0; i < pLen; i++) {
				for (int j = 0; p[j] != NULL; j++) {
					printf("%c", *(p + j));
				}
				printf("\n");
				p++;
			}
			break;
		}

		case 5: {
			// (방법 1) 해당 문자열을 배열에 저장한 후 'e'에 해당하는 index 찾기
			char str1[] = { "computerprogramming" };

			int index = NULL;
			while(str1[index] != 'e') index++;
			printf("(1)using Array: %d\n", index);

			// (방법2) 배열을 사용하지 않고 포인터를 사용해서 찾기
			char* str2 = "computerprogramming"; // 문자열 "computrprogramming"을 가리키는 char형 포인터 변수 str 선언
			
			int i = NULL;
			for (i = 0; i < *str2 != NULL; i++) {
				if (*str2 == 'e') break;
				else str2++;
			}
			printf("(2)using Pointer: %d\n", i);
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("================================================\n");
	printf("1. pointer result\n"); // 코드의 실행 결과를 예측해보고, 결과와 일치하는지 확인해보기
	printf("2. pointer result(2)\n"); // 코드의 실행 결과를 예측해보고, 결과와 일치하는지 확인해보기
	printf("3. arrd[4] = { 12.4, 23.1, 15.7, 31.2 }\n"); // 포인터 pb를 사용해 배열 요소를 처음부터 끝까지 출력하는 프로그램
	printf("4. banana\n"); // banana\n anana\n nana\n ana\n na\n a 출력
	printf("5. where is 'e' in \"computerprogramming\"\n"); // 문자열 "computerprogramming"에서 'e'가 처음으로 나타나는 위치를 찾아 출력하는 프로그램
	printf("================================================\n");
	printf("Select option: ");
}
