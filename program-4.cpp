/*
Problem-4: Get the total count of number listed in the dictionary which is multiple of [1,2,3,4,5,6,7,8,9]
  (examples)
  input: [1,2,8,9,12,46,76,82,15,20,30]
  Output: 
    {1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}
*/



#include <iostream>
#include <vector>
#include <map>
using namespace std;

void countMultiples(vector<int> nums, int n, map<int,int>& mp) {
	for (int i=1; i<=9; ++i) {
		int cnt = 0;
		for (int num:nums) {
			if (num%i==0)
				cnt++;
		}
		mp[i] = cnt;
	}
}

int main() {
	int n;
	cout << "Enter the size of nums: ";
	cin >> n;
	vector<int> nums(n);
	cout << "Enter the value of nums: ";
	for (int i=0; i<n; ++i) {
		int x;
		cin >> x;
		nums[i] = x;
	}
	
	map<int,int> freq;
	for (int i=1; i<=9; ++i) 
		freq[i] = 0;
	
	countMultiples(nums, n, freq);
	
	cout << "{";
	for (int i=1; i<=9; ++i) {
		cout << i << ":" << freq[i];
		if (i<9) cout << ", ";
	}
	cout << "}";
	return 0;
}