//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QIconDragEvent is pure virtual: false
// QIconDragEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQIconDragEvent_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQIconDragEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQIconDragEvent_t qt_meta_stringdata_MyQIconDragEvent = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQIconDragEvent"
  },
  "MyQIconDragEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQIconDragEvent[] = {
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
class Q_DECL_EXPORT MyQIconDragEvent : public QIconDragEvent {
public:
  virtual ~MyQIconDragEvent() {}
// void QIconDragEvent()
MyQIconDragEvent() : QIconDragEvent() {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:485
// [-2] void QIconDragEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN14QIconDragEventC2Ev() {
  return  new QIconDragEvent();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:486
// [-2] void ~QIconDragEvent()
extern "C" Q_DECL_EXPORT
void C_ZN14QIconDragEventD2Ev(void *this_) {
  delete (QIconDragEvent*)(this_);
}
//  main block end
