import java.util.Scanner;

public class calculadoraSimples {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("<Calculadora Simples>");

        System.out.print("Digite o primeiro número: ");
        double numero1 = scanner.nextDouble();

        System.out.print("Digite o segundo número: ");
        double numero2 = scanner.nextDouble();

        double soma = numero1 + numero2;
        double subtracao = numero1 - numero2;
        double multiplicacao = numero1 * numero2;

        System.out.println("Resultados:");
        System.out.println("Adição: " + soma);
        System.out.println("Subtração: " + subtracao);
        System.out.println("Multiplicação: " + multiplicacao);

        if (numero2 != 0) {
            double divisao = numero1 / numero2;
            System.out.println("Divisão: " + divisao);
        } else {
            System.out.println("Divisão por zero não é possível.");
        }

        scanner.close();
    }
}
