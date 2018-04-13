#include <iostream>
using namespace std;

int main()
{
    int i, j, no_of_vertices, in_degree = 0, out_degree = 0;

    cout << "Enter the number of vertices:";
    cin >> no_of_vertices;

    char *vertices = new char[no_of_vertices];
    cout << "Enter the vertices:";
    for (i = 0; i < no_of_vertices; i++)
        cin >> vertices[i];

    int **matrix = new int *[no_of_vertices];
    for (i = 0; i < no_of_vertices; i++)
    {
        matrix[i] = new int[no_of_vertices];
    }

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
        in_degree = 0;
        out_degree = 0;
        for (j = 0; j < no_of_vertices; j++)
        {
            in_degree += matrix[i][j];
            out_degree += matrix[j][i];
        }

        cout << "\nOut degree of vertex " << vertices[i] << " is " << in_degree;
        cout << "\nIn degree of vertex " << vertices[i] << " is " << out_degree;

        cout << "\n\n";
    }

    return 0;
}