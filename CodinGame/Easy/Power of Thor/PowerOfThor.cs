using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace PowerOfThor
{

    class Point
    {
        public int X;
        public int Y;

        public string MoveTowardsPoint(Point to)
        {
            string direction = "";

            if (Y > to.Y)
            {
                direction = "N";
                Y--;
            }
            else if (Y < to.Y)
            {
                direction = "S";
                Y++;
            }

            if (X > to.X)
            {
                direction += "W";
                X--;
            }
            else if (X < to.X)
            {
                direction += "E";
                X++;
            }

            return direction;
        }
    }

    public class Program
    {

        static void Main(string[] args)
        {
            string[] inputs = Console.ReadLine().Split(' ');
            int lightX = int.Parse(inputs[0]); // the X position of the light of power
            int lightY = int.Parse(inputs[1]); // the Y position of the light of power
            int initialTx = int.Parse(inputs[2]); // Thor's starting X position
            int initialTy = int.Parse(inputs[3]); // Thor's starting Y position

            Point Light = new Point
            {
                X = lightX,
                Y = lightY
            };

            Point Thor = new Point
            {
                X = initialTx,
                Y = initialTy
            };

            // game loop
            while (true)
            {
                int remainingTurns = int.Parse(Console.ReadLine()); // The remaining amount of turns Thor can move. Do not remove this line.


                // A single line providing the move to be made: N NE E SE S SW W or NW
                Console.WriteLine(Thor.MoveTowardsPoint(Light));
            }
        }

    }
}