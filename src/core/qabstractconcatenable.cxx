//  header block begin
// /usr/include/qt/QtCore/qstringbuilder.h
#include <qstringbuilder.h>
#include <QtCore>

// QAbstractConcatenable is pure virtual: false
//  header block end

//  main block begin
// Protected static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:61
// [-2] void convertFromAscii(const char *, int, class QChar *&)
extern "C"
void* callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar = 0;
extern "C" void set_callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar(void*cbfn)
{ callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar = cbfn; }
// Protected static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:62
// [-2] void convertFromAscii(char, class QChar *&)
extern "C"
void* callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar = 0;
extern "C" void set_callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar(void*cbfn)
{ callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar = cbfn; }
// Protected static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:66
// [-2] void appendLatin1To(const char *, int, class QChar *)
extern "C"
void* callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar = 0;
extern "C" void set_callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar(void*cbfn)
{ callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar = cbfn; }

class MyQAbstractConcatenable : public QAbstractConcatenable {
public:
// void convertFromAscii(const char *, int, class QChar *&)
// void convertFromAscii(const char *, int, class QChar *&)
virtual void convertFromAscii(const char * a, int len, QChar *& out) {
  if (callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar != 0) {
  // callback_ZN21QAbstractConcatenable16convertFromAsciiEPKciRP5QChar(a, len, out);
}}
// void convertFromAscii(char, class QChar *&)
// void convertFromAscii(char, class QChar *&)
virtual void convertFromAscii(char a, QChar *& out) {
  if (callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar != 0) {
  // callback_ZN21QAbstractConcatenable16convertFromAsciiEcRP5QChar(a, out);
}}
// void appendLatin1To(const char *, int, class QChar *)
// void appendLatin1To(const char *, int, class QChar *)
virtual void appendLatin1To(const char * a, int len, QChar * out) {
  if (callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar != 0) {
  // callback_ZN21QAbstractConcatenable14appendLatin1ToEPKciP5QChar(a, len, out);
}}
};

//  main block end
