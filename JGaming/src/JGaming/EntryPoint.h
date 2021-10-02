#pragma once

#ifdef JG_PLATFORM_WINDOWS

extern JGaming::Application* JGaming::CreateApplication();

int main(int argc, char** argv)
{
	auto app = JGaming::CreateApplication();
	app->Run();
	delete app;
}

#endif