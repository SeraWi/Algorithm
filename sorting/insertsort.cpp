#include <stdio.h>

// 삽입 정렬 :insert sort
// 시간복잡도 O(N^2)
// 버블, 선택 정렬은 무조건 위치를 바꾸는 방식이었다면
// 삽입 정렬은 '필요할때만' 위치를 바꾼다
// 따라서 같은 시간 복잡도이지만 삽입 정렬이 가장 빠르다
// 데이터가 이미 '거의 정렬된' 상태에 한해서는 어떤 알고리즘보다도 빠르다는 특징을 가진다. 

int main(void){
	int i ,j, temp;
	int array[10] ={1,10,5,8,7,6,4,3,2,9};
	for(i =0; i<9; i++){
		j=i;
		while (array[j] >array[j+1]){
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] =temp;
			j--;
		}
	}
	
	for(i=0;i<10; i++){
		printf("%d", array[i]);
	}
	return 0;
} 
