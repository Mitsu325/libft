/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:12:46 by pmitsuko          #+#    #+#             */
/*   Updated: 2021/02/10 20:45:31 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int num;
	int sign;
	int i;

	num = 0;
	sign = 1;
	i = 0;
	while (*(str + i) == ' ' || *(str + i) == '\n' || *(str + i) == '\t'
			|| *(str + i) == '\r' || *(str + i) == '\v' || *(str + i) == '\f')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '+' || *(str + i) == '-')
		i++;
	while (*(str + i) >= '0' && *(str + i) <= '9')
		num = num * 10 + (*(str + i++) - 48);
	return (num * sign);
}
