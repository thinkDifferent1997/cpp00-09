/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 19:25:14 by elsikira          #+#    #+#             */
/*   Updated: 2026/02/21 19:25:16 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

class   Bureaucrat
{
	private:
		const std::string   m_name;
		int                 m_grade;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat &operator=(const Bureaucrat& other);
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &other);
