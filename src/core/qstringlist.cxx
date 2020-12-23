//  header block begin

// /usr/include/qt/QtCore/qstringlist.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringlist.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringList is pure virtual: false false
// QStringList has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstringlist(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:115
// [-2] void QStringList() 
// (12)qm3203407088 (20)_ZN11QStringListC2Ev
/*void* qm3203407088()*/{
  ;
  this_ =  new QStringList();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:116
// [-2] void QStringList(const QString &) 
// (11)qm660482983 (29)_ZN11QStringListC2ERK7QString
/*void* qm660482983(const QString & i)*/{
  const QString & i = *(const QString *)this_;
  this_ =  new QStringList(i);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:117
// [-2] void QStringList(const QList<QString> &) 
// (12)qm2561793022 (37)_ZN11QStringListC2ERK5QListI7QStringE
/*void* qm2561793022(const QList<QString> & l)*/{
  const QList<QString> & l = *(const QList<QString> *)this_;
  this_ =  new QStringList(l);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:118
// [-2] void QStringList(QList<QString> &&) 
// (12)qm3653147889 (36)_ZN11QStringListC2EO5QListI7QStringE
/*void* qm3653147889(QList<QString> && l)*/{
  QList<QString> && l =  static_cast<QList<QString> &&>(*(QList<QString> *)this_);
  this_ =  new QStringList(l);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:119
// [-2] void QStringList(std::initializer_list<QString>) 
// (11)qm696630550 (49)_ZN11QStringListC2ESt16initializer_listI7QStringE
/*void* qm696630550(std::initializer_list<QString> args)*/{
  std::initializer_list<QString> args = *(std::initializer_list<QString>*)this_;
  this_ =  new QStringList(args);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:124
// [8] QStringList & operator=(const QList<QString> &) 
// (12)qm2715694080 (37)_ZN11QStringListaSERK5QListI7QStringE
//static
/*void qm2715694080(const QList<QString> & other)*/ {
  const QList<QString> & other = *(const QList<QString> *)this_;
  (void) ((QStringList*)this_)->operator=(other);
  // auto xptr = (QStringList & (QStringList::*)(QList<QString> const&) ) &QStringList::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:126
// [8] QStringList & operator=(QList<QString> &&) 
// (12)qm3051528210 (36)_ZN11QStringListaSEO5QListI7QStringE
//static
/*void qm3051528210(QList<QString> && other)*/ {
  QList<QString> && other =  static_cast<QList<QString> &&>(*(QList<QString> *)this_);
  (void) ((QStringList*)this_)->operator=(other);
  // auto xptr = (QStringList & (QStringList::*)(QList<QString>&&) ) &QStringList::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:130
// [1] bool contains(const QString &, Qt::CaseSensitivity) const
// (12)qm1548336247 (59)_ZNK11QStringList8containsERK7QStringN2Qt15CaseSensitivityE
//static
/*void qm1548336247(const QString & str, Qt::CaseSensitivity cs)*/ {
  const QString & str = *(const QString *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QStringList*)this_)->contains(str, cs);
   auto xptr = (bool (QStringList::*)(QString const&, Qt::CaseSensitivity) const ) &QStringList::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:132
// [1] bool contains(QLatin1String, Qt::CaseSensitivity) const
// (12)qm2984723559 (64)_ZNK11QStringList8containsE13QLatin1StringN2Qt15CaseSensitivityE
//static
/*void qm2984723559(QLatin1String str, Qt::CaseSensitivity cs)*/ {
  QLatin1String str = *(QLatin1String*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QStringList*)this_)->contains(str, cs);
   auto xptr = (bool (QStringList::*)(QLatin1String, Qt::CaseSensitivity) const ) &QStringList::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:135
// [8] QStringList operator+(const QStringList &) const
// (11)qm251969225 (24)_ZNK11QStringListplERKS_
//static
/*void qm251969225(const QStringList & other)*/ {
  const QStringList & other = *(const QStringList *)this_;
  (void) ((QStringList*)this_)->operator+(other);
  // auto xptr = (QStringList (QStringList::*)(QStringList const&) const ) &QStringList::operator+;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:137
// [8] QStringList & operator<<(const QString &) 
// (11)qm412503800 (29)_ZN11QStringListlsERK7QString
//static
/*void qm412503800(const QString & str)*/ {
  const QString & str = *(const QString *)this_;
  (void) ((QStringList*)this_)->operator<<(str);
  // auto xptr = (QStringList & (QStringList::*)(QString const&) ) &QStringList::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:139
// [8] QStringList & operator<<(const QStringList &) 
// (12)qm3580071227 (23)_ZN11QStringListlsERKS_
//static
/*void qm3580071227(const QStringList & l)*/ {
  const QStringList & l = *(const QStringList *)this_;
  (void) ((QStringList*)this_)->operator<<(l);
  // auto xptr = (QStringList & (QStringList::*)(QStringList const&) ) &QStringList::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:141
// [8] QStringList & operator<<(const QList<QString> &) 
// (11)qm334752344 (37)_ZN11QStringListlsERK5QListI7QStringE
//static
/*void qm334752344(const QList<QString> & l)*/ {
  const QList<QString> & l = *(const QList<QString> *)this_;
  (void) ((QStringList*)this_)->operator<<(l);
  // auto xptr = (QStringList & (QStringList::*)(QList<QString> const&) ) &QStringList::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:145
// [4] int indexOf(QLatin1String, int) const
// (12)qm1165972931 (42)_ZNK11QStringList7indexOfE13QLatin1Stringi
//static
/*void qm1165972931(QLatin1String str, int from)*/ {
  QLatin1String str = *(QLatin1String*)this_; int from = *(int*)this_;
  (void) ((QStringList*)this_)->indexOf(str, from);
   auto xptr = (int (QStringList::*)(QLatin1String, int) const ) &QStringList::indexOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:148
// [4] int lastIndexOf(QLatin1String, int) const
// (12)qm3344792632 (47)_ZNK11QStringList11lastIndexOfE13QLatin1Stringi
//static
/*void qm3344792632(QLatin1String str, int from)*/ {
  QLatin1String str = *(QLatin1String*)this_; int from = *(int*)this_;
  (void) ((QStringList*)this_)->lastIndexOf(str, from);
   auto xptr = (int (QStringList::*)(QLatin1String, int) const ) &QStringList::lastIndexOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:151
// [4] int indexOf(const QRegExp &, int) const
// (11)qm600756290 (37)_ZNK11QStringList7indexOfERK7QRegExpi
//static
/*void qm600756290(const QRegExp & rx, int from)*/ {
  const QRegExp & rx = *(const QRegExp *)this_; int from = *(int*)this_;
  (void) ((QStringList*)this_)->indexOf(rx, from);
   auto xptr = (int (QStringList::*)(QRegExp const&, int) const ) &QStringList::indexOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:152
// [4] int lastIndexOf(const QRegExp &, int) const
// (12)qm1670670208 (42)_ZNK11QStringList11lastIndexOfERK7QRegExpi
//static
/*void qm1670670208(const QRegExp & rx, int from)*/ {
  const QRegExp & rx = *(const QRegExp *)this_; int from = *(int*)this_;
  (void) ((QStringList*)this_)->lastIndexOf(rx, from);
   auto xptr = (int (QStringList::*)(QRegExp const&, int) const ) &QStringList::lastIndexOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:153
// [4] int indexOf(QRegExp &, int) const
// (12)qm3231930643 (36)_ZNK11QStringList7indexOfER7QRegExpi
//static
/*void qm3231930643(QRegExp & rx, int from)*/ {
  QRegExp & rx = *(QRegExp *)this_; int from = *(int*)this_;
  (void) ((QStringList*)this_)->indexOf(rx, from);
   auto xptr = (int (QStringList::*)(QRegExp&, int) const ) &QStringList::indexOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:154
// [4] int lastIndexOf(QRegExp &, int) const
// (12)qm1159724537 (41)_ZNK11QStringList11lastIndexOfER7QRegExpi
//static
/*void qm1159724537(QRegExp & rx, int from)*/ {
  QRegExp & rx = *(QRegExp *)this_; int from = *(int*)this_;
  (void) ((QStringList*)this_)->lastIndexOf(rx, from);
   auto xptr = (int (QStringList::*)(QRegExp&, int) const ) &QStringList::lastIndexOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:158
// [4] int indexOf(const QRegularExpression &, int) const
// (12)qm2146443805 (49)_ZNK11QStringList7indexOfERK18QRegularExpressioni
//static
/*void qm2146443805(const QRegularExpression & re, int from)*/ {
  const QRegularExpression & re = *(const QRegularExpression *)this_; int from = *(int*)this_;
  (void) ((QStringList*)this_)->indexOf(re, from);
   auto xptr = (int (QStringList::*)(QRegularExpression const&, int) const ) &QStringList::indexOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:159
// [4] int lastIndexOf(const QRegularExpression &, int) const
// (12)qm3313179156 (54)_ZNK11QStringList11lastIndexOfERK18QRegularExpressioni
//static
/*void qm3313179156(const QRegularExpression & re, int from)*/ {
  const QRegularExpression & re = *(const QRegularExpression *)this_; int from = *(int*)this_;
  (void) ((QStringList*)this_)->lastIndexOf(re, from);
   auto xptr = (int (QStringList::*)(QRegularExpression const&, int) const ) &QStringList::lastIndexOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QStringListD2Ev(void *this_)*/ {
  delete (QStringList*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstringlist
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
