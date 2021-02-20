#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	p = ft_lstnew(f(lst->content));
	if (p == NULL)
		ft_lstclear(&p, del);
	ptr = p;
	lst = lst->next;
	while (lst != NULL)
	{
		p = ft_lstnew(f(lst->content));
		if (p == NULL)
		{
			ft_lstclear(&p, del);
			return (0);
		}
		ft_lstadd_back(&ptr, p);
		lst = lst->next;
	}
	return (ptr);
}
