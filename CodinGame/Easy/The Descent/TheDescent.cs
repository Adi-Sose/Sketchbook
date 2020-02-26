using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace TheDescent
{
    class Mountain
    {
        public int OrderNumber { get; set; }
        public int Height { get; set; }

    }

    public class TheDescent
    {
        static void Main(string[] args)
        {
            // game loop
            while (true)
            {
                List<Mountain> Mountains = new List<Mountain>();
                for (int i = 0; i < 8; i++)
                {
                    int mountainH = int.Parse(Console.ReadLine()); // represents the height of one mountain.
                    Mountains.Add(new Mountain
                    {
                        OrderNumber = i,
                        Height = mountainH
                    });
                }

                Console.WriteLine(Mountains.Where(w => w.Height == Mountains.Max(m => m.Height)).First().OrderNumber); // The index of the mountain to fire on.
            }
        }
    }
}