/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 17:54:21 by mverzilo          #+#    #+#             */
/*   Updated: 2026/01/02 16:01:43 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
// Debug-Funktion: Zeigt den Inhalt der Stacks an
void print_status(t_stack *a, t_stack *b)
{
    printf("\n--- STATUS ---\nStack A: ");
    while (a)
    {
        printf("%d ", a->value);
        a = a->next;
    }
    printf("\nStack B: ");
    while (b)
    {
        printf("%d ", b->value);
        b = b->next;
    }
    printf("\n--------------\n\n");
}
int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;
    a = NULL;
    b = NULL;
    if (argc < 2)
        return (0);
    // Hier nutzt du dein Parsing aus push_swap_parsing.c
    // Ich nehme an, die Funktion füllt den Stack 'a'
    if (process_argument(argc, argv, &a) == 0)
    {
        write(2, "Error\n", 6);
        return (1);
    }
    printf("VORHER:");
    print_status(a, b);
    // Deine Weiche aus push_swap_uten_one.c aufrufen
    seleckt_algorithm(&a, &b);
    printf("NACHHER:");
    print_status(a, b);
    // Validierung mit deinen Funktionen
    if (is_sortet(a) && get_stack_size(b) == 0)
        printf(":weißes_häkchen: Erfolg: Sortiert!\n");
    else
        printf(":x: Fehler: Nicht korrekt sortiert.\n");
    return (0);
}