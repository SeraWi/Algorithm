#include <iostream>
#include <vector> 
#include <algorithm>
// ���� ���̺귯���� ��� ���̺귯���� �̿��� �ҽ��ڵ� ���̸� ª�� ���ش�
// ���� stl�� ��ġ �迭�� ���� �۵��ϴµ� ���Ҹ� ���������� ���� �� ������ �� �ִ�.
// part stl�� �ѽ��� �����͸� ó���� �� �ֵ��� ���ִ� �ڷ� ����
 // * stl (standard template library) 
using namespace std;

bool compare(
	pair<string, pair<int,int> >a,
	pair<string, pair<int, int> >b
){	
	// ������ ���ٸ� 
	if(a.second.first == b.second.first){
		// ������ ���� ������ (��л� ����) 
		return a.second.second> b.second.second;
	} else{
		return a.second.first>b.second.first;
	}
	
}
int main(void){
//	vector<pair<int, string> > v;
//	v.push_back(pair<int,string>(90,"���ѿ�"));
//	v.push_back(pair<int,string>(85,"������"));
//	v.push_back(pair<int,string>(82,"���ֿ�"));
//	v.push_back(pair<int,string>(98,"����"));
//	v.push_back(pair<int,string>(79,"������"));
	
	// ���� ��� 
	vector<pair< string , pair<int, string> > > v;
	v.push_back(pair<string,pair<int,int> >("������", pair<int,int> (90,19961222)));
	v.push_back(pair<string,pair<int,int> >("������", pair<int,int> (87,19950122)));
	v.push_back(pair<string,pair<int,int> >("�����", pair<int,int> (90,19961022)));
	v.push_back(pair<string,pair<int,int> >("������", pair<int,int> (45,19981222)));
	v.push_back(pair<string,pair<int,int> >("�Ƹ�", pair<int,int> (92,19921222)));
	
	//sort(v.begin(),v.end()); // ���� ������ ����,�� ���������� 
	
//	for(int i =0; i<v.size(); i++) {
//		//			�̸������� �ǹ� 
//		cout << v[i].second <<' ';
//	}
	
	sort(v.begin(),v.end(),compare);
	
	for(int i =0; i<v.size(); i++) {
		cout << v[i].first <<' ';
	}
	return 0; 
}
