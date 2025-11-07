/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:27:32 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/08 00:24:11 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"

int main() {
  try {
    Bureaucrat test("Killian", -1);
    test.retrogradation();
    std::cout << test;
    test.promotion();
    std::cout << test;
  } catch (Bureaucrat::GradeTooLowException &f) {
    std::cout << "Error : " << f.what() << std::endl;
  } catch (Bureaucrat::GradeTooHighException &f) {
    std::cout << "Error : " << f.what() << std::endl;
  }
  return (0);
}
