/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 17:54:21 by mverzilo          #+#    #+#             */
/*   Updated: 2026/01/01 19:52:59 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// --- NUR ZUM TESTEN: Eine Funktion, die den Stack druckt ---
// WICHTIG: Vor der Abgabe löschen oder auskommentieren!
void print_stacks_debug(t_stack *a, t_stack *b)
{
    printf("\n--- STACK VISUALIZER ---\n");
    printf("Stack A:\tStack B:\n");
    while (a || b)
    {
        if (a)
        {
            printf("%d", a->value);
            a = a->next;
        }
        else
            printf("."); // Platzhalter wenn A kürzer ist
        printf("\t\t");
        if (b)
        {
            printf("%d", b->value);
            b = b->next;
        }
        else
            printf("."); // Platzhalter wenn B kürzer ist
        printf("\n");
    }
    printf("------------------------\n\n");
}
// Hilfsfunktion: Zählt Elemente im Stack
int get_stack_size(t_stack *stack)
{
    int i = 0;
    while (stack)
    {
        i++;
        stack = stack->next;
    }
    return (i);
}
// Deine Sortier-Logik Weiche
void select_algorithm(t_stack **a, t_stack **b)
{
    int size;
    size = get_stack_size(*a);
    // 0. Wenn schon sortiert -> Sofort aufhören
    if (is_sortet(*a))
        return ;
    // 1. Fallunterscheidung
    if (size == 2)
    {
        sa(a); // Einfach tauschen
    }
    else if (size == 3)
    {
        sort_tree(a); // Deine neue Funktion
    }
    else if (size <= 5)
    {
         sort_five(a, b);
    }
    else
    {
        printf("Hier kommt der Big Sort hin (> 5 Zahlen)\n");
        // radix_sort(a, b) oder turk_algo(a, b);
    }
}
int main(int argc, char **argv)
{
    t_stack *a = NULL;
    t_stack *b = NULL;
    // 1. Check: Gibt es Argumente?
    if (argc < 2)
        return (0);
    // 2. Parsing (Hier rufst du deine Parse-Logik auf)
    // Ich nutze hier eine vereinfachte Version, die annimmt,
    // dass du eine Funktion hast, die argv in Stack A lädt.
    // Falls du das direkt in der main hast, kopiere deinen Loop hier rein!
    if (process_argument(argv[1], &a) == 0) // Angenommen diese Funktion gibt 0 bei Fehler zurück
    {
        free_stack(a); // Sicherstellen, dass alles sauber ist
        print_error();
        return (1);
    }
    // 3. DEBUG: Zeig mir den Stack VOR dem Sortieren
    printf("Initial State:");
    print_stacks_debug(a, b);
    // 4. Sortieren
    select_algorithm(&a, &b);
    // 5. DEBUG: Zeig mir den Stack NACH dem Sortieren
    printf("Final State:");
    print_stacks_debug(a, b);
    // 6. Aufräumen (Memory Leaks vermeiden!)
    free_stack(a);
    free_stack(b);
    return (0);
}
