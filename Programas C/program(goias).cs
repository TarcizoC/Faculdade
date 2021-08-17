using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio_Jogadores
{
    class Program
    {
        static void Main(string[] args)
        {           
            //TIME
            Time equipe = new Time();

            Console.WriteLine("Diga as caracteristicas do time:");
            Console.WriteLine("\nNome do time:");
            equipe.AjustaName = Console.ReadLine();

            Console.WriteLine("\nMe conta o nome do estadio:");
            equipe.AjustaEstadio = Console.ReadLine();

            Console.WriteLine("\nQuais as cores do time:");
            equipe.AjustaCores = Console.ReadLine();

            Console.WriteLine("\nQuais a cidade do time:");
            equipe.AjustaCidade = Console.ReadLine();

            //JOGADORES
            Console.WriteLine("\nVamos ver se talquei nossos dados:");
            
            Jogadores jog = new Jogadores();

            jog.caracteristicas();

            Console.WriteLine("Nome do time = " + equipe.AjustaName + "\nCidade = " + equipe.AjustaCidade + "\nEstadio = " + equipe.AjustaEstadio + "\nCores = " + equipe.AjustaCores);
     
            int i;
            for (i=1;i<=11;i++)
            {
                Console.WriteLine("Jogador " + i + " =");
                Console.WriteLine("\nNome = " + jog.nome[i] + "\nPosicao = " + jog.posicao[i] + "\nIdade = " + jog.idade[i] + "\nAltura = " + jog.altura[i] + "\nCamisa = " + jog.camisa);
            }
            
            Console.ReadKey();

        }
    }
}
