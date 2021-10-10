#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace JGaming {
	class JGAMING_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}
//一些日志系统的宏
#define JG_CORE_TRACE(...)  ::JGaming::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define JG_CORE_INFO(...)   ::JGaming::Log::GetCoreLogger()->info(__VA_ARGS__)
#define JG_CORE_WARN(...)   ::JGaming::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define JG_CORE_ERROR(...)  ::JGaming::Log::GetCoreLogger()->error(__VA_ARGS__)
#define JG_CORE_FATAL(...)  ::JGaming::Log::GetCoreLogger()->critical(__VA_ARGS__)

#define JG_TRACE(...)       ::JGaming::Log::GetClientLogger()->trace(__VA_ARGS__)
#define JG_INFO(...)        ::JGaming::Log::GetClientLogger()->info(__VA_ARGS__)
#define JG_WARN(...)        ::JGaming::Log::GetClientLogger()->warn(__VA_ARGS__)
#define JG_ERROR(...)       ::JGaming::Log::GetClientLogger()->error(__VA_ARGS__)
#define JG_FATAL(...)       ::JGaming::Log::GetClientLogger()->critical(__VA_ARGS__)
