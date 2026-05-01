/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:44:40 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/25 19:45:30 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <complex>

template <typename T, typename F>
void    iter(T* array, const size_t len, F func)
{
    if (!array || !func)
        return;
    for (size_t i = 0; i < len; i++)
        func(array[i]);
}

template <typename T>
void    printElement(const T& element)
{
    std::cout << element << " ";
}


template <typename T>
void    printComplex(const std::complex<T>& c)
{
    std::cout << c << " ";
}
