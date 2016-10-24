#include <iostream>
#include <vector>

using namespace std;

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

	vector<string> v;

	for(int i = 0; i < n; ++i){
		string s;
		cin >> s;
		v.push_back(s);
	}

	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(f2(v[i]) > f2(v[j])){
				swap(v[i],v[j]);
			}
		}
	}


	for(int i = 0; i < n; ++i){
		cout << v[i] << endl;
	}

	return 0;
}
