//  header block begin

// /usr/include/qt/QtCore/qdebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdebug.h>
#include <QtCore>
#include "callback_inherit.h"

// QDebug is pure virtual: false false
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
// void QDebug(QDebug &&)
MyQDebug(QDebug && other) : QDebug(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdebug(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:114
// [-2] void QDebug(QIODevice *) 
// (12)qm1465129040 (24)_ZN6QDebugC2EP9QIODevice
/*void* qm1465129040(QIODevice * device)*/{
  QIODevice * device = *(QIODevice **)this_;
  this_ =  new QDebug(device);
  this_ =  new MyQDebug(device);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:115
// [-2] void QDebug(QString *) 
// (11)qm331215671 (22)_ZN6QDebugC2EP7QString
/*void* qm331215671(QString * string)*/{
  QString * string = *(QString **)this_;
  this_ =  new QDebug(string);
  this_ =  new MyQDebug(string);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:116
// [-2] void QDebug(QtMsgType) 
// (12)qm2015758278 (23)_ZN6QDebugC2E9QtMsgType
/*void* qm2015758278(QtMsgType t)*/{
  QtMsgType t = *(QtMsgType*)this_;
  this_ =  new QDebug(t);
  this_ =  new MyQDebug(t);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:117
// [-2] void QDebug(const QDebug &) 
// (12)qm2771745366 (17)_ZN6QDebugC2ERKS_
/*void* qm2771745366(const QDebug & o)*/{
  const QDebug & o = *(const QDebug *)this_;
  this_ =  new QDebug(o);
  this_ =  new MyQDebug(o);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:118
// [-2] void QDebug(QDebug &&) 
// (12)qm2952177935 (16)_ZN6QDebugC2EOS_
/*void* qm2952177935(QDebug && other)*/{
  QDebug && other =  static_cast<QDebug &&>(*(QDebug *)this_);
  this_ =  new QDebug(other);
  this_ =  new MyQDebug(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:119
// [8] QDebug & operator=(const QDebug &) 
// (12)qm1052741148 (17)_ZN6QDebugaSERKS_
//static
/*void qm1052741148(const QDebug & other)*/ {
  const QDebug & other = *(const QDebug *)this_;
  (void) ((QDebug*)this_)->operator=(other);
  // auto xptr = (QDebug & (QDebug::*)(QDebug const&) ) &QDebug::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:120
// [8] QDebug & operator=(QDebug &&) 
// (12)qm1103123407 (16)_ZN6QDebugaSEOS_
//static
/*void qm1103123407(QDebug && other)*/ {
  QDebug && other =  static_cast<QDebug &&>(*(QDebug *)this_);
  (void) ((QDebug*)this_)->operator=(other);
  // auto xptr = (QDebug & (QDebug::*)(QDebug&&) ) &QDebug::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:123
// [-2] void swap(QDebug &) 
// (11)qm269887576 (19)_ZN6QDebug4swapERS_
//static
/*void qm269887576(QDebug & other)*/ {
  QDebug & other = *(QDebug *)this_;
  (void) ((QDebug*)this_)->swap(other);
   auto xptr = (void (QDebug::*)(QDebug&) ) &QDebug::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:127
// [8] QDebug & space() 
// (11)qm653372549 (18)_ZN6QDebug5spaceEv
//static
/*void qm653372549()*/ {
  ;
  (void) ((QDebug*)this_)->space();
   auto xptr = (QDebug & (QDebug::*)() ) &QDebug::space;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:128
// [8] QDebug & nospace() 
// (11)qm192821455 (20)_ZN6QDebug7nospaceEv
//static
/*void qm192821455()*/ {
  ;
  (void) ((QDebug*)this_)->nospace();
   auto xptr = (QDebug & (QDebug::*)() ) &QDebug::nospace;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:129
// [8] QDebug & maybeSpace() 
// (11)qm262661749 (24)_ZN6QDebug10maybeSpaceEv
//static
/*void qm262661749()*/ {
  ;
  (void) ((QDebug*)this_)->maybeSpace();
   auto xptr = (QDebug & (QDebug::*)() ) &QDebug::maybeSpace;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:130
// [8] QDebug & verbosity(int) 
// (12)qm2328363088 (22)_ZN6QDebug9verbosityEi
//static
/*void qm2328363088(int verbosityLevel)*/ {
  int verbosityLevel = *(int*)this_;
  (void) ((QDebug*)this_)->verbosity(verbosityLevel);
   auto xptr = (QDebug & (QDebug::*)(int) ) &QDebug::verbosity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:131
// [4] int verbosity() const
// (12)qm2532306301 (23)_ZNK6QDebug9verbosityEv
//static
/*void qm2532306301()*/ {
  ;
  (void) ((QDebug*)this_)->verbosity();
   auto xptr = (int (QDebug::*)() const ) &QDebug::verbosity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:132
// [-2] void setVerbosity(int) 
// (12)qm1582617097 (26)_ZN6QDebug12setVerbosityEi
//static
/*void qm1582617097(int verbosityLevel)*/ {
  int verbosityLevel = *(int*)this_;
  (void) ((QDebug*)this_)->setVerbosity(verbosityLevel);
   auto xptr = (void (QDebug::*)(int) ) &QDebug::setVerbosity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:135
// [1] bool autoInsertSpaces() const
// (12)qm4092132507 (31)_ZNK6QDebug16autoInsertSpacesEv
//static
/*void qm4092132507()*/ {
  ;
  (void) ((QDebug*)this_)->autoInsertSpaces();
   auto xptr = (bool (QDebug::*)() const ) &QDebug::autoInsertSpaces;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:136
// [-2] void setAutoInsertSpaces(bool) 
// (12)qm1508477296 (33)_ZN6QDebug19setAutoInsertSpacesEb
//static
/*void qm1508477296(bool b)*/ {
  bool b = *(bool*)this_;
  (void) ((QDebug*)this_)->setAutoInsertSpaces(b);
   auto xptr = (void (QDebug::*)(bool) ) &QDebug::setAutoInsertSpaces;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:138
// [8] QDebug & quote() 
// (12)qm2472410456 (18)_ZN6QDebug5quoteEv
//static
/*void qm2472410456()*/ {
  ;
  (void) ((QDebug*)this_)->quote();
   auto xptr = (QDebug & (QDebug::*)() ) &QDebug::quote;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:139
// [8] QDebug & noquote() 
// (12)qm3201460498 (20)_ZN6QDebug7noquoteEv
//static
/*void qm3201460498()*/ {
  ;
  (void) ((QDebug*)this_)->noquote();
   auto xptr = (QDebug & (QDebug::*)() ) &QDebug::noquote;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:140
// [8] QDebug & maybeQuote(char) 
// (12)qm3621147459 (24)_ZN6QDebug10maybeQuoteEc
//static
/*void qm3621147459(char c)*/ {
  char c = *(char*)this_;
  (void) ((QDebug*)this_)->maybeQuote(c);
   auto xptr = (QDebug & (QDebug::*)(char) ) &QDebug::maybeQuote;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:142
// [8] QDebug & operator<<(QChar) 
// (11)qm702940294 (19)_ZN6QDebuglsE5QChar
//static
/*void qm702940294(QChar t)*/ {
  QChar t = *(QChar*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(QChar) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:143
// [8] QDebug & operator<<(bool) 
// (12)qm2734615693 (14)_ZN6QDebuglsEb
//static
/*void qm2734615693(bool t)*/ {
  bool t = *(bool*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(bool) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:144
// [8] QDebug & operator<<(char) 
// (12)qm3589921819 (14)_ZN6QDebuglsEc
//static
/*void qm3589921819(char t)*/ {
  char t = *(char*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(char) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:145
// [8] QDebug & operator<<(short) 
// (12)qm3360607359 (14)_ZN6QDebuglsEs
//static
/*void qm3360607359(short t)*/ {
  short t = *(short*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(short) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:146
// [8] QDebug & operator<<(unsigned short) 
// (12)qm1445616092 (14)_ZN6QDebuglsEt
//static
/*void qm1445616092(unsigned short t)*/ {
  unsigned short t = *(unsigned short*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(unsigned short) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:148
// [8] QDebug & operator<<(char16_t) 
// (12)qm1266371934 (15)_ZN6QDebuglsEDs
//static
/*void qm1266371934(char16_t t)*/ {
  char16_t t = *(char16_t*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(char16_t) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:149
// [8] QDebug & operator<<(char32_t) 
// (12)qm3055137828 (15)_ZN6QDebuglsEDi
//static
/*void qm3055137828(char32_t t)*/ {
  char32_t t = *(char32_t*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(char32_t) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:151
// [8] QDebug & operator<<(int) 
// (11)qm892089605 (14)_ZN6QDebuglsEi
//static
/*void qm892089605(int t)*/ {
  int t = *(int*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(int) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:152
// [8] QDebug & operator<<(unsigned int) 
// (12)qm2888131775 (14)_ZN6QDebuglsEj
//static
/*void qm2888131775(unsigned int t)*/ {
  unsigned int t = *(unsigned int*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(unsigned int) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:153
// [8] QDebug & operator<<(long) 
// (12)qm1162264970 (14)_ZN6QDebuglsEl
//static
/*void qm1162264970(long t)*/ {
  long t = *(long*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(long) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:154
// [8] QDebug & operator<<(unsigned long) 
// (11)qm843182364 (14)_ZN6QDebuglsEm
//static
/*void qm843182364(unsigned long t)*/ {
  unsigned long t = *(unsigned long*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(unsigned long) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:155
// [8] QDebug & operator<<(qint64) 
// (12)qm1604064759 (14)_ZN6QDebuglsEx
//static
/*void qm1604064759(long long t)*/ {
  long long t = *(long long*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(long long) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:156
// [8] QDebug & operator<<(quint64) 
// (11)qm681256289 (14)_ZN6QDebuglsEy
//static
/*void qm681256289(unsigned long long t)*/ {
  unsigned long long t = *(unsigned long long*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(unsigned long long) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:157
// [8] QDebug & operator<<(float) 
// (12)qm2777884820 (14)_ZN6QDebuglsEf
//static
/*void qm2777884820(float t)*/ {
  float t = *(float*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(float) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:158
// [8] QDebug & operator<<(double) 
// (12)qm1268599224 (14)_ZN6QDebuglsEd
//static
/*void qm1268599224(double t)*/ {
  double t = *(double*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(double) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:159
// [8] QDebug & operator<<(const char *) 
// (12)qm2257678214 (16)_ZN6QDebuglsEPKc
//static
/*void qm2257678214(const char * t)*/ {
  const char * t = *(const char **)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(char const*) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:161
// [8] QDebug & operator<<(const QString &) 
// (12)qm3552019264 (23)_ZN6QDebuglsERK7QString
//static
/*void qm3552019264(const QString & t)*/ {
  const QString & t = *(const QString *)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(QString const&) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:162
// [8] QDebug & operator<<(const QStringRef &) 
// (12)qm3075389239 (27)_ZN6QDebuglsERK10QStringRef
//static
/*void qm3075389239(const QStringRef & t)*/ {
  const QStringRef & t = *(const QStringRef *)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(QStringRef const&) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:165
// [8] QDebug & operator<<(QLatin1String) 
// (10)qm17249368 (28)_ZN6QDebuglsE13QLatin1String
//static
/*void qm17249368(QLatin1String t)*/ {
  QLatin1String t = *(QLatin1String*)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(QLatin1String) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:166
// [8] QDebug & operator<<(const QByteArray &) 
// (12)qm1990037756 (27)_ZN6QDebuglsERK10QByteArray
//static
/*void qm1990037756(const QByteArray & t)*/ {
  const QByteArray & t = *(const QByteArray *)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(QByteArray const&) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:167
// [8] QDebug & operator<<(const void *) 
// (12)qm3947662189 (16)_ZN6QDebuglsEPKv
//static
/*void qm3947662189(const void * t)*/ {
  const void * t = *(const void **)this_;
  (void) ((QDebug*)this_)->operator<<(t);
  // auto xptr = (QDebug & (QDebug::*)(void const*) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:168
// [8] QDebug & operator<<(std::nullptr_t) 
// (11)qm679289223 (15)_ZN6QDebuglsEDn
//static
/*void qm679289223(nullptr_t arg0)*/ {
  nullptr_t arg0 = *(nullptr_t*)this_;
  (void) ((QDebug*)this_)->operator<<(arg0);
  // auto xptr = (QDebug & (QDebug::*)(decltype(nullptr)) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:169
// [8] QDebug & operator<<(QTextStreamFunction) 
// (11)qm978725843 (33)_ZN6QDebuglsEPFR11QTextStreamS1_E
//static
/*void qm978725843(QTextStreamFunction f)*/ {
  QTextStreamFunction f = *(QTextStreamFunction*)this_;
  (void) ((QDebug*)this_)->operator<<(f);
  // auto xptr = (QDebug & (QDebug::*)(QTextStream& (*)(QTextStream&)) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:174
// [8] QDebug & operator<<(QTextStreamManipulator) 
// (12)qm1873216521 (37)_ZN6QDebuglsE22QTextStreamManipulator
//static
/*void qm1873216521(QTextStreamManipulator m)*/ {
  QTextStreamManipulator m = *(QTextStreamManipulator*)this_;
  (void) ((QDebug*)this_)->operator<<(m);
  // auto xptr = (QDebug & (QDebug::*)(QTextStreamManipulator) ) &QDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN6QDebugD2Ev(void *this_)*/ {
  delete (QDebug*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdebug
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
