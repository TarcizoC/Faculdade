using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Imagem
{

    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
            Bitmap image1;
        
            private void button1_Click(System.Object sender, System.EventArgs e)
            {

       

            //try
            //{
            //    // Retrieve the image.
            //    image1 = new Bitmap(@"C:\Users\carlo\Downloads"
            //        + @"\9525_peepoFighter.png", true);

            //    int x, y;

            //    // Loop through the images pixels to reset color.
            //    for (x = 0; x < image1.Width; x++)
            //    {
            //        for (y = 0; y < image1.Height; y++)
            //        {
            //            Color pixelColor = image1.GetPixel(x, y);
            //        if( pixelColor == Color.FromArgb(pixelColor.G,0,0))
            //            {
            //            Color newColor = Color.FromArgb(pixelColor.R, 0, 0);
            //            image1.SetPixel(x, y, newColor);
            //            }

            //        }
            //    }

            //// Set the PictureBox to display the image.
            //pictureBox1.Image = image1;

            //    // Display the pixel format in Label1.
            //    label1.Text = "Pixel format: " + image1.PixelFormat.ToString();
            //}
            //catch (ArgumentException)
            //{
            //    MessageBox.Show("There was an error." +
            //        "Check the path to the image file.");
            //}
        }
        
    }
}

//public Color[][] GetBitMapColorMatrix(string bitmapFilePath)
//{
//    bitmapFilePath = @"C:\9673780.jpg";
//    Bitmap b1 = new Bitmap(bitmapFilePath);

//    int hight = b1.Height;
//    int width = b1.Width;

//    Color[][] colorMatrix = new Color[width][];
//    for (int i = 0; i < width; i++)
//    {
//        colorMatrix[i] = new Color[hight];
//        for (int j = 0; j < hight; j++)
//        {
//            colorMatrix[i][j] = b1.GetPixel(i, j);
//        }
//    }
//    return colorMatrix;
//}