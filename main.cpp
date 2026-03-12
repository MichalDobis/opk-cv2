#include <iostream>

#include "fifo_lib/frame_fifo.hpp"

int main()
{
    // FrameFifo fifo;


    std::shared_ptr<FrameFifo> f = std::make_shared<FrameFifo>();
    std::cout << f.use_count() << std::endl;
    {
       std::shared_ptr<FrameFifo> f2 = f;
       std::cout << f.use_count() << std::endl;

    }
    // FrameFifoTester fifo_tester(fifo);

    // for (int i = 0; i < 5; i++)
    // {
    //     CameraFrame frame;
    //     fifo.pushBack(frame);
    //     std::cout << "Pushed frame " << i << std::endl;
    // }

    // std::cout << "Size of FIFO: " << fifo.getSize() << std::endl << std::endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     auto frame = fifo.at(i).lock();
    //     if (frame)
    //     {
    //         std::cout << "Frame " << i << ": Stride = " << frame->getStride() 
    //                   << ", Length = " << frame->getLength() << std::endl;
    //     }
    // }

    // while (!fifo.empty())
    // {
    //     fifo.popFront();
    //     std::cout << std::endl;
    // }

    // std::cout << "Size of FIFO after popping: " << fifo.getSize() << std::endl;

    return 0;
}

