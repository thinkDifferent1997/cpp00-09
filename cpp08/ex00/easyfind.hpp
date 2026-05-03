/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 23:21:33 by elsikira          #+#    #+#             */
/*   Updated: 2026/05/04 00:32:05 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>


class	NotFoundException: public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Value not found in container";
		}
};

template <typename T>
typename T::iterator	easyfind(T& container, int value);
#include "easyfind.tpp"
