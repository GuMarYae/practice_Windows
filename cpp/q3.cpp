#include <iostream>
#include <string>


/*
int main() {
	int binarySearch(const int list[], int key, int listSize)
	{
		int low = 0;
		int high = listSize - 1;

		while (high >= low)
		{
			int mid = (low + high) / 2;
			if (key < list[mid])
				high = mid - 1;
			else if (key == list[mid])
				return mid;
			else low = mid + 1;
		}  return -low - 1;	

	};
*/
 

//generic
template<typename T>
int binaryFunction(const T myArray[], T key, int listSize) {
	int low = 0;
	int high = listSize - 1;

	while (high >= low) {
		int mid = (low + high) / 2;
		if (key < myArray[mid])
			high = mid - 1;
		else if (key == myArray[mid])
			return mid;
		else low = mid + 1;
	}
	return - 1;
}


int main() {

	int ints[] = { 1,2,3,4,5,6,7,8,9 };
	double nums[]={ 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 };
	//rather do this instead of using namespace std;
	std::string words[] = { "a","b","c","d","e","f","g","h","i" };
	std::string key("i");
	//calling all function
	std::cout << binaryFunction(ints, 1, 9) <<std:: endl;
	std::cout << binaryFunction(nums, 7.7,9) << std::endl;
	std::cout << binaryFunction(words,key,9) << std::endl;

	system("pause>0");
	return 0;
}







