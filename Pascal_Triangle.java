import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Pascal_Triangle {
    public List<List<Integer>> cal(int n) {
        List<List<Integer>> output = new ArrayList<List<Integer>>();
        List<Integer> row;
        List<Integer> prevRow;
        for (int i = 0; i < n; i++) {
            row = new ArrayList<Integer>();
            for (int j = 0; j <= i; j++) {
                if (j == 0 || i == j)
                    row.add(1);
                else if (i > 1) {
                    prevRow = output.get(i - 1);
                    row.add(prevRow.get(j - 1) + prevRow.get(j));
                }
            }
            output.add(row);
        }

        return output;
    }

    public static void main(String[] args) {
        int n = 0;

        System.out.print("Moi ban nhap n = ");
        try {
            Scanner sc = new Scanner(System.in);
            n = sc.nextInt();
            sc.close();

        } catch (Exception e) {

        }

        Pascal_Triangle instance = new Pascal_Triangle();

        List<List<Integer>> out = instance.cal(n);

        for (int i = 0; i < n; i++) {
            System.out.print(String.format("%1$" + (n - i) + "s", " "));
            for (int j = 0; j <= i; j++) {
                System.out.print(out.get(i).get(j) + " ");
            }
            System.out.println();
        }
    }

}