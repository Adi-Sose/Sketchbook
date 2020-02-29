using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace Defibrilators
{
    public static class Extensions
    {
        public static double ToRadians(this double val)
        {
            return (Math.PI / 180) * val;
        }

        public static string GetNextSegment(ref string val)
        {
            string result = val.Substring(0, val.IndexOf(';'));
            val = val.Substring(val.IndexOf(';') + 1);
            return result;
        }

        public static Defibrilator ToDefibrilator(this string value)
        {
            return new Defibrilator
            {
                Id = int.Parse(GetNextSegment(ref value)),
                Name = GetNextSegment(ref value),
                Address = GetNextSegment(ref value),
                ContactPhoneNumber = GetNextSegment(ref value),
                Position = new Position
                {
                    LongitudeRad = double.Parse(GetNextSegment(ref value).Replace(',', '.')).ToRadians(),
                    LatitudeRad = double.Parse(value.Replace(',', '.')).ToRadians()
                }
            };
        }
    }

    public class Position
    {
        public double LongitudeRad { get; set; }
        public double LatitudeRad { get; set; }

        public double Distance(Position to)
        {
            double x = (to.LongitudeRad - LongitudeRad) * Math.Cos((LatitudeRad + to.LatitudeRad) / 2);
            double y = to.LatitudeRad - LatitudeRad;
            return Math.Sqrt(Math.Pow(x, 2) + Math.Pow(y, 2)) * 6371;
        }
    }

    public class Defibrilator
    {
        public int Id { get; set; }
        public string Address { get; set; }
        public string ContactPhoneNumber { get; set; }
        public string Name { get; set; }
        public Position Position { get; set; }
    }

    static class Program
    {
        static void Main(string[] args)
        {
            double LON = double.Parse(Console.ReadLine().Replace(',', '.'));
            double LAT = double.Parse(Console.ReadLine().Replace(',', '.'));
            int N = int.Parse(Console.ReadLine());

            Position user = new Position
            {
                LongitudeRad = LON.ToRadians(),
                LatitudeRad = LAT.ToRadians()
            };

            List<Defibrilator> defibrilators = new List<Defibrilator>();

            for (int i = 0; i < N; i++)
            {
                string DEFIB = Console.ReadLine();

                defibrilators.Add(DEFIB.ToDefibrilator());
            }


            Console.WriteLine(defibrilators.OrderBy(w => w.Position.Distance(user)).First().Name);
        }
    }
}