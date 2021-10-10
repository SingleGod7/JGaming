#pragma once

#ifdef JG_PLATFORM_WINDOWS

extern JGaming::Application* JGaming::CreateApplication();

int main(int argc, char** argv)
{
	JGaming::Log::Init();
	JG_CORE_ERROR("PGSB");
	JG_FATAL("PGSB");

	auto app = JGaming::CreateApplication();
	app->Run();
	delete app;
}

#endif