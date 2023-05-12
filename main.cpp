#include "iostream"
#include <semaphore>
#include <string>

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
    
    // handle source file mode
  }

  std::cout << "Thank you for using cpplox!\n";
  return 0;
}