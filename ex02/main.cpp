/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:27:32 by kiteixei          #+#    #+#             */
/*   Updated: 2025/12/12 18:02:47 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm/AForm.hpp"
#include "Bureaucrat/Bureaucrat.hpp"
#include "PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"
int main(void) {
  try {
    std::cout << "\n";
    std::cout << "🎄======================================🎄\n";
    std::cout << "       WELCOME TO THE CHRISTMAS TESTS\n";
    std::cout << "🎄======================================🎄\n\n";

    Bureaucrat a("a", 1);
    Bureaucrat b("b", 150);
    Bureaucrat c("c", 75);

    std::cout << "🎅 Bureaucrats created:\n";
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << "\n";

    ShrubberyCreationForm s1("test");
    RobotomyRequestForm r1("o");
    PresidentialPardonForm p1("e");

    std::cout << "🎁 Forms created:\n";
    std::cout << s1 << std::endl;
    std::cout << r1 << std::endl;
    std::cout << p1 << std::endl;
    std::cout << "\n";

    std::cout << "🎄================ SIGNING TESTS ================🎄\n\n";

    std::cout << GREEN BOLD "🎅 c sign form " RESET
              << std::endl;
    c.signForm(s1);
    c.signForm(r1);
    c.signForm(p1);

    std::cout << "\n";

    std::cout << GREEN BOLD "🎅 a sign form" RESET
              << std::endl;
    a.signForm(s1);
    a.signForm(r1);
    a.signForm(p1);

    std::cout << "\n";
    std::cout << GREEN BOLD "🎅 b sign form" RESET << std::endl;
    b.signForm(s1);
    b.signForm(r1);
    b.signForm(p1);

    std::cout << "🎄=============== EXECUTION TESTS ===============🎄\n\n";

    std::cout << GREEN BOLD "🎅 b exec" RESET
              << std::endl;
    b.executForm(s1);
    b.executForm(r1);
    b.executForm(p1);

    std::cout << "\n";

    std::cout << GREEN BOLD "🎅 c exec" RESET
              << std::endl;
    c.executForm(s1);
    c.executForm(r1);
    c.executForm(p1);

    std::cout << "\n";

    std::cout << GREEN BOLD "🎅 a exec" RESET
              << std::endl;
    a.executForm(s1);
    a.executForm(r1);
    a.executForm(p1);

    std::cout << "\n";

    std::cout << "🎄======================================🎄\n";
    std::cout << "        THANK YOU FOR PLAYING 🎅✨\n";
    std::cout << "🎄======================================🎄\n\n";

  } catch (std::exception &e) {
    std::cout << RED BOLD "🎁 Exception caught in main: " << e.what() << RESET
              << std::endl;
  }

  return (0);
}
