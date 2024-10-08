#include <iostream>
#include "linear_search.hpp"

using namespace std;
int main() {

	int arr[] = { 8, 1, 4, 3, 2 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int target;

	cout << "Enter a number to search:";
	cin >> target;

	int index = linearSearch(arr, size, target);

	if (index != -1) {
		cout << "Element found at index:" << index << endl;
	}
	else {
		cout << "Element not foundmin the array." << endl;
	}
	return 0;
}