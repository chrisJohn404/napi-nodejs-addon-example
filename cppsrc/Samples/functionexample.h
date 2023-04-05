/*
NAPI-Node.JS Addon Example
Author: Chris Johnson (chrisjohn404)
July 2022
License: GPLv2
*/

#include <napi.h>

namespace functionexample {

    std::string hello();
    Napi::String HelloWrapped(const Napi::CallbackInfo& info);

    int add(int a, int b);
    Napi::Number AddWrapped(const Napi::CallbackInfo& info);

    Napi::Object Init(Napi::Env env, Napi::Object exports);
    
}


/* Author(s): Chris Johnson (chrisjohn404) */