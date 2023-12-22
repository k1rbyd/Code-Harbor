public class Q40_p
{
    public static void main(String[] args) 
    {
        String sentence = "Go work";
        reverse(sentence);
    }

    static void reverse(String sentence) 
    {
        if (sentence.isEmpty())
            return;
        
        reverse(sentence.substring(1));
        System.out.print(sentence.charAt(0));
    }
}
