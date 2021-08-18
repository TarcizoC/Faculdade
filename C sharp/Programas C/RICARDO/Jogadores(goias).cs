using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

 namespace Exercicio_Jogadores
{
    class Jogadores
    {
        public string[] nome = new string[12];
        public string[] posicao = new string[12];
        public string[] idade = new string[12];
        public string[] altura = new string[12];
        public string[] camisa = new string[12];
        public int i;
       
        public void caracteristicas()
        {
            for (i=1;i<=11;i++)
            {                
                Console.WriteLine("O nome do craque " + i + " eh =");
                nome[i] = Console.ReadLine(); 
                
                Console.WriteLine("\nConta a posicao do jogador " + i + " :");
                posicao[i] = Console.ReadLine();

                Console.WriteLine("diz tambem a idade do jogador " + i + " :");
                idade[i] = Console.ReadLine();

                Console.WriteLine("Qual a altura do jogador " + i + " :");
                altura[i] = Console.ReadLine();

                Console.WriteLine("E qual a camisa que ele usa " + i + " :");
                camisa[i] = Console.ReadLine();
            }
        }
    }
}