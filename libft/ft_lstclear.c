#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *p;

	p = *lst;
	if (!*lst)
		return ;
	while (p != NULL)
	{
		p = p->next;
		del((*lst)->content);
		free(*lst);
		*lst = p;
	}
}
