/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:15:16 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/22 11:16:44 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Cat : public Animal
{
	public:

		Cat( void );
		Cat( const Cat &src );
		~Cat( void );

		Cat&	operator=( const Cat& rhs );

		void*	getBrain( void ) const;

		void	makeSound( void ) const;

	private:

		Brain*	_brain;

};

#endif // __CAT_HPP__
