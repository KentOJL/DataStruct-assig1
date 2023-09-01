#include	<iostream>
#include	<fstream>
#include	<cstdlib>
#include	<cstdio>
#include	<ctime>
#include	"BST.h"
#include    "Student.h"

using namespace std;
bool readFile(const char *, BST *);

int menu();

int main() {

	
	system("pause");
	return 0;
}

bool BST::printLevelNodes() {
    if (empty()) {
        cout << "The tree is empty." << endl;
        return false;
    }

    BTNode* cur;
    Queue q;
    int level = 1; // Initialize the level

    q.enqueue(root); // Enqueue the root node

    while (!q.empty()) {
        int nodesInLevel = q.size(); // Get the number of nodes at the current level

        cout << "Level " << level << " nodes: ";

        for (int i = 0; i < nodesInLevel; ++i) {
            q.dequeue(cur);

            if (cur != NULL) {
                cout << cur->item.id << " "; // Print the student ID (adjust this according to your Student class)

                if (cur->left != NULL)
                    q.enqueue(cur->left);

                if (cur->right != NULL)
                    q.enqueue(cur->right);
            }
        }

        cout << endl;
        level++; // Move to the next level
    }

    return true;
}


bool readFile(const char*, BST*)
{
	return false;
}

int menu()
{
	return 0;
}
