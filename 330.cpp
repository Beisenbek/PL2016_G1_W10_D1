/*330*/

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

	double w1 = -1;

	for(int i = 0; i < n; ++i){
		if(v[i].avg > w1){
			w1 = v[i].avg;
		}
	}

	for(int i = 0; i < n; ++i){
		if(v[i].avg == w1){
			v[i].printInfo();
		}
	}

	return 0;
}
