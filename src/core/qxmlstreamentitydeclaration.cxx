//  header block begin

// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamEntityDeclaration is pure virtual: false false
// QXmlStreamEntityDeclaration has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQXmlStreamEntityDeclaration_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQXmlStreamEntityDeclaration_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQXmlStreamEntityDeclaration_t qt_meta_stringdata_MyQXmlStreamEntityDeclaration = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQXmlStreamEntityDeclaration"
  },
  "MyQXmlStreamEntityDeclaration"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQXmlStreamEntityDeclaration[] = {
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
class Q_DECL_EXPORT MyQXmlStreamEntityDeclaration : public QXmlStreamEntityDeclaration {
public:
  virtual ~MyQXmlStreamEntityDeclaration() {}
// void QXmlStreamEntityDeclaration()
MyQXmlStreamEntityDeclaration() : QXmlStreamEntityDeclaration() {}
// void QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration &)
MyQXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration & arg0) : QXmlStreamEntityDeclaration(arg0) {}
// void QXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration &&)
MyQXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration && other) : QXmlStreamEntityDeclaration(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qxmlstreamentitydeclaration(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:284
// [-2] void QXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration &&) 
// (12)qm2115136773 (38)_ZN27QXmlStreamEntityDeclarationC2EOS_
/*void* qm2115136773(QXmlStreamEntityDeclaration && other)*/{
  QXmlStreamEntityDeclaration && other =  static_cast<QXmlStreamEntityDeclaration &&>(*(QXmlStreamEntityDeclaration *)this_);
  this_ =  new QXmlStreamEntityDeclaration(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:295
// [88] QXmlStreamEntityDeclaration & operator=(QXmlStreamEntityDeclaration &&) 
// (12)qm2418317253 (38)_ZN27QXmlStreamEntityDeclarationaSEOS_
//static
/*void qm2418317253(QXmlStreamEntityDeclaration && other)*/ {
  QXmlStreamEntityDeclaration && other =  static_cast<QXmlStreamEntityDeclaration &&>(*(QXmlStreamEntityDeclaration *)this_);
  (void) ((QXmlStreamEntityDeclaration*)this_)->operator=(other);
  // auto xptr = (QXmlStreamEntityDeclaration & (QXmlStreamEntityDeclaration::*)(QXmlStreamEntityDeclaration&&) ) &QXmlStreamEntityDeclaration::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:307
// [16] QStringRef name() const
// (11)qm821469616 (40)_ZNK27QXmlStreamEntityDeclaration4nameEv
//static
/*void qm821469616()*/ {
  ;
  (void) ((QXmlStreamEntityDeclaration*)this_)->name();
   auto xptr = (QStringRef (QXmlStreamEntityDeclaration::*)() const ) &QXmlStreamEntityDeclaration::name;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:308
// [16] QStringRef notationName() const
// (12)qm3910461700 (49)_ZNK27QXmlStreamEntityDeclaration12notationNameEv
//static
/*void qm3910461700()*/ {
  ;
  (void) ((QXmlStreamEntityDeclaration*)this_)->notationName();
   auto xptr = (QStringRef (QXmlStreamEntityDeclaration::*)() const ) &QXmlStreamEntityDeclaration::notationName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:309
// [16] QStringRef systemId() const
// (12)qm1783604340 (44)_ZNK27QXmlStreamEntityDeclaration8systemIdEv
//static
/*void qm1783604340()*/ {
  ;
  (void) ((QXmlStreamEntityDeclaration*)this_)->systemId();
   auto xptr = (QStringRef (QXmlStreamEntityDeclaration::*)() const ) &QXmlStreamEntityDeclaration::systemId;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:310
// [16] QStringRef publicId() const
// (12)qm1268674917 (44)_ZNK27QXmlStreamEntityDeclaration8publicIdEv
//static
/*void qm1268674917()*/ {
  ;
  (void) ((QXmlStreamEntityDeclaration*)this_)->publicId();
   auto xptr = (QStringRef (QXmlStreamEntityDeclaration::*)() const ) &QXmlStreamEntityDeclaration::publicId;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:311
// [16] QStringRef value() const
// (12)qm2582770017 (41)_ZNK27QXmlStreamEntityDeclaration5valueEv
//static
/*void qm2582770017()*/ {
  ;
  (void) ((QXmlStreamEntityDeclaration*)this_)->value();
   auto xptr = (QStringRef (QXmlStreamEntityDeclaration::*)() const ) &QXmlStreamEntityDeclaration::value;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:312
// [1] bool operator==(const QXmlStreamEntityDeclaration &) const
// (12)qm3072644255 (40)_ZNK27QXmlStreamEntityDeclarationeqERKS_
//static
/*void qm3072644255(const QXmlStreamEntityDeclaration & other)*/ {
  const QXmlStreamEntityDeclaration & other = *(const QXmlStreamEntityDeclaration *)this_;
  (void) ((QXmlStreamEntityDeclaration*)this_)->operator==(other);
  // auto xptr = (bool (QXmlStreamEntityDeclaration::*)(QXmlStreamEntityDeclaration const&) const ) &QXmlStreamEntityDeclaration::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:319
// [1] bool operator!=(const QXmlStreamEntityDeclaration &) const
// (11)qm761577704 (40)_ZNK27QXmlStreamEntityDeclarationneERKS_
//static
/*void qm761577704(const QXmlStreamEntityDeclaration & other)*/ {
  const QXmlStreamEntityDeclaration & other = *(const QXmlStreamEntityDeclaration *)this_;
  (void) ((QXmlStreamEntityDeclaration*)this_)->operator!=(other);
  // auto xptr = (bool (QXmlStreamEntityDeclaration::*)(QXmlStreamEntityDeclaration const&) const ) &QXmlStreamEntityDeclaration::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QXmlStreamEntityDeclarationD2Ev(void *this_)*/ {
  delete (QXmlStreamEntityDeclaration*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qxmlstreamentitydeclaration
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
