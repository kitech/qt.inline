//  header block begin

// /usr/include/qt/QtCore/qurl.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qurl.h>
#include <QtCore>
#include "callback_inherit.h"

// QUrl is pure virtual: false false
// QUrl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQUrl_t {
  QByteArrayData data[1];
  char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQUrl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQUrl_t qt_meta_stringdata_MyQUrl = {
   {
  QT_MOC_LITERAL(0, 0, 6), // "MyQUrl"
  },
  "MyQUrl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQUrl[] = {
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
class Q_DECL_EXPORT MyQUrl : public QUrl {
public:
  virtual ~MyQUrl() {}
// void QUrl()
MyQUrl() : QUrl() {}
// void QUrl(const QUrl &)
MyQUrl(const QUrl & copy) : QUrl(copy) {}
// void QUrl(const QString &, QUrl::ParsingMode)
MyQUrl(const QString & url, QUrl::ParsingMode mode) : QUrl(url, mode) {}
// void QUrl(QUrl &&)
MyQUrl(QUrl && other) : QUrl(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qurl(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:176
// [-2] void QUrl() 
// (11)qm887786197 (12)_ZN4QUrlC2Ev
/*void* qm887786197()*/{
  ;
  this_ =  new QUrl();
  this_ =  new MyQUrl();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:177
// [-2] void QUrl(const QUrl &) 
// (12)qm3429715424 (15)_ZN4QUrlC2ERKS_
/*void* qm3429715424(const QUrl & copy)*/{
  const QUrl & copy = *(const QUrl *)this_;
  this_ =  new QUrl(copy);
  this_ =  new MyQUrl(copy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:182
// [-2] void QUrl(const QString &, QUrl::ParsingMode) 
// (12)qm2077668047 (38)_ZN4QUrlC2ERK7QStringNS_11ParsingModeE
/*void* qm2077668047(const QString & url, QUrl::ParsingMode mode)*/{
  const QString & url = *(const QString *)this_; QUrl::ParsingMode mode = *(QUrl::ParsingMode*)this_;
  this_ =  new QUrl(url, mode);
  this_ =  new MyQUrl(url, mode);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:185
// [-2] void QUrl(QUrl &&) 
// (12)qm4043563420 (14)_ZN4QUrlC2EOS_
/*void* qm4043563420(QUrl && other)*/{
  QUrl && other =  static_cast<QUrl &&>(*(QUrl *)this_);
  this_ =  new QUrl(other);
  this_ =  new MyQUrl(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:187
// [8] QUrl & operator=(QUrl &&) 
// (11)qm523574108 (14)_ZN4QUrlaSEOS_
//static
/*void qm523574108(QUrl && other)*/ {
  QUrl && other =  static_cast<QUrl &&>(*(QUrl *)this_);
  (void) ((QUrl*)this_)->operator=(other);
  // auto xptr = (QUrl & (QUrl::*)(QUrl&&) ) &QUrl::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:191
// [-2] void swap(QUrl &) 
// (11)qm439676209 (17)_ZN4QUrl4swapERS_
//static
/*void qm439676209(QUrl & other)*/ {
  QUrl & other = *(QUrl *)this_;
  (void) ((QUrl*)this_)->swap(other);
   auto xptr = (void (QUrl::*)(QUrl&) ) &QUrl::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:372
// [8] QUrl::DataPtr & data_ptr() 
// (12)qm2620095168 (19)_ZN4QUrl8data_ptrEv
//static
/*void qm2620095168()*/ {
  ;
  (void) ((QUrl*)this_)->data_ptr();
   auto xptr = (QUrlPrivate *& (QUrl::*)() ) &QUrl::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN4QUrlD2Ev(void *this_)*/ {
  delete (QUrl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qurl
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
