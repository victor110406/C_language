#include<stdio.h>

// ������ �迭
// ������ �迭�� 2���� �̻��� �迭�� �ǹ��ϸ�, �迭 ��ҷ� �� �ٸ� �迭�� �������ִ�

int main() {

	int arr[3][3] = { 10,20,30,40,50,60,70,80,90 };
	int arr1[3][3] = { {10,20,30},{40,50,60},{70,80,90} };

	//2���� �迭 ���� ����
	int arr_col = sizeof(arr[0]) / sizeof(arr[0][0]);
	//2���� �迭 ���� ����
	int arr_row = (sizeof(arr) / arr_col) / sizeof(arr[0][0]);

	return 0;
}