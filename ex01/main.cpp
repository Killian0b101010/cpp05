/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:27:32 by kiteixei          #+#    #+#             */
/*   Updated: 2025/12/11 23:19:21 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"
#include "Form/Form.hpp"

int main(void) {

  try {
    Bureaucrat Kln("Killlian", 151);
    Form cdi("Contrat CDI", 150, 10);
    Kln.signForm(cdi);
    std::cout << cdi;
  } catch (const std::exception &e) {
    std::cout << "Exception : " << e.what() << std::endl;
  }
  return (0);
}
