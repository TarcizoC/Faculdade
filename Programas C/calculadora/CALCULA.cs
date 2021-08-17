using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class MAGO
    {
        public void escolha()
        {
            switch (dig)
            {
                case "+":
                    res = n1 + n2;
                    break;

                case "-":
                    res = n1 - n2;
                    break;
                case "*":
                    res = n1 * n2;
                    break;
                case "/":
                    res = n1 / n2;
                    break;

            }
        }         
            

        public float n1{ get; set;}
        public float n2 { get; set;}
        public float res { get; set;}
        public string dig { get; set; }

    }
}
