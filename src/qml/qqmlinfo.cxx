//  header block begin

// /usr/include/qt/QtQml/qqmlinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlinfo.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlInfo is pure virtual: false false
// QQmlInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlInfo_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlInfo_t qt_meta_stringdata_MyQQmlInfo = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQQmlInfo"
  },
  "MyQQmlInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlInfo[] = {
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
class Q_DECL_EXPORT MyQQmlInfo : public QQmlInfo {
public:
  virtual ~MyQQmlInfo() {}
// void QQmlInfo(const QQmlInfo &)
MyQQmlInfo(const QQmlInfo & arg0) : QQmlInfo(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:76
// [-2] void QQmlInfo(const QQmlInfo &) 
// (12)qm2846623795 (19)_ZN8QQmlInfoC2ERKS_
/*void* qm2846623795(const QQmlInfo & arg0)*/{
  const QQmlInfo & arg0 = *(const QQmlInfo *)this_;
  this_ =  new QQmlInfo(arg0);
  this_ =  new MyQQmlInfo(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:79
// [16] QQmlInfo & operator<<(QChar) 
// (12)qm2405926893 (21)_ZN8QQmlInfolsE5QChar
//static
/*void qm2405926893(QChar t)*/ {
  QChar t = *(QChar*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(QChar) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:80
// [16] QQmlInfo & operator<<(bool) 
// (11)qm889704392 (16)_ZN8QQmlInfolsEb
//static
/*void qm889704392(bool t)*/ {
  bool t = *(bool*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(bool) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:81
// [16] QQmlInfo & operator<<(char) 
// (12)qm1107361630 (16)_ZN8QQmlInfolsEc
//static
/*void qm1107361630(char t)*/ {
  char t = *(char*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(char) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:82
// [16] QQmlInfo & operator<<(short) 
// (12)qm1605889850 (16)_ZN8QQmlInfolsEs
//static
/*void qm1605889850(short t)*/ {
  short t = *(short*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(short) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:83
// [16] QQmlInfo & operator<<(unsigned short) 
// (12)qm3251862169 (16)_ZN8QQmlInfolsEt
//static
/*void qm3251862169(unsigned short t)*/ {
  unsigned short t = *(unsigned short*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(unsigned short) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:84
// [16] QQmlInfo & operator<<(int) 
// (12)qm2731873856 (16)_ZN8QQmlInfolsEi
//static
/*void qm2731873856(int t)*/ {
  int t = *(int*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(int) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:85
// [16] QQmlInfo & operator<<(unsigned int) 
// (12)qm1004292090 (16)_ZN8QQmlInfolsEj
//static
/*void qm1004292090(unsigned int t)*/ {
  unsigned int t = *(unsigned int*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(unsigned int) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:86
// [16] QQmlInfo & operator<<(long) 
// (12)qm3535790799 (16)_ZN8QQmlInfolsEl
//static
/*void qm3535790799(long t)*/ {
  long t = *(long*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(long) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:87
// [16] QQmlInfo & operator<<(unsigned long) 
// (12)qm2780353113 (16)_ZN8QQmlInfolsEm
//static
/*void qm2780353113(unsigned long t)*/ {
  unsigned long t = *(unsigned long*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(unsigned long) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:88
// [16] QQmlInfo & operator<<(qint64) 
// (12)qm3362076338 (16)_ZN8QQmlInfolsEx
//static
/*void qm3362076338(long long t)*/ {
  long long t = *(long long*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(long long) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:89
// [16] QQmlInfo & operator<<(quint64) 
// (12)qm3210872356 (16)_ZN8QQmlInfolsEy
//static
/*void qm3210872356(unsigned long long t)*/ {
  unsigned long long t = *(unsigned long long*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(unsigned long long) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:90
// [16] QQmlInfo & operator<<(float) 
// (11)qm845810641 (16)_ZN8QQmlInfolsEf
//static
/*void qm845810641(float t)*/ {
  float t = *(float*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(float) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:91
// [16] QQmlInfo & operator<<(double) 
// (12)qm3697568509 (16)_ZN8QQmlInfolsEd
//static
/*void qm3697568509(double t)*/ {
  double t = *(double*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(double) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:92
// [16] QQmlInfo & operator<<(const char *) 
// (12)qm2851615309 (18)_ZN8QQmlInfolsEPKc
//static
/*void qm2851615309(const char * t)*/ {
  const char * t = *(const char **)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(char const*) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:93
// [16] QQmlInfo & operator<<(const QString &) 
// (12)qm3251566924 (25)_ZN8QQmlInfolsERK7QString
//static
/*void qm3251566924(const QString & t)*/ {
  const QString & t = *(const QString *)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(QString const&) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:94
// [16] QQmlInfo & operator<<(const QStringRef &) 
// (12)qm2847561470 (29)_ZN8QQmlInfolsERK10QStringRef
//static
/*void qm2847561470(const QStringRef & t)*/ {
  const QStringRef & t = *(const QStringRef *)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(QStringRef const&) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:95
// [16] QQmlInfo & operator<<(const QLatin1String &) 
// (11)qm823155478 (32)_ZN8QQmlInfolsERK13QLatin1String
//static
/*void qm823155478(const QLatin1String & t)*/ {
  const QLatin1String & t = *(const QLatin1String *)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(QLatin1String const&) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:96
// [16] QQmlInfo & operator<<(const QByteArray &) 
// (12)qm1751740725 (29)_ZN8QQmlInfolsERK10QByteArray
//static
/*void qm1751740725(const QByteArray & t)*/ {
  const QByteArray & t = *(const QByteArray *)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(QByteArray const&) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:97
// [16] QQmlInfo & operator<<(const void *) 
// (12)qm3290814118 (18)_ZN8QQmlInfolsEPKv
//static
/*void qm3290814118(const void * t)*/ {
  const void * t = *(const void **)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(void const*) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:98
// [16] QQmlInfo & operator<<(QTextStreamFunction) 
// (11)qm112821578 (35)_ZN8QQmlInfolsEPFR11QTextStreamS1_E
//static
/*void qm112821578(QTextStreamFunction f)*/ {
  QTextStreamFunction f = *(QTextStreamFunction*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(f);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(QTextStream& (*)(QTextStream&)) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:99
// [16] QQmlInfo & operator<<(QTextStreamManipulator) 
// (12)qm2323663337 (39)_ZN8QQmlInfolsE22QTextStreamManipulator
//static
/*void qm2323663337(QTextStreamManipulator m)*/ {
  QTextStreamManipulator m = *(QTextStreamManipulator*)this_;
  (void) ((QQmlInfo*)this_)->operator<<(m);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(QTextStreamManipulator) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:101
// [16] QQmlInfo & operator<<(const QUrl &) 
// (12)qm1105047186 (22)_ZN8QQmlInfolsERK4QUrl
//static
/*void qm1105047186(const QUrl & t)*/ {
  const QUrl & t = *(const QUrl *)this_;
  (void) ((QQmlInfo*)this_)->operator<<(t);
  // auto xptr = (QQmlInfo & (QQmlInfo::*)(QUrl const&) ) &QQmlInfo::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QQmlInfoD2Ev(void *this_)*/ {
  delete (QQmlInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
