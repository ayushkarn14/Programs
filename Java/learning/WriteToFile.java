import java.io.*;
import java.nio.CharBuffer;
import java.util.Scanner;

public class WriteToFile {

  String path;
  boolean append_to_file = false;
  int stringBufferLength;
  StringBuilder stringBuffRead = new StringBuilder();

  public WriteToFile(String file_path) {
    path = file_path;
  }

  public WriteToFile(String file_path, boolean append_value) {
    path = file_path;
    append_to_file = append_value;
  }

  public WriteToFile() throws IOException {}

  public void write(String textLine) throws IOException {
    FileWriter writer = new FileWriter(path, append_to_file);
    PrintWriter print_line = new PrintWriter(writer);
  }
}
