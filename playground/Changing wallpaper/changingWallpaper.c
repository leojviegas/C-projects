#include <windows.h>
#include <conio.h>

//código sacado de este video: https://www.youtube.com/watch?v=u2UtNgQERuE
int main()
{
    const wchar_t *file = L"D:\\Repositorios\\C Projects\\playground\\Changing wallpaper\\dross.jpg";
   // getch();
    int ret = SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void*)file, SPIF_UPDATEINIFILE);
    //getch();
return 0;
}