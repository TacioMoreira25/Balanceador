# Problema de Expressões Balanceadas

Uma expressão matemática é considerada balanceada se:

- Para cada abertura de parêntese `(`, há um fechamento correspondente `)`.
- Para cada abertura de colchete `[`, há um fechamento correspondente `]`.
- Para cada abertura de chave `{`, há um fechamento correspondente `}`.
- A ordem dos fechamentos deve ser correta. Por exemplo, `([)]` não é balanceado.

## Exemplos de Expressões Balanceadas:

- `{[()()]}`  
- `{([]{})}`  
- `((a + b) * (c - d))`

## Exemplos de Expressões Não Balanceadas:

- `{[()]` (Falta um fechamento `}`)
- `{[(])}` (Ordem incorreta)
- `((a + b]` (Uso misto de `[` e `)`)

## Como Resolver:

### Passos para validar a expressão balanceada:

1. **Criar uma pilha**: A pilha ajudará a armazenar os caracteres de abertura à medida que os encontramos.

2. **Percorrer a expressão**:
    - Se for um delimitador de abertura (`(`, `{`, `[`), empilhe-o.
    - Se for um delimitador de fechamento (`)`, `}`, `]`):
        - Verifique se a pilha está vazia. Se estiver, significa que há um fechamento sem abertura correspondente (expressão não balanceada).
        - Caso contrário, desempilhe o último item da pilha e verifique se ele corresponde ao fechamento atual. Se não corresponder, a expressão não está balanceada.

3. **No final**, se a pilha estiver vazia, a expressão é balanceada. Caso contrário, há algum delimitador de abertura sem fechamento correspondente.


