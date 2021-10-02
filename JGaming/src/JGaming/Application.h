#pragma once

#include "Core.h"

namespace JGaming {

	class JGAMING_API Application
	{
	public:
		Application();
		virtual ~Application();

		virtual void Run();
	};
	//在客户端中定义
	Application* CreateApplication();
}
