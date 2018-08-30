//  header block begin
// since 0x050100
// /usr/include/qt/QtCore/qdebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdebug.h>
#include <QtCore>
#include "callback_inherit.h"

// QDebugStateSaver is pure virtual: false
// QDebugStateSaver has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQDebugStateSaver_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDebugStateSaver_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDebugStateSaver_t qt_meta_stringdata_MyQDebugStateSaver = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQDebugStateSaver"
  },
  "MyQDebugStateSaver"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDebugStateSaver[] = {
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
class Q_DECL_EXPORT MyQDebugStateSaver : public QDebugStateSaver {
public:
  virtual ~MyQDebugStateSaver() {}
// void QDebugStateSaver(QDebug &)
MyQDebugStateSaver(QDebug & dbg) : QDebugStateSaver(dbg) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:180
// [-2] void QDebugStateSaver(QDebug &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDebugStateSaverC2ER6QDebug(QDebug* dbg) {
  return  new QDebugStateSaver(*dbg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:181
// [-2] void ~QDebugStateSaver()
extern "C" Q_DECL_EXPORT
void C_ZN16QDebugStateSaverD2Ev(void *this_) {
  delete (QDebugStateSaver*)(this_);
}
//  main block end
