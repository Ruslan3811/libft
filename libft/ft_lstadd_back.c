#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *p;

	p = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (lst)
	{
		while ((p->next) != NULL)
			p = p->next;
		p->next = new;
	}
}
