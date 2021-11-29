#include <stdio.h>
// 백준 정렬 문제
int array[1001] ; // 데이터 갯수에 +1해서 배열 선언하는게 좋다 

// 선택정렬 이용 
int main(void){
	int number, i, j, min, index, temp;
	scanf("%d", &number);
	
	for( i =0; i< number; i++){
		scanf("%d" , &array[i]);
		
	}
	
	for( i =0; i<number; i++){
		min = 1001;
		for ( j= i ; j<number; j++){
			if(min> array[j]){
				min = array[j];
				index =j;
			}
		}
		
		temp = array[i];
		array[i] = array[index];
		array[index]= temp;
		
	}
	
	for(i = 0; i<number; i++){
		printf("%d\n", array[i]);
	}
} 


