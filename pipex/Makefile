# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmertane <jmertane@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 15:32:20 by jmertane          #+#    #+#              #
#    Updated: 2024/02/15 11:04:37 by jmertane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#    VARIABLES
# **************************************************************************** #

NAME = pipex

SOURCEDIR := sources
HEADERDIR := includes
BUILDDIR  := build
BUILDLOG  := build.log

BONUSDIR  := ./bonus
BONUSFLAG := .bonus

LIBFTDIR  := ./libft
LIBFTBIN  := libft.a

TESTCASE  := ./$(NAME) "Makefile" ls 'wc -l' outf && cat outf && rm -rf outf

# **************************************************************************** #
#    COMMANDS
# **************************************************************************** #

RM          := rm -rf
SCREENCLEAR := printf "\033c"

# **************************************************************************** #
#    COMPILATION
# **************************************************************************** #

CC         := cc
CFLAGS     := -Wall -Werror -Wextra
CPPFLAGS   := -c -MMD -MP
DEBUGFLAGS := -g -fsanitize=address
MAKEFLAGS  += --no-print-directory -j4

# **************************************************************************** #
#    VALGRIND
# **************************************************************************** #

LEAKSLOG := leaks.log
VLGFLAGS := --leak-check=full \
            --show-leak-kinds=all \
            --track-origins=yes \
            --track-fds=yes \
            --trace-children=yes \
            --log-file=$(LEAKSLOG) \
            --verbose \
            --quiet

# **************************************************************************** #
#    SOURCES
# **************************************************************************** #

SOURCES := main \
           init \
           child \
           wait \
           path \
           free \
           error

SOURCES_BONUS := $(SOURCES) \
                 hdoc

SOURCES := $(addsuffix .c, $(SOURCES))

SOURCES_BONUS := $(addsuffix _bonus.c, $(SOURCES_BONUS))

OBJECTS := $(addprefix $(BUILDDIR)/, $(SOURCES:.c=.o))

OBJECTS_BONUS = $(addprefix $(BUILDDIR)/, $(SOURCES_BONUS:.c=.o))

SOURCEDIR += $(addprefix $(BONUSDIR)/, $(SOURCEDIR))

INCLUDES := $(addprefix -I, $(HEADERDIR) $(BONUSDIR)/$(HEADERDIR))
INCLUDES += $(addprefix -I, $(LIBFTDIR)/$(HEADERDIR))

DEPS := $(OBJECTS:.o=.d) $(OBJECTS_BONUS:.o=.d)

vpath %.c $(SOURCEDIR)

# **************************************************************************** #
#    RULES
# **************************************************************************** #

all: $(NAME)

$(NAME): libft $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(LIBFTDIR)/$(LIBFTBIN) -o $(NAME)
	printf "$(V)$(B)Binary:$(T)$(Y) $(NAME) $(T)\n"

bonus: $(BONUSFLAG)

$(BONUSFLAG): libft $(OBJECTS_BONUS)
	$(CC) $(CFLAGS) $(OBJECTS_BONUS) $(LIBFTDIR)/$(LIBFTBIN) -o $(NAME)
	printf "$(V)$(B)Binary:$(T)$(Y) $(NAME) $(T)\n"
	@touch $(BONUSFLAG)

libft:
	@make -C $(LIBFTDIR)

run: all
	$(SCREENCLEAR)
	$(TESTCASE)

re: fclean
	make all

reb: fclean
	make bonus

debug: CFLAGS += $(DEBUGFLAGS)
debug: re

leaks: all
	valgrind $(VLGFLAGS) $(TESTCASE)
	$(call report_cmd, $(LEAKSLOG))

define report_cmd
	$(SCREENCLEAR)
	cat $1 | tail -n +4 | cut --complement -d' ' -f1
endef

# **************************************************************************** #
#    BUILD
# **************************************************************************** #

define build_cmd
$1/%.o: %.c | $(BUILDDIR)
	if ! $(CC) $(CFLAGS) $(CPPFLAGS) $(INCLUDES) $$< -o $$@ 2> $(BUILDLOG); then \
		printf "$(R)$(B)\nError: \
		$(V)Unable to create object file: \
		$(R)$(B)$$@$(Y)\n\n"; \
		sed '$$d' $(BUILDLOG); exit 1 ; \
	else \
		printf "$(C)$(B)Object: $(G)$$@ $(T)\n"; \
	fi
endef

# **************************************************************************** #
#    CLEAN
# **************************************************************************** #

clean:
	@make -C $(LIBFTDIR) fclean
	$(call delete_cmd, $(BUILDDIR), $(BUILDLOG), $(LEAKSLOG), $(BONUSFLAG))

fclean: clean
	$(call delete_cmd, $(NAME))

define delete_cmd
	printf "$(R)$(B)Delete:$(T)$(Y)$1$2$3$4$5$(T)\n"
	$(RM) $1 $2 $3 $4 $5
endef

# **************************************************************************** #
#    COLORS
# **************************************************************************** #

T = \033[0m
B = \033[1m
G = \033[32m
V = \033[35m
C = \033[36m
Y = \033[33m
R = \033[31m

# **************************************************************************** #
#    UTILS
# **************************************************************************** #

-include $(DEPS)

$(BUILDDIR):
	mkdir -p $@

$(foreach build, $(BUILDDIR), $(eval $(call build_cmd, $(build))))

# **************************************************************************** #
#    PHONY
# **************************************************************************** #

.PHONY: all bonus re reb
.PHONY: debug libft
.PHONY: clean fclean

.SILENT:
