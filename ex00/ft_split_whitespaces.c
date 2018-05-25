/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 19:25:27 by dahernan          #+#    #+#             */
/*   Updated: 2018/05/24 19:27:26 by dahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*args;
	int		i;
	int		j;
	int		k;
	int		mem;

	mem = 0;
	i = 1;
	while (i < argc)
		mem += ft_strlen(argv[i++]) + 1;
	args = (char*)malloc(sizeof(char) * mem);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			args[k++] = argv[i][j++];
		if (i == argc - 1)
			args[k++] = '\0';
		else
			args[k++] = '\n';
		i++;
	}
	return (args);
}
