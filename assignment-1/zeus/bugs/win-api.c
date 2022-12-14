
void WINAPI entryPoint(void)
{
  Mem::init();
  Console::init();
  Crypt::init();
  Core::init();

  CUI_DEFAULT_COMMANDLINE_HELPER;

  Core::uninit();
  Crypt::uninit();
  Console::uninit();
  Mem::uninit();

  CWA(kernel32, ExitProcess)(coreData.exitCode);
}


