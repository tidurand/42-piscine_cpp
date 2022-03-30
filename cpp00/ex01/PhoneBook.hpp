/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:54:45 by tidurand          #+#    #+#             */
/*   Updated: 2022/03/30 09:42:54 by tidurand         ###   ########.fr       */
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
		Contact contact[8];
		int	nb_contacts;

	private:
		
};

#endif