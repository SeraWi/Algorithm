// Quick sort : ������(���� ���� ���� �˰���) 
// �� ������ ���� ���� �˰������� ��� �ӵ��� O(n*logN) 
// Ư���� ���� �������� ū ���ڿ� �������ڸ� ������ ���?
// �����Ŀ��� ���ذ�(�ǹ�)�� �ִ�.
// Ư�� �ǹ��� �������� ���� �Ѵ�
// ������ �ǹ��� ������ ���� �ð� ���⵵�� �޶�����
// �־��� ��� �ð� ���⵵�� O(n^2) �̴� 
/// �̹� ������ �ٵ� ���  O(n^2)�� �ɸ���. 
// �� ������ �������� Ư���� ���� ������ ���� �˰����� ����ϴ� ���� �߿��ϴ�. 

#include <stdio.h>


int number =10;
int data[10] ={1,10,5,8,7,6,4,3,2,9};

void quickSort(int *data, int start, int end){
	if(start>=end){ // ���Ұ� 1���� ��� 
		return; 
	}
	
	int key = start; //Ű�� ù��° ����
	int i= start +1; // ���ʿ��� ���� (�ε���) 
	int j= end; // �����ʿ��� ���� 
	int temp;
	
	while(i<=j){ // ������ ������ �ݺ�
	 	while(data[i] <= data[key]){
	 		// Ű ������ ū���� ���� �� ���� ���������� �̵�
			 i++; 
		}
		while(data[j] >= data[key] && j>start){
			// Ű ������ ���� ���� ���� ������ �� 
			j--;
		}
		
		if( i > j){
			//���� ������ ���¸� Ű���� ��ü
			temp = data[j];
			data[j] =data[key];
			data[key] = temp;	
		}else{
			//ū���� ������ ��ü 
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	} 
	// ����Լ� 
	// Ű�� �������� �ٽ� ����, �����ʿ��� ���Ľ�Ű��  
	quickSort(data,start,j -1);
	quickSort(data,j+1,end);
}

int main(void){
	quickSort(data,0,number-1);
	for(int i= 0; i< number ; i++){
		printf("%d ", data[i]);
	} 
}
 
 
