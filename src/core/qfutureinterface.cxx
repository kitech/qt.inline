// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qfutureinterface.h
// dst-file: /src/core/qfutureinterface.cxx
//

// header block begin =>
#include <qfutureinterface.h>

extern "C" {

int QFutureInterfaceBase_Class_Size()
{
  return sizeof(QFutureInterfaceBase);
}

// ~QFutureInterfaceBase()
void dedtor_ZN20QFutureInterfaceBaseD0Ev(QFutureInterfaceBase* that)
{
  QFutureInterfaceBase* rthis = (QFutureInterfaceBase*)that;
  delete rthis;
}

// QFutureInterfaceBase(enum QFutureInterfaceBase::State)
QFutureInterfaceBase* dector_ZN20QFutureInterfaceBaseC1ENS_5StateE(QFutureInterfaceBase::State initialState)
{
  // static_assert(sizeof(QFutureInterfaceBase) == 32, "tyszerr");
  QFutureInterfaceBase* rthis = new QFutureInterfaceBase(initialState);
  return rthis;
}

// QFutureInterfaceBase(const class QFutureInterfaceBase &)
QFutureInterfaceBase* dector_ZN20QFutureInterfaceBaseC1ERKS_(const QFutureInterfaceBase & other)
{
  // static_assert(sizeof(QFutureInterfaceBase) == 32, "tyszerr");
  QFutureInterfaceBase* rthis = new QFutureInterfaceBase(other);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

