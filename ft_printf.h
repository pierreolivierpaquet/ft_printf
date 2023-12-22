/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:28:02 by ppaquet           #+#    #+#             */
/*   Updated: 2023/03/09 13:28:04 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_pf_putchar(int c, int *len);
void	ft_pf_putnbr(int c, int *len);
void	ft_pf_putstr(char *str, int *len);
void	ft_pf_putunbr(unsigned int c, int *len);
void	ft_pf_puthex(unsigned int ptr, int *len, char x_min_or_maj);
void	ft_pf_putptr(unsigned long int ptr, int *len);
void	ft_pf_putphex(unsigned long int ptr, int *len);

#endif
