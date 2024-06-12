/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamichal <mamichal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:51:07 by mamichal          #+#    #+#             */
/*   Updated: 2024/06/12 20:04:00 by mamichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

// INCLUDES
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
// TODO: DLEATE LATER AFTER ADDING PRINTF TO LIBFT
//# include "../libft/includes/ft_printf.h"
# include "../libft/libft.h"
# include "../mlx_linux/mlx.h"

# define WIDTH 500
# define HIGHT 500

typedef enum e_errors
{
	OK = 0,
	MALLOC_ERROR = 1
}				t_errors;

typedef struct s_img_data
{
	void	*img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}				t_img_data;

typedef struct s_complex
{
	double	real;
	double	imaginary;
}				t_complex;

typedef struct s_mlx_data
{
	void		*mlx_conn;
	void		*mlx_win;
	t_img_data	img_data;

}				t_mlx_data;

typedef struct s_fractal
{
	char	*name;
}				t_fractal;

// src/my_put_pixel.c
void	my_pixel_put(t_img_data *data, int x, int y, int color);

#endif
