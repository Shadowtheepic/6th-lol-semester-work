#include<iostream>
using namespace std;



int main() {
	int location;//to keep track of which slot in the array we're looking at
	bool found = false;//have we found it?
	int IDs[] = {234, 567, 321, 567, 234, 789};
	location = sizeof(IDs) / sizeof(IDs[0]);//starts in the last slot

	int searchItem;
	cout << "enter ID you are searching for: " << endl;
	cin >> searchItem;

	while (location > 0 && !found) {//keep going as long as we haven't reached the end AND we haven't found it
		if (IDs[location] == searchItem)//check if what were looking for is in that slot
			found = true;
		else {
			location--;//if we haven't found it, move to the next slot before looping
		}
	}

	if (found == true) {
		cout << "Id " << searchItem << " was found in slot " << location << "." << endl;
	}
	else
		cout << "Id was not found." << endl;
}
