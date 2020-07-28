#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// Function to find the count of distinct elements in every sub-array
// of size k in the array
void findDistinctCount(vector<int> arr, int k)
{
	// map to store frequency of elements in current window of size k
	unordered_map<int, int> freq;

	// maintains count of distinct elements in every sub-array of size k
	int distinct = 0;

	// loop through the array
	for (int i = 0; i < arr.size(); i++)
	{
		// ignore first k elements
		if (i >= k) {
			// Remove first element from the sub-array by reducing its
			// frequency in the map
			freq[arr[i-k]]--;

			// reduce distinct count if we're left with 0
			if (freq[arr[i-k]] == 0) {
				distinct--;
			}
		}

		// add current element to the sub-array by incrementing its
		// count in the map
		freq[arr[i]]++;

		// increment distinct count by 1 if element occurs for the first
		// time in current window
		if (freq[arr[i]] == 1) {
			distinct++;
		}

		// print count of distinct elements in current sub-array
		if (i >= k-1) {
			cout << "The count of distinct elements in the sub-array [" <<
				(i-k+1) << ", " << i << "]" << " is " << distinct << '\n';
		}
	}
}

// main function
int main()
{
	vector<int> input = { 1, 1, 2, 1, 3 };
	int k = 3;

	findDistinctCount(input, k);

	return 0;
}