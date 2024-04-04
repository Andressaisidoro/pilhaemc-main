#incluir <stdio.h>
#incluir <stdlib.h>
#incluir <string.h>

#definir MAX_TAM 5

// Definindo uma estrutura da pilha
typedef estrutura {
 char Livros[MAX_TAM][20]; // Matriz de cordas para armazenar os livres
 int topo; // Índice do topo da pilha
} PilhaLivros;

// Função para inicializar a pilha
vazio inicializarPilha(PilhaLivros *pilha) {
 pilha->topo = -1; // Inicializa o topo como -1, indicando uma pele vazia
}

// Função para empilhar um livro
vazio empilharLivro(PilhaLivros *pilha, char *livro) {
    se (pilha->topo == MAX_TAM - 1) { // Verifica se a pilha está cheia
        impressãof("Erro: Pilha cheia. Não é possível empilhar o livro.\n");
 retorno;
    }
 pilha->topo++; // Incrementa o topo
    strcpy(pilha->Livros[pilha->topo], livro); // Copia o livro para o topo da pilha
}

// Função para desempilhar um livro
Vazio desempilharLivro(PilhaLivros *pilha) {
    // Verifica se a pilha está vazia
    se (pilha->topo == -1) { 
 impressãof("Erro: Pilha vazia. Não é possível removido ou livre.\n");
 retorno;
    }
    // Mostra o livro a ser removido
 impressãof("Livro removido: %s\n", pilha->Livros[pilha->topo]);
    // Decrementa o topo
 pilha->topo--; 
}

//Executando pilha de livros
int principal() {
 PilhaLivros pilha;
    inicializarPilha(&pilha);

    // Desempilhando um livro (pilha vazia)
    desempilharLivro(&pilha);

    // Empilhando os livres fornecidos
    empilharLivro(&pilha, "Livro A");
    empilharLivro(&pilha, "Livro B");
    empilharLivro(&pilha, "Livro C");
    empilharLivro(&pilha, "Livro D");
    empilharLivro(&pilha, "Livro E");

    // Exibindo os livres empilhados (opcional)
    impressãof("Livros empilhados:\n");
    para (int i = pilha.topo; eu >= 0; eu--) {
        impressãof("%s\n", pilha.Livros[i]);
    }

    // Desempilhando um livro
    desempilharLivro(&pilha);

    // Exibindo os livres empilhados após a remoção (opcional)
    impressãof("Livros empilhados após a remoção:\n");
    para (int i = pilha.topo; eu >= 0; eu--) {
        impressãof("%s\n", pilha.Livros[i]);
    }

    retorno 0;
}
