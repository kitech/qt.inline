// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qimageiohandler.h
// dst-file: /src/gui/qimageiohandler.cxx
//

// header block begin =>
#include <qimageiohandler.h>

extern "C" {

int QImageIOHandler_Class_Size()
{
  return sizeof(QImageIOHandler);
}

int QImageIOPlugin_Class_Size()
{
  return sizeof(QImageIOPlugin);
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
// QImageIOPlugin_SlotProxy here
class QImageIOPlugin_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QImageIOPlugin_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qimageiohandler.moc"

extern "C" {
  QImageIOPlugin_SlotProxy* QImageIOPlugin_SlotProxy_new()
  {
    return new QImageIOPlugin_SlotProxy();
  }
};

// <= body block end

