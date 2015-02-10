#include <node.h>
#include <nan.h>
#include "./noder.h"

using v8::FunctionTemplate;
using v8::Handle;
using v8::Object;
using v8::String;

void InitAll(Handle<Object> exports) {
  exports->Set(NanNew<String>("init"),
    NanNew<FunctionTemplate>(Init)->GetFunction());

  exports->Set(NanNew<String>("start"),
    NanNew<FunctionTemplate>(Start)->GetFunction());

  exports->Set(NanNew<String>("stop"),
    NanNew<FunctionTemplate>(Stop)->GetFunction());

  exports->Set(NanNew<String>("pause"),
    NanNew<FunctionTemplate>(Pause)->GetFunction());

  exports->Set(NanNew<String>("resume"),
    NanNew<FunctionTemplate>(Resume)->GetFunction());
}

NODE_MODULE(adapter, InitAll)