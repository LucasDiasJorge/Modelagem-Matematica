### Código em C para Converter RSSI em Metros

### Explicação do Código

1. **Inclusão de Bibliotecas**:
    - `#include <stdio.h>`: Para entrada e saída padrão.
    - `#include <math.h>`: Para usar a função `pow()` que calcula potências.

2. **Função `rssi_to_distance`**:
    - Esta função recebe três parâmetros:
        - `rssi`: o valor do RSSI em dBm.
        - `A`: o valor do RSSI de referência a 1 metro (pode variar dependendo do ambiente).
        - `n`: o exponente de perda de caminho, que depende do ambiente (2 para espaços abertos, 3-4 para ambientes internos).
    - Retorna a distância estimada em metros usando a fórmula: d=10(A-RSSI/10-n)

3. **Função `main`**:
    - Declara variáveis para armazenar o RSSI, o valor de referência `A` e o exponente `n`.
    - O programa define valores padrão para `A` e `n`, que você pode ajustar conforme necessário.
    - Solicita ao usuário que insira o valor do RSSI.
    - Chama a função `rssi_to_distance` para calcular a distância com base no RSSI fornecido.
    - Exibe a distância estimada na tela.

### Exemplo de Uso

- Se você rodar o programa e inserir um valor de RSSI de -50 dBm, com `A` como -40 e `n` como 2, o programa calculará e exibirá a distância estimada com base nesses parâmetros.

### Observações
- Os valores de `A` e `n` podem precisar ser ajustados de acordo com suas condições específicas (ambiente, tipo de sinal, etc.) para obter estimativas mais precisas.
- A precisão da conversão de RSSI para distância pode variar bastante dependendo do cenário real.

Se você tiver alguma dúvida ou quiser mais detalhes, é só avisar!

## Ref

- **"RSSI-Based Localization in Wireless Networks"** - Este artigo explora a utilização do RSSI para localização em redes sem fio e discute as variáveis envolvidas na conversão de RSSI para distância.
- **"A Survey on RSSI-Based Indoor Localization"** - Um estudo sobre métodos de localização interna baseados em RSSI, incluindo fatores que afetam a precisão da medição.

- **"Trigonometry" por I.M. Gelfand e Mark Saul** - Este livro oferece uma introdução acessível à trigonometria e inclui exemplos práticos e aplicações.
- **"Trigonometry for Dummies" por Mary Jane Sterling** - Um guia prático que cobre conceitos fundamentais de trigonometria, incluindo razões trigonométricas e suas aplicações.

- **Khan Academy - Trigonometry**: A Khan Academy oferece uma série de vídeos e exercícios interativos sobre trigonometria, incluindo razões trigonométricas. [Khan Academy Trigonometry](https://pt.khanacademy.org/math/trigonometry)
