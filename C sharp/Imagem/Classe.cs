using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;

namespace Imagem
{
    class Classe
    {
        
        public Color[][] GetBitMapColorMatrix(string bitmapFilePath)
        {
            bitmapFilePath = @"C:\Users\carlo\OneDrive\Área de Trabalho\programas\C afiado\Imagem\tabuleiro1.jpg";
            Bitmap b1 = new Bitmap(bitmapFilePath);
            Form1 f1 = new Form1();

            int hight = b1.Height;
            int width = b1.Width;

            Color[][] colorMatrix = new Color[width][];
            for (int i = 0; i < width; i++)
            {
                colorMatrix[i] = new Color[hight];
                for (int j = 0; j < hight; j++)
                {
                    colorMatrix[i][j] = b1.GetPixel(i, j);
                    
                }
            }
            return colorMatrix;
        }
    }
    
}
