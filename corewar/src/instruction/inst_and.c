/*
** EPITECH PROJECT, 2019
** inst_and.c
** File description:
** and intruction
*/

#include "corewar.h"

int inst_and(champion_t *champ, char *arena, code_t desc, int *args)
{
    if (is_reg(args) == -1)
        return -1;
    champ->reg[args[2] - 1] = get_val(champ, arena, desc, args[0])
& get_val(champ, arena, desc, args[1]);
    refresh_carry(champ, champ->reg[args[2] - 1]);
    return 0;
}
