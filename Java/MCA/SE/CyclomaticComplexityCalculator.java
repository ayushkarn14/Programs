import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class CyclomaticComplexityCalculator {

    // Method to count decision points
    private static int countDecisionPoints(String code) {
        // Regular expressions for different decision points
        String[] patterns = {
                "\\bif\\b", // if statements
                "\\belse\\s*if\\b", // else if statements
                "\\bfor\\b", // for loops
                "\\bwhile\\b", // while loops
                "\\bcase\\b", // case in switch statements
                "\\bcatch\\b" // catch blocks in try-catch
        };

        int decisionPoints = 0;

        for (String pattern : patterns) {
            Pattern p = Pattern.compile(pattern);
            Matcher m = p.matcher(code);
            while (m.find()) {
                decisionPoints++;
            }
        }

        return decisionPoints;
    }

    // Method to calculate cyclomatic complexity
    public static int computeCyclomaticComplexity(String code) {
        int decisionPoints = countDecisionPoints(code);
        // Cyclomatic Complexity = D + 1
        return decisionPoints + 1;
    }

    public static void main(String[] args) {
        // Sample code input
        String code = """
                public class Quad {
                    public static void main(String[] args) {
                        int a = 5, b = 4, c = 3;
                        double root1, root2;
                        double discriminant = b * b - 4 * a * c;

                        if (discriminant > 0) {
                            root1 = (-b + Math.sqrt(discriminant)) / (2 * a);
                            root2 = (-b - Math.sqrt(discriminant)) / (2 * a);
                        } else if (discriminant == 0) {
                            root1 = root2 = -b / (2.0 * a);
                        } else {
                            double real = -b / (2.0 * a);
                            double imaginary = Math.sqrt(-discriminant) / (2.0 * a);
                        }
                    }
                }
                """;

        // Calculate cyclomatic complexity
        int complexity = computeCyclomaticComplexity(code);
        System.out.println("Cyclomatic Complexity: " + complexity);
    }
}
