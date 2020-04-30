#include <iostream>

#define MAX2(a, b) (a) > (b) ? (a) : (b)

class Neuron
{
public:
    double w_;
    double b_;

    double getAct(const double& x)
    {
        return x;
        
        //ReLU
        //return MAX2(0.0, x);
    }

    double feedForward(const double& input)
    {
        const double sigma = w_ * input + b_;

        return getAct(sigma);
    }
};

int main()
{
    Neuron my_neuron;
    my_neuron.w_ = 2.0;
    my_neuron.b_ = 1.0;

    
    std::cout << "Input = 1.0" << my_neuron.feedForward(1.0) << std::endl;
    std::cout << "Input = 2.0" << my_neuron.feedForward(2.0) << std::endl;
    std::cout << "Input = 3.0" << my_neuron.feedForward(3.0) << std::endl;

    return 0;
}