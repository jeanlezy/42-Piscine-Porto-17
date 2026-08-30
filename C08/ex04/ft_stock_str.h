/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 11:05:59 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/03 12:04:04 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
}	t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

#endif