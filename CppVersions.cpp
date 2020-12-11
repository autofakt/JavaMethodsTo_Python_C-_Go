
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

void
printString (string input)
{
  cout << input;
}

int *
intRandom1DArray (int size)
{
  int *array = new int[size];
  srand ((unsigned) time (NULL));
  for (int i = 0; i < size; i++)
    {
      array[i] = rand () % 100 + 1;	//1-100
    }
  return array;
}


int **
intRand2DArray (unsigned height, unsigned width)
{
  srand (time (NULL));
  int **array2D = 0;
  array2D = new int *[height];

  for (int h = 0; h < height; h++)
    {
      array2D[h] = new int[width];

      for (int w = 0; w < width; w++)
	{
	  int temp = rand () % 2;
	  if (temp == 0)
	    array2D[h][w] = rand ();
	  else
	    array2D[h][w] = (rand () * -1) - 1;
	}
    }

  return array2D;
}

string
int2DArrayToString (int **array2D, int row, int col)
{
  string temp = "";
  for (int h = 0; h < row; h++)
    {
      for (int w = 0; w < col; w++)
	{
	  temp = temp + to_string (array2D[h][w]) + " ";
	}
      temp = temp + "\n";
    }
  return temp;
}


string
promptForInput (string msg)
{
  string temp;
  cin >> temp;
  cout << msg << endl;
  return temp;
}


int *
orderedArray (int size)
{
  int arr[size];
  for (int i = 0; i < size; i++)
    {
      arr[i] = i;
    }
  return arr;
}

int **
make2dArray10 (unsigned height, unsigned width)
{
  int **array2D = 0;
  array2D = new int *[height];

  for (int h = 0; h < height; h++)
    {
      array2D[h] = new int[width];

      for (int w = 0; w < width; w++)
	{
	  array2D[h][w] = h * 10 + w;
	}
    }

  return array2D;
}

int
sumArray (int array[], int size)
{
  int result = 0;
  for (int i = 0; i < size; i++)
    {
      result += array[i];
    }
  return result;
}

int
averageArray (int array[], int size)
{
  int result = 0;
  for (int i = 0; i < size; i++)
    {
      result += array[i];
    }
  return result / size;
}

int
int2DArrayToSum (int **array2D, int row, int col)
{
  int sum = 0;
  for (int h = 0; h < row; h++)
    {
      for (int w = 0; w < col; w++)
	{
	  sum = sum + array2D[h][w];
	}
    }
  return sum;
}


int
main ()
{
 

  return 0;
}
