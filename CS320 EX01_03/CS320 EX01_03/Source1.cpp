#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector <int> Vec1;
	vector <int> Vec2;

	vector<int>& operator+=(vector<int>& Vec1, int& Vec2);
	{
		Vec1.push_back(Vec2);
		return Vec1;
	}
}