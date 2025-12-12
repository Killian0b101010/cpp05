/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:27:32 by kiteixei          #+#    #+#             */
/*   Updated: 2025/12/12 18:00:17 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"

int main() {
  try {
    Bureaucrat test("Killian",150);
    test.promotion();
    test.retrogradation();
    test.retrogradation();
    std::cout << test;
    test.retrogradation();
    std::cout << test;
    test.promotion();
    std::cout << test;
    test.promotion();
    std::cout << test;
    test.retrogradation();
    std::cout << test;
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

// static void danger()
// {
//   throw std::string ("ceci est un test dangereux");
// }

// int main(void) { 
//   try
//   {
//     danger();
//   } 
//   catch(std::string &s){
//     std::cout << "Erreur capture : " << s << std::endl;
//   }
// }

// int main(void)
// {
//   Bureaucrat a("TestCpy",-2);
//   Bureaucrat b(a);
//   Bureaucrat c = a;
//   std::cout << c;
//   std::cout << "Fin" << std::endl;
// }
