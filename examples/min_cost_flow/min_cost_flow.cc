// Try DON'T CHANGE THIS FILE
// JUST THE FUNCTION ON LINE 218 (operations_research::Solve)
#include<stdlib.h>
#include<stdio.h>
#include <iostream>
#include <fstream>
#include"limits.h"

// Import ortools
#include "ortools/base/init_google.h"
#include "ortools/base/logging.h"
#define INF 1e9
#include <vector>
#include <utility>

char ** alocate_table(int n){
  char ** T = (char**) malloc(n * sizeof(char *));
  for(int x = 0; x < n; x++){
    T[x] = (char*) malloc(n * sizeof(char *));
  }
  return T;
}

void free_table(char ** T, int n){
  for(int x = 0; x < n; x++){
    free(T[x]);
  }
  free(T);
  return;
}

char ** copy_table(char ** T, int n){
  char ** Tn = alocate_table(n);
  for(int y = 0; y < n; y++){
    for(int x = 0; x < n; x++){
      Tn[x][y] = T[x][y];
    }
  }
  return Tn;
}

char ** read_table(int * n_){
  int n;
  scanf("%d\n", &n);
  *n_ = n;
  char ** T = alocate_table(n); 
  
  //Tabela alocada
  for(int y = 0; y < n; y++){
    char c;
    for(int x = 0; x < n; x++){
      scanf("%c", &c);
      T[x][y] = c;
    }
    //lenda a quebra de linha
    scanf("%c", &c);
  }
  return T;
}

void print_table(char ** T, int n){
  printf("%d\n", n);
  for(int y = 0; y < n; y++){
    for(int x = 0; x < n; x++){
      printf("%c", T[x][y]);
    }
    printf("\n");
  }
}

int calculate_damage(char ** T, int n, int x, int y){
  //verificando as 8 casas adjacentes Fonte e Torre
  int damage = 0;
  if(x-1 >= 0 && y-1 >= 0 && x-1 < n && y-1 < n && T[x-1][y-1] == 'F') damage -= 10;
  if(x   >= 0 && y-1 >= 0 && x   < n && y-1 < n && T[x][y-1]   == 'F') damage -= 10;
  if(x+1 >= 0 && y-1 >= 0 && x+1 < n && y-1 < n && T[x+1][y-1] == 'F') damage -= 10;
  if(x-1 >= 0 && y   >= 0 && x-1 < n && y   < n && T[x-1][y]   == 'F') damage -= 10;
  if(x+1 >= 0 && y   >= 0 && x+1 < n && y   < n && T[x+1][y]   == 'F') damage -= 10;
  if(x-1 >= 0 && y+1 >= 0 && x-1 < n && y+1 < n && T[x-1][y+1] == 'F') damage -= 10;
  if(x   >= 0 && y+1 >= 0 && x   < n && y+1 < n && T[x][y+1]   == 'F') damage -= 10;
  if(x+1 >= 0 && y+1 >= 0 && x+1 < n && y+1 < n && T[x+1][y+1] == 'F') damage -= 10;

  if(x-1 >= 0 && y-1 >= 0 && x-1 < n && y-1 < n && T[x-1][y-1] == 'T') damage += 10;
  if(x   >= 0 && y-1 >= 0 && x   < n && y-1 < n && T[x][y-1]   == 'T') damage += 10;
  if(x+1 >= 0 && y-1 >= 0 && x+1 < n && y-1 < n && T[x+1][y-1] == 'T') damage += 10;
  if(x-1 >= 0 && y   >= 0 && x-1 < n && y   < n && T[x-1][y]   == 'T') damage += 10;
  if(x+1 >= 0 && y   >= 0 && x+1 < n && y   < n && T[x+1][y]   == 'T') damage += 10;
  if(x-1 >= 0 && y+1 >= 0 && x-1 < n && y+1 < n && T[x-1][y+1] == 'T') damage += 10;
  if(x   >= 0 && y+1 >= 0 && x   < n && y+1 < n && T[x][y+1]   == 'T') damage += 10;
  if(x+1 >= 0 && y+1 >= 0 && x+1 < n && y+1 < n && T[x+1][y+1] == 'T') damage += 10;  
  
  return damage;
}
  
int verify_aux_path(char ** T, int n, char * path, int path_length, char ** visited, int * damage_){
  int x = 0;
  int y = 0;
  
  int damage = calculate_damage(T, n, x, y);
  visited[x][y] = '1';
  
  for(int i = 0; i < path_length; i++){
    switch(path[i]){
      case 'N': // North
        y--;
        break;
      case 'S': // South
        y++;
        break;
      case 'E': // East
        x++;
        break;
      case 'W': // West
        x--;
        break;
      default:
        printf("Your path has an unrecognized direction (allowed only: N,S,E,W)!\n");
        return 0;
    }
    if(T[x][y] == 'F' || T[x][y] == 'T'){
      printf("Your path reach a tower or a Font in {[%d],[%d]}!\n", x, y);
      return 0;
    }
    if(visited[x][y] == '1'){
      printf("Your path is repeating nodes!\n");
      return 0;
    }
    visited[x][y] = '1';
    damage += calculate_damage(T, n, x, y);
  }
  
  if(x != n-1 || y != n-1){
    printf("Your path don't reachs the end, stop in the {[%d],[%d]}\n", x, y);
    return 0;
  }
  
  //printf("Tomou %d de damage!\n", damage);
  *damage_ = damage;
  return 1;
}


int verifica_path(char ** T, int n, char * path, int path_length, int * damage){
  char ** visited = alocate_table(n);
  for(int x = 0; x < n; x++){
    for(int y = 0; y < 0; y++){
      visited[x][y] = '0';
    }
  }
  
  int res = verify_aux_path(T, n, path, path_length, visited, damage);
  
  free_table(visited, n);
  return res;
}

void draw_path(char ** T, int n, char * path, int path_length){
  int x = 0;
  int y = 0;
  
  for(int i = 0; i < path_length; i++){
    switch(path[i]){
      case 'N':
        T[x][y] = '^';
        y--;
        break;
      case 'S':
        T[x][y] = 'v';
        y++;
        break;
      case 'E':
        T[x][y] = '>';
        x++;
        break;
      case 'W':
        T[x][y] = '<';
        x--;
        break;
      default:
        return;
    }
  }
}

void print_matrix(char** T, int n) {
  printf("Calculate damage:\n");

  for (int j = 0; j < n; j++) {
      for (int i = 0; i < n; i++) {
        if (T[i][j] == 'T' || T[i][j] == 'F') printf("INF ");
        else if (calculate_damage(T, n, i, j) >= 0)printf("%03d ", calculate_damage(T, n, i, j));
        else printf("%02d ", calculate_damage(T, n, i, j));
      }
      printf("\n");
  }
  printf("Tij:\n");

  for (int j = 0; j < n; j++) {
    for (int i = 0; i < n; i++) {
      printf("%c ", T[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  printf("ij:\n");

  for (int j = 0; j < n; j++) {
    for (int i = 0; i < n; i++) {
      printf("%d ", j*10+i);
    }
    printf("\n");
  }
  printf("\n");
}

namespace operations_research {
  // MUST IMPLEMENT THIS FUNCTION
  int Solve(char ** T, int n, char * path) {
    return 0;
  }
}  // namespace operations_research

int main(int argc, char *argv[]){
  // Inicializa o glog
  google::InitGoogleLogging(argv[0]);
  absl::SetFlag(&FLAGS_stderrthreshold, 0);

  //T eh o Tabuleiro, que serah passado para a sua funcao, voce pode 
  //modificar T se precisar, T_original eh guardado inalterado
  
  char ** T;
  char ** T_original;
  int n;
  
  T = read_table(&n);
  T_original = copy_table(T, n);
  
  //print_table(T_original, n);
  
  //o path tera no maximo n*n de tamanho, por isso eh prealocado aqui
  char * path = (char *) malloc(n * n * n * sizeof(char));  
  
  //sua funcao devolve o tamanho do path e preenche o path com 
  //'N', 'S', 'E', 'W'
  int path_length = operations_research::Solve(T, n, path);
  
  
  printf("path_length = %d\n", path_length);
  //for(int i = 0; i < path_length; i++){
  //  printf("%c", path[i]);
  //}
    
  int res = 0;
  int damage = INT_MAX;
  
  if(path_length > 0 && verifica_path(T_original, n, path, path_length, &damage)){
    printf("Receive %d damage! (less negative is better)\n", damage);
    //draw_path(T_original, n, path, path_length);
    //print_table(T_original, n);
  } else{
    printf("Something wrong on your path!\n"); 
    //draw_path(T_original, n, path, path_length);
    //print_table(T_original, n);
    res = -1;
  }
  
  free_table(T, n);
  free_table(T_original, n);
  free(path);
  return res;
}
