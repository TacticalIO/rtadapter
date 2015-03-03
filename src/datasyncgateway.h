#ifndef __DATASYNCGATEWAY__
#define __DATASYNCGATEWAY__

#include <node.h>
#include <string>

namespace Tio {
	class DataSyncGateway {
	public:
		DataSyncGateway(v8::Local<v8::Object> ds): _ds(ds) {};
		void set(std::string name, bool value);
		void set(std::string name, unsigned char value);
		void set(std::string name, char value);
		void set(std::string name, unsigned short value);
		void set(std::string name, short value);
		void set(std::string name, unsigned int value);
		void set(std::string name, int value);
		void set(std::string name, unsigned long value);
		void set(std::string name, long value);
		void set(std::string name, float value);
		void set(std::string name, double value);
		void set(std::string name, std::string value);
		bool getBool(std::string name);
		char getInt8(std::string name);
		unsigned char getUInt8(std::string name);
		short getInt16(std::string name);
		unsigned short getUInt16(std::string name);
		int getInt32(std::string name);
		unsigned int getUInt32(std::string name);
		long getInt64(std::string name);
		unsigned long getUInt64(std::string name);
		float getFloat(std::string name);
		double getDouble(std::string name);
		std::string getString(std::string name);
		
	private:
		v8::Handle<v8::Object> _ds;
	};
}

#endif