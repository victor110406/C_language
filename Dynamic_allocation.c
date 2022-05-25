#include<stdio.h>
#include<stdlib.h>

//동적 할당
//런 타임에 메모리를 할당받는 것을 메모리의 동적 할당이라 한다.

int main() {

	//malloc()
	//할당받고자 하는 메모리의 크기를 바이트 단위로 전달
	//malloc()함수의 원형에서 볼 수 있는 size_t 타입은 부호없는 정수이다.

	//free()
	//힙 영역에 할당받은 메모리 공간을 다시 운영체제로 반환
	//사용이 끝난 메모리를 해제하지 않으면 메모리가 부족해지는 현상을 메모리 누수라 한다.

	int* pInt = (int*)malloc(sizeof(int)*4); //동적 할당

	if (pInt == NULL) {
		printf("동적 할당에 실패!\n");
		exit(1);
	}
	
	printf("동적 할당받은 메모리 초기값\n");
	for (int i = 0; i < 4; i++) {
		printf("%d ", pInt[i]);
	}


	//calloc()
	//힙 영역에 메모리를 동적으로 할당해주는 함수
	//malloc()함수와 다른 점은 할당하고자 하는 메모리의 크기를 두 개의 인수로 나누어 전달받는다.
	//메모리를 할당받은 후에 해당 메모리의 모든 비트값을 전부 0으로 초기화
	printf("\n\n");

	int* ppInt = (int*)calloc(sizeof(int), 4);

	if (ppInt == NULL) {
		printf("동적 할당에 실패!\n");
		exit(1);
	}

	printf("동적 할당받은 메모리 초기값\n");
	for (int i = 0; i < 4; i++) {
		printf("%d ", ppInt[i]);
	}

	free(ppInt);

	printf("\n\n");

	//realloc()
	//이미 할당된 메모리의 크기를 바꾸어 재할당할 때 사용하는 함수
	pInt = (int*)realloc(pInt, sizeof(int) * 8);
	if (pInt == NULL) {
		printf("동적 할당에 실패!\n");
		exit(1);
	}

	printf("동적 할당받은 메모리 초기값\n");
	for (int i = 0; i < 8; i++) {
		printf("%d ", pInt[i]);
	}

	free(pInt);


	return 0;
}