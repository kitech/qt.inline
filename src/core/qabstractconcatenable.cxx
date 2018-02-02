//  header block begin
// /usr/include/qt/QtCore/qstringbuilder.h
#include <qstringbuilder.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractConcatenable is pure virtual: false
// QAbstractConcatenable has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar_fnptr = 0;
// extern "C" void set_callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar(void*cbfn)
// { callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar_fnptr = cbfn; }
// void* callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar_fnptr = 0;
// extern "C" void set_callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar(void*cbfn)
// { callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar_fnptr = cbfn; }
// void* callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar_fnptr = 0;
// extern "C" void set_callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar(void*cbfn)
// { callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar_fnptr = cbfn; }

class MyQAbstractConcatenable : public QAbstractConcatenable {
public:
  virtual ~MyQAbstractConcatenable() {}
// void convertFromAscii(const char *, int, class QChar *&)
  virtual void convertFromAscii(const char * a, int len, QChar *& out) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"convertFromAscii", &handled, 3, (uint64_t)a, (uint64_t)len, (uint64_t)&out, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , const char *, int, QChar *&))(callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , a, len, out);
    // }
    QAbstractConcatenable::convertFromAscii(a, len, out);
  }
  }
// void convertFromAscii(char, class QChar *&)
  virtual void convertFromAscii(char a, QChar *& out) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"convertFromAscii", &handled, 2, (uint64_t)a, (uint64_t)&out, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , char, QChar *&))(callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , a, out);
    // }
    QAbstractConcatenable::convertFromAscii(a, out);
  }
  }
// void appendLatin1To(const char *, int, class QChar *)
  virtual void appendLatin1To(const char * a, int len, QChar * out) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"appendLatin1To", &handled, 3, (uint64_t)a, (uint64_t)len, (uint64_t)out, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , const char *, int, QChar *))(callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , a, len, out);
    // }
    QAbstractConcatenable::appendLatin1To(a, len, out);
  }
  }
};


extern "C"
void C_ZN21QAbstractConcatenableD2Ev(void *this_) {
  delete (QAbstractConcatenable*)(this_);
}
//  main block end
