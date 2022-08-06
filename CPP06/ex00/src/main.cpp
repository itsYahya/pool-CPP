/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:33:13 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/06 16:19:11 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"

int	main(){
	try{
		Bureaucrat	b("yahya", 1);
	
		std::cout << b << std::endl;

		b.decrementGrade();
		
		std::cout << b << std::endl;
		
		b.incrementGrade();
		
		Bureaucrat	a("yahya11", 0);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}