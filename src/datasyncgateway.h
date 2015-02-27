#ifndef __DATAGATEWAY__

#include <node.h>

namespace Tio {
	class DataSyncGateway {
	public:
		DataSyncGateway(v8::Handle<v8::Object> ds): _ds(ds) {};

	private:
		v8::Handle<v8::Object> _ds;
	};
}

#endif