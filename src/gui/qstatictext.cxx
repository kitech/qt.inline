//  header block begin

// /usr/include/qt/QtGui/qstatictext.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstatictext.h>
#include <QtGui>
#include "callback_inherit.h"

// QStaticText is pure virtual: false false
// QStaticText has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStaticText_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStaticText_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStaticText_t qt_meta_stringdata_MyQStaticText = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQStaticText"
  },
  "MyQStaticText"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStaticText[] = {
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
class Q_DECL_EXPORT MyQStaticText : public QStaticText {
public:
  virtual ~MyQStaticText() {}
// void QStaticText()
MyQStaticText() : QStaticText() {}
// void QStaticText(const QString &)
MyQStaticText(const QString & text) : QStaticText(text) {}
// void QStaticText(const QStaticText &)
MyQStaticText(const QStaticText & other) : QStaticText(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstatictext(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:64
// [-2] void QStaticText() 
// (11)qm488460396 (20)_ZN11QStaticTextC2Ev
/*void* qm488460396()*/{
  ;
  this_ =  new QStaticText();
  this_ =  new MyQStaticText();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:65
// [-2] void QStaticText(const QString &) 
// (12)qm2285038008 (29)_ZN11QStaticTextC2ERK7QString
/*void* qm2285038008(const QString & text)*/{
  const QString & text = *(const QString *)this_;
  this_ =  new QStaticText(text);
  this_ =  new MyQStaticText(text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:66
// [-2] void QStaticText(const QStaticText &) 
// (12)qm1592574588 (23)_ZN11QStaticTextC2ERKS_
/*void* qm1592574588(const QStaticText & other)*/{
  const QStaticText & other = *(const QStaticText *)this_;
  this_ =  new QStaticText(other);
  this_ =  new MyQStaticText(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:67
// [8] QStaticText & operator=(QStaticText &&) 
// (12)qm1278483600 (22)_ZN11QStaticTextaSEOS_
//static
/*void qm1278483600(QStaticText && other)*/ {
  QStaticText && other =  static_cast<QStaticText &&>(*(QStaticText *)this_);
  (void) ((QStaticText*)this_)->operator=(other);
  // auto xptr = (QStaticText & (QStaticText::*)(QStaticText&&) ) &QStaticText::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:71
// [-2] void swap(QStaticText &) 
// (12)qm3133613079 (25)_ZN11QStaticText4swapERS_
//static
/*void qm3133613079(QStaticText & other)*/ {
  QStaticText & other = *(QStaticText *)this_;
  (void) ((QStaticText*)this_)->swap(other);
   auto xptr = (void (QStaticText::*)(QStaticText&) ) &QStaticText::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QStaticTextD2Ev(void *this_)*/ {
  delete (QStaticText*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstatictext
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
