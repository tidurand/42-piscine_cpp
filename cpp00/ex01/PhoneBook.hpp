/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:54:45 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/06 11:11:46 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook();
		
		void	add(void);
		void	search(void);
		void	set_nb_contacts(int new_nb_contacts);
		Contact contact[8];

	private:
		int	nb_contacts;
		std::string new_index;
		int index;
};

#endif