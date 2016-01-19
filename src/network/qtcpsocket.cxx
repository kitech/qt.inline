// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
// src-file: /QtNetwork/qtcpsocket.h
// dst-file: /src/network/qtcpsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qtcpsocket.h>

extern "C" {

int QTcpSocket_Class_Size()
{
  return sizeof(QTcpSocket);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtcpsocket_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QTcpSocket_SlotProxy here
class QTcpSocket_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTcpSocket_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/network/qtcpsocket.moc"

extern "C" {
  QTcpSocket_SlotProxy* QTcpSocket_SlotProxy_new()
  {
    return new QTcpSocket_SlotProxy();
  }
};

// <= body block end

