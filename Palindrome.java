public class Palindrome {

    public static boolean isPalindrome(String str) {
        if (str.length() == 0 || str.length() == 1) {
            return true;
        }

        if (str.charAt(0) != str.charAt(str.length() - 1)) {
            return false;
        }

        return isPalindrome(str.substring(1, str.length() - 1));
    }

    public static void main(String[] args) {
        String a = "aabbaa";
        String b = "ab";

        if (isPalindrome(a)) {
            System.out.println(a + " is a palindrome.");
        } else {
            System.out.println(a + " is not a palindrome.");
        }

        if (isPalindrome(b)) {
            System.out.println(b + " is a palindrome.");
        } else {
            System.out.println(b + " is not a palindrome.");
        }
    }
}
