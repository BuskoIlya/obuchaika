#pragma once

namespace IBusko {
    struct MenuItem {
        const char* const title;
        void (*func)();
    };
}
