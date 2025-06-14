#pragma once
#include "stack.h"
#include "deque.h"
#include "aluno.h"
#include "nota.h"


void cadastrarAluno(Stack<Aluno>& pilha, int& contadorAlunos);
void cadastrarNota(Stack<Aluno>& pilha, Deque<Nota>& fila);
void calcularMedia(Stack<Aluno>& pilha, Deque<Nota>& fila);
void listarAlunosSemNotas(Stack<Aluno>& pilha, Deque<Nota>& fila);
void excluirAluno(Stack<Aluno>& pilha, Deque<Nota>& fila);
void excluirNota(Deque<Nota>& fila);
