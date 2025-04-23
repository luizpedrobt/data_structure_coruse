# Flags de compilação
CFLAGS = -Wall -Werror

# Nome do executável
TARGET = main_routine

# Lista de arquivos fonte e objetos
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

# Regra padrão: compilar e linkar
all: $(TARGET)

# Como gerar o executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Como gerar .o a partir de .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos objetos e do executável
clean:
	rm -f *.o $(TARGET)