#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Events/ApplicationEvent.h"

#include "Window.h"


namespace Hazel
{
	class HAZEL_API Application
	{
	private:

		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;

	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);
	};

	//to be defined in client
	Application* CreateApplication();
}

