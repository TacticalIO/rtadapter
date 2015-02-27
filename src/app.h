#ifndef APP_TEMPLATE_H

#include "datasyncgateway.h"
#include <string>

extern "C" {
	namespace Tio {
		class App {
		public:
			App(std::string name, DataSyncGateway* ds): name(name),_ds(ds) {};
			~App() { delete _ds; };
			void init();
			void start();
			void stop();
			void pause();
			void resume();

			std::string name;

		private:
			DataSyncGateway* _ds;
		};
	}
}

#endif