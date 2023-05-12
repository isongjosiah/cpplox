#include "iostream"
#include <chrono>
#include <filesystem>
#include <semaphore>
#include <string>
#include <thread>

int main(int argc, char *argv[]) {
  // check input from command line
  if (argc == 1) {
    // handle REPL mode
    for(;;) {
      
      std::cout << "> ";
      std::string command;
      std::getline(std::cin, command);
      
      if (command.empty()) {
        std::cout << "command is empty\n";
        break;
      }
      
      // do repl here
      std::cout << "command " << command << " not supported right now\n";

    }
    
  } else {

    char *filePath = argv[1];
    if (!std::filesystem::is_regular_file(std::filesystem::status(filePath))) {
      std::cout << "invalid path file path specified: " << filePath <<  "\n";
    }
    
    // handle source file mode
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::cout << "the scanner has handled your file\n";
  }

  std::cout << "Thank you for using cpplox!\n";
  return 0;
}