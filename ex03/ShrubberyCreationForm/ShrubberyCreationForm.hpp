/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:25:34 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/14 18:25:08 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "../AForm/AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;
class ShrubberyCreationForm : public AForm {
private:
  std::string _target;

public:
  ShrubberyCreationForm();
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
  ~ShrubberyCreationForm();
  void execute(const Bureaucrat &b);
  std::string getTarget() const;
};
#endif

std::ostream &operator<<(std::ostream &st, ShrubberyCreationForm &s);
