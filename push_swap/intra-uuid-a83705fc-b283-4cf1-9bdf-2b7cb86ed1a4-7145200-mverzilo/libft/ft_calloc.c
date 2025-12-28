/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:53:38 by mverzilo          #+#    #+#             */
/*   Updated: 2025/11/20 14:23:39 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;

	if (size != 0 && (nmemb * size) > SIZE_MAX)
		return (NULL);
	m = malloc(nmemb * size);
	if (m != NULL)
		ft_memset(m, 0, nmemb * size);
	return (m);
}

// int main() {
//    int n = 5;
//    int *array;

//    // use calloc function to allocate the memory
//    array = (int*)calloc(n, sizeof(int));

//    if (array == NULL) {
//       fprintf(stderr, "Memory allocation failed!\n");
//       return (1);
//    }

//    //Display the array value
//    printf("Array elements after calloc: ");
//    for (int i = 0; i < n; i++) {
//       printf("%d ", array[i]);
//    }
//    printf("\n");

//    //free the allocated memory
//    free(array);
//    return (0);
// }
