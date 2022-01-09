package DivideAndConquer;

import java.util.Arrays;

/*
Divide and Conquer : QuickSort
The size of two problems are flexible.
Use a pivot
Privot : an object to split the given sequence to two subsequences.
1) Compare all numbers with the numbers at the pivot position
2) Move all smaller numbers to left side of the pivot oand larger numbers to right
side of the pivot
3) Repeat this process for all subproblems recursively

피벗 선정 후
큰숫자는 피벗 기준 오른쪽, 작은 숫자는 왼쪽으로 나누기
이방법을 계속 반복한다.

QuickSort(A, left, right)
input : array A[left]~A[right]
Output : sorted array A[left]~A[right]

QuickSort(A, left, p-1) recusively sort the smaller group
QuickSort(A, p+1, right) recusively sort the larger group


>> Time Complexity Analysis

if(left<right) {
1. select pivot - constant
2. change A[pivot] and A[left] - constant
3. compare A[left+1]~A[right] to A[left]
	a.  i= left+1,  j= right - constant 
	b. while(i<j) do  
		if A[i] >= A[j], then change A[j] and A[i], else i++, j--
		 - (right -left -1)/2
4. QuickSort(A, left, p-1)  ?
5. QuickSort(A, P+1, right) ?

}

worst case : 피벗을 골랐는데, 피벗 왼쪽은 subproblem 이 0, 오른쪽은 n-2
			계속 피벗을 고르는데 인덱스 0,1,2,3..이런식으로 
			 ----O(N^2)
best case : 피벗을 중간 인덱스로 골랐을 때 --- O(nlogn)			 


average time complexity :  O(nlogn)
N^2~ nlogn인데 
In Quick sort, assume we select a privot randomly.
Evaluate all comparison count for all sellected pivot combinations
피벗을 고를 확률도 고려해서 계산해야 함



Additoinal Efiiciency Issues 
-recursive call 
- large size -> small size, use quick sort, 문제가 클때는 quicksort 쓰고
- small size -> final answer, insertion sort 문제가 작을 때는 insertion sort
- 퀵소트랑 insertion sort 같이 사용해서 정렬


Empiricall,the most fast algorithms for problems using large input data

 */


public class QuickSort {

	static int partition(int[]array, int start, int end) {
		int pivot = array[(start+end)/2]; //피봇값 중간 인덱스로 선정
		while(start<=end) { 
			while(array[start]<pivot) start++; 
			while(array[end]>pivot) end--;
			if(start<=end) { 
				int tmp = array[start]; 
				array[start]=array[end]; 
				array[end]=tmp; 
				start++; 
				end--; 
			} 
		}



		return start;
	}

	static int[] quickSort(int[]array, int start, int end) {
		int p = partition(array, start, end);
		
		//피벗 중심으로 왼쪽, 오른쪽 그룹 정렬 시키기 
		if(start <p-1) {
			quickSort(array,start, p-1);
		}
		if(p < end) {
			quickSort(array, p, end);
		}

		return array;
	}



	public static void main(String[] args) {
		int[] array = {4,2,3,5,9, 8, 10, 1, 0, 7, 6};
		array = quickSort(array, 0, array.length-1);
		System.out.println(Arrays.toString(array));
	}



}
