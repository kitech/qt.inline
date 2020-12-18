//  header block begin

// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamAttribute is pure virtual: false false
// QXmlStreamAttribute has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQXmlStreamAttribute_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQXmlStreamAttribute_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQXmlStreamAttribute_t qt_meta_stringdata_MyQXmlStreamAttribute = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQXmlStreamAttribute"
  },
  "MyQXmlStreamAttribute"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQXmlStreamAttribute[] = {
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
class Q_DECL_EXPORT MyQXmlStreamAttribute : public QXmlStreamAttribute {
public:
  virtual ~MyQXmlStreamAttribute() {}
// void QXmlStreamAttribute()
MyQXmlStreamAttribute() : QXmlStreamAttribute() {}
// void QXmlStreamAttribute(const QString &, const QString &)
MyQXmlStreamAttribute(const QString & qualifiedName, const QString & value) : QXmlStreamAttribute(qualifiedName, value) {}
// void QXmlStreamAttribute(const QString &, const QString &, const QString &)
MyQXmlStreamAttribute(const QString & namespaceUri, const QString & name, const QString & value) : QXmlStreamAttribute(namespaceUri, name, value) {}
// void QXmlStreamAttribute(const QXmlStreamAttribute &)
MyQXmlStreamAttribute(const QXmlStreamAttribute & arg0) : QXmlStreamAttribute(arg0) {}
// void QXmlStreamAttribute(QXmlStreamAttribute &&)
MyQXmlStreamAttribute(QXmlStreamAttribute && other) : QXmlStreamAttribute(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qxmlstreamattribute(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:110
// [-2] void QXmlStreamAttribute(QXmlStreamAttribute &&) 
// (11)qm320355471 (30)_ZN19QXmlStreamAttributeC2EOS_
/*void* qm320355471(QXmlStreamAttribute && other)*/{
  QXmlStreamAttribute && other =  static_cast<QXmlStreamAttribute &&>(*(QXmlStreamAttribute *)this_);
  this_ =  new QXmlStreamAttribute(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:120
// [80] QXmlStreamAttribute & operator=(QXmlStreamAttribute &&) 
// (12)qm4247701071 (30)_ZN19QXmlStreamAttributeaSEOS_
//static
/*void qm4247701071(QXmlStreamAttribute && other)*/ {
  QXmlStreamAttribute && other =  static_cast<QXmlStreamAttribute &&>(*(QXmlStreamAttribute *)this_);
  (void) ((QXmlStreamAttribute*)this_)->operator=(other);
  // auto xptr = (QXmlStreamAttribute & (QXmlStreamAttribute::*)(QXmlStreamAttribute&&) ) &QXmlStreamAttribute::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:134
// [16] QStringRef namespaceUri() const
// (12)qm4275090305 (41)_ZNK19QXmlStreamAttribute12namespaceUriEv
//static
/*void qm4275090305()*/ {
  ;
  (void) ((QXmlStreamAttribute*)this_)->namespaceUri();
   auto xptr = (QStringRef (QXmlStreamAttribute::*)() const ) &QXmlStreamAttribute::namespaceUri;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:135
// [16] QStringRef name() const
// (11)qm696409211 (32)_ZNK19QXmlStreamAttribute4nameEv
//static
/*void qm696409211()*/ {
  ;
  (void) ((QXmlStreamAttribute*)this_)->name();
   auto xptr = (QStringRef (QXmlStreamAttribute::*)() const ) &QXmlStreamAttribute::name;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:136
// [16] QStringRef qualifiedName() const
// (12)qm2274804633 (42)_ZNK19QXmlStreamAttribute13qualifiedNameEv
//static
/*void qm2274804633()*/ {
  ;
  (void) ((QXmlStreamAttribute*)this_)->qualifiedName();
   auto xptr = (QStringRef (QXmlStreamAttribute::*)() const ) &QXmlStreamAttribute::qualifiedName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:137
// [16] QStringRef prefix() const
// (12)qm2178916651 (34)_ZNK19QXmlStreamAttribute6prefixEv
//static
/*void qm2178916651()*/ {
  ;
  (void) ((QXmlStreamAttribute*)this_)->prefix();
   auto xptr = (QStringRef (QXmlStreamAttribute::*)() const ) &QXmlStreamAttribute::prefix;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:142
// [16] QStringRef value() const
// (12)qm2506006180 (33)_ZNK19QXmlStreamAttribute5valueEv
//static
/*void qm2506006180()*/ {
  ;
  (void) ((QXmlStreamAttribute*)this_)->value();
   auto xptr = (QStringRef (QXmlStreamAttribute::*)() const ) &QXmlStreamAttribute::value;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:143
// [1] bool isDefault() const
// (11)qm306523775 (37)_ZNK19QXmlStreamAttribute9isDefaultEv
//static
/*void qm306523775()*/ {
  ;
  (void) ((QXmlStreamAttribute*)this_)->isDefault();
   auto xptr = (bool (QXmlStreamAttribute::*)() const ) &QXmlStreamAttribute::isDefault;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:144
// [1] bool operator==(const QXmlStreamAttribute &) const
// (12)qm2924489044 (32)_ZNK19QXmlStreamAttributeeqERKS_
//static
/*void qm2924489044(const QXmlStreamAttribute & other)*/ {
  const QXmlStreamAttribute & other = *(const QXmlStreamAttribute *)this_;
  (void) ((QXmlStreamAttribute*)this_)->operator==(other);
  // auto xptr = (bool (QXmlStreamAttribute::*)(QXmlStreamAttribute const&) const ) &QXmlStreamAttribute::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:149
// [1] bool operator!=(const QXmlStreamAttribute &) const
// (11)qm873479459 (32)_ZNK19QXmlStreamAttributeneERKS_
//static
/*void qm873479459(const QXmlStreamAttribute & other)*/ {
  const QXmlStreamAttribute & other = *(const QXmlStreamAttribute *)this_;
  (void) ((QXmlStreamAttribute*)this_)->operator!=(other);
  // auto xptr = (bool (QXmlStreamAttribute::*)(QXmlStreamAttribute const&) const ) &QXmlStreamAttribute::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QXmlStreamAttributeD2Ev(void *this_)*/ {
  delete (QXmlStreamAttribute*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qxmlstreamattribute
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
