#include "stdio.h"
#include "ft_printf.h"
#include "limits.h"

int main ()
{
	void	*p;
	int		i;
	int		ret;
	char	*s;

	p = NULL;
	i = 23;
	ret = -42;
	s = NULL;

	//tests d'une chaine en brut
	printf("\ttest d'une chaine en brut\n");
	ft_printf("coucou"); printf(" : new\t");

	//tests avec les types
	printf("\ttest pour le type c\n");
	ret = printf("%c", 'a'); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%c", 'a'); printf(" : new\t");
	printf("ret = %d\n", ret);

	printf("\ttest pour le type s\n");
	ret = printf("%s", "truc"); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%s", "truc"); printf(" : new\t");
	printf("ret = %d\n", ret);
	//test d'une chaine dont le pointeur est null
	ret = printf("%s",s); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%s",s); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest pour le type %%\n");
	ret = ft_printf("%%"); printf(" : new\t");
	printf("ret = %d\n", ret);

	printf("\ttest pour le type x\n");
	ret = printf("%x", 189); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%x", 189); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest pour le type X\n");
	ret = printf("%X", 189); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%X", 189); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest pour le type u\n");
	ret = printf("%u", UINT_MAX); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%u", UINT_MAX); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest pour le type d\n");
	ret = printf("%d", INT_MIN); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%d", INT_MIN); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest pour le type i\n");
	ret = printf("%i", INT_MAX); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%i", INT_MAX); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest pour le type p\n");
	ret = printf("%p", &i); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%p", &i); printf(" : new\t");
	printf("ret = %d\n", ret);
	//test d'un pointeur null
	ret = printf("%p",p); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%p",p); printf(" : new\t");
	printf("ret = %d\n", ret);

	//tests des flags obligatoires + width
	printf("\ttest avec un width de 20 pour 'a'\n");
	ret = printf("%20c", 'a'); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%20c", 'a'); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest avec un width de 5 par * pour 'a'\n");
	ret = printf("%*c", 5, 'a'); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%*c", 5, 'a'); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest du flag - avec un width de 20 pour 'a'\n");
	ret = printf("%-20c", 'a'); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%-20c", 'a'); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest du flag 0 avec un width de 5 pour '3'\n");
	ret = printf("%05d", 3); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%05d", 3); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest avec un width de 5 pour \"coucou\"\n");
	ret = printf("%5s", "coucou"); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%5s", "coucou"); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest du flag - avec un width de 5 pour \"coucou\"\n");
	ret = printf("%-5s", "coucou"); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%-5s", "coucou"); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	//tests de la precision + width
	printf("\ttest de la precision pour le type s\n");
	ret = printf("%20.2s", "truc"); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%20.2s", "truc"); printf(" : new\t");
	printf("ret = %d\n", ret);
	//test d'une chaine dont le pointeur est null
	ret = printf("%.2s",s); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%.2s",s); printf(" : new\t");
	printf("ret = %d\n", ret);
	
/*	printf("\ttest de la precision pour le type %%\n");
	ret = printf("%.2%"); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%.2%"); printf(" : new\t");
	printf("ret = %d\n", ret);
*/	
	printf("\ttest de la precision pour le type x\n");
	ret = printf("%.10x", 189); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%.10x", 189); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest de la precision pour le type X\n");
	ret = printf("%.10X", 189); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%.10X", 189); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest de la precision pour le type u\n");
	ret = printf("%.15u", UINT_MAX); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%.15u", UINT_MAX); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest de la precision pour le type d\n");
	ret = printf("%.15d", INT_MIN); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%.15d", INT_MIN); printf(" : new\t");
	printf("ret = %d\n", ret);
	
	printf("\ttest de la precision pour le type i\n");
	ret = printf("%20.15i", INT_MAX); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%20.15i", INT_MAX); printf(" : new\t");
	printf("ret = %d\n", ret);

/*	printf("\ttest de la precision non precisee pour le type p\n");
	ret = printf("%.p", p); printf(" : original\t");
	printf("ret = %d\n", ret);
	ret = ft_printf("%.p", p); printf(" : new\t");
	printf("ret = %d\n", ret);
*/
	return (0);
}
