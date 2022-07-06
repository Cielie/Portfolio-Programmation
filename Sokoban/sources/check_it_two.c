/*
** EPITECH PROJECT, 2022
** checks functions
** File description:
** check functions
*/

#include "../include/my.h"

char **check_p_ono(player_pos *position, char **plan, int k)
{
    plan = check_rp_obs(position, plan, k);
    plan = check_lp_obs(position, plan, k);
    plan = check_dp_obs(position, plan, k);
    plan = check_upp_obs(position, plan, k);

    return plan;
}

char **check_all_cond(player_pos *position, char **plan, int k)
{
    plan = check_spaces(position, plan, k);
    plan = check_obstacles(position, plan, k);
    plan = check_o_obstacles(position, plan, k);
    plan = check_p_ono(position, plan, k);

    return plan;
}
