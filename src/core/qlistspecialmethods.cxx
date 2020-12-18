//  header block begin

// /usr/include/qt/QtCore/qstringlist.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringlist.h>
#include <QtCore>
#include "callback_inherit.h"

// QListSpecialMethods is pure virtual: false false
// QListSpecialMethods has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQListSpecialMethods_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQListSpecialMethods_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQListSpecialMethods_t qt_meta_stringdata_MyQListSpecialMethods = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQListSpecialMethods"
  },
  "MyQListSpecialMethods"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQListSpecialMethods[] = {
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
class Q_DECL_EXPORT MyQListSpecialMethods : public QListSpecialMethods<QString> {
public:
  virtual ~MyQListSpecialMethods() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlistspecialmethods(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:75
// [-2] void sort(Qt::CaseSensitivity) 
// (12)qm3892568130 (62)_ZN19QListSpecialMethodsI7QStringE4sortEN2Qt15CaseSensitivityE
//static
/*void qm3892568130(Qt::CaseSensitivity cs)*/ {
  Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QListSpecialMethods<QString>*)this_)->sort(cs);
   auto xptr = (void (QListSpecialMethods<QString>::*)(Qt::CaseSensitivity) ) &QListSpecialMethods<QString>::sort;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:76
// [4] int removeDuplicates() 
// (12)qm3318800487 (54)_ZN19QListSpecialMethodsI7QStringE16removeDuplicatesEv
//static
/*void qm3318800487()*/ {
  ;
  (void) ((QListSpecialMethods<QString>*)this_)->removeDuplicates();
   auto xptr = (int (QListSpecialMethods<QString>::*)() ) &QListSpecialMethods<QString>::removeDuplicates;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:79
// [8] QString join(const QString &) const
// (12)qm1918567913 (46)_ZNK19QListSpecialMethodsI7QStringE4joinERKS0_
//static
/*void qm1918567913(const QString & sep)*/ {
  const QString & sep = *(const QString *)this_;
  (void) ((QListSpecialMethods<QString>*)this_)->join(sep);
   auto xptr = (QString (QListSpecialMethods<QString>::*)(QString const&) const ) &QListSpecialMethods<QString>::join;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:82
// [8] QString join(QLatin1String) const
// (12)qm1289987731 (56)_ZNK19QListSpecialMethodsI7QStringE4joinE13QLatin1String
//static
/*void qm1289987731(QLatin1String sep)*/ {
  QLatin1String sep = *(QLatin1String*)this_;
  (void) ((QListSpecialMethods<QString>*)this_)->join(sep);
   auto xptr = (QString (QListSpecialMethods<QString>::*)(QLatin1String) const ) &QListSpecialMethods<QString>::join;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:83
// [8] QString join(QChar) const
// (12)qm4185881967 (47)_ZNK19QListSpecialMethodsI7QStringE4joinE5QChar
//static
/*void qm4185881967(QChar sep)*/ {
  QChar sep = *(QChar*)this_;
  (void) ((QListSpecialMethods<QString>*)this_)->join(sep);
   auto xptr = (QString (QListSpecialMethods<QString>::*)(QChar) const ) &QListSpecialMethods<QString>::join;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:88
// [8] QStringList filter(const QString &, Qt::CaseSensitivity) const
// (12)qm1185893804 (70)_ZNK19QListSpecialMethodsI7QStringE6filterERKS0_N2Qt15CaseSensitivityE
//static
/*void qm1185893804(const QString & str, Qt::CaseSensitivity cs)*/ {
  const QString & str = *(const QString *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QListSpecialMethods<QString>*)this_)->filter(str, cs);
   auto xptr = (QStringList (QListSpecialMethods<QString>::*)(QString const&, Qt::CaseSensitivity) const ) &QListSpecialMethods<QString>::filter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:89
// [8] QStringList & replaceInStrings(const QString &, const QString &, Qt::CaseSensitivity) 
// (12)qm2811309233 (83)_ZN19QListSpecialMethodsI7QStringE16replaceInStringsERKS0_S3_N2Qt15CaseSensitivityE
//static
/*void qm2811309233(const QString & before, const QString & after, Qt::CaseSensitivity cs)*/ {
  const QString & before = *(const QString *)this_; const QString & after = *(const QString *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QListSpecialMethods<QString>*)this_)->replaceInStrings(before, after, cs);
   auto xptr = (QStringList & (QListSpecialMethods<QString>::*)(QString const&, QString const&, Qt::CaseSensitivity) ) &QListSpecialMethods<QString>::replaceInStrings;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:95
// [8] QStringList filter(const QRegExp &) const
// (10)qm71667244 (53)_ZNK19QListSpecialMethodsI7QStringE6filterERK7QRegExp
//static
/*void qm71667244(const QRegExp & rx)*/ {
  const QRegExp & rx = *(const QRegExp *)this_;
  (void) ((QListSpecialMethods<QString>*)this_)->filter(rx);
   auto xptr = (QStringList (QListSpecialMethods<QString>::*)(QRegExp const&) const ) &QListSpecialMethods<QString>::filter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:96
// [8] QStringList & replaceInStrings(const QRegExp &, const QString &) 
// (12)qm3495618036 (68)_ZN19QListSpecialMethodsI7QStringE16replaceInStringsERK7QRegExpRKS0_
//static
/*void qm3495618036(const QRegExp & rx, const QString & after)*/ {
  const QRegExp & rx = *(const QRegExp *)this_; const QString & after = *(const QString *)this_;
  (void) ((QListSpecialMethods<QString>*)this_)->replaceInStrings(rx, after);
   auto xptr = (QStringList & (QListSpecialMethods<QString>::*)(QRegExp const&, QString const&) ) &QListSpecialMethods<QString>::replaceInStrings;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:100
// [8] QStringList filter(const QRegularExpression &) const
// (12)qm4227231769 (65)_ZNK19QListSpecialMethodsI7QStringE6filterERK18QRegularExpression
//static
/*void qm4227231769(const QRegularExpression & re)*/ {
  const QRegularExpression & re = *(const QRegularExpression *)this_;
  (void) ((QListSpecialMethods<QString>*)this_)->filter(re);
   auto xptr = (QStringList (QListSpecialMethods<QString>::*)(QRegularExpression const&) const ) &QListSpecialMethods<QString>::filter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:101
// [8] QStringList & replaceInStrings(const QRegularExpression &, const QString &) 
// (11)qm217191617 (80)_ZN19QListSpecialMethodsI7QStringE16replaceInStringsERK18QRegularExpressionRKS0_
//static
/*void qm217191617(const QRegularExpression & re, const QString & after)*/ {
  const QRegularExpression & re = *(const QRegularExpression *)this_; const QString & after = *(const QString *)this_;
  (void) ((QListSpecialMethods<QString>*)this_)->replaceInStrings(re, after);
   auto xptr = (QStringList & (QListSpecialMethods<QString>::*)(QRegularExpression const&, QString const&) ) &QListSpecialMethods<QString>::replaceInStrings;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QListSpecialMethodsD2Ev(void *this_)*/ {
  delete (QListSpecialMethods<QString>*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlistspecialmethods
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
