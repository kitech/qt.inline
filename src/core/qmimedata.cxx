// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qmimedata.h
// dst-file: /src/core/qmimedata.cxx
//

// header block begin =>
#include <qmimedata.h>

extern "C" {

int QMimeData_Class_Size()
{
  return sizeof(QMimeData);
}

// ~QMimeData()
void dedtor_ZN9QMimeDataD0Ev(QMimeData* that)
{
  QMimeData* rthis = (QMimeData*)that;
  delete rthis;
}

// QMimeData()
QMimeData* dector_ZN9QMimeDataC1Ev()
{
  // static_assert(sizeof(QMimeData) == 32, "tyszerr");
  QMimeData* rthis = new QMimeData();
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
// QMimeData_SlotProxy here
class QMimeData_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMimeData_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qmimedata.moc"

extern "C" {
  QMimeData_SlotProxy* QMimeData_SlotProxy_new()
  {
    return new QMimeData_SlotProxy();
  }
};

// <= body block end

