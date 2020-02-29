using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace Temperatures
{
    public class Temperature
    {
        public int Value;
        public Sign Sign;
    }

    public enum Sign
    {
        Positive = 0,
        Negative = 1
    }

    static class Program
    {
        static void Main(string[] args)
        {
            List<Temperature> Temperatures = new List<Temperature>();
            int n = int.Parse(Console.ReadLine()); // the number of temperatures to analyse

            if (n == 0)
            {
                Console.WriteLine("0");
                return;
            }
            string[] inputs = Console.ReadLine().Split(' ');
            for (int i = 0; i < n; i++)
            {
                int t = int.Parse(inputs[i]);// a temperature expressed as an integer ranging from -273 to 5526

                Temperatures.Add(new Temperature
                {
                    Value = Math.Abs(t),
                    Sign = t >= 0 ? Sign.Positive : Sign.Negative
                });

            }

            Temperature Lowest = Temperatures.OrderBy(w => w.Value).OrderBy(w => (int)w.Sign).First();

            Console.WriteLine($"{(Lowest.Sign == Sign.Negative ? "-" : string.Empty)}{Lowest.Value}");
        }
    }
}