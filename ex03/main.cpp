/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:27:32 by kiteixei          #+#    #+#             */
/*   Updated: 2025/12/12 18:01:39 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm/AForm.hpp"
#include "Bureaucrat/Bureaucrat.hpp"
#include "Intern/Intern.hpp"
#include "PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"

int main(void) {
  try {
    Intern someRandomIntern;
    Bureaucrat boss("Bender", 1);

    AForm *rrf = someRandomIntern.makeForm("RobotomyRequestForm", "TargetX");

    boss.signForm(*rrf);
    boss.executForm(*rrf);

    delete rrf;
  } catch (std::exception &e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
}
