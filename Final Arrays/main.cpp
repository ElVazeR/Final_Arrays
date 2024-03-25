#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;

	// Задача 1.

	const int size1 = 10;
	int arr1[size1];
	std::cout << "Изначальный массив ->\n";
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (20+1-10)+10;
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl; // Перенос курсора на  следующую строку в консоли и очищение буфера потока вывода

	std::cout << "Введите количество элементов для сортировки -> ";
	std::cin >> n;

	// Сортировка пурызьком
	//for (int i = n - 1; i > 0; i--) {     // Начало сортировки. size1 меняем на n;
	//	for (int j = 0; j < i; j++)
	//		if (arr1[j] > arr1[j + 1])
	//			std::swap(arr1[j], arr1[j + 1]);
	//}
	
	// Быстрая сортировка 

	std::sort(arr1, arr1 + n); // Вместо size1, пишем n;
	
	
	
	std::cout << "Итоговый массив: \n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";                  // Конец сортировки
	


	// Задача 2. Температура в январе.
	
	//std::cout << "задача 2. Массив:\n";

	
	
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));

	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-5 + 1 - (-30)) + (-30);
		std::cout << arr2[i] << ' ';
	}
	std::cout << std::endl;

	std::cout << "Введите число -> ";
	std::cin >> n;
	int counter = 0;
	int sum = 0;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	std::cout << "Средн.Арифм. = " << double(sum) / size2 << std::endl;
	std::cout << "Количество чисел, следующих условию = " << counter << "\n\n";
	


	 //задача 3.  Вхождение в диапазон
	std::cout << "Задача 3. \n Ввеидте начало диапазона -> ";
	std::cin >> n;
	std::cout << "Введите конец диапазона -> ";
	std::cin>> m;


	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 100;
		std::cout << i << ". " << arr3[i] <<
			(arr3[i] >= n && arr3[i] <= m ? '!' : ' ') << std::endl;
}

	return 0;
}

