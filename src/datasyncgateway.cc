#include "datasyncgateway.h"

#include <nan.h>
#include <stdio.h>

void Tio::DataSyncGateway::set(const std::string name&, bool value) { 
	printf("bool set %s%d\n", name.c_str(), value);
  NanScope();
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Boolean::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
	NanReturnUndefined();
}

void Tio::DataSyncGateway::set(const std::string name&, unsigned char value) { 
	printf("uchar set %s%d\n", name.c_str(), value);
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(const std::string name&, char value) {
	printf("char set %s%d\n", name.c_str(), value);
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(const std::string name&, unsigned short value) {
	printf("ushort set %s%d\n", name.c_str(), value); 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(const std::string name&, short value) { 
	printf("short set %s%d\n", name.c_str(), value);
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(const std::string name&, unsigned int value) {
	printf("uint set %s%d\n", name.c_str(), value); 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Integer::NewFromUnsigned(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(const std::string name&, int value) { 
	printf("int set %s%d\n", name.c_str(), value);
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Integer::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(const std::string name&, unsigned long value) {
	printf("ulong set %s%d\n", name.c_str(), value); 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(const std::string name&, long value) { 
	printf("long set %s%d\n", name.c_str(), value);
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(const std::string name&, float value) { 
	printf("float set %s%d\n", name.c_str(), value);
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(const std::string name&, double value) {
	printf("double set %s%d\n", name.c_str(), value); 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(const std::string name&, std::string value) {
	printf("string set %s%d\n", name.c_str(), value); 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::String::New(value.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

bool Tio::DataSyncGateway::getBool(const std::string name&) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->BooleanValue();
}

char Tio::DataSyncGateway::getInt8(const std::string name&) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return (char) res->Int32Value();
}

unsigned char Tio::DataSyncGateway::getUInt8(const std::string name&) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return (unsigned char) res->Uint32Value();
}

short Tio::DataSyncGateway::getInt16(const std::string name&) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return (short) res->Int32Value();
}

unsigned short Tio::DataSyncGateway::getUInt16(const std::string name&) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return (unsigned short) res->Uint32Value();
}

int Tio::DataSyncGateway::getInt32(const std::string name&) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->Int32Value();
}

unsigned int Tio::DataSyncGateway::getUInt32(const std::string name&) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->Uint32Value();
}

long Tio::DataSyncGateway::getInt64(const std::string name&) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->IntegerValue();
}

unsigned long Tio::DataSyncGateway::getUInt64(const std::string name&) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->IntegerValue();
}

float Tio::DataSyncGateway::getFloat(const std::string name&) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->NumberValue();
}

double Tio::DataSyncGateway::getDouble(const std::string name&) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->NumberValue();
}

std::string Tio::DataSyncGateway::getString(const std::string name&) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	v8::String::Utf8Value result(res);
	return std::string(*result);
}