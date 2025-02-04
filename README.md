# Projeto de Interrupções e Controle de LEDs com a Raspberry Pi Pico W 2040

O projeto foi desenvolvido no contexto da **Unidade 4 do Capítulo 4 do EmbarcaTech (TIC37)**, Programa de Residência Tecnológica.

## Descrição

Este projeto utiliza a **Raspberry Pi Pico W 2040** para demonstrar o uso de intervalos de tempo e mudança de estado de LEDs. Ele é composto por três leds (vermelho, amarelo, verde), que simulam um semáforo, onde seus leds são percorridos entre vermelho, amarelo e verde a cada 3 segundos.

### Funcionalidades

- **Ascender os respectivos leds no intervalo de 3 segundos**
   - **Led Vermelho**
   - **Led Amarelo**
   - **Led Verde**

### Objetivos do Projeto

- Compreender e implementar intervalos com o uso da função repeating_timer_callback.

---

## Como Clonar e Testar o Código

### Pré-Requisitos

- **Raspberry Pi Pico W 2040** (ou equivalente)
- **VSCode** com extensões para desenvolvimento com a Raspberry Pi Pico
  - **C/C++ Extension** (para suporte a C e C++)
  - **Pico SDK** configurados
- **Wokwi** (opcional para simulação online do código)

### Dependências

1. **Pico SDK**: Para compilar o código C para a Raspberry Pi Pico W2040.
2. **Bibliotecas de Hardware**:
   - `pico/stdlib.h`: Para funções padrão.

### Passo a Passo para Clonar e Rodar o Código

1. **Clonar o Repositório**:
   Abra o terminal e clone o repositório com o seguinte comando:

   ```bash
   git clone https://github.com/IkaroJS/Tarefa_semaforo.git
   cd Tarefa_semaforo

2. **Compilar e Rodar o Código**:
   - Abra o arquivo `Tarefa_semaforo.c` no VSCode.
   - Configure o ambiente de desenvolvimento para a Raspberry Pi Pico W usando o Pico SDK.
   - Compile o código C para a Raspberry Pi Pico W.
   - Execute o código C no Pico W.
   - O código será compilado e enviado para o Pico W.

### Autor

- **Ikaro Jesus da Silva**