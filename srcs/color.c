/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clem9nt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:33:13 by clem9nt           #+#    #+#             */
/*   Updated: 2022/01/28 18:33:13 by clem9nt          888   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

/*
 ** Define the pixel color.
 ** TODO gradient
 */

void	ft_color(t_data *data, t_pixel *p)
{
	(void)data;
	p->color = 0xFFFFFF;
}
