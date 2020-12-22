//  header block begin

// /usr/include/qt/QtCore/qlocale.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlocale.h>
#include <QtCore>
#include "callback_inherit.h"

// QLocale is pure virtual: false false
// QLocale has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQLocale_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLocale_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLocale_t qt_meta_stringdata_MyQLocale = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQLocale"
  },
  "MyQLocale"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLocale[] = {
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
class Q_DECL_EXPORT MyQLocale : public QLocale {
public:
  virtual ~MyQLocale() {}
// void QLocale()
MyQLocale() : QLocale() {}
// void QLocale(const QString &)
MyQLocale(const QString & name) : QLocale(name) {}
// void QLocale(QLocale::Language, QLocale::Country)
MyQLocale(QLocale::Language language, QLocale::Country country) : QLocale(language, country) {}
// void QLocale(QLocale::Language, QLocale::Script, QLocale::Country)
MyQLocale(QLocale::Language language, QLocale::Script script, QLocale::Country country) : QLocale(language, script, country) {}
// void QLocale(const QLocale &)
MyQLocale(const QLocale & other) : QLocale(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlocale(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:996
// [-2] void QLocale() 
// (12)qm2788139536 (15)_ZN7QLocaleC2Ev
/*void* qm2788139536()*/{
  ;
  this_ =  new QLocale();
  this_ =  new MyQLocale();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:997
// [-2] void QLocale(const QString &) 
// (12)qm1813683587 (24)_ZN7QLocaleC2ERK7QString
/*void* qm1813683587(const QString & name)*/{
  const QString & name = *(const QString *)this_;
  this_ =  new QLocale(name);
  this_ =  new MyQLocale(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:998
// [-2] void QLocale(QLocale::Language, QLocale::Country) 
// (12)qm3228077800 (39)_ZN7QLocaleC2ENS_8LanguageENS_7CountryE
/*void* qm3228077800(QLocale::Language language, QLocale::Country country)*/{
  QLocale::Language language = *(QLocale::Language*)this_; QLocale::Country country = *(QLocale::Country*)this_;
  this_ =  new QLocale(language, country);
  this_ =  new MyQLocale(language, country);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:999
// [-2] void QLocale(QLocale::Language, QLocale::Script, QLocale::Country) 
// (12)qm3045660338 (50)_ZN7QLocaleC2ENS_8LanguageENS_6ScriptENS_7CountryE
/*void* qm3045660338(QLocale::Language language, QLocale::Script script, QLocale::Country country)*/{
  QLocale::Language language = *(QLocale::Language*)this_; QLocale::Script script = *(QLocale::Script*)this_; QLocale::Country country = *(QLocale::Country*)this_;
  this_ =  new QLocale(language, script, country);
  this_ =  new MyQLocale(language, script, country);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1000
// [-2] void QLocale(const QLocale &) 
// (12)qm3982131532 (18)_ZN7QLocaleC2ERKS_
/*void* qm3982131532(const QLocale & other)*/{
  const QLocale & other = *(const QLocale *)this_;
  this_ =  new QLocale(other);
  this_ =  new MyQLocale(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1001
// [8] QLocale & operator=(QLocale &&) 
// (12)qm2618098280 (17)_ZN7QLocaleaSEOS_
//static
/*void qm2618098280(QLocale && other)*/ {
  QLocale && other =  static_cast<QLocale &&>(*(QLocale *)this_);
  (void) ((QLocale*)this_)->operator=(other);
  // auto xptr = (QLocale & (QLocale::*)(QLocale&&) ) &QLocale::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1005
// [-2] void swap(QLocale &) 
// (12)qm2320806264 (20)_ZN7QLocale4swapERS_
//static
/*void qm2320806264(QLocale & other)*/ {
  QLocale & other = *(QLocale *)this_;
  (void) ((QLocale*)this_)->swap(other);
   auto xptr = (void (QLocale::*)(QLocale&) ) &QLocale::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1053
// [8] QString toString(long) const
// (12)qm1773317558 (23)_ZNK7QLocale8toStringEl
//static
/*void qm1773317558(long i)*/ {
  long i = *(long*)this_;
  (void) ((QLocale*)this_)->toString(i);
   auto xptr = (QString (QLocale::*)(long) const ) &QLocale::toString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1054
// [8] QString toString(ulong) const
// (11)qm515218720 (23)_ZNK7QLocale8toStringEm
//static
/*void qm515218720(unsigned long i)*/ {
  unsigned long i = *(unsigned long*)this_;
  (void) ((QLocale*)this_)->toString(i);
   auto xptr = (QString (QLocale::*)(unsigned long) const ) &QLocale::toString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1055
// [8] QString toString(short) const
// (12)qm3837435971 (23)_ZNK7QLocale8toStringEs
//static
/*void qm3837435971(short i)*/ {
  short i = *(short*)this_;
  (void) ((QLocale*)this_)->toString(i);
   auto xptr = (QString (QLocale::*)(short) const ) &QLocale::toString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1056
// [8] QString toString(ushort) const
// (12)qm2061383136 (23)_ZNK7QLocale8toStringEt
//static
/*void qm2061383136(unsigned short i)*/ {
  unsigned short i = *(unsigned short*)this_;
  (void) ((QLocale*)this_)->toString(i);
   auto xptr = (QString (QLocale::*)(unsigned short) const ) &QLocale::toString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1057
// [8] QString toString(int) const
// (11)qm433609017 (23)_ZNK7QLocale8toStringEi
//static
/*void qm433609017(int i)*/ {
  int i = *(int*)this_;
  (void) ((QLocale*)this_)->toString(i);
   auto xptr = (QString (QLocale::*)(int) const ) &QLocale::toString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1058
// [8] QString toString(uint) const
// (12)qm2161182851 (23)_ZNK7QLocale8toStringEj
//static
/*void qm2161182851(unsigned int i)*/ {
  unsigned int i = *(unsigned int*)this_;
  (void) ((QLocale*)this_)->toString(i);
   auto xptr = (QString (QLocale::*)(unsigned int) const ) &QLocale::toString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1060
// [8] QString toString(float, char, int) const
// (11)qm738773352 (25)_ZNK7QLocale8toStringEfci
//static
/*void qm738773352(float i, char f, int prec)*/ {
  float i = *(float*)this_; char f = *(char*)this_; int prec = *(int*)this_;
  (void) ((QLocale*)this_)->toString(i, f, prec);
   auto xptr = (QString (QLocale::*)(float, char, int) const ) &QLocale::toString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1136
// [8] QString toCurrencyString(short, const QString &) const
// (12)qm2109487147 (42)_ZNK7QLocale16toCurrencyStringEsRK7QString
//static
/*void qm2109487147(short arg0, const QString & symbol)*/ {
  short arg0 = *(short*)this_; const QString & symbol = *(const QString *)this_;
  (void) ((QLocale*)this_)->toCurrencyString(arg0, symbol);
   auto xptr = (QString (QLocale::*)(short, QString const&) const ) &QLocale::toCurrencyString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1137
// [8] QString toCurrencyString(ushort, const QString &) const
// (12)qm1418145192 (42)_ZNK7QLocale16toCurrencyStringEtRK7QString
//static
/*void qm1418145192(unsigned short arg0, const QString & symbol)*/ {
  unsigned short arg0 = *(unsigned short*)this_; const QString & symbol = *(const QString *)this_;
  (void) ((QLocale*)this_)->toCurrencyString(arg0, symbol);
   auto xptr = (QString (QLocale::*)(unsigned short, QString const&) const ) &QLocale::toCurrencyString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1138
// [8] QString toCurrencyString(int, const QString &) const
// (11)qm837133412 (42)_ZNK7QLocale16toCurrencyStringEiRK7QString
//static
/*void qm837133412(int arg0, const QString & symbol)*/ {
  int arg0 = *(int*)this_; const QString & symbol = *(const QString *)this_;
  (void) ((QLocale*)this_)->toCurrencyString(arg0, symbol);
   auto xptr = (QString (QLocale::*)(int, QString const&) const ) &QLocale::toCurrencyString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1139
// [8] QString toCurrencyString(uint, const QString &) const
// (12)qm2819080805 (42)_ZNK7QLocale16toCurrencyStringEjRK7QString
//static
/*void qm2819080805(unsigned int arg0, const QString & symbol)*/ {
  unsigned int arg0 = *(unsigned int*)this_; const QString & symbol = *(const QString *)this_;
  (void) ((QLocale*)this_)->toCurrencyString(arg0, symbol);
   auto xptr = (QString (QLocale::*)(unsigned int, QString const&) const ) &QLocale::toCurrencyString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1147
// [8] QString toCurrencyString(float, const QString &) const
// (12)qm2719830178 (42)_ZNK7QLocale16toCurrencyStringEfRK7QString
//static
/*void qm2719830178(float i, const QString & symbol)*/ {
  float i = *(float*)this_; const QString & symbol = *(const QString *)this_;
  (void) ((QLocale*)this_)->toCurrencyString(i, symbol);
   auto xptr = (QString (QLocale::*)(float, QString const&) const ) &QLocale::toCurrencyString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1149
// [8] QString toCurrencyString(float, const QString &, int) const
// (12)qm3726043621 (43)_ZNK7QLocale16toCurrencyStringEfRK7QStringi
//static
/*void qm3726043621(float i, const QString & symbol, int precision)*/ {
  float i = *(float*)this_; const QString & symbol = *(const QString *)this_; int precision = *(int*)this_;
  (void) ((QLocale*)this_)->toCurrencyString(i, symbol, precision);
   auto xptr = (QString (QLocale::*)(float, QString const&, int) const ) &QLocale::toCurrencyString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1168
// [8] QLocale c() 
// (11)qm174558848 (15)_ZN7QLocale1cEv
//static
/*void qm174558848()*/ {
  ;
  (void) QLocale::c();
   auto xptr = (QLocale (*)() ) &QLocale::c;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QLocaleD2Ev(void *this_)*/ {
  delete (QLocale*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlocale
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
