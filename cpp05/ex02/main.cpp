/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 19:25:29 by elsikira          #+#    #+#             */
/*   Updated: 2026/03/02 01:37:42 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("John", 10);
		std::cout << a << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
		ShrubberyCreationForm form("My form");
		a.signForm(form);
		form.execute(a);
		
	}
	catch (std::exception& e)
	{
		std::cerr << "Error ! " << e.what() << std::endl;
	}
}