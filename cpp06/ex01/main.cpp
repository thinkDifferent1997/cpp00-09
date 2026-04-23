/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elsikira@student.42.paris>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 23:08:44 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/23 23:35:52 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data data;
    data.id = 1;
    data.name = "Eliza";
    data.value = 42;

    std::cout << "Original pointer is : " << &data << std::endl;

    uintptr_t   raw = Serializer::serialize(&data);
    std::cout << "Serialized Value: " << raw << "(Hex = 0x" << std::hex << raw << ")" << std::dec << std::endl;
    
    Data* ptr = Serializer::deserialize(raw);
    std::cout << "Deserialized ptr = " << ptr << std::endl;
    
    if (ptr == &data)
    {
        std::cout << "SUCCESS: Pointers match!" << std::endl;
        std::cout << "Data check: " << ptr->name << " has value " << ptr->value << std::endl;
    }
}