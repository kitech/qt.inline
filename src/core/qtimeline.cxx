// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qtimeline.h
// dst-file: /src/core/qtimeline.cxx
//

// header block begin =>
#include <qtimeline.h>

extern "C" {

int QTimeLine_Class_Size()
{
  return sizeof(QTimeLine);
}

// ~QTimeLine()
void dedtor_ZN9QTimeLineD0Ev(QTimeLine* that)
{
  QTimeLine* rthis = (QTimeLine*)that;
  delete rthis;
}

// QTimeLine(int, class QObject *)
QTimeLine* dector_ZN9QTimeLineC1EiP7QObject(int duration, QObject * parent)
{
  // static_assert(sizeof(QTimeLine) == 32, "tyszerr");
  QTimeLine* rthis = new QTimeLine(duration, parent);
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
// QTimeLine_SlotProxy here
class QTimeLine_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QTimeLine_SlotProxy():QObject(){}

};
#include "src/core/qtimeline.moc"

extern "C" {
  QTimeLine_SlotProxy* QTimeLine_SlotProxy_new()
  {
    return new QTimeLine_SlotProxy();
  }
};

// <= body block end

