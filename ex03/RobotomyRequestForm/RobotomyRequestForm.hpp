/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:25:34 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/14 18:23:17 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP
#include "../AForm/AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;
class RobotomyRequestForm : public AForm {
private:
  std::string _target;

public:
  RobotomyRequestForm();
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &cpy);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
  ~RobotomyRequestForm();
  void execute(const Bureaucrat &b);
  std::string getTarget() const;
};
#endif

std::ostream &operator<<(std::ostream &st, RobotomyRequestForm &s);
