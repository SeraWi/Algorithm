// 병합정렬 (대표적인 '분할 정복' 방법을 채택한 알고리즘) 
// 퀵정렬과 달리 O(NlogN)을 보장한다.
// 일단 반으로 나누고 나중에 합친다.
// 피벗값이 없다 
// 정렬에 사용하는 배열은 전역변수로 선언해야 한다 

#include <stdio.h>
int number =8;
int sorted[8];// 정렬 배열은 반드시 전역변수로 선언

void merge(int a[], int m, int middle, int n){
	int i = m;
	int j =middle+1;
	int k = m;
	
	//작은 순서대로 배열에 삽입
	while( i<= middle && j <=n){
		if(a[i] <= a[j]){
			sorted[k] =a[i];
			i++;
		}else{
			sorted[k] =a[j];
			j++;
		}
		k++;
	} 
	
	// 남은 데이터도 삽입
	if(i > middle){
		for(int t = j; t<=n; t++){
			sorted[k] =a[t];
			k++;
		}
		
		
	} else{
		for(int t= i; t<=middle; t++){
			sorted[k] = a[t];
			k++;
		}
	}
	
	// 정렬된 배열을 삽입 
	
	for(int t =m; t<=n ;t++){
		a[t] = sorted[t];
	}
	
} 
// 재귀 함수로 
void mergeSort(int a[],int m, int n){
	if( m< n){
		int middle =(m+n) /2;
		mergeSort(a, m, middle);
		mergeSort(a, middle+1, n);
		merge(a,m, middle, n);
	}	

}

int main(void){
	int array[number] ={7,6,5,8,3,5,9,1};
	mergeSort(array , 0, number-1);
	for(int i=0; i<number ; i++){
		printf("%d ", array[i]);
	}
}
