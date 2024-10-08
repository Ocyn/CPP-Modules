/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/08 15:09:49 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	log(string content)
{
	std::cout << content << std::endl;
}

template <typename T>
void	printElement(const T &element)
{
	std::cout << element << std::endl;
}

template <typename T>
void	setRandElement(T &bloc)
{
	bloc = rand() % 99999;
}

template <typename T, typename F>
void	iterArray(Array<T> &array, F ft)
{
	for (size_t i = 0; i < array.Size(); i++)
	{
		try {
			ft(array[i]);
		}
		catch(const OutOfBoundException& e) {
			std::cerr << e.what() << '\n';
		}
	}
}



// SUBJECT TEST

#define MAX_VAL 9


int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));

	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand() % 999;
		numbers[i] = value;
		mirror[i] = value;
	}
	log("______________START");
	log("\n______NUMBERS:");
	iterArray(numbers, printElement<int>);
	log("\n______MIRROR:");
	for (size_t i = 0; i < MAX_VAL; i++) {
		printElement(mirror[i]);
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		log("______________SCOPE (deep copy)");
		log("\n______tmp:");
		iterArray(tmp, printElement<int>);
		log("\n______test:");
		iterArray(test, printElement<int>);
	}

	log("\n______________NUMBER = MIRROR ?");
	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i]) {
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	log("\t YES");
	log("\n______________Subcript operator[] testing");
	try {
		numbers[-2] = 0;
		log("\t KO");
	}
	catch(const std::exception& e) {
		std::cerr << "Error thrown successfully: " << e.what() << '\n';
	}
	try {
		numbers[MAX_VAL] = 0;
		log("\t KO");
	}
	catch(const std::exception& e) {
		std::cerr << "Error thrown successfully: " << e.what() << '\n';
	}
	log("\n______________Modifying number values");
	for (int i = 0; i < MAX_VAL; i++) {
		numbers[i] = rand();
	}
	iterArray(numbers, printElement<int>);
	delete [] mirror;
	return 0;
}


// MY PERSONNAL TEST

// #define DEFAULT 12

// int main( void )
// {
// 	srand(time(0));
// 	log("____Creating arrays:");
// 	log("\n\tInt Array");
// 	{
// 		Array<int>		Bob(DEFAULT);
// 		iterArray(Bob, setRandElement<int>);
// 		iterArray(Bob, printElement<int>);
// 	}
// 	log("\n\tFloat Array");
// 	{
// 		Array<float>		Bob(DEFAULT);
// 		iterArray(Bob, setRandElement<float>);
// 		iterArray(Bob, printElement<float>);
// 	}
// 	log("\n\tString Array");
// 	{
// 		Array<string>		Bob(DEFAULT);
// 		iterArray(Bob, setRandElement<string>);
// 		iterArray(Bob, printElement<string>);
// 	}
// 	return 0;
// }