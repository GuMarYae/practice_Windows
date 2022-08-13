#include <iostream>

// Function Prototype! 
int* mergeArrays (int *, int, int*, int );


int main(){
	
	int arraySizeOne 	= 0;
	int arraySizeTwo 	= 0;
	int* arrayOne 		= nullptr;
	int* arrayTwo 		= nullptr;
	
	
	//Prompt the user to enter in an array! 
	std::cout << "Enter the size of the first array: ";
	std::cin >> arraySizeOne;
	
	// Validation! Make sure our size is greater than zero! 
	while(arraySizeOne <= 0){
		std::cout << "Enter the size of the first array: ";
		std::cin >> arraySizeOne;
	}
	
	// Build our first array! 
	arrayOne = new int[arraySizeOne];
	
	for(int i = 0; i < arraySizeOne ; i++){
		//Prompt the user to enter in an array! 
		std::cout << "Enter element " + std::to_string(i + 1) + " of the first array: ";
		std::cin >> *(arrayOne + i);
	}
	std::cout << std::endl;
	std::cout << std::endl;
	
	
	//Prompt the user to enter in an array! 
	std::cout << "Enter the size of the Second array: ";
	std::cin >> arraySizeTwo;
	
	// Validation! Make sure our size is greater than zero! 
	while(arraySizeTwo <= 0){
		std::cout << "Enter the size of the Second array: ";
		std::cin >> arraySizeTwo;
	}
	
	// Build our first array! 
	arrayTwo = new int[arraySizeTwo];
	
	for(int i = 0; i < arraySizeTwo ; i++){
		//Prompt the user to enter in an array! 
		std::cout << "Enter element " + std::to_string(i + 1) + " of the second array: ";
		std::cin >> *(arrayTwo + i);
	}
	
	delete[] arrayOne;
	delete[] arrayTwo;
	
	int* mergeTwoArrays =  mergeArrays(arrayOne, arraySizeOne, arrayTwo, arraySizeTwo);

	for(int i = 0; i < (arraySizeOne+ arraySizeTwo) ; i++){
		std::cout << mergeTwoArrays[i] << " ";
	}

	std::cout << std::endl;
	
	// Give back all the memory! 
	delete[] mergeTwoArrays;

	
	
}


int* mergeArrays (int* array1, int size1, int* array2, int size2){
	
	int sizeOfNewArray = size1 + size2;
	int index = 0, i = 0, j = 0;
	int* mergedArray = new int[sizeOfNewArray];
	
	while(i < size1 && j < size2){
		
		if(array1[i] < array2[j]){
			mergedArray[index] = array1[i];
			index++;
			i++;
		}else{
			mergedArray[index] = array2[j];
			index++;
			j++;
		}
		
	}
	
	while(i < size1){
		mergedArray[index] = array1[i];
		index++;
		i++;
	}
	
	
	while(j < size2){
		mergedArray[index] = array2[j];
		index++;
		j++;
	}
	
	return mergedArray;
}
