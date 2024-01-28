#include <iostream>
#include <opencv2/opencv.hpp>
#include "multy-layer-perceptron.h"
#include "convolutional-neural-network.h"




int main(int argc, const char** argv)
{
    /*
    Eigen::MatrixXd kernel(2,2);
    kernel <<
        1, 2,
        3, 4;

    std::cout << "Kernel:\n" << kernel << "\n\n";

    Eigen::MatrixXd input(2,2);
    input << 
        1, 5,
        6, 7;

    std::cout << "Input:\n" << input << "\n\n";

    Eigen::MatrixXd output = ConvolutionLayer::Convolution2D(input, kernel, kernel.rows()-1, kernel.cols()-1);
    std::cout << "Convolution:\n" << output << "\n";
    */
	
    /*
    cv::Mat image  =  cv::imread("..\\..\\.resources\\humano.png", cv::IMREAD_GRAYSCALE);
    //cv::resize(image, image, cv::Size(image.rows/2, image.cols/2));

    cv::namedWindow("Original Imagem", cv::WINDOW_NORMAL);
    cv::imshow("Original Imagem", image);




    Eigen::MatrixXd kernel = Eigen::MatrixXd(3,3);

    kernel <<
        1, 0, -1,
        2, 0, -2,
        1, 0, -1;


    ProcessLayer convolutionLayer = ProcessLayer(kernel, 0 , new ReLU(), new MaxPooling(2, 2));


    /// comvolution
    auto matrix  =  convolutionLayer.CalculateConvolution( image );
    auto convolatedImage  =  Utils::MatrixToImage(matrix);

    cv::namedWindow("convulated", cv::WINDOW_NORMAL);
    cv::imshow("convulated", convolatedImage);

    
    /// relu
    auto matrixWithActFun  =  convolutionLayer.ApplayActivationFunction(matrix);
    auto activatedImage  =  Utils::MatrixToImage(matrixWithActFun);

    cv::namedWindow("activation function", cv::WINDOW_NORMAL);
    cv::imshow("activation function", activatedImage);



    /// pooling
    auto matrixWithPooling  =  convolutionLayer.CalculatePooling(matrixWithActFun);
    auto pooledImage  =  Utils::MatrixToImage(matrixWithPooling);

    cv::namedWindow("pooling", cv::WINDOW_NORMAL);
    cv::imshow("pooling", pooledImage);
    std::cout << matrixWithPooling << "\n\n";
    

    cv::waitKey(0);
    */
    
    /*
    MLP mlp = MLP(4, { 2, 3 }, new ReLU(), 0.03);
                                                                                 //    bias ----------|
    std::vector<double> output  =  mlp.Forward({ 1, 1, 2, 3, 4 });               //                 { 1, 1, 2, 3, 4 }

    std::cout << "\n\n\nforward - output\n";
    for (auto o : output) { std::cout << o << "  "; }
    
    mlp.Backward({ 0, 1, 0 }, { 1, 1, 2, 3, 4 });
    */

    /*
    cv::Mat image  =  cv::imread("..\\..\\.resources\\humano.png", cv::IMREAD_GRAYSCALE);
    Eigen::MatrixXd input  =  Utils::ImageToMatrix(image);

    //std::cout << input;

    std::vector<double> flattedInput = CNN::Flattening(input);

    flattedInput.insert(flattedInput.begin(), 1.0);



    MLP mlp = MLP(28*28, { 100, 4 }, new Tanh(), 0.03);

    while (true) {
        std::vector<double> givemOutput  =  mlp.Forward(flattedInput);
        std::vector<double> errors  =  mlp.Backward({ 0, 0, 1, 0 }, flattedInput);

        std::cout << "\n\n------------------------------------------------------------------------------\noutput:    ";
        for (auto o : givemOutput) { std::cout << o << "  "; }
        std::cout << "\n";

        //std::cout << mlp << "\n\n\n";

        //char c;
        //std::cin >> c;
    }
    */

    /*
    cv::Mat image  =  cv::imread("..\\..\\.resources\\humano.png", cv::IMREAD_GRAYSCALE);
    Eigen::MatrixXd input  =  Utils::ImageToMatrix(image);

    //std::cout << input << "\n";


    Eigen::MatrixXd kernel  =  Eigen::MatrixXd::Ones(3,3);


    std::initializer_list<ProcessLayer> processLayer = { 
        ProcessLayer(kernel, 0, new ReLU(), new MaxPooling(2,2)),
        //ProcessLayer(kernel, 0, new ReLU(), new MaxPooling(2,2))
        //ProcessLayer(kernel, 0, new ReLU(), new MaxPooling(1,1))
    };


    CNN cnn = CNN(28, 28, processLayer, { 2, 4 }, new Tanh (),  0.01 );
    

    while (true) {
        std::vector<double> givemOutput  =  cnn.Forward(input);
        std::vector<double> errors  =  cnn.Backward({ 0, 0, 1, 0 }, input);

        std::cout << "\n\n------------------------------------------------------------------------------\noutput:    ";
        for (auto o : givemOutput) { std::cout << o << "  "; }
        std::cout << "\n";

        //std::cout << cnn << "\n";
    }
    */




    
    ///---------------------------------------------------------
    ///---------------------------------------------------------
    ///---------------------------------------------------------


    Eigen::MatrixXd inputImage = Eigen::MatrixXd(28, 28);
    inputImage <<
        0.482353, 0.482353, 0.482353, 0.482353, 0.482353, 0.494118, 0.564706, 0.611765, 0.596078, 0.537255, 0.482353, 0.478431, 0.482353, 0.482353, 0.501961, 0.501961, 0.498039, 0.47451, 0.47451, 0.47451, 0.47451, 0.47451, 0.47451, 0.478431, 0.478431, 0.470588, 0.47451, 0.470588,
        0.486275, 0.478431, 0.486275, 0.490196, 0.482353, 0.486275, 0.486275, 0.486275, 0.490196, 0.482353, 0.470588, 0.32549, 0.109804, 0.137255, 0.14902, 0.160784, 0.0980392, 0.0862745, 0.258824, 0.462745, 0.478431, 0.478431, 0.478431, 0.47451, 0.47451, 0.470588, 0.470588, 0.470588,
        0.486275, 0.486275, 0.486275, 0.486275, 0.494118, 0.490196, 0.47451, 0.494118, 0.458824, 0.341176, 0.266667, 0.180392, 0.145098, 0.184314, 0.164706, 0.180392, 0.160784, 0.180392, 0.152941, 0.156863, 0.301961, 0.47451, 0.478431, 0.482353, 0.482353, 0.478431, 0.47451, 0.470588,
        0.486275, 0.486275, 0.490196, 0.490196, 0.482353, 0.411765, 0.345098, 0.258824, 0.294118, 0.34902, 0.262745, 0.14902, 0.219608, 0.192157, 0.156863, 0.196078, 0.188235, 0.192157, 0.2, 0.160784, 0.137255, 0.196078, 0.482353, 0.486275, 0.486275, 0.482353, 0.482353, 0.478431,
        0.486275, 0.494118, 0.494118, 0.482353, 0.447059, 0.345098, 0.294118, 0.345098, 0.290196, 0.333333, 0.368627, 0.337255, 0.203922, 0.227451, 0.184314, 0.180392, 0.192157, 0.184314, 0.160784, 0.0784314, 0.0666667, 0.0784314, 0.329412, 0.478431, 0.482353, 0.482353, 0.478431, 0.482353,
        0.498039, 0.498039, 0.498039, 0.427451, 0.352941, 0.4, 0.27451, 0.45098, 0.521569, 0.521569, 0.356863, 0.258824, 0.258824, 0.231373, 0.270588, 0.160784, 0.219608, 0.223529, 0.219608, 0.105882, 0.0313725, 0.0509804, 0.0470588, 0.466667, 0.486275, 0.486275, 0.482353, 0.482353,
        0.498039, 0.501961, 0.466667, 0.235294, 0.172549, 0.239216, 0.443137, 0.431373, 0.34902, 0.282353, 0.423529, 0.411765, 0.356863, 0.207843, 0.282353, 0.231373, 0.188235, 0.207843, 0.2, 0.223529, 0.0941176, 0.0156863, 0.0313725, 0.203922, 0.486275, 0.490196, 0.490196, 0.490196,
        0.505882, 0.501961, 0.341176, 0.192157, 0.0431373, 0.635294, 0.698039, 0.701961, 0.698039, 0.709804, 0.592157, 0.45098, 0.239216, 0.211765, 0.215686, 0.278431, 0.286275, 0.219608, 0.133333, 0.0784314, 0.0627451, 0.0196078, 0.00784314, 0.0509804, 0.478431, 0.501961, 0.498039, 0.490196,
        0.509804, 0.490196, 0.321569, 0.247059, 0.215686, 0.862745, 0.890196, 0.890196, 0.913725, 0.870588, 0.843137, 0.52549, 0.145098, 0.25098, 0.223529, 0.266667, 0.270588, 0.211765, 0.101961, 0.0470588, 0.0156863, 0.0352941, 0.00784314, 0.00784314, 0.321569, 0.501961, 0.498039, 0.498039,
        0.513725, 0.47451, 0.372549, 0.305882, 0.67451, 0.87451, 0.882353, 0.917647, 0.917647, 0.87451, 0.784314, 0.345098, 0.0862745, 0.282353, 0.196078, 0.141176, 0.101961, 0.054902, 0.0235294, 0.0352941, 0.0117647, 0.027451, 0.160784, 0.0352941, 0.0392157, 0.498039, 0.498039, 0.498039,
        0.517647, 0.505882, 0.372549, 0.305882, 0.745098, 0.831373, 0.827451, 0.858824, 0.811765, 0.8, 0.713725, 0.152941, 0.054902, 0.113725, 0.054902, 0.0392157, 0.0196078, 0.0235294, 0.00784314, 0.0235294, 0.0235294, 0.0588235, 0.0784314, 0.113725, 0.0745098, 0.498039, 0.501961, 0.498039,
        0.517647, 0.513725, 0.454902, 0.266667, 0.709804, 0.784314, 0.788235, 0.803922, 0.807843, 0.752941, 0.647059, 0.113725, 0.0470588, 0.0588235, 0.054902, 0.0235294, 0.0117647, 0.0156863, 0.0196078, 0.0235294, 0.152941, 0.133333, 0.196078, 0.117647, 0.101961, 0.482353, 0.505882, 0.505882,
        0.517647, 0.521569, 0.501961, 0.321569, 0.690196, 0.776471, 0.745098, 0.8, 0.788235, 0.788235, 0.588235, 0.262745, 0.129412, 0.0470588, 0.105882, 0.0431373, 0.0352941, 0.0235294, 0.0352941, 0.0784314, 0.117647, 0.352941, 0.388235, 0.0627451, 0.0588235, 0.435294, 0.505882, 0.505882,
        0.52549, 0.529412, 0.521569, 0.494118, 0.470588, 0.670588, 0.698039, 0.658824, 0.54902, 0.509804, 0.576471, 0.596078, 0.470588, 0.333333, 0.196078, 0.105882, 0.0509804, 0.113725, 0.196078, 0.215686, 0.27451, 0.290196, 0.384314, 0.0627451, 0.0470588, 0.494118, 0.513725, 0.509804,
        0.52549, 0.52549, 0.529412, 0.529412, 0.521569, 0.301961, 0.45098, 0.494118, 0.231373, 0.196078, 0.392157, 0.45098, 0.364706, 0.4, 0.368627, 0.196078, 0.137255, 0.235294, 0.27451, 0.32549, 0.294118, 0.447059, 0.34902, 0.054902, 0.25098, 0.513725, 0.521569, 0.513725,
        0.529412, 0.529412, 0.529412, 0.513725, 0.372549, 0.517647, 0.478431, 0.72549, 0.458824, 0.356863, 0.537255, 0.505882, 0.396078, 0.364706, 0.580392, 0.34902, 0.380392, 0.258824, 0.439216, 0.462745, 0.435294, 0.486275, 0.588235, 0.0666667, 0.415686, 0.521569, 0.517647, 0.517647,
        0.529412, 0.529412, 0.529412, 0.396078, 0.529412, 0.541176, 0.419608, 0.678431, 0.568627, 0.8, 0.772549, 0.560784, 0.709804, 0.823529, 0.537255, 0.486275, 0.482353, 0.541176, 0.541176, 0.470588, 0.45098, 0.662745, 0.329412, 0.101961, 0.509804, 0.521569, 0.521569, 0.521569,
        0.529412, 0.529412, 0.533333, 0.533333, 0.607843, 0.556863, 0.639216, 0.776471, 0.517647, 0.666667, 0.705882, 0.65098, 0.745098, 0.576471, 0.576471, 0.533333, 0.545098, 0.545098, 0.501961, 0.423529, 0.321569, 0.0352941, 0.0627451, 0.101961, 0.521569, 0.521569, 0.52549, 0.52549,
        0.533333, 0.541176, 0.533333, 0.541176, 0.541176, 0.537255, 0.537255, 0.827451, 0.588235, 0.713725, 0.14902, 0.313725, 0.466667, 0.564706, 0.509804, 0.498039, 0.513725, 0.501961, 0.427451, 0.380392, 0.231373, 0.376471, 0.0627451, 0.0666667, 0.52549, 0.52549, 0.529412, 0.52549,
        0.537255, 0.541176, 0.537255, 0.541176, 0.537255, 0.537255, 0.639216, 0.780392, 0.52549, 0.133333, 0.498039, 0.427451, 0.290196, 0.278431, 0.329412, 0.388235, 0.435294, 0.376471, 0.352941, 0.258824, 0.129412, 0.34902, 0.203922, 0.0901961, 0.337255, 0.521569, 0.52549, 0.52549,
        0.533333, 0.541176, 0.533333, 0.541176, 0.537255, 0.537255, 0.537255, 0.407843, 0.368627, 0.290196, 0.458824, 0.294118, 0.423529, 0.541176, 0.415686, 0.388235, 0.321569, 0.27451, 0.215686, 0.184314, 0.156863, 0.278431, 0.34902, 0.470588, 0.533333, 0.262745, 0.462745, 0.52549,
        0.541176, 0.541176, 0.541176, 0.541176, 0.541176, 0.541176, 0.545098, 0.537255, 0.435294, 0.462745, 0.411765, 0.462745, 0.541176, 0.576471, 0.376471, 0.372549, 0.301961, 0.192157, 0.176471, 0.298039, 0.443137, 0.345098, 0.423529, 0.670588, 0.584314, 0.517647, 0.0588235, 0.45098,
        0.545098, 0.541176, 0.545098, 0.545098, 0.545098, 0.545098, 0.541176, 0.545098, 0.537255, 0.447059, 0.270588, 0.447059, 0.517647, 0.537255, 0.32549, 0.345098, 0.286275, 0.223529, 0.341176, 0.317647, 0.396078, 0.454902, 0.709804, 0.639216, 0.627451, 0.0980392, 0.0352941, 0.0431373,
        0.545098, 0.545098, 0.545098, 0.545098, 0.545098, 0.545098, 0.545098, 0.545098, 0.545098, 0.6, 0.768627, 0.764706, 0.572549, 0.403922, 0.243137, 0.301961, 0.301961, 0.211765, 0.478431, 0.447059, 0.568627, 0.701961, 0.67451, 0.678431, 0.317647, 0.0588235, 0.0509804, 0.0509804,
        0.545098, 0.545098, 0.545098, 0.545098, 0.545098, 0.545098, 0.545098, 0.54902, 0.54902, 0.541176, 0.490196, 0.431373, 0.34902, 0.270588, 0.262745, 0.262745, 0.247059, 0.384314, 0.4, 0.635294, 0.721569, 0.701961, 0.705882, 0.619608, 0.0784314, 0.0705882, 0.0705882, 0.0705882,
        0.545098, 0.545098, 0.545098, 0.545098, 0.54902, 0.54902, 0.54902, 0.556863, 0.552941, 0.556863, 0.556863, 0.552941, 0.552941, 0.447059, 0.14902, 0.235294, 0.317647, 0.490196, 0.670588, 0.698039, 0.694118, 0.709804, 0.686275, 0.137255, 0.0823529, 0.0784314, 0.109804, 0.0745098,
        0.54902, 0.54902, 0.54902, 0.54902, 0.54902, 0.54902, 0.54902, 0.552941, 0.552941, 0.552941, 0.54902, 0.54902, 0.533333, 0.490196, 0.423529, 0.32549, 0.396078, 0.721569, 0.752941, 0.72549, 0.745098, 0.760784, 0.407843, 0.129412, 0.137255, 0.152941, 0.172549, 0.14902,
        0.552941, 0.552941, 0.552941, 0.54902, 0.552941, 0.552941, 0.552941, 0.552941, 0.552941, 0.54902, 0.537255, 0.239216, 0.121569, 0.529412, 0.486275, 0.466667, 0.784314, 0.945098, 0.92549, 0.909804, 0.937255, 0.815686, 0.156863, 0.145098, 0.156863, 0.184314, 0.0705882, 0.164706;


    ///---------------------------------------------------------
    ///---------------------------------------------------------
    ///---------------------------------------------------------








    Eigen::MatrixXd kernel  =  Eigen::MatrixXd::Ones(3,3);


    std::initializer_list<ProcessLayer> processLayer = {
        ProcessLayer(kernel, 0, new ReLU(), new MaxPooling(2,2)),
        ProcessLayer(kernel, 0, new ReLU(), new MaxPooling(2,2)),
        ProcessLayer(kernel, 0, new ReLU(), new MaxPooling(2,2))
    };


    CNN cnn = CNN(28, 28, processLayer, { 2, 4 }, new Tanh (),  0.01);


    while (true) {
        std::vector<double> givemOutput  =  cnn.Forward(inputImage);
        
        std::vector<double> errors  =  cnn.Backward({ 0, 0, 1, 0 }, inputImage);




        std::cout << "\n\n------------------------------------------------------------------------------\noutput:    ";
        for (auto o : givemOutput) { std::cout << o << "  "; }
        std::cout << "\n";

        std::cout << cnn << "\n";
    }
    


    cv::waitKey(0);
    std::cout << "\n\n\n[SUCESSO - 1]\n\n\n";
}




///-----------------------------------------------------------------------------------------------------------------------------------
///-----------------------------------------------------------------------------------------------------------------------------------
///-----------------------------------------------------------------------------------------------------------------------------------
///-----------------------------------------------------------------------------------------------------------------------------------
///-----------------------------------------------------------------------------------------------------------------------------------
///-----------------------------------------------------------------------------------------------------------------------------------
///-----------------------------------------------------------------------------------------------------------------------------------
///-----------------------------------------------------------------------------------------------------------------------------------
///-----------------------------------------------------------------------------------------------------------------------------------
///-----------------------------------------------------------------------------------------------------------------------------------
///-----------------------------------------------------------------------------------------------------------------------------------
///-----------------------------------------------------------------------------------------------------------------------------------
///-----------------------------------------------------------------------------------------------------------------------------------




Eigen::MatrixXd maxPoolingBackward(const Eigen::MatrixXd& inputMatrix, const Eigen::MatrixXd& outputGradient, int poolSize)
{
    int rows = inputMatrix.rows();
    int cols = inputMatrix.cols();

    int newRows = rows / poolSize;
    int newCols = cols / poolSize;

    Eigen::MatrixXd inputGradient(rows, cols);
    inputGradient.setZero();

    for (int i = 0; i < newRows; ++i) {
        for (int j = 0; j < newCols; ++j) {
            // Encontrando a posi��o do valor m�ximo na janela de max pooling
            Eigen::Index maxRow, maxCol;
            outputGradient.block(i, j, 1, 1).maxCoeff(&maxRow, &maxCol);

            // Propagando o gradiente apenas para a posi��o do valor m�ximo na janela
            //inputGradient(i * poolSize + maxRow, j * poolSize + maxCol) = outputGradient(i, j);
            inputGradient(i * poolSize + maxRow, j * poolSize + maxCol) = 1.0;

            inputGradient.block(i * poolSize, j * poolSize, poolSize, poolSize) *= outputGradient(i, j);
        }
    }

    return inputGradient;
}

int _main()
{
    Eigen::MatrixXd inputMatrix(4, 4);
    inputMatrix << 
         1,  2,  3,  4,
         5,  6,  7,  8,
         9, 10, 11, 12,
        13, 14, 15, 16;

    int poolSize = 3;

    std::cout << "Input Matrix:\n" << inputMatrix << "\n\n";

    Eigen::MatrixXd outputGradient(3, 3);
    outputGradient << 
       10, 2, 3, 
        4, 5, 6, 
        7, 8, 9;

    std::cout << "Output Gradient Matrix:\n" << outputGradient << "\n\n";

    Eigen::MatrixXd inputGradient = maxPoolingBackward(inputMatrix, outputGradient, poolSize);

    std::cout << "Input Gradient Matrix (Backward pass):\n" << inputGradient << "\n";

    return 0;
}




///---------------------------------------------------------
///---------------------------------------------------------
///---------------------------------------------------------

/*


Eigen::MatrixXd inputImage = Eigen::MatrixXd(28,28) ;
inputImage <<
0.482353,   0.482353,   0.482353,   0.482353,   0.482353,   0.494118,   0.564706,   0.611765,   0.596078,   0.537255,   0.482353,   0.478431,   0.482353,   0.482353,   0.501961,   0.501961,   0.498039,    0.47451,    0.47451,    0.47451,    0.47451,    0.47451,    0.47451,   0.478431,   0.478431,   0.470588,    0.47451,   0.470588,
0.486275,   0.478431,   0.486275,   0.490196,   0.482353,   0.486275,   0.486275,   0.486275,   0.490196,   0.482353,   0.470588,    0.32549,   0.109804,   0.137255,    0.14902,   0.160784,  0.0980392,  0.0862745,   0.258824,   0.462745,   0.478431,   0.478431,   0.478431,    0.47451,    0.47451,   0.470588,   0.470588,   0.470588,
0.486275,   0.486275,   0.486275,   0.486275,   0.494118,   0.490196,    0.47451,   0.494118,   0.458824,   0.341176,   0.266667,   0.180392,   0.145098,   0.184314,   0.164706,   0.180392,   0.160784,   0.180392,   0.152941,   0.156863,   0.301961,    0.47451,   0.478431,   0.482353,   0.482353,   0.478431,    0.47451,   0.470588,
0.486275,   0.486275,   0.490196,   0.490196,   0.482353,   0.411765,   0.345098,   0.258824,   0.294118,    0.34902,   0.262745,    0.14902,   0.219608,   0.192157,   0.156863,   0.196078,   0.188235,   0.192157,        0.2,   0.160784,   0.137255,   0.196078,   0.482353,   0.486275,   0.486275,   0.482353,   0.482353,   0.478431,
0.486275,   0.494118,   0.494118,   0.482353,   0.447059,   0.345098,   0.294118,   0.345098,   0.290196,   0.333333,   0.368627,   0.337255,   0.203922,   0.227451,   0.184314,   0.180392,   0.192157,   0.184314,   0.160784,  0.0784314,  0.0666667,  0.0784314,   0.329412,   0.478431,   0.482353,   0.482353,   0.478431,   0.482353,
0.498039,   0.498039,   0.498039,   0.427451,   0.352941,        0.4,    0.27451,    0.45098,   0.521569,   0.521569,   0.356863,   0.258824,   0.258824,   0.231373,   0.270588,   0.160784,   0.219608,   0.223529,   0.219608,   0.105882,  0.0313725,  0.0509804,  0.0470588,   0.466667,   0.486275,   0.486275,   0.482353,   0.482353,
0.498039,   0.501961,   0.466667,   0.235294,   0.172549,   0.239216,   0.443137,   0.431373,    0.34902,   0.282353,   0.423529,   0.411765,   0.356863,   0.207843,   0.282353,   0.231373,   0.188235,   0.207843,        0.2,   0.223529,  0.0941176,  0.0156863,  0.0313725,   0.203922,   0.486275,   0.490196,   0.490196,   0.490196,
0.505882,   0.501961,   0.341176,   0.192157,  0.0431373,   0.635294,   0.698039,   0.701961,   0.698039,   0.709804,   0.592157,    0.45098,   0.239216,   0.211765,   0.215686,   0.278431,   0.286275,   0.219608,   0.133333,  0.0784314,  0.0627451,  0.0196078, 0.00784314,  0.0509804,   0.478431,   0.501961,   0.498039,   0.490196,
0.509804,   0.490196,   0.321569,   0.247059,   0.215686,   0.862745,   0.890196,   0.890196,   0.913725,   0.870588,   0.843137,    0.52549,   0.145098,    0.25098,   0.223529,   0.266667,   0.270588,   0.211765,   0.101961,  0.0470588,  0.0156863,  0.0352941, 0.00784314, 0.00784314,   0.321569,   0.501961,   0.498039,   0.498039,
0.513725,    0.47451,   0.372549,   0.305882,    0.67451,    0.87451,   0.882353,   0.917647,   0.917647,    0.87451,   0.784314,   0.345098,  0.0862745,   0.282353,   0.196078,   0.141176,   0.101961,   0.054902,  0.0235294,  0.0352941,  0.0117647,   0.027451,   0.160784,  0.0352941,  0.0392157,   0.498039,   0.498039,   0.498039,
0.517647,   0.505882,   0.372549,   0.305882,   0.745098,   0.831373,   0.827451,   0.858824,   0.811765,        0.8,   0.713725,   0.152941,   0.054902,   0.113725,   0.054902,  0.0392157,  0.0196078,  0.0235294, 0.00784314,  0.0235294,  0.0235294,  0.0588235,  0.0784314,   0.113725,  0.0745098,   0.498039,   0.501961,   0.498039,
0.517647,   0.513725,   0.454902,   0.266667,   0.709804,   0.784314,   0.788235,   0.803922,   0.807843,   0.752941,   0.647059,   0.113725,  0.0470588,  0.0588235,   0.054902,  0.0235294,  0.0117647,  0.0156863,  0.0196078,  0.0235294,   0.152941,   0.133333,   0.196078,   0.117647,   0.101961,   0.482353,   0.505882,   0.505882,
0.517647,   0.521569,   0.501961,   0.321569,   0.690196,   0.776471,   0.745098,        0.8,   0.788235,   0.788235,   0.588235,   0.262745,   0.129412,  0.0470588,   0.105882,  0.0431373,  0.0352941,  0.0235294,  0.0352941,  0.0784314,   0.117647,   0.352941,   0.388235,  0.0627451,  0.0588235,   0.435294,   0.505882,   0.505882,
0.52549 ,  0.529412 ,  0.521569 ,  0.494118 ,  0.470588 ,  0.670588 ,  0.698039 ,  0.658824 ,   0.54902 ,  0.509804 ,  0.576471 ,  0.596078 ,  0.470588 ,  0.333333 ,  0.196078 ,  0.105882 , 0.0509804 ,  0.113725 ,  0.196078 ,  0.215686 ,   0.27451 ,  0.290196 ,  0.384314 , 0.0627451 , 0.0470588 ,  0.494118 ,  0.513725 ,  0.509804 ,
0.52549 ,   0.52549 ,  0.529412 ,  0.529412 ,  0.521569 ,  0.301961 ,   0.45098 ,  0.494118 ,  0.231373 ,  0.196078 ,  0.392157 ,   0.45098 ,  0.364706 ,       0.4 ,  0.368627 ,  0.196078 ,  0.137255 ,  0.235294 ,   0.27451 ,   0.32549 ,  0.294118 ,  0.447059 ,   0.34902 ,  0.054902 ,   0.25098 ,  0.513725 ,  0.521569 ,  0.513725 ,
0.529412,   0.529412,   0.529412,   0.513725,   0.372549,   0.517647,   0.478431,    0.72549,   0.458824,   0.356863,   0.537255,   0.505882,   0.396078,   0.364706,   0.580392,    0.34902,   0.380392,   0.258824,   0.439216,   0.462745,   0.435294,   0.486275,   0.588235,  0.0666667,   0.415686,   0.521569,   0.517647,   0.517647,
0.529412,   0.529412,   0.529412,   0.396078,   0.529412,   0.541176,   0.419608,   0.678431,   0.568627,        0.8,   0.772549,   0.560784,   0.709804,   0.823529,   0.537255,   0.486275,   0.482353,   0.541176,   0.541176,   0.470588,    0.45098,   0.662745,   0.329412,   0.101961,   0.509804,   0.521569,   0.521569,   0.521569,
0.529412,   0.529412,   0.533333,   0.533333,   0.607843,   0.556863,   0.639216,   0.776471,   0.517647,   0.666667,   0.705882,    0.65098,   0.745098,   0.576471,   0.576471,   0.533333,   0.545098,   0.545098,   0.501961,   0.423529,   0.321569,  0.0352941,  0.0627451,   0.101961,   0.521569,   0.521569,    0.52549,    0.52549,
0.533333,   0.541176,   0.533333,   0.541176,   0.541176,   0.537255,   0.537255,   0.827451,   0.588235,   0.713725,    0.14902,   0.313725,   0.466667,   0.564706,   0.509804,   0.498039,   0.513725,   0.501961,   0.427451,   0.380392,   0.231373,   0.376471,  0.0627451,  0.0666667,    0.52549,    0.52549,   0.529412,    0.52549,
0.537255,   0.541176,   0.537255,   0.541176,   0.537255,   0.537255,   0.639216,   0.780392,    0.52549,   0.133333,   0.498039,   0.427451,   0.290196,   0.278431,   0.329412,   0.388235,   0.435294,   0.376471,   0.352941,   0.258824,   0.129412,    0.34902,   0.203922,  0.0901961,   0.337255,   0.521569,    0.52549,    0.52549,
0.533333,   0.541176,   0.533333,   0.541176,   0.537255,   0.537255,   0.537255,   0.407843,   0.368627,   0.290196,   0.458824,   0.294118,   0.423529,   0.541176,   0.415686,   0.388235,   0.321569,    0.27451,   0.215686,   0.184314,   0.156863,   0.278431,    0.34902,   0.470588,   0.533333,   0.262745,   0.462745,    0.52549,
0.541176,   0.541176,   0.541176,   0.541176,   0.541176,   0.541176,   0.545098,   0.537255,   0.435294,   0.462745,   0.411765,   0.462745,   0.541176,   0.576471,   0.376471,   0.372549,   0.301961,   0.192157,   0.176471,   0.298039,   0.443137,   0.345098,   0.423529,   0.670588,   0.584314,   0.517647,  0.0588235,    0.45098,
0.545098,   0.541176,   0.545098,   0.545098,   0.545098,   0.545098,   0.541176,   0.545098,   0.537255,   0.447059,   0.270588,   0.447059,   0.517647,   0.537255,    0.32549,   0.345098,   0.286275,   0.223529,   0.341176,   0.317647,   0.396078,   0.454902,   0.709804,   0.639216,   0.627451,  0.0980392,  0.0352941,  0.0431373,
0.545098,   0.545098,   0.545098,   0.545098,   0.545098,   0.545098,   0.545098,   0.545098,   0.545098,        0.6,   0.768627,   0.764706,   0.572549,   0.403922,   0.243137,   0.301961,   0.301961,   0.211765,   0.478431,   0.447059,   0.568627,   0.701961,    0.67451,   0.678431,   0.317647,  0.0588235,  0.0509804,  0.0509804,
0.545098,   0.545098,   0.545098,   0.545098,   0.545098,   0.545098,   0.545098,    0.54902,    0.54902,   0.541176,   0.490196,   0.431373,    0.34902,   0.270588,   0.262745,   0.262745,   0.247059,   0.384314,        0.4,   0.635294,   0.721569,   0.701961,   0.705882,   0.619608,  0.0784314,  0.0705882,  0.0705882,  0.0705882,
0.545098,   0.545098,   0.545098,   0.545098,    0.54902,    0.54902,    0.54902,   0.556863,   0.552941,   0.556863,   0.556863,   0.552941,   0.552941,   0.447059,    0.14902,   0.235294,   0.317647,   0.490196,   0.670588,   0.698039,   0.694118,   0.709804,   0.686275,   0.137255,  0.0823529,  0.0784314,   0.109804,  0.0745098,
0.54902 ,   0.54902 ,   0.54902 ,   0.54902 ,   0.54902 ,   0.54902 ,   0.54902 ,  0.552941 ,  0.552941 ,  0.552941 ,   0.54902 ,   0.54902 ,  0.533333 ,  0.490196 ,  0.423529 ,   0.32549 ,  0.396078 ,  0.721569 ,  0.752941 ,   0.72549 ,  0.745098 ,  0.760784 ,  0.407843 ,  0.129412 ,  0.137255 ,  0.152941 ,  0.172549 ,   0.14902 ,
0.552941,   0.552941,   0.552941,    0.54902,   0.552941,   0.552941,   0.552941,   0.552941,   0.552941,    0.54902,   0.537255,   0.239216,   0.121569,   0.529412,   0.486275,   0.466667,   0.784314,   0.945098,    0.92549,   0.909804,   0.937255,   0.815686,   0.156863,   0.145098,   0.156863,   0.184314,  0.0705882,   0.164706;


*/

///---------------------------------------------------------
///---------------------------------------------------------
///---------------------------------------------------------














