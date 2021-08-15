import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int[] n = new int[10]; /* 定义一个数组，用于输出 0~9 之间的数字 */
        Scanner scanner = new Scanner(System.in);

        /* 输入 */
        for (int i = 0; i < n.length; i++) {
            n[i] = scanner.nextInt();
        }

        /* 输出数组中第一个非零数字的下标 */
        for (int i = 1; i < n.length; i++) {
            if (n[i] > 0) {
                System.out.print(i);
                n[i]--; /* 该位置对应的元素 -1 */
                break;
            }
        }

        for (int i = 0; i < n.length; i++) { /* 外层循环用于遍历数组 */
            for (int j = 0; j < n[i]; j++) { /* 内层循环用于依次输出数组元素对应的下标 */
                System.out.print(i);
            }
        }
    }
}
