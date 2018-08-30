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

struct qt_meta_stringdata_MyQNoDebug_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNoDebug_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNoDebug_t qt_meta_stringdata_MyQNoDebug = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQNoDebug"
  },
  "MyQNoDebug"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNoDebug[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
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
