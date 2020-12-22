//  header block begin

// /usr/include/qt/QtCore/qmetatype.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmetatype.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaType is pure virtual: false false
// QMetaType has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMetaType_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMetaType_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMetaType_t qt_meta_stringdata_MyQMetaType = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQMetaType"
  },
  "MyQMetaType"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMetaType[] = {
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
class Q_DECL_EXPORT MyQMetaType : public QMetaType {
public:
  virtual ~MyQMetaType() {}
// void QMetaType(const int)
MyQMetaType(const int type_) : QMetaType(type_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmetatype(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:576
// [-2] void QMetaType(const int) 
// (12)qm1362329449 (17)_ZN9QMetaTypeC2Ei
/*void* qm1362329449(const int type_)*/{
  const int type_ = *(const int*)this_;
  this_ =  new QMetaType(type_);
  this_ =  new MyQMetaType(type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:577
// [-2] void ~QMetaType() 
// (12)qm1106004517 (17)_ZN9QMetaTypeD2Ev
/*void qm1106004517 (void *this_)*/ {
  delete (QMetaType*)(this_);
}
// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:579
// [1] bool isValid() const
// (12)qm1377593702 (24)_ZNK9QMetaType7isValidEv
//static
/*void qm1377593702()*/ {
  ;
  (void) ((QMetaType*)this_)->isValid();
   auto xptr = (bool (QMetaType::*)() const ) &QMetaType::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:580
// [1] bool isRegistered() const
// (11)qm414588828 (30)_ZNK9QMetaType12isRegisteredEv
//static
/*void qm414588828()*/ {
  ;
  (void) ((QMetaType*)this_)->isRegistered();
   auto xptr = (bool (QMetaType::*)() const ) &QMetaType::isRegistered;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:581
// [4] int id() const
// (12)qm3714552367 (19)_ZNK9QMetaType2idEv
//static
/*void qm3714552367()*/ {
  ;
  (void) ((QMetaType*)this_)->id();
   auto xptr = (int (QMetaType::*)() const ) &QMetaType::id;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:582
// [4] int sizeOf() const
// (12)qm1295354454 (23)_ZNK9QMetaType6sizeOfEv
//static
/*void qm1295354454()*/ {
  ;
  (void) ((QMetaType*)this_)->sizeOf();
   auto xptr = (int (QMetaType::*)() const ) &QMetaType::sizeOf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:583
// [4] QMetaType::TypeFlags flags() const
// (12)qm4061413266 (22)_ZNK9QMetaType5flagsEv
//static
/*void qm4061413266()*/ {
  ;
  (void) ((QMetaType*)this_)->flags();
   auto xptr = (QFlags<QMetaType::TypeFlag> (QMetaType::*)() const ) &QMetaType::flags;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:584
// [8] const QMetaObject * metaObject() const
// (12)qm3403272624 (28)_ZNK9QMetaType10metaObjectEv
//static
/*void qm3403272624()*/ {
  ;
  (void) ((QMetaType*)this_)->metaObject();
   auto xptr = (const QMetaObject * (QMetaType::*)() const ) &QMetaType::metaObject;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:587
// [8] void * create(const void *) const
// (12)qm1200382173 (25)_ZNK9QMetaType6createEPKv
//static
/*void qm1200382173(const void * copy)*/ {
  const void * copy = *(const void **)this_;
  (void) ((QMetaType*)this_)->create(copy);
   auto xptr = (void * (QMetaType::*)(void const*) const ) &QMetaType::create;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:588
// [-2] void destroy(void *) const
// (12)qm3061978813 (25)_ZNK9QMetaType7destroyEPv
//static
/*void qm3061978813(void * data)*/ {
  void * data = *(void **)this_;
  (void) ((QMetaType*)this_)->destroy(data);
   auto xptr = (void (QMetaType::*)(void*) const ) &QMetaType::destroy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:589
// [8] void * construct(void *, const void *) const
// (11)qm267031940 (30)_ZNK9QMetaType9constructEPvPKv
//static
/*void qm267031940(void * where, const void * copy)*/ {
  void * where = *(void **)this_; const void * copy = *(const void **)this_;
  (void) ((QMetaType*)this_)->construct(where, copy);
   auto xptr = (void * (QMetaType::*)(void*, void const*) const ) &QMetaType::construct;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:590
// [-2] void destruct(void *) const
// (12)qm3039771255 (26)_ZNK9QMetaType8destructEPv
//static
/*void qm3039771255(void * data)*/ {
  void * data = *(void **)this_;
  (void) ((QMetaType*)this_)->destruct(data);
   auto xptr = (void (QMetaType::*)(void*) const ) &QMetaType::destruct;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qmetatype
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
