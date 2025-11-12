/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:27:32 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/12 17:21:20 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"
#include "Form/Form.hpp"
int main(void) {

  try {
    Bureaucrat test("Killian", 100);
    Form f("Contrat Cdi", 10, 10);
    test.signForm(f);
    std::cout << f;

  } catch (const std::exception &e) {
    std::cout << "Exception : " << e.what() << std::endl;
  }
  return (0);
}
