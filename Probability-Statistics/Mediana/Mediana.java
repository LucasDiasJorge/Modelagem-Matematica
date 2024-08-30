import java.util.Arrays;

public class Mediana {

    // Método para calcular a mediana de um array de inteiros
    public static double calcularMediana(int[] numeros) {
        Arrays.sort(numeros); // Ordena o array

        int n = numeros.length;
        if (n % 2 == 1) {
            // Se o número de elementos for ímpar, retorna o elemento do meio
            return numeros[n / 2];
        } else {
            // Se o número de elementos for par, retorna a média dos dois elementos do meio
            int meio1 = numeros[(n / 2) - 1];
            int meio2 = numeros[n / 2];
            return (meio1 + meio2) / 2.0;
        }
    }

    public static void main(String[] args) {
        int[] numeros1 = {1, 3, 3, 6, 7, 8, 9};
        int[] numeros2 = {1, 2, 3, 4, 5, 6, 8, 9};

        System.out.println("A mediana do array 1 é: " + calcularMediana(numeros1)); // Output: 6.0
        System.out.println("A mediana do array 2 é: " + calcularMediana(numeros2)); // Output: 4.5
    }
}
