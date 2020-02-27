using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace TrafficLights
{
    public class TrafficLight
    {
        public int OrderNumber { get; set; }
        public int DistanceM { get; set; }
        public int LightDurationS { get; set; }

        public Light AtSecond(double timeS) => Math.Floor((timeS / LightDurationS)) % 2 == 0 ? Light.Green : Light.Red;

        public double TimeToCross(double speedMPS) => Math.Round(DistanceM / (speedMPS), 3);
    }

    public class Road
    {
        public int MaxSpeedKPH { get; set; }
        public List<TrafficLight> TrafficLights { get; set; } = new List<TrafficLight>();
    }

    public class Case
    {
        public bool PassedAll { get; set; } = true;
        public double SpeedMPS { get; set; }
        public bool PassTrafficLight(TrafficLight trafficLight)
        {
            if (trafficLight.AtSecond(trafficLight.TimeToCross(SpeedMPS)) == Light.Green)
                return true;
            else
            {
                PassedAll = false;
                return false;
            }
        }
    }

    public enum Light { Green, Red }

    public class Program
    {
        static void Main(string[] args)
        {
            int speedKPH = int.Parse(Console.ReadLine());
            int lightCount = int.Parse(Console.ReadLine());

            Road road = new Road
            {
                MaxSpeedKPH = speedKPH,
            };

            for (int i = 0; i < lightCount; i++)
            {
                string[] inputs = Console.ReadLine().Split(' ');
                road.TrafficLights.Add(new TrafficLight
                {
                    OrderNumber = i,
                    DistanceM = int.Parse(inputs[0]),
                    LightDurationS = int.Parse(inputs[1])
                });
            }

            for (int i = road.MaxSpeedKPH; i > 0; i--)
            {
                Case currentCase = new Case { SpeedMPS = i / 3.6 };

                foreach (var trafficLight in road.TrafficLights)
                {
                    if (!currentCase.PassTrafficLight(trafficLight))
                        break;
                }

                if (currentCase.PassedAll)
                {
                    Console.WriteLine(i);
                    break;
                }
            }
        }
    }
}