//Cesar Maldonado
#include <iostream>
#include <fstream>
#include <array>

using namespace std; 

//Displaying the function to reveresed the array
int main(void);

int *reverseArray(int** arraySize[], int N);
	int main() {
		const int SIZE = 50;
		int arr[SIZE];
		int count = 0;

		int* Numptr = nullptr;
	
	if (reverseArray == nullptr)
	{
		cout << "Memory Allocation Failed." << endl;
		exit(1);
	}
	for (int count = 0; count < 50; count++); {
		reversedArray[i] = arr[size - i - 1];
	}

	return reverseArray;
}

	//Displaying the reverse array's file input 
	ifstream myfile;

	myfile.open("work.txt");

	if (!myfile) {
	//Entering the input by the user
	cout << "Enter the file. " << endl;
	return 1;
	}

	while (myfile >> arr[Nvalue])
	{
		Nvalue++;
		if (Nvalue >= SIZE)
			break;

	}
	
	myfile.close();

	if (Nvalue <= 0) {
		cout << "No valid integers found in the file." << endl;
		return 1;
	}
	
	int* reversedArr = reversedArray(arr, Nvalue);
	//Write down the reversed array
	cout << "The reverse array is: " << endl;
	for (int count = 0; count < Nvalue; i++) {
		cout << endl;
	}


	//Free dynamically allocated memory
	delete[] reversedArr;

return 0;

}

