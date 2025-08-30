#include <GUI/Event.h>

void Event::AddListener(std::function<void()> callback)
{
    listeners.push_back(callback);
}
void Event::Invoke()
{
    for(auto& listener : listeners)
    {
        listener();
    }
}
