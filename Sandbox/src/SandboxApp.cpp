#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

//calls the entry point to the engine
Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}

