
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// max,min ==>greedy خوترزمية طماعة
// 
//
// 
//
//
int maxnum(vector<int>prices, int k) {

	int count = 0;
	sort(prices.begin(), prices.end());
	for (int i = 0; i < prices.size(); i++) {
		if (k >= prices[i]) {
			k -= prices[i];
			count++;

		}

	}
	return count;
}

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int>prices;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		prices.push_back(num);
	}
	cout << maxnum(prices, k);


}

