/*332*/

#include <iostream>
#include <vector>

using namespace std;

struct student{
	string sname;
	string name;
	int a;
	int b;
	int c;
	double avg;
	void printInfo(){
		cout << sname << " " << name << " " << endl;
	}
};

bool f(student l, student r){
	if(l.avg < r.avg) return false;
	return true;
}

int main(){

	int n;

	cin >> n;

	vector<student> v;

	for(int i = 0; i < n; ++i){
		student t;
		cin >> t.sname >> t.name >> t.a >> t.b >> t.c;
		t.avg = (t.a + t.b + t.c)/3.0;
		v.push_back(t);
	}

	sort(v.begin(),v.end(),f);

	for(int i = 0; i < n; ++i){
		v[i].printInfo();
	}

	return 0;
}
