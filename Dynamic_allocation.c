#include<stdio.h>
#include<stdlib.h>

//���� �Ҵ�
//�� Ÿ�ӿ� �޸𸮸� �Ҵ�޴� ���� �޸��� ���� �Ҵ��̶� �Ѵ�.

int main() {

	//malloc()
	//�Ҵ�ް��� �ϴ� �޸��� ũ�⸦ ����Ʈ ������ ����
	//malloc()�Լ��� �������� �� �� �ִ� size_t Ÿ���� ��ȣ���� �����̴�.

	//free()
	//�� ������ �Ҵ���� �޸� ������ �ٽ� �ü���� ��ȯ
	//����� ���� �޸𸮸� �������� ������ �޸𸮰� ���������� ������ �޸� ������ �Ѵ�.

	int* pInt = (int*)malloc(sizeof(int)*4); //���� �Ҵ�

	if (pInt == NULL) {
		printf("���� �Ҵ翡 ����!\n");
		exit(1);
	}
	
	printf("���� �Ҵ���� �޸� �ʱⰪ\n");
	for (int i = 0; i < 4; i++) {
		printf("%d ", pInt[i]);
	}


	//calloc()
	//�� ������ �޸𸮸� �������� �Ҵ����ִ� �Լ�
	//malloc()�Լ��� �ٸ� ���� �Ҵ��ϰ��� �ϴ� �޸��� ũ�⸦ �� ���� �μ��� ������ ���޹޴´�.
	//�޸𸮸� �Ҵ���� �Ŀ� �ش� �޸��� ��� ��Ʈ���� ���� 0���� �ʱ�ȭ
	printf("\n\n");

	int* ppInt = (int*)calloc(sizeof(int), 4);

	if (ppInt == NULL) {
		printf("���� �Ҵ翡 ����!\n");
		exit(1);
	}

	printf("���� �Ҵ���� �޸� �ʱⰪ\n");
	for (int i = 0; i < 4; i++) {
		printf("%d ", ppInt[i]);
	}

	free(ppInt);

	printf("\n\n");

	//realloc()
	//�̹� �Ҵ�� �޸��� ũ�⸦ �ٲپ� ���Ҵ��� �� ����ϴ� �Լ�
	pInt = (int*)realloc(pInt, sizeof(int) * 8);
	if (pInt == NULL) {
		printf("���� �Ҵ翡 ����!\n");
		exit(1);
	}

	printf("���� �Ҵ���� �޸� �ʱⰪ\n");
	for (int i = 0; i < 8; i++) {
		printf("%d ", pInt[i]);
	}

	free(pInt);


	return 0;
}