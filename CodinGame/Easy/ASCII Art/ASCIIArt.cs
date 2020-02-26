using System;

namespace ASCIIArt
{
    public class Program
    {
        static void Main(string[] args)
        {
            int L = int.Parse(Console.ReadLine());
            int H = int.Parse(Console.ReadLine());
            string T = Console.ReadLine();

            for (int i = 0; i < H; i++)
            {
                string ROW = Console.ReadLine();

                foreach (char letter in T.ToUpper().ToCharArray())
                    if (!char.IsLetter(letter))
                        Console.Write(ROW.Substring(ROW.Length - L));
                    else
                        Console.Write(ROW.Substring((letter - 'A') * L, L));

                Console.Write("\n");
            }

        }
    }
}