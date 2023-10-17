# include <iostream> 
# define bool int 

using namespace std;
// not all compilers yet support booleans

class Queen {
public:
    Queen(int, Queen*); //constructor 
    bool findSolutions();
    bool advance();
    void print();

private:
    int row;             //data field
    const int column;    //immutable value
    Queen* front;

    bool canAttack(int, int); //internal method

};

Queen::Queen(int col, Queen* ngh) : column(col), front(ngh)
{
    row = 1;
}

void Queen::print()
{
    if (front)
        front->print();

    cout << "-------------------------" << '\n';
    cout << "|";
    for (int i = 1; i <= 8; i++)
    {
        if (i == row)
        {
            cout << " *|";
        }
        else
            cout << "  |";
    }
    cout << '\n';
    if (column == 8)
        cout << "-------------------------" << '\n';
}

bool Queen::canAttack(int testRow, int testColumn)
{
    if (row == testRow)
    {
        return true;
    }

    if (column == testColumn)
    {
        return true;
    }

    int columnDifference = testColumn - column;

    if ((row == testRow - columnDifference) || (row == testRow + columnDifference))
    {
        return true;
    }


    return front && front->canAttack(testRow, testColumn);
}

bool Queen::findSolutions()
{
    while (true)
    {
        if (front && front->canAttack(row, column))
        {
            if (!advance())
                return false;
        }
        else
        {
            if (column == 8)   //8번째 줄의 퀸까지 성공적으로 놓을 수 있다면 해답
            {
                static int count = 0;
                count++;
                cout << "\n" << count << "번째 해답\n";
                print();
                return true;
            }
            Queen* back;
            back = new Queen(column + 1, this);
            back->findSolutions();

            delete back;
            back = 0;
            if (!advance())
                return false;
        }
    }
}

bool Queen::advance()
{
    if (row < 8)
    {
        row++;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Queen* lastQueen = 0;
    lastQueen = new Queen(1, lastQueen);
    lastQueen->findSolutions();
    delete lastQueen;
    return 0;
}