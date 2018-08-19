//  header block begin
// /usr/include/qt/QtCore/qdebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdebug.h>
#include <QtCore>
#include "callback_inherit.h"

// QNoDebug is pure virtual: false
// QNoDebug has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNoDebug : public QNoDebug {
public:
  virtual ~MyQNoDebug() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:190
// [1] QNoDebug & operator<<(QTextStreamFunction)
extern "C" Q_DECL_EXPORT
void* C_ZN8QNoDebuglsEPFR11QTextStreamS1_E(void *this_, QTextStreamFunction arg0) {
  auto& rv = ((QNoDebug*)this_)->operator<<(arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:191
// [1] QNoDebug & operator<<(QTextStreamManipulator)
extern "C" Q_DECL_EXPORT
void* C_ZN8QNoDebuglsE22QTextStreamManipulator(void *this_, QTextStreamManipulator* arg0) {
  auto& rv = ((QNoDebug*)this_)->operator<<(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:192
// [1] QNoDebug & space()
extern "C" Q_DECL_EXPORT
void* C_ZN8QNoDebug5spaceEv(void *this_) {
  auto& rv = ((QNoDebug*)this_)->space();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:193
// [1] QNoDebug & nospace()
extern "C" Q_DECL_EXPORT
void* C_ZN8QNoDebug7nospaceEv(void *this_) {
  auto& rv = ((QNoDebug*)this_)->nospace();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:194
// [1] QNoDebug & maybeSpace()
extern "C" Q_DECL_EXPORT
void* C_ZN8QNoDebug10maybeSpaceEv(void *this_) {
  auto& rv = ((QNoDebug*)this_)->maybeSpace();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:195
// [1] QNoDebug & quote()
extern "C" Q_DECL_EXPORT
void* C_ZN8QNoDebug5quoteEv(void *this_) {
  auto& rv = ((QNoDebug*)this_)->quote();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:196
// [1] QNoDebug & noquote()
extern "C" Q_DECL_EXPORT
void* C_ZN8QNoDebug7noquoteEv(void *this_) {
  auto& rv = ((QNoDebug*)this_)->noquote();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:197
// [1] QNoDebug & maybeQuote(const char)
extern "C" Q_DECL_EXPORT
void* C_ZN8QNoDebug10maybeQuoteEc(void *this_, const char arg0) {
  auto& rv = ((QNoDebug*)this_)->maybeQuote(arg0);
return &rv;
}


extern "C" Q_DECL_EXPORT
void C_ZN8QNoDebugD2Ev(void *this_) {
  delete (QNoDebug*)(this_);
}
//  main block end
