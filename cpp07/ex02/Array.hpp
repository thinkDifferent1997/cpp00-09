/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 22:28:53 by elsikira          #+#    #+#             */
/*   Updated: 2026/05/01 23:10:13 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
class	Array
{
	private:
		T*		m_data;
		unsigned int	m_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array	&operator=(const Array& other);
		~Array();

		T&		operator[](unsigned int index);
		const T&	operator[](unsigned int index)const;
		unsigned int	size()const;

		class	OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Array index is out of bonds!");
				}
		};


};

template <typename T>
Array<T>::Array() : m_data(NULL), m_size(0) {}

template <typename T>
Array<T>::Array(unsigned int n): m_size(n){m_data = new T[n]();}

template <typename T>
Array<T>::~Array(){delete[] m_data;}


template <typename T>
Array<T>::Array(const Array<T>& other): m_data(NULL), m_size(0){*this = other;}


template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
	{
		delete[] m_data;
		m_size = other.m_size;
		if (m_size > 0)
		{
			m_data = new T[m_size]();
			for (unsigned int i = 0; i < m_size; i++)
			{
				m_data[i] = other.m_data[i];
			}
		}
		else
		{
			m_data = NULL;
		}
	}
	return *this;
}

template <typename T>
unsigned int	Array<T>::size()const
{
	return m_size;
}


template <typename T>
T&	Array<T>::operator[](unsigned int index)
{
	if (index >= m_size)
		throw OutOfBoundsException();
	return m_data[index];
}

template <typename T>
const T&	Array<T>::operator[](unsigned int index)const
{
	if (index >= m_size)
		throw OutOfBoundsException();
	return m_data[index];
}
