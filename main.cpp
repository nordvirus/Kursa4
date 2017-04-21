#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;

const int ROWS = 3;
const int COLUMNS = 6;
int matrix[ROWS][COLUMNS];

void input_data()
{
    cout << "input_data" << endl;

    const int MAX_VALUE = 10;

    /* initialize random seed: */
    srand (time(NULL));

    for (int r = 0; r < ROWS; ++r)
    {
        for (int c = 0; c < COLUMNS; ++c)
        {
            /* generate number between 1 and MAX_VALUE: */
            matrix[r][c] = rand() % MAX_VALUE + 1;
            cout << matrix[r][c] << "\t";
        }
        cout << endl;
    }
    cout << endl;

}

void process_data()
{
    cout << "process_data" << endl;
    // TODO: implement
}

void output_data()
{
    cout << "output_data" << endl;
    // TODO: implement
}

int main()
{
    // 1.input data
    input_data();

    // 2.process data
    process_data();

    // 3.output data
    output_data();


    return 0;
}
