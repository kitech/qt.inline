// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qshareddata.h
// dst-file: /src/core/qshareddata.cxx
//

// header block begin =>
#include <qshareddata.h>

extern "C" {

int QSharedData_Class_Size()
{
  return sizeof(QSharedData);
}

// QSharedData()
QSharedData* dector_ZN11QSharedDataC1Ev()
{
  // static_assert(sizeof(QSharedData) == 32, "tyszerr");
  QSharedData* rthis = new QSharedData();
  return rthis;
}

// QSharedData(const class QSharedData &)
QSharedData* dector_ZN11QSharedDataC1ERKS_(const QSharedData & arg1)
{
  // static_assert(sizeof(QSharedData) == 32, "tyszerr");
  QSharedData* rthis = new QSharedData(arg1);
  return rthis;
}

  // proto:  void QSharedData::QSharedData();
void demth_ZN11QSharedDataC1Ev(void *that)
{
  QSharedData *cthat = (QSharedData *)that;
  auto _o = new(that) QSharedData();
}

  // proto:  void QSharedData::QSharedData(const QSharedData & );
void demth_ZN11QSharedDataC1ERKS_(void *that, const QSharedData & arg1)
{
  QSharedData *cthat = (QSharedData *)that;
  auto _o = new(that) QSharedData(arg1);
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

