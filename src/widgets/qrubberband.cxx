// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qrubberband.h
// dst-file: /src/widgets/qrubberband.cxx
//

// header block begin =>
#include <qrubberband.h>

extern "C" {

// QRubberBand(enum QRubberBand::Shape, class QWidget *)
QRubberBand* dector_ZN11QRubberBandC1ENS_5ShapeEP7QWidget(QRubberBand::Shape arg1, QWidget * arg2)
{
  // static_assert(sizeof(QRubberBand) == 32, "tyszerr");
  QRubberBand* rthis = new QRubberBand(arg1, arg2);
  return rthis;
}

// ~QRubberBand()
void dedtor_ZN11QRubberBandD0Ev(QRubberBand* that)
{
  QRubberBand* rthis = (QRubberBand*)that;
  delete rthis;
}

  // proto:  void QRubberBand::move(int x, int y);
void _ZN11QRubberBand4moveEii(void *that, int x, int y)
{
  QRubberBand *cthat = (QRubberBand *)that;
   cthat->move(x, y);
}

  // proto:  void QRubberBand::setGeometry(int x, int y, int w, int h);
void _ZN11QRubberBand11setGeometryEiiii(void *that, int x, int y, int w, int h)
{
  QRubberBand *cthat = (QRubberBand *)that;
   cthat->setGeometry(x, y, w, h);
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

