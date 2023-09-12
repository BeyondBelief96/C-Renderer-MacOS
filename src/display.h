#ifndef DISPLAY_H
#define DISPLAY_H

#include <SDL2/SDL.h>
#include <stdbool.h>
#include <stdint.h>

extern SDL_Window* window;
extern SDL_Renderer* renderer;
extern uint32_t* color_buffer;
extern SDL_Texture* color_buffer_texture;

extern int window_width;
extern int window_height;

//Initializes the SDL Window & SDL renderer. Returns true if successful, false if error.
bool initialize_window(void);

//Destorys our window and renderer pointers.
void destroy_window(void);

//copies all of the pixels in our color buffer into the SDL renderer color buffer texture.
void render_color_buffer(void);

//wipes the color color buffer with the given color.
void clear_color_buffer(uint32_t color);

//Draws a grid in the renderer with rows and columuns spaced with the given spacing.
void draw_grid(int grid_spacing);

//Draws a dotted grid with dots spaced based on the grid_spacing parameter.
void draw_dotted_grid(int grid_spacing);

//the x, y position is the position of the top left corner of the rectangle
void draw_rect(int x, int y, int width, int height, uint32_t color);

//Draws a pixel at the specified x and y location on the screen with the given color.
void draw_pixel(int x, int y, uint32_t color);

#endif