#ifndef __DATASYNCGATEWAY__
#define __DATASYNCGATEWAY__

#include <node.h>
#include <string>

namespace Tio {
	class DataSyncGateway {
	public:
		DataSyncGateway(v8::Local<v8::Object> ds): _ds(ds) {};
		void set(const std::string& name, bool value);
		void set(const std::string& name, unsigned char value);
		void set(const std::string& name, char value);
		void set(const std::string& name, unsigned short value);
		void set(const std::string& name, short value);
		void set(const std::string& name, unsigned int value);
		void set(const std::string& name, int value);
		void set(const std::string& name, unsigned long value);
		void set(const std::string& name, long value);
		void set(const std::string& name, float value);
		void set(const std::string& name, double value);
		void set(const std::string& name, std::string value);
		bool getBool(const std::string& name);
		char getInt8(const std::string& name);
		unsigned char getUInt8(const std::string& name);
		short getInt16(const std::string& name);
		unsigned short getUInt16(const std::string& name);
		int getInt32(const std::string& name);
		unsigned int getUInt32(const std::string& name);
		long getInt64(const std::string& name);
		unsigned long getUInt64(const std::string& name);
		float getFloat(const std::string& name);
		double getDouble(const std::string& name);
		std::string getString(const std::string& name);
		
	private:
		v8::Local<v8::Object> _ds;
	};
}

#endif