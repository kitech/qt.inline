//  header block begin

// /usr/include/qt/QtCore/qstringmatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringmatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringMatcher is pure virtual: false false
// QStringMatcher has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStringMatcher_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStringMatcher_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStringMatcher_t qt_meta_stringdata_MyQStringMatcher = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQStringMatcher"
  },
  "MyQStringMatcher"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStringMatcher[] = {
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
class Q_DECL_EXPORT MyQStringMatcher : public QStringMatcher {
public:
  virtual ~MyQStringMatcher() {}
// void QStringMatcher()
MyQStringMatcher() : QStringMatcher() {}
// void QStringMatcher(const QString &, Qt::CaseSensitivity)
MyQStringMatcher(const QString & pattern, Qt::CaseSensitivity cs) : QStringMatcher(pattern, cs) {}
// void QStringMatcher(const QChar *, int, Qt::CaseSensitivity)
MyQStringMatcher(const QChar * uc, int len_, Qt::CaseSensitivity cs) : QStringMatcher(uc, len_, cs) {}
// void QStringMatcher(QStringView, Qt::CaseSensitivity)
MyQStringMatcher(QStringView pattern, Qt::CaseSensitivity cs) : QStringMatcher(pattern, cs) {}
// void QStringMatcher(const QStringMatcher &)
MyQStringMatcher(const QStringMatcher & other) : QStringMatcher(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstringmatcher(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:55
// [-2] void QStringMatcher() 
// (12)qm4106298835 (23)_ZN14QStringMatcherC2Ev
/*void* qm4106298835()*/{
  ;
  this_ =  new QStringMatcher();
  this_ =  new MyQStringMatcher();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:56
// [-2] void QStringMatcher(const QString &, Qt::CaseSensitivity) 
// (12)qm2373484311 (54)_ZN14QStringMatcherC2ERK7QStringN2Qt15CaseSensitivityE
/*void* qm2373484311(const QString & pattern, Qt::CaseSensitivity cs)*/{
  const QString & pattern = *(const QString *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  this_ =  new QStringMatcher(pattern, cs);
  this_ =  new MyQStringMatcher(pattern, cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:58
// [-2] void QStringMatcher(const QChar *, int, Qt::CaseSensitivity) 
// (12)qm3698827870 (53)_ZN14QStringMatcherC2EPK5QChariN2Qt15CaseSensitivityE
/*void* qm3698827870(const QChar * uc, int len_, Qt::CaseSensitivity cs)*/{
  const QChar * uc = *(const QChar **)this_; int len_ = *(int*)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  this_ =  new QStringMatcher(uc, len_, cs);
  this_ =  new MyQStringMatcher(uc, len_, cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:62
// [-2] void QStringMatcher(const QStringMatcher &) 
// (12)qm1304652020 (26)_ZN14QStringMatcherC2ERKS_
/*void* qm1304652020(const QStringMatcher & other)*/{
  const QStringMatcher & other = *(const QStringMatcher *)this_;
  this_ =  new QStringMatcher(other);
  this_ =  new MyQStringMatcher(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:74
// [4] Qt::CaseSensitivity caseSensitivity() const
// (11)qm236939046 (39)_ZNK14QStringMatcher15caseSensitivityEv
//static
/*void qm236939046()*/ {
  ;
  (void) ((QStringMatcher*)this_)->caseSensitivity();
   auto xptr = (Qt::CaseSensitivity (QStringMatcher::*)() const ) &QStringMatcher::caseSensitivity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QStringMatcherD2Ev(void *this_)*/ {
  delete (QStringMatcher*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstringmatcher
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
