/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */

/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 12:36:15 by aelphias          #+#    #+#             */
/*   Updated: 2020/01/07 16:16:49 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	//ft_printf("   gndjghisd %10.13llf   %44.789u ");    
	//ft_printf("---+++ %  ---30.13f");    
	// ft_printf(" % 2.10ill ");    
	//ft_printf("%6.*d\n", 18, 98, 432);
	//printf("%+d\n", -18);
	//printf(" %30.13f", 34.41);    
	ft_printf("%s\n %s\n" "%s\n", "Can you see me?", "Yes, I can!", "And me also?");
	return (0);
}
