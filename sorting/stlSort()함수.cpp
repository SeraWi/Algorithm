// STL sort()�Լ� �ٷ��
//�̹� ���� ���� ���̺귯���� �����Ѵ�.
// ���� �ʿ� ���� ������ ���� �ȴ�.

#include <iostream>
#include <algorithm>

using namespace std;

// ������ ������ ���Ľ�Ű�� 
class Student{
public:
	string name;
	int score;
	Student(string name, int score){
		this ->name = name;
		this ->score= score;
	}
	// ���� ������ '������ ���� ����'
	bool operator <(Student &student){
		return this->score <student.score;
	} 
};



int main(void){
	Student students[]={
		Student("������", 90),
		Student("������", 95),
		Student("������", 30),
		Student("���ֿ�", 92),
		Student("����",100)
		 
	};
	sort(students, students+5);
	for(int i=0; i<5; i++){
		cout<< students[i].name<<' ';
	} 
}
 
//sort(): ���� ������ ���� ���� �� �ִ�
bool compare(int a, int b){
	return a > b; // ���� ���� ������ �ǹ� 
} 
 
 
//int main(void){
//	int a[10] ={7,8,9,3,1,4,5,6,2,0};
//	//	������ + �迭 ���� 
//	sort(a,a+10,compare); // ���� �Լ� (�⺻ ��������) 
//	
//	for(int i= 0 ; i<10; i++){
//		cout << a[i] <<' ';
//	} 
//} 




 



