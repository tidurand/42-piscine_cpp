/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:55:02 by tidurand          #+#    #+#             */
/*   Updated: 2022/03/30 09:43:08 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	public:
		Contact(void);
		~Contact();

		void	create(void);
		//std::string	get_first_name(void) const;
		//void	set_first_name(std::string first_name);
		void	display_contact(void) const;
		void	display_details(void) const;
	
	private:
		//int	index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif