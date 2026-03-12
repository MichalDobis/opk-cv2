#include <gtest/gtest.h>
#include "fifo_lib/frame_fifo.hpp"

TEST(TestSuiteName, TestName)
{

    // FrameFifo* f = new FrameFifo();
    
    std::shared_ptr<FrameFifo> f = std::make_shared<FrameFifo>();
    std::cout << f.use_count() << std::endl;
    std::shared_ptr<FrameFifo> f2 = f;
     std::cout << f.use_count() << std::endl;

    // delete f;

}