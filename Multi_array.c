#include<stdio.h>

// 다차원 배열
// 다차원 배열은 2차원 이상의 배열을 의미하며, 배열 요소로 또 다른 배열을 가지고있다

int main() {

	int arr[3][3] = { 10,20,30,40,50,60,70,80,90 };
	int arr1[3][3] = { {10,20,30},{40,50,60},{70,80,90} };

	//2차원 배열 열의 길이
	int arr_col = sizeof(arr[0]) / sizeof(arr[0][0]);
	//2차원 배열 행의 길이
	int arr_row = (sizeof(arr) / arr_col) / sizeof(arr[0][0]);

	return 0;
}