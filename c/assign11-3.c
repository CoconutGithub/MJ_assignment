#include<stdio.h>
#include<stdlib.h>

void init_board(char b[][3])
{
	int i, j;
	for(i=0;i<3;i++)
	{
		for(j = 0;j < 3; j++)
		{
			b[i][j] = ' ';
		}
	}
}
void draw_board(char b[][3])
{
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("|---|---|---|\n");
		printf("| %c | %c | %c |\n",b[i][0], b[i][1], b[i][2]);
	}
	printf("|---|---|---|\n\n");
}
void welcome_message()
{
	printf("Welcome to my tic-tac-toe game.\n");
	printf("The coordinates are,\n");
	printf("|---|---|---|\n");
	printf("|0 0|0 1|0 2|\n");
	printf("|---|---|---|\n");
	printf("|1 0|1 1|1 2|\n");
	printf("|---|---|---|\n");
	printf("|2 0|2 1|2 2|\n");
	printf("|---|---|---|\n\n");
}
int who_first()
{
	char ch;
	printf("play first? (Y/N)\n");
	scanf("%c", &ch);
	if (ch == 'y' || ch == 'Y')
		return 1;
	else
		return 0;
}
void human_move(char b[][3])
{
	int i, j;
	printf("It's your turn.\n");
	printf("Enter coordinates. For instance, 1 0\n");
	scanf("%d%d", &i, &j);
	if (i < 0 || i>2 || j < 0 || j>2)
	{
		printf("Invalid coordinates exits the program.\n");
		exit(1);
	}
	b[i][j] = '0';
	printf("You moved as follows.\n");
}
void computer_move(char b[][3])
{
	int i, j;
	printf("Computer moved as follows.\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (b[i][j] == ' ')
			{
				b[i][j] = 'X';
				return;
			}
		}
	}
}
int check(char b[][3], char ch)
{
	int i, j, matched = 0, count = 0;

	for (i = 0; i < 3; i++)
	{
		if (b[i][0] == ch && b[i][1] == ch && b[i][2] == ch)
			matched = 1;
	}
	for (j = 0; j < 3; j++)
	{
		if (b[0][j] == ch && b[1][j] == ch && b[2][j] == ch)
			matched = 1;
	}
	if (b[1][1] == ch)
	{
		if ((b[0][0] == ch && b[2][2] == ch) || (b[0][2] == ch && b[2][0] == ch))
			matched = 1;
	}
	if (matched)
	{
		if (ch == 'X')
			return 0;
		else
			return 1;
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) 
		{
			if (b[i][j] == ' ')
				count++;
		}
	}
	if (count == 0)
		return 2;
	return 3;
}
int main()
{
	int turn, game_over = 0, state;
	char board[3][3];

	welcome_message();

	init_board(board);

	turn = who_first();

	while (!game_over)
	{
		if (turn == 1)
		{
			human_move(board);
			state = check(board, '0');
		}
		else
		{
			computer_move(board);
			state = check(board, '0');
		}
		draw_board(board);

		if (state == 0)
		{
			printf("Computer won.\n\n");
			game_over = 1;
		}
		else if (state == 1)
		{
			printf("You won.\n\n");
			game_over = 1;
		}
		else if(state==2)
		{
			printf("It's a draw.\n\n");
			game_over = 1;
		}
		turn = (turn + 1) % 2;
	}
	return 0;

}