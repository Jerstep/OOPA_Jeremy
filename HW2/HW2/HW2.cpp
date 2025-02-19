#include<iostream>
#include<cstdlib>

#include <windows.h>

#include <chrono>
#include <thread>

using namespace std;
const int r = 25, c = 25;

void display(char size_2[][25]);
void display2(char size_2[][25]);
void neighbors(char size_2[][25], char size_2hold[][25]);
void neighbors2(char size_2[][25], char size_2hold[][25]);

int main()
{

	char a = 's', size_2[r][c], size_2hold[r][c];

	cout << "-=This is the Game of Life Program=-" << endl;
	cout << "If you want to generate enter any key and press enter." << endl;
	cout << "If you would like to quiz press 'n'" << endl;
	srand(time_t(1));

	while (a != 'n')
	{
		neighbors(size_2, size_2hold);
		neighbors2(size_2, size_2hold);
		display(size_2);
		display2(size_2);
		void clear_screen();
		std::this_thread::sleep_for(std::chrono::seconds{ 1 });
		//cin >> a;
	}
	return 0;
}

void neighbors(char size_2[][25], char size_2hold[][25])
{
	for (int x = 0; x < r; x++)
	{
		for (int y = 0; y < c; y++)
		{
			int a = 0;
			{
				if (size_2[x][y - 1] == '_*_')
					a++;
				else
					if (size_2[x - 1][y - 1] == '_*_')
						a++;
					else
						if (size_2[x - 1][y] == '_*_')
							a++;
						else
							if (size_2[x - 1][y + 1] == '_*_')
								a++;
							else
								if (size_2[x][y + 1] == '_*_')
									a++;
								else
									if (size_2[x + 1][y + 1] == '_*_')
										a++;
									else
										if (size_2[x + 1][y] == '_*_')
											a++;
										else
											if (size_2[x + 1][y - 1] == '_*_')
												a++;
				if (a == 3)
				{
					size_2hold[x][y] = '_*_';
				}
				else
				{
					size_2hold[x][y] = '_0_';
				}
			}
		}
	}
	cout << endl;
}


void neighbors2(char size_2[][25], char size_2hold[][25])
{
	for (int x = 0; x < r; x++)
	{
		for (int y = 0; y < c; y++)
		{
			size_2[x][y] = size_2hold[x][y];
		}

	}
	cout << endl;
}




void display(char size_2[][25])
{
	for (int x = 0; x < r; x++)
	{
		for (int y = 0; y < c; y++)
		{
			if (size_2[x][y] != '_*_')
			{
				size_2[rand() % 25][rand() % 25] = '_*_';
				size_2[x][y] = '_0_';
			}
		}
	}
}

void display2(char size_2[][25])
{
	for (int x = 0; x < r; x++)
	{
		for (int y = 0; y < c; y++)
		{
			cout << size_2[x][y];
		}
		cout << endl;
	}
}