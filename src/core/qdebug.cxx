//  header block begin
// /usr/include/qt/QtCore/qdebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdebug.h>
#include <QtCore>
#include "callback_inherit.h"

// QDebug is pure virtual: false
// QDebug has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQDebug_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDebug_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDebug_t qt_meta_stringdata_MyQDebug = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQDebug"
  },
  "MyQDebug"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDebug[] = {
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
class Q_DECL_EXPORT MyQDebug : public QDebug {
public:
  virtual ~MyQDebug() {}
// void QDebug(QIODevice *)
MyQDebug(QIODevice * device) : QDebug(device) {}
// void QDebug(QString *)
MyQDebug(QString * string) : QDebug(string) {}
// void QDebug(QtMsgType)
MyQDebug(QtMsgType t) : QDebug(t) {}
// void QDebug(const QDebug &)
MyQDebug(const QDebug & o) : QDebug(o) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:113
// [-2] void QDebug(QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebugC2EP9QIODevice(QIODevice * device) {
  return  new QDebug(device);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:114
// [-2] void QDebug(QString *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebugC2EP7QString(QString * string) {
  return  new QDebug(string);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:115
// [-2] void QDebug(QtMsgType)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebugC2E9QtMsgType(QtMsgType t) {
  return  new QDebug(t);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:116
// [-2] void QDebug(const QDebug &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebugC2ERKS_(QDebug* o) {
  return  new QDebug(*o);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:117
// [8] QDebug & operator=(const QDebug &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebugaSERKS_(void *this_, QDebug* other) {
  auto& rv = ((QDebug*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:118
// [-2] void ~QDebug()
extern "C" Q_DECL_EXPORT
void C_ZN6QDebugD2Ev(void *this_) {
  delete (QDebug*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qdebug.h:119
// [-2] void swap(QDebug &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN6QDebug4swapERS_(void *this_, QDebug* other) {
  ((QDebug*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qdebug.h:121
// [8] QDebug & resetFormat()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebug11resetFormatEv(void *this_) {
  auto& rv = ((QDebug*)this_)->resetFormat();
return &rv;
}
#endif // QT_VERSION >= 0x050400

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:123
// [8] QDebug & space()
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebug5spaceEv(void *this_) {
  auto& rv = ((QDebug*)this_)->space();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:124
// [8] QDebug & nospace()
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebug7nospaceEv(void *this_) {
  auto& rv = ((QDebug*)this_)->nospace();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:125
// [8] QDebug & maybeSpace()
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebug10maybeSpaceEv(void *this_) {
  auto& rv = ((QDebug*)this_)->maybeSpace();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qdebug.h:126
// [4] int verbosity()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
int C_ZNK6QDebug9verbosityEv(void *this_) {
  return (int)((QDebug*)this_)->verbosity();
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qdebug.h:127
// [-2] void setVerbosity(int)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN6QDebug12setVerbosityEi(void *this_, int verbosityLevel) {
  ((QDebug*)this_)->setVerbosity(verbosityLevel);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qdebug.h:129
// [1] bool autoInsertSpaces()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK6QDebug16autoInsertSpacesEv(void *this_) {
  return (bool)((QDebug*)this_)->autoInsertSpaces();
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qdebug.h:130
// [-2] void setAutoInsertSpaces(bool)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN6QDebug19setAutoInsertSpacesEb(void *this_, bool b) {
  ((QDebug*)this_)->setAutoInsertSpaces(b);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qdebug.h:132
// [8] QDebug & quote()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebug5quoteEv(void *this_) {
  auto& rv = ((QDebug*)this_)->quote();
return &rv;
}
#endif // QT_VERSION >= 0x050400

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qdebug.h:133
// [8] QDebug & noquote()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebug7noquoteEv(void *this_) {
  auto& rv = ((QDebug*)this_)->noquote();
return &rv;
}
#endif // QT_VERSION >= 0x050400

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qdebug.h:134
// [8] QDebug & maybeQuote(char)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebug10maybeQuoteEc(void *this_, char c) {
  auto& rv = ((QDebug*)this_)->maybeQuote(c);
return &rv;
}
#endif // QT_VERSION >= 0x050400

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:136
// [8] QDebug & operator<<(QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsE5QChar(void *this_, QChar* t) {
  auto& rv = ((QDebug*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:137
// [8] QDebug & operator<<(bool)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEb(void *this_, bool t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:138
// [8] QDebug & operator<<(char)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEc(void *this_, char t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:139
// [8] QDebug & operator<<(short)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEs(void *this_, short t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:140
// [8] QDebug & operator<<(unsigned short)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEt(void *this_, unsigned short t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:142
// [8] QDebug & operator<<(char16_t)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEDs(void *this_, char16_t t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:143
// [8] QDebug & operator<<(char32_t)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEDi(void *this_, char32_t t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:145
// [8] QDebug & operator<<(int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEi(void *this_, int t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:146
// [8] QDebug & operator<<(unsigned int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEj(void *this_, unsigned int t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:147
// [8] QDebug & operator<<(long)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEl(void *this_, long t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:148
// [8] QDebug & operator<<(unsigned long)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEm(void *this_, unsigned long t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:149
// [8] QDebug & operator<<(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEx(void *this_, qint64 t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:150
// [8] QDebug & operator<<(quint64)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEy(void *this_, quint64 t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:151
// [8] QDebug & operator<<(float)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEf(void *this_, float t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:152
// [8] QDebug & operator<<(double)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEd(void *this_, double t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:153
// [8] QDebug & operator<<(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEPKc(void *this_, const char * t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:155
// [8] QDebug & operator<<(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsERK7QString(void *this_, QString* t) {
  auto& rv = ((QDebug*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:156
// [8] QDebug & operator<<(const QStringRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsERK10QStringRef(void *this_, QStringRef* t) {
  auto& rv = ((QDebug*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:158
// [8] QDebug & operator<<(QStringView)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsE11QStringView(void *this_, QStringView* s) {
  auto& rv = ((QDebug*)this_)->operator<<(*s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:159
// [8] QDebug & operator<<(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsE13QLatin1String(void *this_, QLatin1String* t) {
  auto& rv = ((QDebug*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:160
// [8] QDebug & operator<<(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsERK10QByteArray(void *this_, QByteArray* t) {
  auto& rv = ((QDebug*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:161
// [8] QDebug & operator<<(const void *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEPKv(void *this_, const void * t) {
  auto& rv = ((QDebug*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:163
// [8] QDebug & operator<<(std::nullptr_t)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEDn(void *this_, std::nullptr_t arg0) {
  auto& rv = ((QDebug*)this_)->operator<<(arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:165
// [8] QDebug & operator<<(QTextStreamFunction)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsEPFR11QTextStreamS1_E(void *this_, QTextStreamFunction f) {
  auto& rv = ((QDebug*)this_)->operator<<(f);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:170
// [8] QDebug & operator<<(QTextStreamManipulator)
extern "C" Q_DECL_EXPORT
void* C_ZN6QDebuglsE22QTextStreamManipulator(void *this_, QTextStreamManipulator* m) {
  auto& rv = ((QDebug*)this_)->operator<<(*m);
return &rv;
}

//  main block end
