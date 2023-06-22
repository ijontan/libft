/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bazier_curves_1d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 21:45:57 by itan              #+#    #+#             */
/*   Updated: 2023/04/16 22:09:21 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	bazier_curves_1d_cubic(double t, double points[4])
{
	t_bazier_vars	vars;
	double			dst;

	vars.t2 = t * t;
	vars.t3 = t2 * t;
	vars.mt = 1 - t;
	vars.mt2 = mt * mt;
	vars.mt3 = mt2 * mt;
	dst = vars.mt3 * points[0] + 3 * vars.mt2 * t * points[1] + 3 * vars.mt * t2
		* points[2] + vars.t3 * points[3];
	return (dst);
}

double	bazier_curves_1d_quadratic(double t, double points[3])
{
	t_bazier_vars	vars;
	double			dst;

	vars.t2 = t * t;
	vars.mt = 1 - t;
	vars.mt2 = mt * mt;
	dst = vars.mt2 * points[0] + 2 * vars.mt * t * points[1] + vars.t2
		* points[2];
	return (dst);
}

double	bazier_curves_1d_linear(double t, double points[2])
{
	double	dst;

	dst = (1 - t) * points[0] + t * points[1];
	return (dst);
}
