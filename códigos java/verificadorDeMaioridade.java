import java.util.Scanner;

public class verificadorDeMaioridade {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite sua idade: ");
        int idade = scanner.nextInt();

        String resposta = (idade >= 18) ? "Você é maior de idade." : "Você não é maior de idade.";

        System.out.println(resposta);

        scanner.close();
    }
}
