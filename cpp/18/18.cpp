// ##
//  # Created Date: Saturday, August 1st 2020, 7:16:48 pm
//  # Author: Chirag Sachdev
//  # LinkedIn: https://www.linkedin.com/in/chiragsachdev/
//  # Github: https://github.com/chiragsachdev/
//  ##


#include <iostream>
#include <cstdio>
#include <unistd.h>
#include <fcntl.h>
#include <fstream>
#include <sys/stat.h>
using namespace std;

int ft_get_fsize(const char *fname)
{
	int fsize;
	struct stat stats;

	if (stat(fname, &stats) == 0)
		fsize = stats.st_size;
	
	return fsize;
}

void ft_fill_triangle(const char *buff, int lines, int **triangle)
{
	int n;
	int i; 
	int j;

	for (i = 0 ; i < lines; i++)
	{
		for (j = 0; j <= i; j++)
		{
			triangle[i][j] = atoi(buff);
			while(*buff)
			{	
				buff++;
				if (*buff == '\n' || *buff == ' ')
					break;
			}
		}
		if (*buff == '\n')
			buff++;
	}
}

int main()
{
	char *data;
	int **triangle;
	int bufsiz;
	int fd;
	int i;
	int j;
	int lines;
	const char *fname = "./cpp/18/triangle.txt";
	ifstream infile;

	bufsiz = ft_get_fsize(fname) + 1;
	data = (char *)(malloc(sizeof(char) * bufsiz));

	fd = open(fname, O_RDONLY);
	read(fd, data, bufsiz);
	close(fd);

	lines = 1;
	while(++i < bufsiz)
	{
		if (data[i] == '\n')
			lines++;
	}
	triangle = (int **)malloc(sizeof(int *) * lines);

	for (i = 0; i < lines; i++)
		triangle[i] = (int *)malloc(sizeof(int) * (i+1));

	ft_fill_triangle(data, lines, triangle);

	for (i = lines - 2 ; i >= 0; i--)
	{
		for (j = 0; j <= i + 1; j++)
			triangle[i][j] += ((triangle[i + 1][j] > triangle[i + 1][j + 1]) ? triangle[i + 1][j] : triangle[i + 1][j + 1]);
	}

	cout << triangle[0][0] << endl;

	return (0);
}