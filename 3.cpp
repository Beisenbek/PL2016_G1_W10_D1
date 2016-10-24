#include <iostream>
#include <vector>

using namespace std;

struct mystring
{
	string s;
	int cnt_v;
};

int f2(string s){
	int res = 0;

	for(int i = 0; i < s.length(); ++i){
		if( s[i] == 'a' || 
			s[i] == 'e' || 
			s[i] == 'i' ||
			s[i] == 'o' || 
			s[i] == 'u'){
			res++;
		}
	}

	return res;
}

int main(){

	int n;

	cin >> n;

	vector<mystring> v;

	for(int i = 0; i < n; ++i){
		mystring str;
		cin >> str.s;
		str.cnt_v = f2(str.s);
		v.push_back(str);
	}

	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(v[i].cnt_v > v[j].cnt_v){
				swap(v[i],v[j]);
			}
		}
	}


	for(int i = 0; i < n; ++i){
		cout << v[i].s << " " <<  v[i].cnt_v<< endl;
	}

	return 0;
}
