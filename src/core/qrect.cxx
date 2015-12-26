// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtCore/qrect.h
// dst-file: /src/core/qrect.cxx
//

// header block begin =>
#include <qrect.h>

extern "C" {

int QRect_Class_Size()
{
  return sizeof(QRect);
}

// QRect(const class QPoint &, const class QPoint &)
QRect* dector_ZN5QRectC1ERK6QPointS2_(const QPoint & topleft, const QPoint & bottomright)
{
  // static_assert(sizeof(QRect) == 32, "tyszerr");
  QRect* rthis = new QRect(topleft, bottomright);
  return rthis;
}

// QRect(const class QPoint &, const class QSize &)
QRect* dector_ZN5QRectC1ERK6QPointRK5QSize(const QPoint & topleft, const QSize & size)
{
  // static_assert(sizeof(QRect) == 32, "tyszerr");
  QRect* rthis = new QRect(topleft, size);
  return rthis;
}

// QRect(int, int, int, int)
QRect* dector_ZN5QRectC1Eiiii(int left, int top, int width, int height)
{
  // static_assert(sizeof(QRect) == 32, "tyszerr");
  QRect* rthis = new QRect(left, top, width, height);
  return rthis;
}

// QRect()
QRect* dector_ZN5QRectC1Ev()
{
  // static_assert(sizeof(QRect) == 32, "tyszerr");
  QRect* rthis = new QRect();
  return rthis;
}

  // proto:  void QRect::moveTo(const QPoint & p);
void demth_ZN5QRect6moveToERK6QPoint(void *that, const QPoint & p)
{
  QRect *cthat = (QRect *)that;
   cthat->moveTo(p);
}

  // proto:  void QRect::moveTopLeft(const QPoint & p);
void demth_ZN5QRect11moveTopLeftERK6QPoint(void *that, const QPoint & p)
{
  QRect *cthat = (QRect *)that;
   cthat->moveTopLeft(p);
}

  // proto:  void QRect::moveRight(int pos);
void demth_ZN5QRect9moveRightEi(void *that, int pos)
{
  QRect *cthat = (QRect *)that;
   cthat->moveRight(pos);
}

  // proto:  void QRect::moveTopRight(const QPoint & p);
void demth_ZN5QRect12moveTopRightERK6QPoint(void *that, const QPoint & p)
{
  QRect *cthat = (QRect *)that;
   cthat->moveTopRight(p);
}

  // proto:  void QRect::setLeft(int pos);
void demth_ZN5QRect7setLeftEi(void *that, int pos)
{
  QRect *cthat = (QRect *)that;
   cthat->setLeft(pos);
}

  // proto:  QRect QRect::intersected(const QRect & other);
QRect* demth_ZNK5QRect11intersectedERKS_(void *that, const QRect & other)
{
  QRect *cthat = (QRect *)that;
  auto recret = cthat->intersected(other);
  return new QRect(recret);
}

  // proto:  bool QRect::contains(int x, int y, bool proper);
bool demth_ZNK5QRect8containsEiib(void *that, int x, int y, bool proper)
{
  QRect *cthat = (QRect *)that;
  return cthat->contains(x, y, proper);
}

  // proto:  QRect QRect::united(const QRect & other);
QRect* demth_ZNK5QRect6unitedERKS_(void *that, const QRect & other)
{
  QRect *cthat = (QRect *)that;
  auto recret = cthat->united(other);
  return new QRect(recret);
}

  // proto:  void QRect::adjust(int x1, int y1, int x2, int y2);
void demth_ZN5QRect6adjustEiiii(void *that, int x1, int y1, int x2, int y2)
{
  QRect *cthat = (QRect *)that;
   cthat->adjust(x1, y1, x2, y2);
}

  // proto:  void QRect::setBottom(int pos);
void demth_ZN5QRect9setBottomEi(void *that, int pos)
{
  QRect *cthat = (QRect *)that;
   cthat->setBottom(pos);
}

  // proto:  void QRect::setSize(const QSize & s);
void demth_ZN5QRect7setSizeERK5QSize(void *that, const QSize & s)
{
  QRect *cthat = (QRect *)that;
   cthat->setSize(s);
}

  // proto:  void QRect::moveBottomLeft(const QPoint & p);
void demth_ZN5QRect14moveBottomLeftERK6QPoint(void *that, const QPoint & p)
{
  QRect *cthat = (QRect *)that;
   cthat->moveBottomLeft(p);
}

  // proto:  void QRect::moveTo(int x, int t);
void demth_ZN5QRect6moveToEii(void *that, int x, int t)
{
  QRect *cthat = (QRect *)that;
   cthat->moveTo(x, t);
}

  // proto:  void QRect::getRect(int * x, int * y, int * w, int * h);
void demth_ZNK5QRect7getRectEPiS0_S0_S0_(void *that, int * x, int * y, int * w, int * h)
{
  QRect *cthat = (QRect *)that;
   cthat->getRect(x, y, w, h);
}

  // proto:  void QRect::translate(int dx, int dy);
void demth_ZN5QRect9translateEii(void *that, int dx, int dy)
{
  QRect *cthat = (QRect *)that;
   cthat->translate(dx, dy);
}

  // proto:  void QRect::setRect(int x, int y, int w, int h);
void demth_ZN5QRect7setRectEiiii(void *that, int x, int y, int w, int h)
{
  QRect *cthat = (QRect *)that;
   cthat->setRect(x, y, w, h);
}

  // proto:  void QRect::moveCenter(const QPoint & p);
void demth_ZN5QRect10moveCenterERK6QPoint(void *that, const QPoint & p)
{
  QRect *cthat = (QRect *)that;
   cthat->moveCenter(p);
}

  // proto:  void QRect::setTopRight(const QPoint & p);
void demth_ZN5QRect11setTopRightERK6QPoint(void *that, const QPoint & p)
{
  QRect *cthat = (QRect *)that;
   cthat->setTopRight(p);
}

  // proto:  void QRect::setCoords(int x1, int y1, int x2, int y2);
void demth_ZN5QRect9setCoordsEiiii(void *that, int x1, int y1, int x2, int y2)
{
  QRect *cthat = (QRect *)that;
   cthat->setCoords(x1, y1, x2, y2);
}

  // proto:  void QRect::translate(const QPoint & p);
void demth_ZN5QRect9translateERK6QPoint(void *that, const QPoint & p)
{
  QRect *cthat = (QRect *)that;
   cthat->translate(p);
}

  // proto:  void QRect::moveBottom(int pos);
void demth_ZN5QRect10moveBottomEi(void *that, int pos)
{
  QRect *cthat = (QRect *)that;
   cthat->moveBottom(pos);
}

  // proto:  void QRect::setBottomLeft(const QPoint & p);
void demth_ZN5QRect13setBottomLeftERK6QPoint(void *that, const QPoint & p)
{
  QRect *cthat = (QRect *)that;
   cthat->setBottomLeft(p);
}

  // proto:  void QRect::getCoords(int * x1, int * y1, int * x2, int * y2);
void demth_ZNK5QRect9getCoordsEPiS0_S0_S0_(void *that, int * x1, int * y1, int * x2, int * y2)
{
  QRect *cthat = (QRect *)that;
   cthat->getCoords(x1, y1, x2, y2);
}

  // proto:  void QRect::setBottomRight(const QPoint & p);
void demth_ZN5QRect14setBottomRightERK6QPoint(void *that, const QPoint & p)
{
  QRect *cthat = (QRect *)that;
   cthat->setBottomRight(p);
}

  // proto:  void QRect::setHeight(int h);
void demth_ZN5QRect9setHeightEi(void *that, int h)
{
  QRect *cthat = (QRect *)that;
   cthat->setHeight(h);
}

  // proto:  bool QRect::contains(int x, int y);
bool demth_ZNK5QRect8containsEii(void *that, int x, int y)
{
  QRect *cthat = (QRect *)that;
  return cthat->contains(x, y);
}

  // proto:  void QRect::moveBottomRight(const QPoint & p);
void demth_ZN5QRect15moveBottomRightERK6QPoint(void *that, const QPoint & p)
{
  QRect *cthat = (QRect *)that;
   cthat->moveBottomRight(p);
}

  // proto:  void QRect::setTop(int pos);
void demth_ZN5QRect6setTopEi(void *that, int pos)
{
  QRect *cthat = (QRect *)that;
   cthat->setTop(pos);
}

  // proto:  void QRect::setWidth(int w);
void demth_ZN5QRect8setWidthEi(void *that, int w)
{
  QRect *cthat = (QRect *)that;
   cthat->setWidth(w);
}

  // proto:  void QRect::setY(int y);
void demth_ZN5QRect4setYEi(void *that, int y)
{
  QRect *cthat = (QRect *)that;
   cthat->setY(y);
}

  // proto:  void QRect::moveTop(int pos);
void demth_ZN5QRect7moveTopEi(void *that, int pos)
{
  QRect *cthat = (QRect *)that;
   cthat->moveTop(pos);
}

  // proto:  void QRect::setX(int x);
void demth_ZN5QRect4setXEi(void *that, int x)
{
  QRect *cthat = (QRect *)that;
   cthat->setX(x);
}

  // proto:  void QRect::setRight(int pos);
void demth_ZN5QRect8setRightEi(void *that, int pos)
{
  QRect *cthat = (QRect *)that;
   cthat->setRight(pos);
}

  // proto:  void QRect::setTopLeft(const QPoint & p);
void demth_ZN5QRect10setTopLeftERK6QPoint(void *that, const QPoint & p)
{
  QRect *cthat = (QRect *)that;
   cthat->setTopLeft(p);
}

  // proto:  void QRect::moveLeft(int pos);
void demth_ZN5QRect8moveLeftEi(void *that, int pos)
{
  QRect *cthat = (QRect *)that;
   cthat->moveLeft(pos);
}

int QRectF_Class_Size()
{
  return sizeof(QRectF);
}

// QRectF()
QRectF* dector_ZN6QRectFC1Ev()
{
  // static_assert(sizeof(QRectF) == 32, "tyszerr");
  QRectF* rthis = new QRectF();
  return rthis;
}

// QRectF(const class QPointF &, const class QPointF &)
QRectF* dector_ZN6QRectFC1ERK7QPointFS2_(const QPointF & topleft, const QPointF & bottomRight)
{
  // static_assert(sizeof(QRectF) == 32, "tyszerr");
  QRectF* rthis = new QRectF(topleft, bottomRight);
  return rthis;
}

// QRectF(const class QPointF &, const class QSizeF &)
QRectF* dector_ZN6QRectFC1ERK7QPointFRK6QSizeF(const QPointF & topleft, const QSizeF & size)
{
  // static_assert(sizeof(QRectF) == 32, "tyszerr");
  QRectF* rthis = new QRectF(topleft, size);
  return rthis;
}

// QRectF(qreal, qreal, qreal, qreal)
QRectF* dector_ZN6QRectFC1Edddd(double left, double top, double width, double height)
{
  // static_assert(sizeof(QRectF) == 32, "tyszerr");
  QRectF* rthis = new QRectF(left, top, width, height);
  return rthis;
}

// QRectF(const class QRect &)
QRectF* dector_ZN6QRectFC1ERK5QRect(const QRect & rect)
{
  // static_assert(sizeof(QRectF) == 32, "tyszerr");
  QRectF* rthis = new QRectF(rect);
  return rthis;
}

  // proto:  void QRectF::moveBottomRight(const QPointF & p);
void demth_ZN6QRectF15moveBottomRightERK7QPointF(void *that, const QPointF & p)
{
  QRectF *cthat = (QRectF *)that;
   cthat->moveBottomRight(p);
}

  // proto:  void QRectF::moveTo(qreal x, qreal y);
void demth_ZN6QRectF6moveToEdd(void *that, double x, double y)
{
  QRectF *cthat = (QRectF *)that;
   cthat->moveTo(x, y);
}

  // proto:  void QRectF::setHeight(qreal h);
void demth_ZN6QRectF9setHeightEd(void *that, double h)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setHeight(h);
}

  // proto:  void QRectF::setSize(const QSizeF & s);
void demth_ZN6QRectF7setSizeERK6QSizeF(void *that, const QSizeF & s)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setSize(s);
}

  // proto:  void QRectF::moveTo(const QPointF & p);
void demth_ZN6QRectF6moveToERK7QPointF(void *that, const QPointF & p)
{
  QRectF *cthat = (QRectF *)that;
   cthat->moveTo(p);
}

  // proto:  void QRectF::setRight(qreal pos);
void demth_ZN6QRectF8setRightEd(void *that, double pos)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setRight(pos);
}

  // proto:  void QRectF::setBottomLeft(const QPointF & p);
void demth_ZN6QRectF13setBottomLeftERK7QPointF(void *that, const QPointF & p)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setBottomLeft(p);
}

  // proto:  void QRectF::adjust(qreal x1, qreal y1, qreal x2, qreal y2);
void demth_ZN6QRectF6adjustEdddd(void *that, double x1, double y1, double x2, double y2)
{
  QRectF *cthat = (QRectF *)that;
   cthat->adjust(x1, y1, x2, y2);
}

  // proto:  void QRectF::moveRight(qreal pos);
void demth_ZN6QRectF9moveRightEd(void *that, double pos)
{
  QRectF *cthat = (QRectF *)that;
   cthat->moveRight(pos);
}

  // proto:  void QRectF::setBottom(qreal pos);
void demth_ZN6QRectF9setBottomEd(void *that, double pos)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setBottom(pos);
}

  // proto:  void QRectF::moveBottomLeft(const QPointF & p);
void demth_ZN6QRectF14moveBottomLeftERK7QPointF(void *that, const QPointF & p)
{
  QRectF *cthat = (QRectF *)that;
   cthat->moveBottomLeft(p);
}

  // proto:  void QRectF::moveBottom(qreal pos);
void demth_ZN6QRectF10moveBottomEd(void *that, double pos)
{
  QRectF *cthat = (QRectF *)that;
   cthat->moveBottom(pos);
}

  // proto:  void QRectF::getRect(qreal * x, qreal * y, qreal * w, qreal * h);
void demth_ZNK6QRectF7getRectEPdS0_S0_S0_(void *that, qreal * x, qreal * y, qreal * w, qreal * h)
{
  QRectF *cthat = (QRectF *)that;
   cthat->getRect(x, y, w, h);
}

  // proto:  void QRectF::setWidth(qreal w);
void demth_ZN6QRectF8setWidthEd(void *that, double w)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setWidth(w);
}

  // proto:  void QRectF::translate(const QPointF & p);
void demth_ZN6QRectF9translateERK7QPointF(void *that, const QPointF & p)
{
  QRectF *cthat = (QRectF *)that;
   cthat->translate(p);
}

  // proto:  void QRectF::moveCenter(const QPointF & p);
void demth_ZN6QRectF10moveCenterERK7QPointF(void *that, const QPointF & p)
{
  QRectF *cthat = (QRectF *)that;
   cthat->moveCenter(p);
}

  // proto:  bool QRectF::contains(qreal x, qreal y);
bool demth_ZNK6QRectF8containsEdd(void *that, double x, double y)
{
  QRectF *cthat = (QRectF *)that;
  return cthat->contains(x, y);
}

  // proto:  void QRectF::setX(qreal pos);
void demth_ZN6QRectF4setXEd(void *that, double pos)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setX(pos);
}

  // proto:  void QRectF::setRect(qreal x, qreal y, qreal w, qreal h);
void demth_ZN6QRectF7setRectEdddd(void *that, double x, double y, double w, double h)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setRect(x, y, w, h);
}

  // proto:  void QRectF::setLeft(qreal pos);
void demth_ZN6QRectF7setLeftEd(void *that, double pos)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setLeft(pos);
}

  // proto:  QRectF QRectF::intersected(const QRectF & other);
QRectF* demth_ZNK6QRectF11intersectedERKS_(void *that, const QRectF & other)
{
  QRectF *cthat = (QRectF *)that;
  auto recret = cthat->intersected(other);
  return new QRectF(recret);
}

  // proto:  void QRectF::setY(qreal pos);
void demth_ZN6QRectF4setYEd(void *that, double pos)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setY(pos);
}

  // proto:  void QRectF::moveTopLeft(const QPointF & p);
void demth_ZN6QRectF11moveTopLeftERK7QPointF(void *that, const QPointF & p)
{
  QRectF *cthat = (QRectF *)that;
   cthat->moveTopLeft(p);
}

  // proto:  void QRectF::setTop(qreal pos);
void demth_ZN6QRectF6setTopEd(void *that, double pos)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setTop(pos);
}

  // proto:  void QRectF::translate(qreal dx, qreal dy);
void demth_ZN6QRectF9translateEdd(void *that, double dx, double dy)
{
  QRectF *cthat = (QRectF *)that;
   cthat->translate(dx, dy);
}

  // proto:  void QRectF::moveLeft(qreal pos);
void demth_ZN6QRectF8moveLeftEd(void *that, double pos)
{
  QRectF *cthat = (QRectF *)that;
   cthat->moveLeft(pos);
}

  // proto:  void QRectF::setTopLeft(const QPointF & p);
void demth_ZN6QRectF10setTopLeftERK7QPointF(void *that, const QPointF & p)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setTopLeft(p);
}

  // proto:  void QRectF::setBottomRight(const QPointF & p);
void demth_ZN6QRectF14setBottomRightERK7QPointF(void *that, const QPointF & p)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setBottomRight(p);
}

  // proto:  void QRectF::getCoords(qreal * x1, qreal * y1, qreal * x2, qreal * y2);
void demth_ZNK6QRectF9getCoordsEPdS0_S0_S0_(void *that, qreal * x1, qreal * y1, qreal * x2, qreal * y2)
{
  QRectF *cthat = (QRectF *)that;
   cthat->getCoords(x1, y1, x2, y2);
}

  // proto:  void QRectF::setTopRight(const QPointF & p);
void demth_ZN6QRectF11setTopRightERK7QPointF(void *that, const QPointF & p)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setTopRight(p);
}

  // proto:  void QRectF::moveTop(qreal pos);
void demth_ZN6QRectF7moveTopEd(void *that, double pos)
{
  QRectF *cthat = (QRectF *)that;
   cthat->moveTop(pos);
}

  // proto:  void QRectF::setCoords(qreal x1, qreal y1, qreal x2, qreal y2);
void demth_ZN6QRectF9setCoordsEdddd(void *that, double x1, double y1, double x2, double y2)
{
  QRectF *cthat = (QRectF *)that;
   cthat->setCoords(x1, y1, x2, y2);
}

  // proto:  void QRectF::moveTopRight(const QPointF & p);
void demth_ZN6QRectF12moveTopRightERK7QPointF(void *that, const QPointF & p)
{
  QRectF *cthat = (QRectF *)that;
   cthat->moveTopRight(p);
}

  // proto:  QRectF QRectF::united(const QRectF & other);
QRectF* demth_ZNK6QRectF6unitedERKS_(void *that, const QRectF & other)
{
  QRectF *cthat = (QRectF *)that;
  auto recret = cthat->united(other);
  return new QRectF(recret);
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

