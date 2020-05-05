#include <iostream>
#include <vector>
using namespace std;
const int H = 10, W = 10;

class Point
{
public:
    int X;
    int Y;
    char Char;

    Point(int x, int y, char character)
    {
        X = x;
        Y = y;
        Char = character;
    }
};

class Canvas
{
    char Matrix[H][W];
    char Background;
    bool Spacing;

public:
    Canvas(char background, bool spacing = false)
    {
        Background = background;
        Spacing = spacing;
        Clear();
    }

    void Clear()
    {
        for (int i = 0; i < H; i++)
            for (int j = 0; j < W; j++)
                Matrix[i][j] = Background;
    }

    void Draw()
    {
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                cout << Matrix[i][j];
                if (Spacing)
                    cout << " ";
            }
            cout << endl;
        }
    }

    void AddPoints(vector<Point> points)
    {
        for (int i = 0; i < points.size(); i++)
            Matrix[points[i].X][points[i].Y] = points[i].Char;
    }
};

int main()
{
    Canvas minesweeperCanvas((char)254u, true);

    minesweeperCanvas.AddPoints(vector<Point>{
        Point(5, 5, 'X'),
        Point(5, 6, '1'),
        Point(5, 4, '1'),
        Point(6, 5, '1'),
        Point(5, 4, '1'),
        Point(4, 4, '1'),
        Point(6, 6, '1'),
        Point(4, 6, '1'),
        Point(6, 4, '1'),
        Point(4, 5, '1')});

    minesweeperCanvas.Draw();
    cout << endl;

    Canvas snakeCanvas(' ', true);

    snakeCanvas.AddPoints(vector<Point>{
        Point(5, 4, '*'),
        Point(5, 5, '*'),
        Point(5, 6, '*'),
        Point(5, 7, '*'),
        Point(4, 7, '*'),
        Point(4, 7, '*'),
        Point(1, 7, 'o')});

    snakeCanvas.Draw();
}