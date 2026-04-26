#include "util.h"
#include "logic.h"

int main() {

	double array[]{ 1, 35, 43.1, 664, 53, 19, 90, 1.1, 4, 10 };
	int size = 10;

	double avg = count_avg(array, size);
	double sum = find_elements(array, size);


	print("Avg: " + to_string(avg) 
		+ ".\nSum of elements: " + to_string(sum) + ".");
	
	return 0;
}