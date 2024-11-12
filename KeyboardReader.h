//---------------------------------------------------------------------------

#ifndef KeyboardReaderH
#define KeyboardReaderH
//---------------------------------------------------------------------------
#include <Classes.hpp>
//---------------------------------------------------------------------------
class KeyboardRead : public TThread
{
private:

protected:
        void __fastcall Execute();
public:
        int ButtonPressed;
        __fastcall KeyboardRead(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
