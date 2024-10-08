/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:47:43 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/08 15:08:40 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

typedef std::string string;

template <typename T>
class Array
{
	private:
		T				*_data;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &Sample);
		Array&			operator=(const Array& Sample);
		const T&	operator[](const unsigned int &index) const;
		T&			operator[](const unsigned int &index);

		unsigned int	Size() const;
};

class OutOfBoundException : public std::exception{ public : const char * what() const throw();};


const char *OutOfBoundException::what() const throw() {
	return ("Index is out of bound of array max size");
}

template <typename T>
std::ostream	&operator<<(std::ostream &os, const Array<T> &Sample);

template <typename T>
Array<T>& 	Array<T>::operator=(const Array<T>& Sample)
{
	if (this->Size() > 1)
		delete [] this->_data;
	else
		delete this->_data;
	this->_data = new T[Sample.Size()]();
	this->_size = Sample.Size();
	for (size_t i = 0; i < Sample.Size(); i++) {
		this->_data[i] = Sample._data[i];
	}
	
	return (*this);
}

template <typename T>
const T& 	Array<T>::operator[](const unsigned int &index) const
{
	if (index >= this->_size)
		throw OutOfBoundException();
	return (this->_data[index]);
}

template <typename T>
T& 	Array<T>::operator[](const unsigned int &index)
{
	if (index >= this->_size)
		throw OutOfBoundException();
	return (this->_data[index]);
}


template <typename T>
Array<T>::Array(): _size(0)
{
	_data = new T();
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	_data = new T[n]();
}

template <typename T>
Array<T>::~Array()
{
	if (this->_size > 0)
		delete [] _data;
	else
		delete _data;
}

template <typename T>
Array<T>::Array(const Array<T>& Sample)
{
	this->_data = new T[Sample.Size()]();
	this->_size = Sample.Size();
	*this = Sample;
}


template <typename T>
unsigned int	Array<T>::Size() const
{
	return (this->_size);
}


#endif
