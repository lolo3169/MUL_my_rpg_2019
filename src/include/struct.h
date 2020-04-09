/*
** EPITECH PROJECT, 2020
** struct
** File description:
** struct
*/
#ifndef STRUCT_H_
#define STRUCT_H_

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <stddef.h>
#include "my.h"
#include "csfml.h"

typedef struct
{
    sfRenderWindow *window;
    int scene;
    sfMusic *game;
    sfTexture *texture_enemy;
} window_t;

typedef struct
{
    sfTexture *texture1;
    sfSprite *sprite_start;
    sfTexture *texture2;
    sfSprite *sprite_button;
    sfTexture *texture3;
    sfSprite *sprite_button_exit;
    sfVector2f position1;
    sfVector2f position2;
    sfMusic *music;

    sfTexture *texture_4;
    sfSprite *sprite_pause;
    sfTexture *texture5;
    sfSprite *sprite_continue;
    sfTexture *texture6;
    sfSprite *sprite_button_start;
    sfTexture *texture7;
    sfSprite *sprite_exit;
    sfVector2f position3;
    sfVector2f position4;
    sfVector2f position5;
    sfMusic *pause;
    sfMusic *sound;
} start_t;

typedef struct background
{
    sfTexture *texture_background_game;
    sfSprite *sprite_background_game;
    sfTexture *texture_pause_game;
    sfSprite *sprite_pause_game;
} background_t;

typedef struct enemy_t enemy_t;
struct enemy_t
{
    sfSprite *sprite_enemy;
    sfIntRect rect1;
    sfClock *clock1;
    sfTime time1;
    float seconds1;
    sfClock *clock2;
    sfTime time2;
    float seconds2;
    sfVector2f position;
    enemy_t *next;
};

typedef struct list_t list_t;
struct list_t
{
    enemy_t *first;
};

#endif