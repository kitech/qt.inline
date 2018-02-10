//  header block begin
// /usr/include/qt/QtCore/qstringbuilder.h
#include <qstringbuilder.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractConcatenable is pure virtual: false
// QAbstractConcatenable has virtual projected: true
//  header block end

//  main block begin

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
    QAbstractConcatenable::appendLatin1To(a, len, out);
  }
  }

};


extern "C"
void C_ZN21QAbstractConcatenableD2Ev(void *this_) {
  delete (QAbstractConcatenable*)(this_);
}
//  main block end
