// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qrubberband.h
// dst-file: /src/widgets/qrubberband.cxx
//

// header block begin =>
#include <qrubberband.h>

extern "C" {

int QRubberBand_Class_Size()
{
  return sizeof(QRubberBand);
}

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

  // proto:  void QRubberBand::resize(const QSize & s);
void demth_ZN11QRubberBand6resizeERK5QSize(void *that, const QSize & s)
{
  QRubberBand *cthat = (QRubberBand *)that;
   cthat->resize(s);
}

  // proto:  void QRubberBand::setGeometry(int x, int y, int w, int h);
void demth_ZN11QRubberBand11setGeometryEiiii(void *that, int x, int y, int w, int h)
{
  QRubberBand *cthat = (QRubberBand *)that;
   cthat->setGeometry(x, y, w, h);
}

  // proto:  void QRubberBand::move(const QPoint & p);
void demth_ZN11QRubberBand4moveERK6QPoint(void *that, const QPoint & p)
{
  QRubberBand *cthat = (QRubberBand *)that;
   cthat->move(p);
}

  // proto:  void QRubberBand::move(int x, int y);
void demth_ZN11QRubberBand4moveEii(void *that, int x, int y)
{
  QRubberBand *cthat = (QRubberBand *)that;
   cthat->move(x, y);
}

  // proto:  void QRubberBand::resize(int w, int h);
void demth_ZN11QRubberBand6resizeEii(void *that, int w, int h)
{
  QRubberBand *cthat = (QRubberBand *)that;
   cthat->resize(w, h);
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
// QRubberBand_SlotProxy here
class QRubberBand_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QRubberBand_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qrubberband.moc"

extern "C" {
  QRubberBand_SlotProxy* QRubberBand_SlotProxy_new()
  {
    return new QRubberBand_SlotProxy();
  }
};

// <= body block end

