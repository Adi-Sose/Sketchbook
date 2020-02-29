using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace ChuckNorris
{
    static class Program
    {
        static void Main(string[] args)
        {

            string MESSAGE = Console.ReadLine();

            List<bool> fullBitArray = new List<bool>();

            foreach (char letter in MESSAGE)
            {
                BitArray reverseBitArray = new BitArray(BitConverter.GetBytes(letter));

                List<bool> bitArray = new List<bool>();

                for (int i = 0; i < 7; i++)
                    bitArray.Add(reverseBitArray[i]);

                bitArray.Reverse();

                fullBitArray.AddRange(bitArray);
            }

            bool current = new bool();
            bool initial = true;

            foreach (bool bit in fullBitArray)
            {
                if (bit != current || initial)
                {
                    current = bit;

                    if (!initial)
                        Console.Write(" ");
                    else
                        initial = false;

                    Console.Write(bit ? "0" : "00");
                    Console.Write(" ");
                }

                Console.Write("0");
            }

        }
    }
}