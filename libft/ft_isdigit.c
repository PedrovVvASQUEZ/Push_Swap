/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:55:13 by pgrellie          #+#    #+#             */
/*   Updated: 2024/03/08 16:25:52 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char x)
{
	if (x >= 48 && x <= 57)
		return (1);
	else
		return (0);
}
