using System;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace HorseRacing
{
    static class Program
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            List<int> strenghts = new List<int>();
            for (int i = 0; i < N; i++)
                strenghts.Add(int.Parse(Console.ReadLine()));

            strenghts.Sort();

            int min = int.MaxValue;
            for (int i = 0; i < strenghts.Count - 1; i++)
            {
                int diff = strenghts[i + 1] - strenghts[i];
                if (diff < min)
                    min = diff;
            }

            Console.WriteLine(min);
        }
    }
}