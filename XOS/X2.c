#include <stdio.h>


char grid[3][3];
char pos;
int win = 0;
int i;
int turn = 1;
int y = 0;
char input;

int main(void)
{
	grid[0][0] = '1';
	grid[0][1] = '4';
	grid[0][2] = '7';
	grid[1][0] = '2';
	grid[1][1] = '5';
	grid[1][2] = '8';
	grid[2][0] = '3';
	grid[2][1] = '6';
	grid[2][2] = '9';
	
	

	printf("\n   |   |  \n %c | %c | %c \n___________\n   |   |  \n %c | %c | %c \n___________\n   |   |   \n %c | %c | %c \n", grid[0][0], grid[1][0], grid[2][0], grid[0][1], grid[1][1], grid[2][1], grid[0][2], grid[1][2], grid[2][2]);
	
	
	
	int i=0;
	while(y != 1)
	{
		
		printf("\nenter Player input:\n\n");
		scanf(" %c", &pos);
		
		if((i%2) == 1)
		{
			input = 'O';
		}
		else
		{
			input = 'X';
		}	

			
	if(grid[0][0] == pos && grid[0][0] == '1')
	{
		grid[0][0] = input;
	}
	else if(grid[1][0] == pos && grid[1][0] == '2')
	{
		grid[1][0] = input;
	}
	else if(grid[2][0] == pos && grid[2][0] == '3')
	{
		grid[2][0] = input;
	}
	else if(grid[0][1] == pos && grid[0][1] == '4')
	{
		grid[0][1] = input;
	}
	else if(grid[1][1] == pos && grid[1][1] == '5')
	{
		grid[1][1] = input;
	}
	else if(grid[2][1] == pos && grid[2][1] == '6')
	{
		grid[2][1] = input;
	}
	else if(grid[0][2] == pos && grid[0][2] == '7')
	{
		grid[0][2] = input;
	}
	else if(grid[1][2] == pos && grid[1][2] == '8')
	{
		grid[1][2] = input;
	}
	else if(grid[2][2] == pos && grid[2][2] == '9')
	{
		grid[2][2] = input;
	}
	
	printf("   |   |  \n %c | %c | %c \n___________\n   |   |  \n %c | %c | %c \n___________\n   |   |   \n %c | %c | %c \n", grid[0][0], grid[1][0], grid[2][0], grid[0][1], grid[1][1], grid[2][1], grid[0][2], grid[1][2], grid[2][2]);
	
	
	//horizontal win conditions
	if(grid[0][0] == grid[1][0] && grid[0][0] == grid[2][0])
	{
		printf("%c wins!", grid[0][0]);
		return 0;
	}
	
	if(grid[0][1] == grid[1][1] && grid[0][1] == grid[2][1])
	{
		printf("%c wins!", grid[0][1]);
		return 0;
	}
	
	if(grid[0][2] == grid[1][2] && grid[0][2] == grid[2][2])
	{
		printf("%c wins!", grid[0][2]);
		return 0;
	}
	
	//Vertical win conditions
	
	if(grid[0][0] == grid[0][1] && grid[0][0] == grid[0][2])
	{
		printf("%c wins!", grid[0][0]);
		return 0;
	}
	
		if(grid[1][0] == grid[1][1] && grid[1][0] == grid[1][2])
	{
		printf("%c wins!", grid[1][0]);
		return 0;
	}
	
		if(grid[2][0] == grid[2][1] && grid[2][0] == grid[2][2])
	{
		printf("%c wins!", grid[2][0]);
		return 0;
	}

	//Diagonal win conditions
	
		if(grid[0][0] == grid[1][1] && grid[0][0] == grid[2][2])
	{
		printf("%c wins!", grid[0][0]);
		return 0;
	}
	
		if(grid[2][0] == grid[1][1] && grid[2][0] == grid[0][2])
	{
		printf("%c wins!", grid[2][0]);
		return 0;
	}
	
	
	
	
	
	i++;
	}	
	
	printf("No more spaces left to fill!\n\nGame Over\n");
	
	
	return 0;
}