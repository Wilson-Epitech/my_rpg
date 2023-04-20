##
## MY_RPG PROJECT, 2022
## makefile
## File description:
## makefile
##

SRC	=	main.c 										\
		src/check_error.c 							\
		src/init_window.c							\
		src/open_window.c 							\
		src/destroy.c 								\
		src/menu/menu_name.c						\
		src/menu/click_first_menu.c					\
		src/menu/button_history_op_play.c			\
		src/menu/text_button_menu.c					\
		src/menu/hover_his_play_op.c				\
		src/menu/click_back.c						\
		src/menu/option/click_option.c				\
		src/menu/option/create_option_music.c		\
		src/menu/option/create_option_effect.c		\
		src/menu/option/effect_mute_button.c		\
		src/menu/option/choose_volume.c				\
		src/menu/option/create_resolution.c			\
		src/menu/option/create_text_resolution.c 	\
		src/menu/option/select_button_res.c			\
		src/menu/option/create_button_fps.c			\
		src/menu/option/create_text_fps.c			\
		src/menu/option/select_fps.c				\
		src/menu/credit/click_credit.c				\
		src/menu/credit/txt_credit.c				\
		src/menu/destroy_menu.c 					\
		src/menu/load.c 							\
		src/menu/resume.c 							\
		src/menu/option/draw_option_rect_text.c 	\
		src/menu/main_menu.c						\
		src/menu/option/select_mute.c				\
		src/menu/option/which_chosen_res.c			\
		src/menu/click_play.c						\
		src/menu/is_on_button.c						\
		src/menu/quit.c								\
		src/sprite/init_struct_sprite.c				\
		src/sprite/move_sprite.c					\
		src/sprite/get_pos_char.c					\
		src/sprite/tp_char.c						\
		src/maps/init_maps_and_col.c				\
		src/maps/get_color_maps.c					\
		src/maps/mouvement_maps.c					\
		src/maps/destroy_maps.c						\
		src/maps/check_collision.c					\
		src/maps/collision.c						\
		src/maps/get_color_map1.c					\
		src/maps/init_map1_3d.c 					\
		src/maps/init_map2_3d.c 					\
		src/maps/init_map3_3d.c 					\
		src/maps/init_map4_3d.c 					\
		src/quest/help.c 							\
		src/quest/press_enter.c						\
		src/quest/main_quest.c						\
		src/quest/current_quest.c					\
		src/quest/draw_text_current.c				\
		src/quest/init_quest.c						\
		src/quest/destroy_quest.c					\
		src/quest/is_grandma_or_shao.c				\
		src/history/create_motion_history.c			\
		src/history/history_menu.c					\
		src/inventory_menu/inventory_menu.c 		\
		src/inventory_menu/init_inventory_struct.c	\
		src/inventory_menu/destroy_menu.c			\
		src/inventory_menu/display_char.c			\
		src/inventory_menu/init_atk_def_txt.c		\
		src/inventory_menu/create_button_saving.c 	\
		src/inventory_menu/create_button_loading.c 	\
		src/inventory_menu/create_button_settings.c	\
		src/inventory_menu/inventory_settings.c   	\
		lib/my_int_to_str.c  						\
		lib/my_putchar.c 							\
		lib/my_putstr.c 							\
		lib/my_revstr.c 							\
		lib/my_strlen.c 							\
		lib/my_strncmp.c 							\

CC = gcc

OBJ	=	$(SRC:.c=.o)

CSFML = -lcsfml-system -lcsfml-graphics -lcsfml-audio -lcsfml-window -lm

CFLAGS = -Wall -Wextra

CPPFLAGS = -iquote./includes

NAME	=	my_rpg

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS) $(CSFML)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	 fclean all

.PHONY : re clean fclean all
