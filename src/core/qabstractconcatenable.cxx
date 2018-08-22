//  header block begin
// /usr/include/qt/QtCore/qstringbuilder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringbuilder.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractConcatenable is pure virtual: true
// QAbstractConcatenable has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractConcatenable : public QAbstractConcatenable {
public:
  virtual ~MyQAbstractConcatenable() {}
// Protected static Visibility=Default Availability=Available
// [-2] void convertFromAscii(const char *, int, QChar *&)
  virtual void convertFromAscii(const char * a, int len_, QChar *& out)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"convertFromAscii", &handled, 3, (uint64_t)a, (uint64_t)len_, (uint64_t)&out, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractConcatenable::convertFromAscii(a, len_, out);
  }
  }

// Protected static inline Visibility=Default Availability=Available
// [-2] void convertFromAscii(char, QChar *&)
  virtual void convertFromAscii(char a, QChar *& out)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"convertFromAscii", &handled, 2, (uint64_t)a, (uint64_t)&out, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractConcatenable::convertFromAscii(a, out);
  }
  }

// Protected static Visibility=Default Availability=Available
// [-2] void appendLatin1To(const char *, int, QChar *)
  virtual void appendLatin1To(const char * a, int len_, QChar * out)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"appendLatin1To", &handled, 3, (uint64_t)a, (uint64_t)len_, (uint64_t)out, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractConcatenable::appendLatin1To(a, len_, out);
  }
  }

};

// Protected static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:61
// [-2] void convertFromAscii(const char *, int, QChar *&)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar(void *this_, const char * a, int len_, QChar *& out) {
  ((QAbstractConcatenable*)this_)->QAbstractConcatenable::convertFromAscii(a, len_, out);
}

// Protected static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:62
// [-2] void convertFromAscii(char, QChar *&)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar(void *this_, char a, QChar *& out) {
  ((QAbstractConcatenable*)this_)->QAbstractConcatenable::convertFromAscii(a, out);
}

// Protected static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:66
// [-2] void appendLatin1To(const char *, int, QChar *)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar(void *this_, const char * a, int len_, QChar * out) {
  ((QAbstractConcatenable*)this_)->QAbstractConcatenable::appendLatin1To(a, len_, out);
}


extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractConcatenableD2Ev(void *this_) {
  delete (QAbstractConcatenable*)(this_);
}
//  main block end
