/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_db.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 00:46:11 by jtrujill          #+#    #+#             */
/*   Updated: 2017/04/28 02:29:25 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DB_H
# define FT_DB_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct	s_entry
{
	int 			hash;
	char 			**data;

}					t_entry;

t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_print_list(t_list *lst);
t_list	*get_attr(void);
int		main(void);
int		ft_lstsize(t_list *lst);
char	***create_db(int size, t_list *attr);
char	*ft_itoa(int n);
int		ft_int_len(int nb);

#endif
