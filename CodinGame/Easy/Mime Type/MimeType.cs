using System.Linq;
using System;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace MimeType
{
    static class Program
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine()); // Number of elements which make up the association table.
            int Q = int.Parse(Console.ReadLine()); // Number Q of file names to be analyzed.

            Dictionary<string, string> extensionTypes = new Dictionary<string, string>();

            for (int i = 0; i < N; i++)
            {
                string[] inputs = Console.ReadLine().Split(' ');
                string EXT = inputs[0]; // file extension
                string MT = inputs[1]; // MIME type.

                extensionTypes.Add(EXT.ToLower(), MT);
            }

            List<int> lista = new List<int> { 1, 2, 3 };

            for (int i = 0; i < Q; i++)
            {
                string FNAME = Console.ReadLine(); // One file name per line.

                if (FNAME.Contains('.'))
                {
                    string extension = FNAME.Substring(FNAME.LastIndexOf('.') + 1).ToLower();
                    if (extensionTypes.ContainsKey(extension))
                    {
                        Console.WriteLine(extensionTypes.First(w => w.Key == extension).Value);
                        continue;
                    }
                }

                Console.WriteLine("UNKNOWN");
            }

        }
    }
}