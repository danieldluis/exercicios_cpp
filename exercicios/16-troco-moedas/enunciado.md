# Exercício 16 – Troco de Moedas

Dado um valor inteiro `v` (em cêntimos, `v ≥ 0`), calcula o **mínimo número de moedas** para dar troco, usando as moedas de `1, 2, 5, 10, 25, 100`. Mostra também **quantas de cada** moeda são usadas.

**Algoritmo guloso:** usa sempre a maior moeda possível, repete até o valor chegar a `0`.

## Exemplos

| Entrada | Saída |
|---------|-------|
| `87`  | `Total: 5 moedas` / `100: 0` / `25: 3` / `10: 0` / `5: 1` / `2: 1` / `1: 1` |
| `100` | `Total: 1 moeda` / `100: 1` / `25: 0` / `10: 0` / `5: 0` / `2: 0` / `1: 0` |
| `0`   | `Total: 0 moedas` |

**Dificuldade:** ⭐⭐⭐⭐
**Tópicos:** `vector`, `for`, `%`, `/`, algoritmo guloso
