/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurello <mmurello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:09:00 by jkosiara          #+#    #+#             */
/*   Updated: 2021/05/04 13:42:39 by mmurello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "mlx/mlx.h"

typedef struct  s_vars 
{
    void    *mlx;
    void    *win;
}               t_vars;

typedef struct s_maps
{
    int		resx;
	int		resy;
	char	*NO;
	char	*SO;
	char	*EA;
	char	*WE;
	char	*S;
	int		F;
	int		C;
	int		t;
	int		red;
	int		green;
	int		blue;
}              t_maps;

// typedef struct s_pos{
//    
// }              t_pos;

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }				t_list;

// typedef struct s_text
// { 
//	int *n;
//	int *s;
//	int *i;
//  int *f;
//  int *c;
//  int *e;
//  int *w;
//	}

 typedef struct s_coord
 {
// 	double		posx;
// 	double		posy;
// 	double		dirx;
// 	double		diry;
// 	double		planex;
// 	double		planey;
// 	double		raydirx;				//raggio laser
// 	double		raydiry;
// 	int			mapx;					// casella mappa
// 	int			mapy;
//	char		**mtx;
int	mapx;					// quantita' caselle orizz
int	mapy;					// quantita' caselle vert
char **mtx;					// caselle effettive mtx[i][j]
// 	double 		deltadistx; 			// distanza che il raggio deve percorrere per andare da 1 lato x al successivo lato x, viceversa
// 	double 		deltadisty;
// 	int 		stepx;					//controllo delle componenti
// 	int 		stepy;
// 	double 		sidedistx;				//distanza dalla posizione iniziale del raggio al primo lato o destro o sinistro, dip dalla componente del raggio
// 	double 		sidedisty;
// 	double 		perpwalldist;			//verrà utilizzata per calcolare la lunghezza del raggio
}				t_coord;

typedef struct s_all{
	t_vars vars;
	t_maps maps; 					// mancano i nomi
	t_coord coord;
}              t_all;