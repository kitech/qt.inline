//  header block begin
// /usr/include/qt/QtCore/qmap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmap.h>
#include <QtCore>
#include "callback_inherit.h"

// QMapNodeBase is pure virtual: false
// QMapNodeBase has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMapNodeBase_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMapNodeBase_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMapNodeBase_t qt_meta_stringdata_MyQMapNodeBase = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQMapNodeBase"
  },
  "MyQMapNodeBase"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMapNodeBase[] = {
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
class Q_DECL_EXPORT MyQMapNodeBase : public QMapNodeBase {
public:
  virtual ~MyQMapNodeBase() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:91
// [8] const QMapNodeBase * nextNode()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMapNodeBase8nextNodeEv(void *this_) {
  return (void*)((QMapNodeBase*)this_)->nextNode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:92
// [8] QMapNodeBase * nextNode()
extern "C" Q_DECL_EXPORT
void* C_ZN12QMapNodeBase8nextNodeEv(void *this_) {
  return (void*)((QMapNodeBase*)this_)->nextNode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:93
// [8] const QMapNodeBase * previousNode()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMapNodeBase12previousNodeEv(void *this_) {
  return (void*)((QMapNodeBase*)this_)->previousNode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:94
// [8] QMapNodeBase * previousNode()
extern "C" Q_DECL_EXPORT
void* C_ZN12QMapNodeBase12previousNodeEv(void *this_) {
  return (void*)((QMapNodeBase*)this_)->previousNode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:96
// [4] QMapNodeBase::Color color()
extern "C" Q_DECL_EXPORT
QMapNodeBase::Color C_ZNK12QMapNodeBase5colorEv(void *this_) {
  return (QMapNodeBase::Color)((QMapNodeBase*)this_)->color();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:97
// [-2] void setColor(QMapNodeBase::Color)
extern "C" Q_DECL_EXPORT
void C_ZN12QMapNodeBase8setColorENS_5ColorE(void *this_, QMapNodeBase::Color c) {
  ((QMapNodeBase*)this_)->setColor(c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:98
// [8] QMapNodeBase * parent()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMapNodeBase6parentEv(void *this_) {
  return (void*)((QMapNodeBase*)this_)->parent();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:99
// [-2] void setParent(QMapNodeBase *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMapNodeBase9setParentEPS_(void *this_, QMapNodeBase * pp) {
  ((QMapNodeBase*)this_)->setParent(pp);
}


extern "C" Q_DECL_EXPORT
void C_ZN12QMapNodeBaseD2Ev(void *this_) {
  delete (QMapNodeBase*)(this_);
}
//  main block end
