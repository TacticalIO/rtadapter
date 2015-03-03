// noder.h
#ifndef __NODER_H__
#define __NODER_H__

#include <node.h>
#include <nan.h>

NAN_METHOD(Init);
NAN_METHOD(Start);
NAN_METHOD(Stop);
NAN_METHOD(Pause);
NAN_METHOD(Resume);
NAN_METHOD(Destroy);

#endif