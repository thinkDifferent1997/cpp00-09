/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elsikira@student.42.paris>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 23:03:15 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/23 23:24:08 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t   Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr); //reinterprets as an int
} 

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw); // reinterpret the int back to memory address
}

/* the reinterpret is a cast that completely changes the way the compiler sees data.
    Serialization means turning a complex object (a pointer to a struct) into a raw numeric format (uintptr_t) 
    that could theoretically be stored or transmitted, and then Deserializing it back into a valid pointer. */