import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.atomic.LongAdder;

public class Test {
    public static void main(String[] args) {
        String str = "ABCD ABCD ABCD";

        Map<Character, LongAdder> occurrences = new HashMap<>();

        for (char character : str.toCharArray()) {
            occurrences.computeIfAbsent(character, ch -> new LongAdder()).increment();
        }

        System.out.println(occurrences);
    }
}
