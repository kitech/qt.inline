//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QPointingDeviceUniqueId is pure virtual: false false
// QPointingDeviceUniqueId has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPointingDeviceUniqueId_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPointingDeviceUniqueId_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPointingDeviceUniqueId_t qt_meta_stringdata_MyQPointingDeviceUniqueId = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQPointingDeviceUniqueId"
  },
  "MyQPointingDeviceUniqueId"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPointingDeviceUniqueId[] = {
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
class Q_DECL_EXPORT MyQPointingDeviceUniqueId : public QPointingDeviceUniqueId {
public:
  virtual ~MyQPointingDeviceUniqueId() {}
// void QPointingDeviceUniqueId()
MyQPointingDeviceUniqueId() : QPointingDeviceUniqueId() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpointingdeviceuniqueid(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:851
// [-2] void QPointingDeviceUniqueId() 
// (12)qm1592284260 (32)_ZN23QPointingDeviceUniqueIdC2Ev
/*void* qm1592284260()*/{
  ;
  this_ =  new QPointingDeviceUniqueId();
  this_ =  new MyQPointingDeviceUniqueId();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:857
// [1] bool isValid() const
// (10)qm42999240 (39)_ZNK23QPointingDeviceUniqueId7isValidEv
//static
/*void qm42999240()*/ {
  ;
  (void) ((QPointingDeviceUniqueId*)this_)->isValid();
   auto xptr = (bool (QPointingDeviceUniqueId::*)() const ) &QPointingDeviceUniqueId::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QPointingDeviceUniqueIdD2Ev(void *this_)*/ {
  delete (QPointingDeviceUniqueId*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpointingdeviceuniqueid
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
