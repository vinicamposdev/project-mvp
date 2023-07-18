//  Voce pode submetera esse codigo 
//entao alteracoes aqui nao terao efeitos
//nao adianta modificar ela.

#include<stdlib.h>
#include<stdio.h>
// #include"solver.hpp"
// #include"tabuleiro.hpp"
#include"limits.h"

// Importar ortools
#include "ortools/graph/min_cost_flow.h"
#include "ortools/base/init_google.h"
#include "ortools/base/logging.h"
#define INF 1e9
#include <vector>
#include <utility>

char ** aloca_tabuleiro(int n){
  char ** T = (char**) malloc(n * sizeof(char *));
  for(int x = 0; x < n; x++){
    T[x] = (char*) malloc(n * sizeof(char *));
  }
  return T;
}

void libera_tabuleiro(char ** T, int n){
  for(int x = 0; x < n; x++){
    free(T[x]);
  }
  free(T);
  return;
}

char ** copia_tabuleiro(char ** T, int n){
  char ** Tn = aloca_tabuleiro(n);
  for(int y = 0; y < n; y++){
    for(int x = 0; x < n; x++){
      Tn[x][y] = T[x][y];
    }
  }
  return Tn;
}

char ** le_tabuleiro(int * n_){
  int n;
  scanf("%d\n", &n);
  *n_ = n;
  char ** T = aloca_tabuleiro(n); 
  
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

void imprime_tabuleiro(char ** T, int n){
  printf("%d\n", n);
  for(int y = 0; y < n; y++){
    for(int x = 0; x < n; x++){
      printf("%c", T[x][y]);
    }
    printf("\n");
  }
}

int calcula_dano(char ** T, int n, int x, int y){
  //verificando as 8 casas adjacentes Fonte e Torre
  int dano = 0;
  if(x-1 >= 0 && y-1 >= 0 && x-1 < n && y-1 < n && T[x-1][y-1] == 'F') dano -= 10;
  if(x   >= 0 && y-1 >= 0 && x   < n && y-1 < n && T[x][y-1]   == 'F') dano -= 10;
  if(x+1 >= 0 && y-1 >= 0 && x+1 < n && y-1 < n && T[x+1][y-1] == 'F') dano -= 10;
  if(x-1 >= 0 && y   >= 0 && x-1 < n && y   < n && T[x-1][y]   == 'F') dano -= 10;
  if(x+1 >= 0 && y   >= 0 && x+1 < n && y   < n && T[x+1][y]   == 'F') dano -= 10;
  if(x-1 >= 0 && y+1 >= 0 && x-1 < n && y+1 < n && T[x-1][y+1] == 'F') dano -= 10;
  if(x   >= 0 && y+1 >= 0 && x   < n && y+1 < n && T[x][y+1]   == 'F') dano -= 10;
  if(x+1 >= 0 && y+1 >= 0 && x+1 < n && y+1 < n && T[x+1][y+1] == 'F') dano -= 10;

  if(x-1 >= 0 && y-1 >= 0 && x-1 < n && y-1 < n && T[x-1][y-1] == 'T') dano += 10;
  if(x   >= 0 && y-1 >= 0 && x   < n && y-1 < n && T[x][y-1]   == 'T') dano += 10;
  if(x+1 >= 0 && y-1 >= 0 && x+1 < n && y-1 < n && T[x+1][y-1] == 'T') dano += 10;
  if(x-1 >= 0 && y   >= 0 && x-1 < n && y   < n && T[x-1][y]   == 'T') dano += 10;
  if(x+1 >= 0 && y   >= 0 && x+1 < n && y   < n && T[x+1][y]   == 'T') dano += 10;
  if(x-1 >= 0 && y+1 >= 0 && x-1 < n && y+1 < n && T[x-1][y+1] == 'T') dano += 10;
  if(x   >= 0 && y+1 >= 0 && x   < n && y+1 < n && T[x][y+1]   == 'T') dano += 10;
  if(x+1 >= 0 && y+1 >= 0 && x+1 < n && y+1 < n && T[x+1][y+1] == 'T') dano += 10;  
  
  return dano;
}
  
int verifica_caminho_aux(char ** T, int n, char * caminho, int tamanho_caminho, char ** visitado, int * dano_){
  int x = 0;
  int y = 0;
  
  int dano = calcula_dano(T, n, x, y);
  visitado[x][y] = '1';
  
  for(int i = 0; i < tamanho_caminho; i++){
    switch(caminho[i]){
      case 'N':
        y--;
        break;
      case 'S':
        y++;
        break;
      case 'L':
        x++;
        break;
      case 'O':
        x--;
        break;
      default:
        printf("Seu caminho tem uma direcao nao reconhecida!\n");
        return 0;
    }
    if(T[x][y] == 'F' || T[x][y] == 'T'){
      printf("Seu caminho bateu em uma fonte ou torre em [%d][%d]!\n", x, y);
      return 0;
    }
    if(visitado[x][y] == '1'){
      printf("Seu caminho passa por uma casa repetida!\n");
      return 0;
    }
    visitado[x][y] = '1';
    dano += calcula_dano(T, n, x, y);
  }
  
  if(x != n-1 || y != n-1){
    printf("Seu caminho nao chega no final, parou em [%d][%d]\n", x, y);
    return 0;
  }
  
  //printf("Tomou %d de dano!\n", dano);
  *dano_ = dano;
  return 1;
}


int verifica_caminho(char ** T, int n, char * caminho, int tamanho_caminho, int * dano){
  //alocando um tabuleiro auxiliar para verificar se o caminho nao passa 
  //duas vezes no mesmo quadrado, sem mexer no T
  char ** visitado = aloca_tabuleiro(n);
  for(int x = 0; x < n; x++){
    for(int y = 0; y < 0; y++){
      visitado[x][y] = '0';
    }
  }
  
  int res = verifica_caminho_aux(T, n, caminho, tamanho_caminho, visitado, dano);
  
  libera_tabuleiro(visitado, n);
  return res;
}

void desenha_caminho(char ** T, int n, char * caminho, int tamanho_caminho){
  int x = 0;
  int y = 0;
  
  for(int i = 0; i < tamanho_caminho; i++){
    switch(caminho[i]){
      case 'N':
        T[x][y] = '^';
        y--;
        break;
      case 'S':
        T[x][y] = 'v';
        y++;
        break;
      case 'L':
        T[x][y] = '>';
        x++;
        break;
      case 'O':
        T[x][y] = '<';
        x--;
        break;
      default:
        return;
    }
  }
}



void print_matrix(char** T, int n) {
  printf("Calcula Dano:\n");

  for (int j = 0; j < n; j++) {
      for (int i = 0; i < n; i++) {
        if (T[i][j] == 'T' || T[i][j] == 'F') printf("INF ");
        else if (calcula_dano(T, n, i, j) >= 0)printf("%03d ", calcula_dano(T, n, i, j));
        else printf("%02d ", calcula_dano(T, n, i, j));
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
  struct Arc {
    std::pair<NodeIndex, NodeIndex> nodes;
    FlowQuantity capacity;
    FlowQuantity unit_cost;
  };



  int SolveMinCostFlow(char ** T, int n, char * caminho) {
    // print_matrix(T, n);
    // Vetor que vai definir o quanto cada nó demanda
    std::vector<std::pair<NodeIndex, FlowQuantity> > supplies;
    // Inicializa com 1 a fonte
    int suply = 1;
    supplies.push_back(std::make_pair(0, suply));
    for (int i = 1; i < (n-1)*10+n-1; ++i) {
      // Todos os outros possíveis nós são 0
      suply = 0;
      supplies.push_back(std::make_pair(i, suply));
      printf("{%d,%d} ", i, suply);
    }
    // Finaliza com -1 como objetivo
    suply = -1;
    supplies.push_back(std::make_pair((n-1)*10+n-1, suply));
    printf("\n");

    int capacity = 1;
    std::vector<Arc> arcs;

    // const std::vector<Arc> arcs = {
    //   {{00, 10}, capacity, -30},
    //   {{10, 20}, capacity, -20},
    //   {{20, 30}, capacity, -10},
    //   // {{30, 40}, capacity, 0},
    //   {{30, 31}, capacity, -10},
    //   // {{31, 41}, capacity, 0},
    //   // {{32, 42}, capacity, 0},
    //   // {{40, 41}, capacity, 0},
    //   {{31, 32}, capacity, 10},
    //   // {{32, 42}, capacity, 20},
    //   {{32, 22}, capacity, -10},
    //   // {{41, 42}, capacity, 20},
    //   // {{22, 12}, capacity, -20},
    //   // {{12, 02}, capacity, -10},
    //   {{22, 23}, capacity, 10},
    //   // {{12, 13}, capacity, 10},
    //   // {{13, 14}, capacity, 10},
    //   {{23, 24}, capacity, 10},
    //   // {{14, 24}, capacity, 10},
    //   {{24, 34}, capacity, 20},
    //   {{34, 44}, capacity, 20},

    //   {{22, 12}, capacity, -20},
    //   {{12, 13}, capacity, 10},
    //   {{13, 14}, capacity, 10},
    //   {{14, 24}, capacity, 10}
    // };

    const std::vector<std::pair<int, int>> directions = {
      {-1, 0}, // S
      {1, 0},  // N
      {0, -1}, // O
      {0, 1},  // L
    };

    for (int j = 0; j < n; j++) {
      for (int i = 0; i < n; i++) {
        if (T[i][j] != 'T' && T[i][j] != 'F') {
          for (const auto& direction : directions) {
            int newRow = i + direction.first;
            int newCol = j + direction.second;
            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n && T[newRow][newCol] != 'T' && T[newRow][newCol] != 'F') {
              arcs.push_back({{j*10+i, newCol*10 + newRow}, capacity, calcula_dano(T, n, newCol, newRow)});
            }
          }
        }
      }
    }


    StarGraph graph(supplies.size(), arcs.size());
    MinCostFlow min_cost_flow(&graph);
    for (const auto& it : arcs) {
      ArcIndex arc = graph.AddArc(it.nodes.first, it.nodes.second);
      min_cost_flow.SetArcCapacity(arc, it.capacity);
      min_cost_flow.SetArcUnitCost(arc, it.unit_cost);
    }
    for (const auto& it : supplies) {
      min_cost_flow.SetNodeSupply(it.first, it.second);
    }

    LOG(INFO) << "Solving custom min cost flow with: " << graph.num_nodes()
              << " nodes, and " << graph.num_arcs() << " arcs.";

    // Resolver o fluxo
    min_cost_flow.Solve();
    if (MinCostFlow::OPTIMAL != min_cost_flow.status()) {
      LOG(FATAL) << "Solving the max flow is not optimal! Status: " << min_cost_flow.status() << ", OPTIMAL: " << MinCostFlow::OPTIMAL;
    }
    FlowQuantity total_flow_cost = min_cost_flow.GetOptimalCost();
    LOG(INFO) << "Minimum cost flow: " << total_flow_cost;
    LOG(INFO) << "";
    LOG(INFO) << "Arc   : Flow / Capacity / Cost";
    int k = 0;
    for (int i = 0; i < arcs.size(); ++i) {
      // Se o fluxo for maior que 0, significa que passou por esse caminho
      if (min_cost_flow.Flow(i)){
        int rowA = graph.Tail(i) / 10; 
        int colA = graph.Tail(i) % 10;
        int rowB = graph.Head(i) / 10; 
        int colB = graph.Head(i) % 10;
        if (rowA - rowB == - 1 && colA -  colB == 0) {
          caminho[k++] = 'S';
        } else if (rowA - rowB == 1 &&  colA -  colB == 0) {
          caminho[k++] = 'N';
        } else if (rowA - rowB == 0 &&  colA -  colB == -1) {
          caminho[k++] = 'L';
        } else if (rowA - rowB == 0 &&  colA -  colB == 1) {
          caminho[k++] = 'O';
        }
      }
      LOG(INFO) << graph.Tail(i) << " -> " << graph.Head(i) << ": "
                << min_cost_flow.Flow(i) << " / " << min_cost_flow.Capacity(i)
                << " / " << min_cost_flow.UnitCost(i);
    }

    for (int i = 0; i < arcs.size(); ++i) {
      printf("caminho[%i] = %c \n", i, caminho[i]);
    }
    return min_cost_flow.Flow(0);
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
  
  T = le_tabuleiro(&n);
  T_original = copia_tabuleiro(T, n);
  
  //imprime_tabuleiro(T_original, n);
  
  //o caminho tera no maximo n*n de tamanho, por isso eh prealocado aqui
  char * caminho = (char *) malloc(n * n * n * sizeof(char));  
  
  //sua funcao devolve o tamanho do caminho e preenche o caminho com 
  //'N', 'S', 'L', 'O'
  int tamanho_caminho = operations_research::SolveMinCostFlow(T, n, caminho);
  
  
  printf("tamanho_caminho = %d\n", tamanho_caminho);
  //for(int i = 0; i < tamanho_caminho; i++){
  //  printf("%c", caminho[i]);
  //}
    
  int res = 0;
  int dano = INT_MAX;
  
  if(tamanho_caminho > 0 && verifica_caminho(T_original, n, caminho, tamanho_caminho, &dano)){
    printf("Tomou %d de dano! (quanto mais negativo melhor)\n", dano);
    //desenha_caminho(T_original, n, caminho, tamanho_caminho);
    //imprime_tabuleiro(T_original, n);
  } else{
    printf("Algo errado no seu caminho!\n"); 
    //desenha_caminho(T_original, n, caminho, tamanho_caminho);
    //imprime_tabuleiro(T_original, n);
    res = -1;
  }
  
  libera_tabuleiro(T, n);
  libera_tabuleiro(T_original, n);
  free(caminho);
  return res;
}
