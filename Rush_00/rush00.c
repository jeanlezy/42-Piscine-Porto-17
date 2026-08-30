/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:23:31 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/25 15:40:14 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int col, char fst, char mid, char last)
{
	int i;

	i = 1;
	while(i <= col)
	{
		if(i == 1)
			ft_putchar(fst);
		else if(i == col)
			ft_putchar(last);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
}
// control lines
void	rush(int x, int y)
{
	int lin;
	
	if (x < 1 || y < 1)
		return ;
	lin = 1;
	while(lin <= y)
	{
		if(lin == 1 || lin == y)
			print(x, 'o', '-', 'o');
		else
			print(x, '|', ' ', '|');
		lin++;
	}
}
