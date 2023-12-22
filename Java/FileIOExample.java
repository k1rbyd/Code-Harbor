import java.io.*;
import java.util.HashMap;
import java.util.Map;

public class FileIOExample {
    public static void main(String[] args) {
        // Define the input and output file names
        String inputFileName = "input.txt";
        String outputFileName = "output.txt";

        try {
            // Create a buffer to read and write data in character mode
            BufferedReader reader = new BufferedReader(new FileReader(inputFileName));
            BufferedWriter writer = new BufferedWriter(new FileWriter(outputFileName));

            int charRead;
            while ((charRead = reader.read()) != -1) {
                // Write character to the output file
                writer.write((char) charRead);
            }

            // Close input and output files
            reader.close();
            writer.close();

            // Convert a Stack Trace into a String and write it into the file
            String stackTrace = "Your stack trace goes here";
            BufferedWriter stackTraceWriter = new BufferedWriter(new FileWriter(outputFileName, true));
            stackTraceWriter.write(stackTrace);
            stackTraceWriter.close();

            // Find the Frequency of every Character in the file
            FileReader fileReader = new FileReader(outputFileName);

            int data;
            Map<Character, Integer> charFrequency = new HashMap<>();

            while ((data = fileReader.read()) != -1) {
                char character = (char) data;
                charFrequency.put(character, charFrequency.getOrDefault(character, 0) + 1);
            }

            fileReader.close();

            // Print character frequencies
            for (Map.Entry<Character, Integer> entry : charFrequency.entrySet()) {
                System.out.println("Character: " + entry.getKey() + ", Frequency: " + entry.getValue());
            }

        } catch (FileNotFoundException e) {
            System.err.println("File not found: " + e.getMessage());
        } catch (IOException e) {
            System.err.println("An error occurred during file I/O operations: " + e.getMessage());
        } catch (Exception e) {
            System.err.println("An unexpected error occurred: " + e.getMessage());
        }
    }
}
