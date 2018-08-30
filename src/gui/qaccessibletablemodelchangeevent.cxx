//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTableModelChangeEvent is pure virtual: false
// QAccessibleTableModelChangeEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAccessibleTableModelChangeEvent_t {
  QByteArrayData data[1];
  char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleTableModelChangeEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleTableModelChangeEvent_t qt_meta_stringdata_MyQAccessibleTableModelChangeEvent = {
   {
  QT_MOC_LITERAL(0, 0, 34), // "MyQAccessibleTableModelChangeEvent"
  },
  "MyQAccessibleTableModelChangeEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleTableModelChangeEvent[] = {
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
class Q_DECL_EXPORT MyQAccessibleTableModelChangeEvent : public QAccessibleTableModelChangeEvent {
public:
  virtual ~MyQAccessibleTableModelChangeEvent() {}
// void QAccessibleTableModelChangeEvent(QObject *, QAccessibleTableModelChangeEvent::ModelChangeType)
MyQAccessibleTableModelChangeEvent(QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType) : QAccessibleTableModelChangeEvent(obj, changeType) {}
// void QAccessibleTableModelChangeEvent(QAccessibleInterface *, QAccessibleTableModelChangeEvent::ModelChangeType)
MyQAccessibleTableModelChangeEvent(QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType) : QAccessibleTableModelChangeEvent(iface, changeType) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:932
// [-2] void QAccessibleTableModelChangeEvent(QObject *, QAccessibleTableModelChangeEvent::ModelChangeType)
extern "C" Q_DECL_EXPORT
void* C_ZN32QAccessibleTableModelChangeEventC2EP7QObjectNS_15ModelChangeTypeE(QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType) {
  return  new QAccessibleTableModelChangeEvent(obj, changeType);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:939
// [-2] void QAccessibleTableModelChangeEvent(QAccessibleInterface *, QAccessibleTableModelChangeEvent::ModelChangeType)
extern "C" Q_DECL_EXPORT
void* C_ZN32QAccessibleTableModelChangeEventC2EP20QAccessibleInterfaceNS_15ModelChangeTypeE(QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType) {
  return  new QAccessibleTableModelChangeEvent(iface, changeType);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:947
// [-2] void ~QAccessibleTableModelChangeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN32QAccessibleTableModelChangeEventD2Ev(void *this_) {
  delete (QAccessibleTableModelChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:949
// [-2] void setModelChangeType(QAccessibleTableModelChangeEvent::ModelChangeType)
extern "C" Q_DECL_EXPORT
void C_ZN32QAccessibleTableModelChangeEvent18setModelChangeTypeENS_15ModelChangeTypeE(void *this_, QAccessibleTableModelChangeEvent::ModelChangeType changeType) {
  ((QAccessibleTableModelChangeEvent*)this_)->setModelChangeType(changeType);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:950
// [4] QAccessibleTableModelChangeEvent::ModelChangeType modelChangeType()
extern "C" Q_DECL_EXPORT
QAccessibleTableModelChangeEvent::ModelChangeType C_ZNK32QAccessibleTableModelChangeEvent15modelChangeTypeEv(void *this_) {
  return (QAccessibleTableModelChangeEvent::ModelChangeType)((QAccessibleTableModelChangeEvent*)this_)->modelChangeType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:952
// [-2] void setFirstRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN32QAccessibleTableModelChangeEvent11setFirstRowEi(void *this_, int row) {
  ((QAccessibleTableModelChangeEvent*)this_)->setFirstRow(row);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:953
// [-2] void setFirstColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN32QAccessibleTableModelChangeEvent14setFirstColumnEi(void *this_, int col) {
  ((QAccessibleTableModelChangeEvent*)this_)->setFirstColumn(col);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:954
// [-2] void setLastRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN32QAccessibleTableModelChangeEvent10setLastRowEi(void *this_, int row) {
  ((QAccessibleTableModelChangeEvent*)this_)->setLastRow(row);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:955
// [-2] void setLastColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN32QAccessibleTableModelChangeEvent13setLastColumnEi(void *this_, int col) {
  ((QAccessibleTableModelChangeEvent*)this_)->setLastColumn(col);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:956
// [4] int firstRow()
extern "C" Q_DECL_EXPORT
int C_ZNK32QAccessibleTableModelChangeEvent8firstRowEv(void *this_) {
  return (int)((QAccessibleTableModelChangeEvent*)this_)->firstRow();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:957
// [4] int firstColumn()
extern "C" Q_DECL_EXPORT
int C_ZNK32QAccessibleTableModelChangeEvent11firstColumnEv(void *this_) {
  return (int)((QAccessibleTableModelChangeEvent*)this_)->firstColumn();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:958
// [4] int lastRow()
extern "C" Q_DECL_EXPORT
int C_ZNK32QAccessibleTableModelChangeEvent7lastRowEv(void *this_) {
  return (int)((QAccessibleTableModelChangeEvent*)this_)->lastRow();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:959
// [4] int lastColumn()
extern "C" Q_DECL_EXPORT
int C_ZNK32QAccessibleTableModelChangeEvent10lastColumnEv(void *this_) {
  return (int)((QAccessibleTableModelChangeEvent*)this_)->lastColumn();
}

//  main block end
