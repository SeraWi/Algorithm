#include <iostream>
#include <vector> 
#include <algorithm>
// 벡터 라이브러리와 페어 라이브러리를 이용해 소스코드 길이를 짧게 해준다
// 벡터 stl은 마치 배열과 같이 작동하는데 원소를 선택적응로 삽입 및 삭제할 수 있다.
// part stl은 한쌍의 데이터를 처리할 수 있도록 해주는 자료 구조
 // * stl (standard template library) 
using namespace std;

bool compare(
	pair<string, pair<int,int> >a,
	pair<string, pair<int, int> >b
){	
	// 점수가 같다면 
	if(a.second.first == b.second.first){
		// 생일이 빠른 순서로 (어린학생 먼저) 
		return a.second.second> b.second.second;
	} else{
		return a.second.first>b.second.first;
	}
	
}
int main(void){
//	vector<pair<int, string> > v;
//	v.push_back(pair<int,string>(90,"박한울"));
//	v.push_back(pair<int,string>(85,"위세라"));
//	v.push_back(pair<int,string>(82,"박주원"));
//	v.push_back(pair<int,string>(98,"수지"));
//	v.push_back(pair<int,string>(79,"차은우"));
	
	// 이중 페어 
	vector<pair< string , pair<int, string> > > v;
	v.push_back(pair<string,pair<int,int> >("나동빈", pair<int,int> (90,19961222)));
	v.push_back(pair<string,pair<int,int> >("위세라", pair<int,int> (87,19950122)));
	v.push_back(pair<string,pair<int,int> >("배수지", pair<int,int> (90,19961022)));
	v.push_back(pair<string,pair<int,int> >("차은우", pair<int,int> (45,19981222)));
	v.push_back(pair<string,pair<int,int> >("아린", pair<int,int> (92,19921222)));
	
	//sort(v.begin(),v.end()); // 성적 순으로 정렬,로 오름차순으 
	
//	for(int i =0; i<v.size(); i++) {
//		//			이름정보를 의미 
//		cout << v[i].second <<' ';
//	}
	
	sort(v.begin(),v.end(),compare);
	
	for(int i =0; i<v.size(); i++) {
		cout << v[i].first <<' ';
	}
	return 0; 
}
