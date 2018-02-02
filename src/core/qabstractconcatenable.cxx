//  header block begin
// /usr/include/qt/QtCore/qstringbuilder.h
#include <qstringbuilder.h>
#include <QtCore>

// QAbstractConcatenable is pure virtual: false
// QAbstractConcatenable has virtual projected: true
//  header block end

//  main block begin
// Protected static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:61
// [-2] void convertFromAscii(const char *, int, class QChar *&)
extern "C"
void* callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar_fnptr = 0;
extern "C" void set_callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar(void*cbfn)
{ callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar_fnptr = cbfn; }
// Protected static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:62
// [-2] void convertFromAscii(char, class QChar *&)
extern "C"
void* callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar_fnptr = 0;
extern "C" void set_callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar(void*cbfn)
{ callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar_fnptr = cbfn; }
// Protected static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:66
// [-2] void appendLatin1To(const char *, int, class QChar *)
extern "C"
void* callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar_fnptr = 0;
extern "C" void set_callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar(void*cbfn)
{ callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar_fnptr = cbfn; }

class MyQAbstractConcatenable : public QAbstractConcatenable {
public:
  virtual ~MyQAbstractConcatenable() {}
// void convertFromAscii(const char *, int, class QChar *&)
  virtual void convertFromAscii(const char * a, int len, QChar *& out) {
    auto fnptr = ((void (*)(void* , const char *, int, QChar *&))(callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar_fnptr));
    if (fnptr != 0) {
      fnptr(this , a, len, out);
    }
    QAbstractConcatenable::convertFromAscii(a, len, out);
  }
// void convertFromAscii(char, class QChar *&)
  virtual void convertFromAscii(char a, QChar *& out) {
    auto fnptr = ((void (*)(void* , char, QChar *&))(callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar_fnptr));
    if (fnptr != 0) {
      fnptr(this , a, out);
    }
    QAbstractConcatenable::convertFromAscii(a, out);
  }
// void appendLatin1To(const char *, int, class QChar *)
  virtual void appendLatin1To(const char * a, int len, QChar * out) {
    auto fnptr = ((void (*)(void* , const char *, int, QChar *))(callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar_fnptr));
    if (fnptr != 0) {
      fnptr(this , a, len, out);
    }
    QAbstractConcatenable::appendLatin1To(a, len, out);
  }
};


extern "C"
void C_ZN21QAbstractConcatenableD2Ev(void *this_) {
  delete (QAbstractConcatenable*)(this_);
}
//  main block end
