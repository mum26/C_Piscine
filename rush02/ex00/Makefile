CC			= cc
CFLAGS		= -Wall -Wextra -Werror
SRCS		= main.c check_dict.c check.c concat.c create_dict.c dict_func.c file_func.c trans.c util.c util2.c
TARGET		= rush-02
OBJS		= $(SRCS:.c=.o)
RM			= rm -f

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(TARGET)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

.PHONY: all clean fclean