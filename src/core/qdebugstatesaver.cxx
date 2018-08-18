//  header block begin
// since 0x050100
// /usr/include/qt/QtCore/qdebug.h
#ifndef protected
#define protected public
#endif
#include <qdebug.h>
#include <QtCore>
#include "callback_inherit.h"

// QDebugStateSaver is pure virtual: false
// QDebugStateSaver has virtual projected: false
//  header block end

//  main block begin

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
