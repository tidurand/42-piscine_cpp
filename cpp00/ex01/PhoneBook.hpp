/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:54:45 by tidurand          #+#    #+#             */
/*   Updated: 2022/03/31 15:54:29 by tidurand         ###   ########.fr       */
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
		int	get_nb_contacts(void) const;
		void	set_nb_contacts(int first_name);

	private:
		int	nb_contacts;
		int index;
};

#endif