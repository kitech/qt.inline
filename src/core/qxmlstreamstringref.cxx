//  header block begin

// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamStringRef is pure virtual: false false
// QXmlStreamStringRef has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQXmlStreamStringRef_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQXmlStreamStringRef_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQXmlStreamStringRef_t qt_meta_stringdata_MyQXmlStreamStringRef = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQXmlStreamStringRef"
  },
  "MyQXmlStreamStringRef"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQXmlStreamStringRef[] = {
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
class Q_DECL_EXPORT MyQXmlStreamStringRef : public QXmlStreamStringRef {
public:
  virtual ~MyQXmlStreamStringRef() {}
// void QXmlStreamStringRef()
MyQXmlStreamStringRef() : QXmlStreamStringRef() {}
// void QXmlStreamStringRef(const QStringRef &)
MyQXmlStreamStringRef(const QStringRef & aString) : QXmlStreamStringRef(aString) {}
// void QXmlStreamStringRef(const QString &)
MyQXmlStreamStringRef(const QString & aString) : QXmlStreamStringRef(aString) {}
// void QXmlStreamStringRef(QString &&)
MyQXmlStreamStringRef(QString && aString) : QXmlStreamStringRef(aString) {}
// void QXmlStreamStringRef(const QXmlStreamStringRef &)
MyQXmlStreamStringRef(const QXmlStreamStringRef & other) : QXmlStreamStringRef(other) {}
// void QXmlStreamStringRef(QXmlStreamStringRef &&)
MyQXmlStreamStringRef(QXmlStreamStringRef && other) : QXmlStreamStringRef(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qxmlstreamstringref(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:58
// [-2] void QXmlStreamStringRef() 
// (12)qm1711037227 (28)_ZN19QXmlStreamStringRefC2Ev
/*void* qm1711037227()*/{
  ;
  this_ =  new QXmlStreamStringRef();
  this_ =  new MyQXmlStreamStringRef();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:59
// [-2] void QXmlStreamStringRef(const QStringRef &) 
// (12)qm3117984013 (41)_ZN19QXmlStreamStringRefC2ERK10QStringRef
/*void* qm3117984013(const QStringRef & aString)*/{
  const QStringRef & aString = *(const QStringRef *)this_;
  this_ =  new QXmlStreamStringRef(aString);
  this_ =  new MyQXmlStreamStringRef(aString);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:61
// [-2] void QXmlStreamStringRef(const QString &) 
// (11)qm755874095 (37)_ZN19QXmlStreamStringRefC2ERK7QString
/*void* qm755874095(const QString & aString)*/{
  const QString & aString = *(const QString *)this_;
  this_ =  new QXmlStreamStringRef(aString);
  this_ =  new MyQXmlStreamStringRef(aString);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:62
// [-2] void QXmlStreamStringRef(QString &&) 
// (12)qm1938220457 (36)_ZN19QXmlStreamStringRefC2EO7QString
/*void* qm1938220457(QString && aString)*/{
  QString && aString =  static_cast<QString &&>(*(QString *)this_);
  this_ =  new QXmlStreamStringRef(aString);
  this_ =  new MyQXmlStreamStringRef(aString);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:65
// [-2] void QXmlStreamStringRef(const QXmlStreamStringRef &) 
// (11)qm532697700 (31)_ZN19QXmlStreamStringRefC2ERKS_
/*void* qm532697700(const QXmlStreamStringRef & other)*/{
  const QXmlStreamStringRef & other = *(const QXmlStreamStringRef *)this_;
  this_ =  new QXmlStreamStringRef(other);
  this_ =  new MyQXmlStreamStringRef(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:67
// [-2] void QXmlStreamStringRef(QXmlStreamStringRef &&) 
// (12)qm2330500859 (30)_ZN19QXmlStreamStringRefC2EOS_
/*void* qm2330500859(QXmlStreamStringRef && other)*/{
  QXmlStreamStringRef && other =  static_cast<QXmlStreamStringRef &&>(*(QXmlStreamStringRef *)this_);
  this_ =  new QXmlStreamStringRef(other);
  this_ =  new MyQXmlStreamStringRef(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:69
// [16] QXmlStreamStringRef & operator=(QXmlStreamStringRef &&) 
// (12)qm1692296251 (30)_ZN19QXmlStreamStringRefaSEOS_
//static
/*void qm1692296251(QXmlStreamStringRef && other)*/ {
  QXmlStreamStringRef && other =  static_cast<QXmlStreamStringRef &&>(*(QXmlStreamStringRef *)this_);
  (void) ((QXmlStreamStringRef*)this_)->operator=(other);
  // auto xptr = (QXmlStreamStringRef & (QXmlStreamStringRef::*)(QXmlStreamStringRef&&) ) &QXmlStreamStringRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:71
// [16] QXmlStreamStringRef & operator=(const QXmlStreamStringRef &) 
// (12)qm2219484718 (31)_ZN19QXmlStreamStringRefaSERKS_
//static
/*void qm2219484718(const QXmlStreamStringRef & other)*/ {
  const QXmlStreamStringRef & other = *(const QXmlStreamStringRef *)this_;
  (void) ((QXmlStreamStringRef*)this_)->operator=(other);
  // auto xptr = (QXmlStreamStringRef & (QXmlStreamStringRef::*)(QXmlStreamStringRef const&) ) &QXmlStreamStringRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:73
// [-2] void ~QXmlStreamStringRef() 
// (12)qm4163593106 (28)_ZN19QXmlStreamStringRefD2Ev
/*void qm4163593106 (void *this_)*/ {
  delete (QXmlStreamStringRef*)(this_);
}
// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:78
// [-2] void swap(QXmlStreamStringRef &) 
// (12)qm3369299494 (33)_ZN19QXmlStreamStringRef4swapERS_
//static
/*void qm3369299494(QXmlStreamStringRef & other)*/ {
  QXmlStreamStringRef & other = *(QXmlStreamStringRef *)this_;
  (void) ((QXmlStreamStringRef*)this_)->swap(other);
   auto xptr = (void (QXmlStreamStringRef::*)(QXmlStreamStringRef&) ) &QXmlStreamStringRef::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:85
// [-2] void clear() 
// (12)qm3149303229 (32)_ZN19QXmlStreamStringRef5clearEv
//static
/*void qm3149303229()*/ {
  ;
  (void) ((QXmlStreamStringRef*)this_)->clear();
   auto xptr = (void (QXmlStreamStringRef::*)() ) &QXmlStreamStringRef::clear;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:87
// [8] const QString * string() const
// (11)qm148506262 (34)_ZNK19QXmlStreamStringRef6stringEv
//static
/*void qm148506262()*/ {
  ;
  (void) ((QXmlStreamStringRef*)this_)->string();
   auto xptr = (const QString * (QXmlStreamStringRef::*)() const ) &QXmlStreamStringRef::string;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:88
// [4] int position() const
// (11)qm544248828 (36)_ZNK19QXmlStreamStringRef8positionEv
//static
/*void qm544248828()*/ {
  ;
  (void) ((QXmlStreamStringRef*)this_)->position();
   auto xptr = (int (QXmlStreamStringRef::*)() const ) &QXmlStreamStringRef::position;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:89
// [4] int size() const
// (12)qm1015360606 (32)_ZNK19QXmlStreamStringRef4sizeEv
//static
/*void qm1015360606()*/ {
  ;
  (void) ((QXmlStreamStringRef*)this_)->size();
   auto xptr = (int (QXmlStreamStringRef::*)() const ) &QXmlStreamStringRef::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qxmlstreamstringref
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
