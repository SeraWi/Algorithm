// bubble sort 버블 정렬
// 옆에 있는 값과 비교해서 더 작은 값을 앞으로 보내기
// 결과  ( 가장 큰값이 제일 뒤로 이동한다) 
// 효율성이 가장 떨어지는 알고리즘이다
// 버블 정렬의 시간 복잡도 O(N^2)
// 버블 정렬이 선택정렬 보다 느리다(시간 복잡도 같지만)
// 매번 옆에랑 비교해서 바꾸는 수행하기 때문에 

# include <stdio.h>
int main(void){
	int i, j , temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	
	for(i = 0; i<10; i++){
		for(j=0;j<9-i; j++){
			if(array[j] > array[j+1]){
				// 위치 바꾸기 
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	for ( i=0; i<10 ; i++){
		printf("%d", array[i]);
	}
	
	return 0;
} 
