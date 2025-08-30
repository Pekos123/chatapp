#include <ChatApp.h> 

#ifdef _WIN32

#include <Windows.h>

int WINAPI WinMain(
    HINSTANCE hInstance,      // Handle to current instance
    HINSTANCE hPrevInstance,  // Handle to previous instance (always NULL)
    LPSTR     lpCmdLine,      // Command line arguments as single string
    int       nCmdShow        // How window should be shown
) {
    ChatApp app;
    app.run();
    return 0;
}

#else

int main()
{
    ChatApp app;
    app.run();
}

#endif
