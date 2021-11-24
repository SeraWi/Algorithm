# include <stdio.h>

int main (void){
	int i, j, min, index, temp;
	
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	
	for(i =0; i<10 ; i++){
		min = 9999;
		for(j =i; j<10 ; j++){
			if(min>array[j]){
				min= array[j];
				index =j;
			}
		}
		// 스와핑 
		temp =array[i];
		array[i] = array[index];
		array[index] =temp;
	}
	for(i = 0; i<10 ; i++){
		printf("%d", array[i]);
	}
	return 0;
}

// 선택정렬의 시간 복잡도 : 10+9+8+7+...1
// 10 *(10+1) / 2 = 55
// n*(n+1) /2
// n*n  의 시간이 걸린다고 표현 
// O(n*n) 빅오표기법 
 
