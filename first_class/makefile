
# Este será o nome do arquivo .o gerado após compilar todos os aquirvos e suas dependências
TARGET = main_routine

# Compilador escolhido
CC = gcc

# Flags de compilação
# -Wall ativa todos os avisos
# -Wextra ativa avisos extras
# -std=c11 ativa o padrão C11
CFLAGS = -Wall -Wextra -std=c11

# Lista de arquivos .o que serão gerados
# main.o é o arquivo principal
# cbf.o é o arquivo que contém a implementação da função cbf
# O arquivo main.o depende do arquivo cbf.o
# O arquivo cbf.o depende do arquivo cbf.h
OBJ = main.o cbf.o

# Regra padrão para compilar o programa
# O makefile irá compilar todos os arquivos .o listados na variável OBJ
# e gerar o arquivo executável com o nome definido na variável TARGET
# O makefile irá usar o compilador definido na variável CC
# e as flags de compilação definidas na variável CFLAGS
all: $(TARGET)

# Regra para compilar o arquivo executável
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Regra para compilar os arquivos .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para limpar os arquivos .o e o executável
clean:
	rm -rf *.o $(TARGET)