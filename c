using System;

class Circle
{
    public double Radius { get; set; }

    public Circle(double radius)
    {
        Radius = radius;
    }

    public double Area()
    {
        return Math.PI * Radius * Radius;
    }
}

class Square
{
    public double Side { get; set; }

    public Square(double side)
    {
        Side = side;
    }

    public double Area()
    {
        return Side * Side;
    }
}

class Program
{
    static void Main()
    {
        Circle circle = new Circle(5);
        Square square = new Square(4);

        Console.WriteLine("Area of Circle: " + circle.Area());
        Console.WriteLine("Area of Square: " + square.Area());
    }
}
