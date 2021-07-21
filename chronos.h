/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chronos.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaudot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:16:22 by abaudot           #+#    #+#             */
/*   Updated: 2021/07/21 18:10:43 by abaudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHRONOS_H
# define CHRONOS_H

# include <sys/time.h>
# include <sys/resource.h>
# include <stdio.h>

# define PRECISION 6

typedef struct s_chronos
{
    struct	timeval tv;
    struct	timezone tz;
	double	start;
	double	end;
}			t_chronos;

/*
** The only reason for time is so that everything doesn't happen at one
*/
inline double	get_time(t_chronos *chrono)
{
    gettimeofday(&chrono->tv, &chrono->tz);
    return (chrono->tv.tv_sec + chrono->tv.tv_usec * 1e-6);
}

/*
** start the chrono
*/
inline void	start_chronos(t_chronos *chrono)
{
	chrono->start = get_time(chrono);
}

/*
** end the chrono
*/
inline void end_chronos(t_chronos *chrono)
{
	chrono->end = get_time(chrono);
}

/*
**	Display enlapsed time whit info message
*/
inline void get_diff(t_chronos *chrono, const char *message)
{
	printf("\033[1;33m%s: \033[1;31m[ %.*f ]\033[0;0m\n",
		   	message, PRECISION, chrono->end - chrono->start);
}

#endif
