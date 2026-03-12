#pragma once
#include <memory>

#include "fifo_lib/error_codes.hpp"
#include "fifo_lib/list_node.hpp"
#include "fifo_lib/error_codes.hpp"
#include "fifo_lib/camera_frame.hpp"

#include <iostream>

class FrameFifo
{
public:
    FrameFifo() {
        std::cout << "Constructor" << std::endl;
    };

    ~FrameFifo() {
                std::cout << "Destructor" << std::endl;

    }

    bool empty() const;
    StatusCode pushBack(const CameraFrame& frame);
    StatusCode popFront(); 
    int getSize() const;

    std::weak_ptr<const CameraFrame> at (int index) const;

    

private:

    friend struct FrameFifoTester;
    std::unique_ptr<ListNode> head_ = nullptr;
    ListNode* tail_ = nullptr;
    int size_ = 0;
};

struct  FrameFifoTester
{
    FrameFifoTester(const FrameFifo& fifo) : fifo_(fifo) {};

    const int& getSize() const
    {
        return fifo_.size_;
    };
    
private:
    const FrameFifo& fifo_;
};

