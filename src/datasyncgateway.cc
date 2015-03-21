#include "datasyncgateway.h"

void Tio::DataSyncGateway::set(std::string name, bool value) { 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Boolean::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(std::string name, unsigned char value) { 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(std::string name, char value) {
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(std::string name, unsigned short value) { 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(std::string name, short value) { 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(std::string name, unsigned int value) { 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Integer::NewFromUnsigned(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(std::string name, int value) { 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Integer::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(std::string name, unsigned long value) { 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(std::string name, long value) { 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(std::string name, float value) { 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(std::string name, double value) { 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::Number::New(value);

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

void Tio::DataSyncGateway::set(std::string name, std::string value) { 
	v8::Handle<v8::Value> args[2];
	args[0] = v8::String::New(name.c_str());
	args[1] = v8::String::New(value.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("set"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	fct->Call(_ds, 2, args);
}

bool Tio::DataSyncGateway::getBool(std::string name) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->BooleanValue();
}

char Tio::DataSyncGateway::getInt8(std::string name) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return (char) res->Int32Value();
}

unsigned char Tio::DataSyncGateway::getUInt8(std::string name) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return (unsigned char) res->Uint32Value();
}

short Tio::DataSyncGateway::getInt16(std::string name) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return (short) res->Int32Value();
}

unsigned short Tio::DataSyncGateway::getUInt16(std::string name) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return (unsigned short) res->Uint32Value();
}

int Tio::DataSyncGateway::getInt32(std::string name) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->Int32Value();
}

unsigned int Tio::DataSyncGateway::getUInt32(std::string name) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->Uint32Value();
}

long Tio::DataSyncGateway::getInt64(std::string name) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->IntegerValue();
}

unsigned long Tio::DataSyncGateway::getUInt64(std::string name) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->IntegerValue();
}

float Tio::DataSyncGateway::getFloat(std::string name) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->NumberValue();
}

double Tio::DataSyncGateway::getDouble(std::string name) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	return res->NumberValue();
}

std::string Tio::DataSyncGateway::getString(std::string name) { 
	v8::Handle<v8::Value> args[1];
	args[0] = v8::String::New(name.c_str());

	v8::Handle<v8::Value> fctVal = _ds->Get(v8::String::New("get"));
	v8::Handle<v8::Function> fct = v8::Handle<v8::Function>::Cast(fctVal);
	v8::Handle<v8::Value> res = fct->Call(_ds, 1, args);
	v8::String::Utf8Value result(res);
	return std::string(*result);
}