// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qstate.h
// dst-file: /src/core/qstate.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstate.h>

extern "C" {

int QState_Class_Size()
{
  return sizeof(QState);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qstate_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QState_SlotProxy here
class QState_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QState_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qstate.moc"

extern "C" {
  QState_SlotProxy* QState_SlotProxy_new()
  {
    return new QState_SlotProxy();
  }
};

// <= body block end

