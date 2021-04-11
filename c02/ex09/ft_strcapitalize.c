/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:07:04 by szaman            #+#    #+#             */
/*   Updated: 2021/04/10 17:12:23 by szaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char big( char c)
{
    if( c >= 'a' && c <= 'z')
        c -= ('a' - 'A');
    return (c);
}

char *ft_strcapitalize( char *str) 
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += ('a' - 'A');
    i++;
    }
    i = 0;
    while (str[i] != '\0')
    {
        if(i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] = big(str[i]);
        else if(!((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
            str[i + 1 ] = big(str[i + 1]);
    i++;
	}
    return(str);
}