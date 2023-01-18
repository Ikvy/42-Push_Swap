/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <mmidon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:03:08 by mmidon            #+#    #+#             */
/*   Updated: 2022/06/14 14:31:21 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdarg.h>

typedef struct s_list
{
	long int		content;
	struct s_list	*next;
	int				index;
}		t_list;

//t_list
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_index(t_list **a);
void	ft_order(t_list **a);
int		ft_lstsize(t_list *lst);

//printf functions(aled)
int		ft_printf(const char *format, ...);
int		ft_putcharv2(int x);
int		ft_putstrv2(char *x);
int		ft_putnbrv2(int x);
int		ft_putnbru2(unsigned int x);
int		ft_puthexa(char select, unsigned int x);
int		ft_putnbrhexa(unsigned int x, char *base);
int		ft_put_p(char select, unsigned long long x);
int		ft_putnbr_p(unsigned long long x, char *base);

//random lil functions
size_t	ft_strlen(char *str);
void	ft_bzero(void *s, size_t n);
void	ft_rev(char *dest);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
char	**ft_split(char *s, char c);
char	*ft_strdup(char *src);
char	*ft_itoa(int n);
char	**ft_simple_list(char **tmp, int size);
int		ft_isspace(char c);
int		ft_atoi(char *str);
int		ft_error(char *msg);
int		ft_isdigit(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_power(int nb, int power);

//push_swap
t_list	*ft_send(char *str, int len);
t_list	*ft_send_more(char **str, int len, int ac);
t_list	*ft_list(char **tmp, int size);
t_list	*ft_init(int ac, char **av);
t_list	*ft_stack(int *res, size_t tab_size);
size_t	ft_count_args(char *stack_a);
size_t	ft_count_more_args(char **stacks_a, int ac);
void	ft_display(t_list *a, t_list *b);
void	ft_sort_few(t_list **a);
void	ft_sort_three(t_list **a);
void	ft_sort_five(t_list **a, t_list **b);
void	ft_convert_to_binary(t_list	**a);
void	ft_connect(t_list **a, t_list **b);
void	ft_radix(t_list **a, t_list **b);
void	ft_is_repeating(int *input, size_t tab_size);
int		ft_is_sorted(t_list *a);
int		show_stack(t_list *stack);

//ops
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_swap(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **b, t_list **a);
void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
void	rotate_rotate(t_list **a, t_list **b);
void	reverse_rotate_a(t_list **a);
void	reverse_rotate_b(t_list **b);
void	reverse_rotate_rotate(t_list **a, t_list **b);

#endif
