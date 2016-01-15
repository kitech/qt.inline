// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qtimeline.h
// dst-file: /src/core/qtimeline.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qtimeline.h>

extern "C" {

int QTimeLine_Class_Size()
{
  return sizeof(QTimeLine);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtimeline_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QTimeLine_SlotProxy here
class QTimeLine_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTimeLine_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qtimeline.moc"

extern "C" {
  QTimeLine_SlotProxy* QTimeLine_SlotProxy_new()
  {
    return new QTimeLine_SlotProxy();
  }
};

// <= body block end

