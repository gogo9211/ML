#include <iostream>

#include "memory/memory.hpp"

int main()
{
    auto mem = erw("Roblox");

    const auto msg_box = mem.get_export("USER32.dll", "MessageBoxA");
    
    mem.call_function<cc_stdcall, std::uint32_t, HWND, LPCSTR, LPCSTR, UINT>(msg_box, { nullptr, mem.allocate_string("test"), mem.allocate_string("test"), 0}, false);

    std::printf("MessageBoxA Called\n");

    std::cin.get();
}