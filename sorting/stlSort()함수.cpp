// STL sort()함수 다루기
//이미 정렬 관련 라이브러리가 존재한다.
// 만들 필요 없이 가져다 쓰면 된다.

#include <iostream>
#include <algorithm>

using namespace std;

// 데이터 집합을 정렬시키기 
class Student{
public:
	string name;
	int score;
	Student(string name, int score){
		this ->name = name;
		this ->score= score;
	}
	// 정렬 기준은 '점수가 작은 순서'
	bool operator <(Student &student){
		return this->score <student.score;
	} 
};



int main(void){
	Student students[]={
		Student("나동빈", 90),
		Student("위세라", 95),
		Student("박진영", 30),
		Student("박주원", 92),
		Student("수지",100)
		 
	};
	sort(students, students+5);
	for(int i=0; i<5; i++){
		cout<< students[i].name<<' ';
	} 
}
 
//sort(): 정렬 기준을 내가 정할 수 있다
bool compare(int a, int b){
	return a > b; // 내림 차순 정렬을 의미 
} 
 
 
//int main(void){
//	int a[10] ={7,8,9,3,1,4,5,6,2,0};
//	//	변수명 + 배열 갯수 
//	sort(a,a+10,compare); // 정렬 함수 (기본 오름차순) 
//	
//	for(int i= 0 ; i<10; i++){
//		cout << a[i] <<' ';
//	} 
//} 




 



