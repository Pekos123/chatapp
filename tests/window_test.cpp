#include <gtest/gtest.h>
#include <GUI/Customs.h>

TEST(Window, Is_Window_Creating)
{
    Window window;
    window = GUICreateWindow("TEST", 1000, 1000, 0); 
    
    EXPECT_NE(window, nullptr);
}
