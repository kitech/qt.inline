//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTableModelChangeEvent is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibletablemodelchangeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:933
// [-2] void QAccessibleTableModelChangeEvent(QObject *, QAccessibleTableModelChangeEvent::ModelChangeType) 
// (12)qm3742335179 (70)_ZN32QAccessibleTableModelChangeEventC2EP7QObjectNS_15ModelChangeTypeE
/*void* qm3742335179(QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType)*/{
  QObject * obj = *(QObject **)this_; QAccessibleTableModelChangeEvent::ModelChangeType changeType = *(QAccessibleTableModelChangeEvent::ModelChangeType*)this_;
  this_ =  new QAccessibleTableModelChangeEvent(obj, changeType);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:940
// [-2] void QAccessibleTableModelChangeEvent(QAccessibleInterface *, QAccessibleTableModelChangeEvent::ModelChangeType) 
// (12)qm2421950558 (84)_ZN32QAccessibleTableModelChangeEventC2EP20QAccessibleInterfaceNS_15ModelChangeTypeE
/*void* qm2421950558(QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType)*/{
  QAccessibleInterface * iface = *(QAccessibleInterface **)this_; QAccessibleTableModelChangeEvent::ModelChangeType changeType = *(QAccessibleTableModelChangeEvent::ModelChangeType*)this_;
  this_ =  new QAccessibleTableModelChangeEvent(iface, changeType);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:950
// [-2] void setModelChangeType(QAccessibleTableModelChangeEvent::ModelChangeType) 
// (12)qm2093877969 (79)_ZN32QAccessibleTableModelChangeEvent18setModelChangeTypeENS_15ModelChangeTypeE
//static
/*void qm2093877969(QAccessibleTableModelChangeEvent::ModelChangeType changeType)*/ {
  QAccessibleTableModelChangeEvent::ModelChangeType changeType = *(QAccessibleTableModelChangeEvent::ModelChangeType*)this_;
  (void) ((QAccessibleTableModelChangeEvent*)this_)->setModelChangeType(changeType);
   auto xptr = (void (QAccessibleTableModelChangeEvent::*)(QAccessibleTableModelChangeEvent::ModelChangeType) ) &QAccessibleTableModelChangeEvent::setModelChangeType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:951
// [4] QAccessibleTableModelChangeEvent::ModelChangeType modelChangeType() const
// (12)qm2839589483 (57)_ZNK32QAccessibleTableModelChangeEvent15modelChangeTypeEv
//static
/*void qm2839589483()*/ {
  ;
  (void) ((QAccessibleTableModelChangeEvent*)this_)->modelChangeType();
   auto xptr = (QAccessibleTableModelChangeEvent::ModelChangeType (QAccessibleTableModelChangeEvent::*)() const ) &QAccessibleTableModelChangeEvent::modelChangeType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:953
// [-2] void setFirstRow(int) 
// (11)qm568047405 (52)_ZN32QAccessibleTableModelChangeEvent11setFirstRowEi
//static
/*void qm568047405(int row)*/ {
  int row = *(int*)this_;
  (void) ((QAccessibleTableModelChangeEvent*)this_)->setFirstRow(row);
   auto xptr = (void (QAccessibleTableModelChangeEvent::*)(int) ) &QAccessibleTableModelChangeEvent::setFirstRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:954
// [-2] void setFirstColumn(int) 
// (12)qm2375400325 (55)_ZN32QAccessibleTableModelChangeEvent14setFirstColumnEi
//static
/*void qm2375400325(int col)*/ {
  int col = *(int*)this_;
  (void) ((QAccessibleTableModelChangeEvent*)this_)->setFirstColumn(col);
   auto xptr = (void (QAccessibleTableModelChangeEvent::*)(int) ) &QAccessibleTableModelChangeEvent::setFirstColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:955
// [-2] void setLastRow(int) 
// (12)qm3244010331 (51)_ZN32QAccessibleTableModelChangeEvent10setLastRowEi
//static
/*void qm3244010331(int row)*/ {
  int row = *(int*)this_;
  (void) ((QAccessibleTableModelChangeEvent*)this_)->setLastRow(row);
   auto xptr = (void (QAccessibleTableModelChangeEvent::*)(int) ) &QAccessibleTableModelChangeEvent::setLastRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:956
// [-2] void setLastColumn(int) 
// (11)qm188754308 (54)_ZN32QAccessibleTableModelChangeEvent13setLastColumnEi
//static
/*void qm188754308(int col)*/ {
  int col = *(int*)this_;
  (void) ((QAccessibleTableModelChangeEvent*)this_)->setLastColumn(col);
   auto xptr = (void (QAccessibleTableModelChangeEvent::*)(int) ) &QAccessibleTableModelChangeEvent::setLastColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:957
// [4] int firstRow() const
// (11)qm973626577 (49)_ZNK32QAccessibleTableModelChangeEvent8firstRowEv
//static
/*void qm973626577()*/ {
  ;
  (void) ((QAccessibleTableModelChangeEvent*)this_)->firstRow();
   auto xptr = (int (QAccessibleTableModelChangeEvent::*)() const ) &QAccessibleTableModelChangeEvent::firstRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:958
// [4] int firstColumn() const
// (12)qm1252949448 (53)_ZNK32QAccessibleTableModelChangeEvent11firstColumnEv
//static
/*void qm1252949448()*/ {
  ;
  (void) ((QAccessibleTableModelChangeEvent*)this_)->firstColumn();
   auto xptr = (int (QAccessibleTableModelChangeEvent::*)() const ) &QAccessibleTableModelChangeEvent::firstColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:959
// [4] int lastRow() const
// (12)qm2994775020 (48)_ZNK32QAccessibleTableModelChangeEvent7lastRowEv
//static
/*void qm2994775020()*/ {
  ;
  (void) ((QAccessibleTableModelChangeEvent*)this_)->lastRow();
   auto xptr = (int (QAccessibleTableModelChangeEvent::*)() const ) &QAccessibleTableModelChangeEvent::lastRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:960
// [4] int lastColumn() const
// (12)qm1246362853 (52)_ZNK32QAccessibleTableModelChangeEvent10lastColumnEv
//static
/*void qm1246362853()*/ {
  ;
  (void) ((QAccessibleTableModelChangeEvent*)this_)->lastColumn();
   auto xptr = (int (QAccessibleTableModelChangeEvent::*)() const ) &QAccessibleTableModelChangeEvent::lastColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN32QAccessibleTableModelChangeEventD2Ev(void *this_)*/ {
  delete (QAccessibleTableModelChangeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibletablemodelchangeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
