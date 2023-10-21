/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:22:23 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/13 21:40:18 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		a = 0;
		while (str[i + a] == to_find[a] && str[i + a])
		{
			a++;
		}
		if (to_find[a] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
