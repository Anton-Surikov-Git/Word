#include "MyForm.h"
#include <Windows.h>
using namespace Word; // Название проекта и название namespace
// (неймспейса) должны быть одинаковыми;
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
}
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Word::MyForm());
    return 0;
}