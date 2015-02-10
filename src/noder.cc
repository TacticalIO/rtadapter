#include <node.h>
#include <nan.h>
#include "./noder.h"
#include "./app.h"

using v8::Number;

NAN_METHOD(Init) {
  NanScope();
  init(*NanUtf8String(args[0]));
	NanReturnUndefined();
}

NAN_METHOD(Start) {
  NanScope();
  start(*NanUtf8String(args[0]));
  NanReturnUndefined();
}

NAN_METHOD(Stop) {
  NanScope();
  stop(*NanUtf8String(args[0]));
	NanReturnUndefined();
}

NAN_METHOD(Pause) {
  NanScope();
  pause(*NanUtf8String(args[0]));
	NanReturnUndefined();
}

NAN_METHOD(Resume) {
  NanScope();
  resume(*NanUtf8String(args[0]));
	NanReturnUndefined();
}