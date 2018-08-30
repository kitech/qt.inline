//  header block begin
// since 0x050800
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QPointingDeviceUniqueId is pure virtual: false
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

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:809
// [-2] void QPointingDeviceUniqueId()
extern "C" Q_DECL_EXPORT
void* C_ZN23QPointingDeviceUniqueIdC2Ev() {
  return  new QPointingDeviceUniqueId();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:813
// [8] QPointingDeviceUniqueId fromNumericId(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN23QPointingDeviceUniqueId13fromNumericIdEx(qint64 id) {
  auto rv = QPointingDeviceUniqueId::fromNumericId(id);
return new QPointingDeviceUniqueId(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:815
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK23QPointingDeviceUniqueId7isValidEv(void *this_) {
  return (bool)((QPointingDeviceUniqueId*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:816
// [8] qint64 numericId()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK23QPointingDeviceUniqueId9numericIdEv(void *this_) {
  return (qint64)((QPointingDeviceUniqueId*)this_)->numericId();
}


extern "C" Q_DECL_EXPORT
void C_ZN23QPointingDeviceUniqueIdD2Ev(void *this_) {
  delete (QPointingDeviceUniqueId*)(this_);
}
//  main block end
