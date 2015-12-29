// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qfiledevice.h
// dst-file: /src/core/qfiledevice.cxx
//

// header block begin =>
#include <qfiledevice.h>

extern "C" {

int QFileDevice_Class_Size()
{
  return sizeof(QFileDevice);
}

// ~QFileDevice()
void dedtor_ZN11QFileDeviceD0Ev(QFileDevice* that)
{
  QFileDevice* rthis = (QFileDevice*)that;
  delete rthis;
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
// QFileDevice_SlotProxy here
class QFileDevice_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFileDevice_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qfiledevice.moc"

extern "C" {
  QFileDevice_SlotProxy* QFileDevice_SlotProxy_new()
  {
    return new QFileDevice_SlotProxy();
  }
};

// <= body block end

