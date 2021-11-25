// Quick sort : 퀵정렬(가장 빠른 정렬 알고리즘) 
// 퀵 정렬은 분할 정복 알고리즘으로 평균 속도가 O(n*logN) 
// 특정한 값을 기준으로 큰 숫자와 작은숫자를 나누면 어떨까?
// 퀵정렬에는 기준값(피벗)이 있다.
// 특정 피벗을 기준으로 분할 한다
// 하지만 피벗값 설정에 따라 시간 복잡도가 달라진다
// 최악의 경우 시간 복잡도가 O(n^2) 이다 
/// 이미 정렬이 다된 경우  O(n^2)이 걸린다. 
// 즉 정렬할 데이터의 특성에 따라서 적절한 정렬 알고리즘을 사용하는 것이 중요하다. 

#include <stdio.h>


int number =10;
int data[10] ={1,10,5,8,7,6,4,3,2,9};

void quickSort(int *data, int start, int end){
	if(start>=end){ // 원소가 1개인 경우 
		return; 
	}
	
	int key = start; //키는 첫번째 원소
	int i= start +1; // 왼쪽에서 시작 (인덱스) 
	int j= end; // 오른쪽에서 시작 
	int temp;
	
	while(i<=j){ // 엇갈릴 때까지 반복
	 	while(data[i] <= data[key]){
	 		// 키 값보다 큰값을 만날 때 까지 오른쪽으로 이동
			 i++; 
		}
		while(data[j] >= data[key] && j>start){
			// 키 값보다 작은 값을 만날 때까지 반 
			j--;
		}
		
		if( i > j){
			//현재 엇갈린 상태면 키값과 교체
			temp = data[j];
			data[j] =data[key];
			data[key] = temp;	
		}else{
			//큰값과 작은값 교체 
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	} 
	// 재귀함수 
	// 키값 기준으로 다시 왼쪽, 오른쪽에서 정렬시키기  
	quickSort(data,start,j -1);
	quickSort(data,j+1,end);
}

int main(void){
	quickSort(data,0,number-1);
	for(int i= 0; i< number ; i++){
		printf("%d ", data[i]);
	} 
}
 
 
