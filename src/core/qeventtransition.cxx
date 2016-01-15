// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qeventtransition.h
// dst-file: /src/core/qeventtransition.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qeventtransition.h>

extern "C" {

int QEventTransition_Class_Size()
{
  return sizeof(QEventTransition);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qeventtransition_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QEventTransition_SlotProxy here
class QEventTransition_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QEventTransition_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qeventtransition.moc"

extern "C" {
  QEventTransition_SlotProxy* QEventTransition_SlotProxy_new()
  {
    return new QEventTransition_SlotProxy();
  }
};

// <= body block end

