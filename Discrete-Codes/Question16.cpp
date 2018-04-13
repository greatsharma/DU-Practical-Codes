#include <iostream>
using namespace std;

int main()
{
    int no_of_vertices, i, j, sum = 0;

    cout << "Enter no of vertices:";
    cin >> no_of_vertices;

    char *vertices = new char[no_of_vertices];
    cout << "Enter vertices of the graph:";
    for (i = 0; i < no_of_vertices; i++)
        cin >> vertices[i];

    int **matrix = new int *[no_of_vertices];
    for (i = 0; i < no_of_vertices; i++)
        matrix[i] = new int[no_of_vertices];

    cout << "Enter the adjacency matrix:\n\n";
    for (i = 0; i < no_of_vertices; i++)
    {
        cout << "Enter row " << (i + 1) << " :";
        for (j = 0; j < no_of_vertices; j++)
            cin >> matrix[i][j];
    }
    cout << "Adjacency matrix for the given graph is:\n\n";

    for (i = 0; i < no_of_vertices; i++)
        cout << "  " << vertices[i];
    cout << "\n";

    for (i = 0; i < no_of_vertices; i++)
    {
        cout << " " << vertices[i];
        for (j = 0; j < no_of_vertices; j++)
            cout << matrix[i][j] << "  ";
        cout << endl;
    }

    for (i = 0; i < no_of_vertices; i++)
    {
        sum = 0;
        for (j = 0; j < no_of_vertices; j++)
        {
            sum += matrix[i][j];
        }
        if (sum != (no_of_vertices - 1) || matrix[i][i] != 0)
        {
            cout << "\n\nNot a complete graph";
            return 0;
        }
    }

    cout << "\n\nComplete graph";

    return 0;
}