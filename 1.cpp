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

bool f(string l, string r){
	if(f2(l) > f2(r)) return false;
	return true;
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

	sort(v.begin(),v.end(),f);

	for(int i = 0; i < n; ++i){
		cout << v[i] << endl;
	}

	return 0;
}
