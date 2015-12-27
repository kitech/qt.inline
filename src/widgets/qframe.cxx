// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qframe.h
// dst-file: /src/widgets/qframe.cxx
//

// header block begin =>
#include <qframe.h>

extern "C" {

int QFrame_Class_Size()
{
  return sizeof(QFrame);
}

// QFrame(class QWidget *, Qt::WindowFlags)
QFrame* dector_ZN6QFrameC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QFrame) == 32, "tyszerr");
  QFrame* rthis = new QFrame(parent, f);
  return rthis;
}

// ~QFrame()
void dedtor_ZN6QFrameD0Ev(QFrame* that)
{
  QFrame* rthis = (QFrame*)that;
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
// QFrame_SlotProxy here
class QFrame_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QFrame_SlotProxy():QObject(){}

};
#include "src/widgets/qframe.moc"

extern "C" {
  QFrame_SlotProxy* QFrame_SlotProxy_new()
  {
    return new QFrame_SlotProxy();
  }
};

// <= body block end

