/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:27:32 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/12 18:34:32 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"
#include "Form/Form.hpp"

int main(void) {

  try {
    Bureaucrat test("Killian", 1);
    Form f("Contrat Cdi", 100, 10);
    test.signForm(f);
    std::cout << f;

  } catch (const std::exception &e) {
    std::cout << "Exception : " << e.what() << std::endl;
  }
  try {
    Bureaucrat t("Aniss", 1);
    Form f("Contrat", 100, 10);
    t.signForm(f);
    std::cout << f;

  } catch (const std::exception &e) {
    std::cout << "Exception : " << e.what() << std::endl;
  }

  return (0);
}
