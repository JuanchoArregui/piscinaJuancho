#include<stdio.h>
#include<unistd.h>

unsigned int map_key[6] = {26, 9, '.', 'o', 'X', 0};

char map[10][26] = 
{
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 'o', '.', '.', '.', '.', '.'},
	{'.', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 'o', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 'o', '.', '.', '.', '.', '.', '.', '.', 'o', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 'o', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 'o'}
};

/* 	void fn_map_solve(unsigned int map_key[6], char **map)
	{


	} */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	fn_map_print(unsigned int map_key[6], char map[][])
{
	unsigned int	row;
	unsigned int	col;

	row = 0;
	while (row < map_key[1])
	{
		col = 0;
		while ( col < map_key[0])
		{
			ft_putchar(map[row][col]);
			if (col == map_key[0])
				ft_putchar('\n');
			col++;
		}
	row++;
	}
}

int main(void)
{
	fn_map_print(map_key, map);
	return (0);
}