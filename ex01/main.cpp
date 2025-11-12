/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:27:32 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/12 18:45:20 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"
#include "Form/Form.hpp"

int main(void) {

  try {
    Bureaucrat WEWE("wewewe", 1);
    Form faw("Contrat wdqqwddwq", 100, 10);
    WEWE.signForm(faw);
    std::cout << faw;

  } catch (const std::exception &e) {
    std::cout << "Exception : " << e.what() << std::endl;
  }
  try {
    Bureaucrat t("Anisswdqwqdwqddwqqwddqwqwd", 1);
    Form f("Contrat", 100, 10);
    t.promotion();
    t.signForm(f);
    std::cout << f;

  } catch (const std::exception &e) {
    std::cout << "Exception   pout test: " << e.what() << std::endl;
  }

  return (0);
}
