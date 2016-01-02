// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qaccessiblebridge.h
// dst-file: /src/gui/qaccessiblebridge.cxx
//

// header block begin =>
#include <qaccessiblebridge.h>

extern "C" {

int QAccessibleBridgePlugin_Class_Size()
{
  return sizeof(QAccessibleBridgePlugin);
}

int QAccessibleBridge_Class_Size()
{
  return sizeof(QAccessibleBridge);
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
// QAccessibleBridgePlugin_SlotProxy here
class QAccessibleBridgePlugin_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAccessibleBridgePlugin_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qaccessiblebridge.moc"

extern "C" {
  QAccessibleBridgePlugin_SlotProxy* QAccessibleBridgePlugin_SlotProxy_new()
  {
    return new QAccessibleBridgePlugin_SlotProxy();
  }
};

// <= body block end

