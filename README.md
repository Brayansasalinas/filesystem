Introduction
This project is a lightweight filesystem designed for embedded systems. It provides basic file management functionalities such as creating, reading, writing, and deleting files. The project is implemented in C++ and adheres to modular design principles, ensuring clarity, modularity, and portability.
Features
•	File Creation: Create new files with a specified name.
•	File Reading: Read the content of existing files.
•	File Writing: Write or append content to existing files.
•	File Deletion: Delete existing files from the filesystem.
•	Modular Design: Classes and functions are separated into individual files for better maintainability.
Project Structure
bash
Copy code
.
├── File.h          # Header file for the File class
├── File.cpp        # Implementation file for the File class
├── FileSystem.h    # Header file for the FileSystem class
├── FileSystem.cpp  # Implementation file for the FileSystem class
├── main.cpp        # Main program demonstrating filesystem operations
├── Makefile        # Makefile for building the projec           
│   test_main.cpp   # Main test runner
│   test_file.cpp   # Tests for the File class
│   test_filesystem.cpp # Tests for the FileSystem class
└── README.md       


Build and Run
Prerequisites
•	C++11 or later
•	GNU Make
•	Catch2 (for testing)
Implementation Details
File Class
•	Attributes: name (file name), content (file content)
•	Methods:
o	getName(): Returns the name of the file.
o	getContent(): Returns the content of the file.
o	setContent(const std::string&): Sets the content of the file.
FileSystem Class
•	Attributes: files (a map of file names to File objects)
•	Methods:
o	createFile(const std::string&): Creates a new file with the specified name.
o	readFile(const std::string&, std::string&): Reads the content of the specified file.
o	writeFile(const std::string&, const std::string&): Writes content to the specified file.
o	deleteFile(const std::string&): Deletes the specified file.
main.cpp
The main program demonstrates the basic operations of the filesystem:
•	Create a file
•	Write content to a file
•	Read content from a file
•	Delete a file
Makefile
The Makefile automates the build process and includes targets for building the project, running tests, and cleaning up build artifacts.
Limitations
•	Single-threaded: Does not support concurrent file operations.
•	No Persistent Storage: Files are stored in memory only during runtime.
•	Basic Error Handling: Limited error handling and no detailed error messages.
Future Improvements
•	Concurrency Support: Implement thread-safe operations and synchronization mechanisms.
•	Persistent Storage: Add support for persisting files to disk.
•	Enhanced Error Handling: Develop a comprehensive error handling strategy with detailed messages and logging.
Conclusion
This project provides a basic yet functional filesystem for embedded systems, focusing on modularity and portability. While it has some limitations, it serves as a foundation for further enhancements and improvements.



