// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qsignaltransition.h
// dst-file: /src/core/qsignaltransition.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qsignaltransition.h>

extern "C" {

int QSignalTransition_Class_Size()
{
  return sizeof(QSignalTransition);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsignaltransition_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QSignalTransition_SlotProxy here
class QSignalTransition_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSignalTransition_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsignaltransition.moc"

extern "C" {
  QSignalTransition_SlotProxy* QSignalTransition_SlotProxy_new()
  {
    return new QSignalTransition_SlotProxy();
  }
};

// <= body block end

