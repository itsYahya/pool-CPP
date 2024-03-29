/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:21:49 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/02 23:11:26 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap scav("hello"), scav1("hehe");
    
    for (int i = 0; i < 5; i++){
        scav.attack(scav1.getName());
        if (scav.getEnrgyPoint())
            scav1.takeDamage(scav1.getAttackDamage());
    }
    scav.whoAmI();
    scav.guardGate();
    scav.highFivesGuys();
}