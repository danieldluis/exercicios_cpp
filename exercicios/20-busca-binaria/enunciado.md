# Exercício 20 – Busca Binária

Dado um vetor **já ordenado** e um valor `x`, usa **busca binária** para encontrar a posição de `x` (ou `-1` se não existir).

**Algoritmo:** compara `x` com o elemento do meio; se for menor, procura na metade esquerda; se for maior, na metade direita. Repete até encontrar ou o intervalo ficar vazio.

## Exemplos

| Entrada | Saída |
|---------|-------|
| `7` / `2 5 8 12 16 23 38` / `23` | `5` |
| `7` / `2 5 8 12 16 23 38` / `15` | `-1` |

**Dificuldade:** ⭐⭐⭐⭐
**Tópicos:** `vector`, `while`, `/`, lógica de intervalos
