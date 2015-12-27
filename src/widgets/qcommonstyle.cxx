// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qcommonstyle.h
// dst-file: /src/widgets/qcommonstyle.cxx
//

// header block begin =>
#include <qcommonstyle.h>

extern "C" {

int QCommonStyle_Class_Size()
{
  return sizeof(QCommonStyle);
}

// QCommonStyle()
QCommonStyle* dector_ZN12QCommonStyleC1Ev()
{
  // static_assert(sizeof(QCommonStyle) == 32, "tyszerr");
  QCommonStyle* rthis = new QCommonStyle();
  return rthis;
}

// ~QCommonStyle()
void dedtor_ZN12QCommonStyleD0Ev(QCommonStyle* that)
{
  QCommonStyle* rthis = (QCommonStyle*)that;
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
// QCommonStyle_SlotProxy here
class QCommonStyle_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QCommonStyle_SlotProxy():QObject(){}

};
#include "src/widgets/qcommonstyle.moc"

extern "C" {
  QCommonStyle_SlotProxy* QCommonStyle_SlotProxy_new()
  {
    return new QCommonStyle_SlotProxy();
  }
};

// <= body block end

