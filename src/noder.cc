#include <node.h>
#include <nan.h>
#include <map>
#include <string>

#include "noder.h"
#include "datasyncgateway.h"
#include "app.h"

using v8::Number;

static std::map<std::string, Tio::App*> instances; 

NAN_METHOD(Init) {
  NanScope();
  Tio::DataSyncGateway* dsg = new Tio::DataSyncGateway(args[1]->ToObject());
  std::string name = *NanUtf8String(args[0]);
  Tio::App* app = new Tio::App(name, dsg);
  instances[name] = app;
  instances[name]->init();
	NanReturnUndefined();
}

NAN_METHOD(Start) {
  NanScope();
  instances[*NanUtf8String(args[0])]->start();
  NanReturnUndefined();
}

NAN_METHOD(Stop) {
  NanScope();
  instances[*NanUtf8String(args[0])]->stop();
	NanReturnUndefined();
}

NAN_METHOD(Pause) {
  NanScope();
  instances[*NanUtf8String(args[0])]->pause();
	NanReturnUndefined();
}

NAN_METHOD(Resume) {
  NanScope();
  instances[*NanUtf8String(args[0])]->resume();
	NanReturnUndefined();
}

NAN_METHOD(Destroy) {
  NanScope();
  delete instances[*NanUtf8String(args[0])];
  NanReturnUndefined();
}