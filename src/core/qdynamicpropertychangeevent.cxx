//  header block begin

// /usr/include/qt/QtCore/qcoreevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QDynamicPropertyChangeEvent is pure virtual: false false
// QDynamicPropertyChangeEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDynamicPropertyChangeEvent_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDynamicPropertyChangeEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDynamicPropertyChangeEvent_t qt_meta_stringdata_MyQDynamicPropertyChangeEvent = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQDynamicPropertyChangeEvent"
  },
  "MyQDynamicPropertyChangeEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDynamicPropertyChangeEvent[] = {
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
class Q_DECL_EXPORT MyQDynamicPropertyChangeEvent : public QDynamicPropertyChangeEvent {
public:
  virtual ~MyQDynamicPropertyChangeEvent() {}
// void QDynamicPropertyChangeEvent(const QByteArray &)
MyQDynamicPropertyChangeEvent(const QByteArray & name) : QDynamicPropertyChangeEvent(name) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdynamicpropertychangeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:368
// [8] QByteArray propertyName() const
// (12)qm3727286847 (49)_ZNK27QDynamicPropertyChangeEvent12propertyNameEv
//static
/*void qm3727286847()*/ {
  ;
  (void) ((QDynamicPropertyChangeEvent*)this_)->propertyName();
   auto xptr = (QByteArray (QDynamicPropertyChangeEvent::*)() const ) &QDynamicPropertyChangeEvent::propertyName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QDynamicPropertyChangeEventD2Ev(void *this_)*/ {
  delete (QDynamicPropertyChangeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdynamicpropertychangeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
