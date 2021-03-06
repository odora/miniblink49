// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8PushSubscriptionOptions_h
#define V8PushSubscriptionOptions_h

#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "modules/ModulesExport.h"
#include "modules/push_messaging/PushSubscriptionOptions.h"
#include "platform/heap/Handle.h"

namespace blink {

class ExceptionState;

class V8PushSubscriptionOptions {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, PushSubscriptionOptions&, ExceptionState&);
};

v8::Local<v8::Value> toV8(const PushSubscriptionOptions&, v8::Local<v8::Object>, v8::Isolate*);
MODULES_EXPORT bool toV8PushSubscriptionOptions(const PushSubscriptionOptions&, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate*);

template<class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, PushSubscriptionOptions& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<PushSubscriptionOptions> {
    static PushSubscriptionOptions nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

} // namespace blink

#endif // V8PushSubscriptionOptions_h
