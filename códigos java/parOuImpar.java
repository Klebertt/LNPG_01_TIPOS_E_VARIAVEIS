import java.util.Scanner;

public class parOuImpar {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número: ");
        int num = scanner.nextInt();

        String resultado = (num % 2 == 0) ? "Par" : "Ímpar";

        System.out.println("O número é: " + resultado);

        scanner.close();
    }
}
