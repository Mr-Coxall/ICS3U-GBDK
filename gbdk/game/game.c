// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: June 2019
// This program is the "Hello, World!" program for the GameBoy


#include <stdio.h>
#include <gb/gb.h>

#include "Smiler.h"


int main() {
    set_sprite_data(0, 2, TileData);
    set_sprite_tile(0, 1);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;
}
