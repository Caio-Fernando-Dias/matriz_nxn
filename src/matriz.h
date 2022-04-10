#ifndef MATRIZ_H
#define MATRIZ_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#define MAXTAM 100

int inicia_matriz(int n, int matriz[MAXTAM][MAXTAM]);

void imprimi(int n, int matriz[MAXTAM][MAXTAM]);

void anda_matriz(int n, int matriz[MAXTAM][MAXTAM]);

void menu();

#endif
