
public class Main {

  public static String reverse(String s) {
    StringBuilder sb = new StringBuilder();
    for (int i = s.length() - 1; i >= 0; i--) {
      sb.append(s.charAt(i));
    }
    return sb.toString();
  }

  public static boolean isPalindrome(String s) {
    if (s.equals(reverse(s))) {
      return true;
    }
    return false;
  }

  public static boolean isPalindrome(int i) {
    return isPalindrome("" + i);
  }

  public static void main(String[] args) {

    int largest = 0;
    for (int i1 = 100; i1 < 999; i1++) {
      for (int i2 = 100; i2 < 999; i2++) {
        if (isPalindrome(i1*i2) && i1*i2 > largest) {
          largest = i1*i2;
        }
      }
    }

    System.out.println(largest);

  }

}
