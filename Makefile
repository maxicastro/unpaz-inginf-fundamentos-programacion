# Makefile (VERSIÓN FINAL CON CARPETA 'lib')

# ------------------------------
# VARIABLES DE COMPILACIÓN
# ------------------------------
CC = gcc
CFLAGS = -Wall -g
UTIL_NAME = utilidades
UTIL_DIR = lib
UTIL_SRC = $(UTIL_DIR)/$(UTIL_NAME).c
UTIL_HDR = $(UTIL_DIR)/$(UTIL_NAME).h
UTIL_OBJ = $(UTIL_DIR)/$(UTIL_NAME).o
# Indicamos al compilador dónde buscar los encabezados con -I
INCLUDE_FLAGS = -I$(UTIL_DIR)

# ------------------------------
# 1. REGLA PARA CREAR EL OBJETO DE LA LIBRERÍA (make lib)
# ------------------------------
# Objetivo: Crea lib/utilidades.o
lib: $(UTIL_OBJ)

# Compila el archivo .c y guarda el .o dentro de lib/
# Aseguramos que la carpeta exista antes de compilar
$(UTIL_OBJ): $(UTIL_SRC) $(UTIL_HDR)
	mkdir -p $(UTIL_DIR)
	$(CC) $(CFLAGS) $(INCLUDE_FLAGS) -c $< -o $@

# ------------------------------
# 2. REGLA GENÉRICA PARA EJERCICIOS
# ------------------------------
# El INCLUDE_FLAGS es crucial para que el ejercicio pueda encontrar utilidades.h
%: %.c $(UTIL_OBJ)
	$(CC) $(CFLAGS) $(INCLUDE_FLAGS) $^ -o $@