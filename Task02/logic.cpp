// Task 02 [The sum of average elements]
// Сумма средних элементов
// 
// Дан вектор вещественных/дробных значений. Необходимо спроектировать эффективный
// алгоритм и реализовать функцию (или программу), которая находит сумму всех
// элементов вектора, абсолютная величина которых меньше среднего арифметического
// всех элементов. 
// Дополнительно в функции необходимо предусмотреть механизм "защиты от дурака"
// для работы с некорректными данными (в данном случае функция должна 
// возвращать значение -1).
// 
// Далее необходимо разработать полноценный или тестовый проект для полной 
// демонстрации работоспособности данной функции.

#include "logic.h"

double count_avg(double array[], int size) {
	
	// fool-proof
	if (size <= 0) {
		return -1;
	}
	
	// logic
	double sum = 0;
		
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	double avg = sum / size;

	return avg;
}

double find_elements(double array[], double size) {
	
	double avg = count_avg(array, size);

	// fool-proof
	if (size <= 0) {
		return -1;
	}

	// logic
	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < avg) {
			sum += array[i];
		}
	}

	sum = abs(sum);

	return sum;
}
