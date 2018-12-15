//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QStatusTipEvent is pure virtual: false
// QStatusTipEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStatusTipEvent_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStatusTipEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStatusTipEvent_t qt_meta_stringdata_MyQStatusTipEvent = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQStatusTipEvent"
  },
  "MyQStatusTipEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStatusTipEvent[] = {
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
class Q_DECL_EXPORT MyQStatusTipEvent : public QStatusTipEvent {
public:
  virtual ~MyQStatusTipEvent() {}
// void QStatusTipEvent(const QString &)
MyQStatusTipEvent(const QString & tip) : QStatusTipEvent(tip) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:705
// [-2] void QStatusTipEvent(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QStatusTipEventC2ERK7QString(QString* tip) {
  return  new QStatusTipEvent(*tip);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:706
// [-2] void ~QStatusTipEvent()
extern "C" Q_DECL_EXPORT
void C_ZN15QStatusTipEventD2Ev(void *this_) {
  delete (QStatusTipEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:708
// [8] QString tip()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QStatusTipEvent3tipEv(void *this_) {
  auto rv = ((QStatusTipEvent*)this_)->tip();
return new QString(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
