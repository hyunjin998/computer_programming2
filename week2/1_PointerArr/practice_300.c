#include <stdio.h>
void Question();

int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p.299
			int arr[5] = { 1, 2, 3, 4, 5 }; // 길이가 5인 int형 배열 arr을 선언하고 1, 2, 3, 4, 5로 초기화
			int* ptr = arr; // 이 배열의 첫 번째 요소를 가리키는 포인터 변수 ptr 선언

			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 5 * 4 / 4 = 5

			// 포인터 변수 ptr에 저장된 값을 증가시키는 형태의 연산을 기반으로
			// 배열요소에 접근하면서 모든 배열요소의 값을 2씩 증가
			for (int i = 0; i < arrLen; i++) {
				*(ptr++) += 2;

				// 정상적으로 증가가 이루어졌는지 확인
				printf("arr[%d]: %d\n", i, arr[i]); // 3 4 5 6 7
			}
			printf("\n");
			break;
		}

		case 2: { // p.300
			int arr[5] = { 1, 2, 3, 4, 5 }; // 길이가 5인 int형 배열 arr을 선언하고 1, 2, 3, 4, 5로 초기화
			int* ptr = arr; // 이 배열의 첫 번째 요소를 가리키는 포인터 변수 ptr 선언

			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 5 * 4 / 4 = 5

			// 포인터 변수 ptr에 저장된 값을 증가시키지 않고,
			// ptr을 대상으로 덧셈연산을 해, 그 결과로 반환되는 주소 값을 통해서
			// 모든 배열요소에 접근해 값을 2씩 증가
			for (int i = 0; i < arrLen; i++) {
				*(ptr + i) += 2;
				
				// 정상적으로 증가가 이루어졌는지 확인
				printf("ptr[%d]: %d ", i, ptr[i]); // 3 4 5 6 7
				printf("arr[%d]: %d\n", i, arr[i]); // 3 4 5 6 7
			}
			printf("\n");
			break;
		}

		case 3: { // p.300
			int arr[5] = { 1, 2, 3, 4, 5 }; // 길이가 5인 int형 배열 arr 선언 및 1, 2, 3, 4, 5로 초기화

			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 5 * 4 / 4 = 5
			int* ptr = &arr[arrLen - 1]; // 이 배열의 마지막 요소를 가리키는 포인터 변수 ptr 선언

			int sum = 0;
			for (int i = 0; i < arrLen; i++) {
				sum += *ptr; // 배열에 저장된 모든 정수를 더함

				*(ptr--); // 포인터 변수 ptr에 저장된 값을 감소시키는 형태의 연산을 기반으로 모든 배열요소에 접근
			}

			printf("sum: %d\n", sum); // 결과 출력, 15
			break;
		}

		case 4: { // p.300
			int arr[6] = { 1, 2, 3, 4, 5, 6}; // 길이가 6인 int형 배열 arr 선언 및 1, 2, 3, 4, 5, 6으로 초기화
			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 6 * 4 / 4 = 6

			int* ptr1 = &arr[0]; // 배열의 앞을 가리키는 포인터 변수 ptr1 선언
			int* ptr2 = &arr[arrLen - 1]; // 배열의 뒤를 가리키는 포인터 변수 ptr2 선언

			for (int i = 0; i < arrLen / 2; i++) {
				int tmp = *ptr1;
				*ptr1 = *ptr2;
				*ptr2 = tmp;

				*ptr1++;
				*ptr2--;
			}

			for (int i = 0; i < arrLen; i++) {
				printf("%d ", arr[i]); // 6 5 4 3 2 1
			}
			printf("\n");
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("===============================\n");
	printf("1. *(ptr++) += 2\n");
	printf("2. *(ptr + i) += 2\n");
	printf("3. *(ptr--)\n");
	printf("4. reverse arr\n");
	printf("==============================\n");
	printf("Select option: ");
}