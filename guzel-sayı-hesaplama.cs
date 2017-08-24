static void Main(string[] args)
{
	int s, i, md, tp = 0;
	string kgs;
	Console.Write(“Sayý Giriniz…:”);
	kgs = Console.ReadLine();
	s = Convert.ToInt16(kgs);
	for (s = 1; s <= 100; s++)
	{
		tp = 0;
		for (i = 1; i <= s – 1; i++)
		{
			md = s % i;
			if (md == 0)
			{
				tp = tp + i;
			}
		}
		if (s == tp)
		{
			Console.WriteLine(“Güzel Sayý={0}”, s);
		}
	}
	Console.ReadKey();
}