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
	//�ڿͻ����ж���
	Application* CreateApplication();
}
