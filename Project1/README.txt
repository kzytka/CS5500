Group members:
Kiley Zytka
Mahsa Rahimian
Jennifer Aparicio Shifferaw

Implementation of Linked Lists
In this project, linked list data structure written in C is implemented. An item is a character string (item) in a linked list, which is a dynamic data structure made up of nodes that each hold a pointer to the next node (next). Using a header file (list.h) for declarations, a source file (list.c) for function implementations, and a test file (list_test.c) for demonstration, the implementation adheres to best practices.
Running Tests
Use the following instructions to compile and launch the sample program that is provided:
a. Make a repository clone:

git clone https://github.com/kzytka/CS5500.git
cd CS5500/Project1

b. Build the code:

make 

Make sure your system has a C compiler installed, such as gcc. Run the following command to get the source code compiled.
c. Launch the provided application.
./list_test
Run the program to verify the linked list implementation once compilation is successful.
Documentations
a. list.h: The structures and function prototypes required for the linked list implementation are declared in this header file. It specifies a List structure to control the list and a Node structure for every entry in the list.
	•	Structures: 'Node' - every element in the linked list is represented by a node. It has a pointer to the following node (next) and a character string (item). 'List' - retains a pointer to the head node and maintains the linked list.
	•	Functions: 'create_list()' - makes room for a new list and sets its start value to 'NULL'. 'add_to_list(list ll, char item)*' - copy the string from item to the new node, assigns it, then appends it to the end of the list. 'remove_from_list(list *ll)' - extracts the string contained in the list's head, removes the head, and gives back a pointer to the string. 'print_list(list *ll)' - prints a newline character at the end of each string in each list node. 'flush_list(list *ll)' - releases the memory allotted for nodes, clears the entire list, and re-initializes it. 'free_list(list **ll)' - Deallocates the list's entire contents, including its strings and list.
b. list.c: The actual implementations of the functions declared in list.h are contained in the source file. These routines manage linked list creation, modification, and deletion.
	•	Dynamic Memory Management: - The 'create_list' function sets the head to 'NULL' to guarantee correct initialization while dynamically allocating memory for a new list. Malloc is used to manage memory allocation. 'The add_to_list' function creates memory for a new node, uses 'strdup' to copy the supplied string, and then appropriately adds the node, in accordance with its specifications, into the list.
	•	String Duplication: - Makes use of 'strdup' to duplicate strings while creating nodes.
	•	List Manipulation: - Uses a variety of operations (such as addition, deletion, and printing) to modify linked lists in accordance with the given specifications.
	•	Unique Features: - Explains special functions such as 'flush_list', which resets the entire list to its starting state. Describes 'free_list', which is in charge of finding all of the data connected to the list.
By using this method, we explore the specific implementation intricacies presented in the list.c file, while still acknowledging the thorough explanations offered in list.h.
c. list_test.c: This is the test program that shows how your linked list implementation works. To guarantee that the functions implemented are proper, contains a variety of test cases. - Test Cases: - To test add_to_list, a fresh list is created and strings of progressively longer lengths are added. Prints the list to confirm that the nodes were added correctly. To test remove_from_list, remove the list's head. To verify the nodes have been cleared, flush the list and print it. Lists the strings once more and prints it. Releases the list for the free_list test and guarantees appropriate deallocation.
Each file in the linked list implementation's purpose and functionality are highlighted in these descriptions.

Struggles
While completing this project, we ran into a few issues. One of them being that originally we included the list.c file in the list_test.c file. This resulted in issues when the Makefile was run. We also had issues with the Makefile as we put spaces and not an indent. Finally, when Kiley ran it on her system, she noticed that she had many warnings from the stdlib.h header file that was on her machine, this indicated that her file was corrupted but it did end up compiling on the VM that our group had set up.

Contributing Guidelines
We appreciate your interest in our project!

Ways to Contribute
	1	Reporting Issues:
	◦	If you experience any unexpected behavior, errors, or glitches, kindly open an issue with thorough details about the issue.
	2	Feature Requests:
	◦	Please feel free to open an issue to discuss and offer your ideas for new features or enhancements.
	3	Pull Requests:
	◦	Contributions are always welcome! Kindly fork the repository, make a new branch, and submit a pull request with a detailed description of your changes if you would want to add or modify the codebase directly.
Code of Conduct
You acknowledge that by taking part in this project, you will adhere to the following code of conduct:
	1	Be Respectful: Show kindness and respect to others. Be receptive to diverse viewpoints and life experiences.
	2	Inclusive Environment: Establish a space where everyone is welcomed and feels included.
	3	Collaboration: Aim for cooperation and useful contributions. While disagreements are normal, they should be voiced in a positive way.
Please report any behavior that you see that goes against this code of conduct by getting in touch with a project maintainer.
Getting Started
Please read the README before contributing for instructions on how to run the example program and configure the linked list implementation.
Contact
If you require clarification on anything, please contact us:
	•	Kiley Zytka
	•	Mahsa Rahimian
	•	JenniferAparicio
