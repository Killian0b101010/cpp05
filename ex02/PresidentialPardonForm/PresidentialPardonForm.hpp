/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:25:34 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/14 18:24:19 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "../AForm/AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;
class PresidentialPardonForm : public AForm {
private:
  std::string _target;

public:
  PresidentialPardonForm();
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(const PresidentialPardonForm &cpy);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
  ~PresidentialPardonForm();
  void execute(const Bureaucrat &b);
  std::string getTarget() const;
};
#endif

std::ostream &operator<<(std::ostream &st, PresidentialPardonForm &s);
