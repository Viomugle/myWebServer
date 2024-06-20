#include "EventLoop.hpp"
#include "Epoll.hpp"
#include "Channel.hpp"
#include "tools.h"
#include <vector>
EventLoop::EventLoop():ep(new Epoll()),quit(false)
{
}

EventLoop::~EventLoop()
{
    delete ep;
}

void EventLoop::loop()
{
    while(!quit)
    {
        std::vector<Channel*> chs;
        chs=ep->poll();
        for(auto it:chs)
        {
            it->handleEvent();
        }
    }
}

void EventLoop::updateChannel(Channel* ch)
{
    ep->updateChannel(ch);
}