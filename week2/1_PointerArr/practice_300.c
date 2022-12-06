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
				*ptr += 2;

				// 정상적으로 증가가 이루어졌는지 확인
				printf("ptr[%d]: %d ", i, *ptr);
				printf("arr[%d]: %d\n", i, arr[i]);
				ptr++;
			}
			printf("\n");
			break;
		}

		case 2: { // p.300
			int arr[5] = { 1, 2, 3, 4, 5 };
			int* ptr = arr;

			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 5 * 4 / 4 = 5

			// 포인터 변수 ptr에 저장된 값을 변경시키지 않고,
			// ptr을 대상으로 덧셈연산을 해, 그 결과로 반환되는 주소 값을 통해
			// 모든 배열 요소에 접근해 값을 2씩 증가
			for (int i = 0; i < arrLen; i++) {

				

				// 정상적으로 증가가 이루어졌는지 확인
				// printf("ptr[%d]: %d ", i, );
				printf("arr[%d]: %d\n", i, arr[i]);
				ptr++;
			}
			printf("\n");
			break;
		}

		case 3: { // p.300
			int arr[5] = { 1, 2, 3, 4, 5 };

			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 5 * 4 / 4 = 5
			int* ptr = arr[arrLen - 1];

			int sum = 0;
			for (int i = 0; i < arrLen - 1; i++) {
			}
			printf("sum: %d\n", sum);
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("===============================\n");
	printf("1. *ptr += 2\n");
	printf("2. string reverse\n");
	printf("3. biggest character\n");
	printf("4. biggest character\n");
	printf("==============================\n");
	printf("Select option: ");
}