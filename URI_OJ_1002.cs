using System;
class AREA {

    static void Main(string[] args) {
        double r, area;
        r = Convert.ToDouble(Console.ReadLine());
        area = 3.14159 * (r * r);
        Console.WriteLine("A="+area.ToString("0.0000"));
        Console.ReadKey();
    }
}