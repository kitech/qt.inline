// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qsize.h
// dst-file: /src/core/qsize.cxx
//

// header block begin =>
#include <qsize.h>

extern "C" {

int QSize_Class_Size()
{
  return sizeof(QSize);
}

// QSize()
QSize* dector_ZN5QSizeC1Ev()
{
  // static_assert(sizeof(QSize) == 32, "tyszerr");
  QSize* rthis = new QSize();
  return rthis;
}

// QSize(int, int)
QSize* dector_ZN5QSizeC1Eii(int w, int h)
{
  // static_assert(sizeof(QSize) == 32, "tyszerr");
  QSize* rthis = new QSize(w, h);
  return rthis;
}

  // proto:  QSize QSize::boundedTo(const QSize & );
QSize* demth_ZNK5QSize9boundedToERKS_(void *that, const QSize & arg1)
{
  QSize *cthat = (QSize *)that;
  auto recret = cthat->boundedTo(arg1);
  return new QSize(recret);
}

  // proto:  bool QSize::isValid();
bool demth_ZNK5QSize7isValidEv(void *that)
{
  QSize *cthat = (QSize *)that;
  return cthat->isValid();
}

  // proto:  bool QSize::isNull();
bool demth_ZNK5QSize6isNullEv(void *that)
{
  QSize *cthat = (QSize *)that;
  return cthat->isNull();
}

  // proto:  QSize QSize::expandedTo(const QSize & );
QSize* demth_ZNK5QSize10expandedToERKS_(void *that, const QSize & arg1)
{
  QSize *cthat = (QSize *)that;
  auto recret = cthat->expandedTo(arg1);
  return new QSize(recret);
}

  // proto:  int QSize::height();
int demth_ZNK5QSize6heightEv(void *that)
{
  QSize *cthat = (QSize *)that;
  return cthat->height();
}

  // proto:  int & QSize::rheight();
int * demth_ZN5QSize7rheightEv(void *that)
{
  QSize *cthat = (QSize *)that;
  return &cthat->rheight();
}

  // proto:  void QSize::scale(const QSize & s, Qt::AspectRatioMode mode);
void demth_ZN5QSize5scaleERKS_N2Qt15AspectRatioModeE(void *that, const QSize & s, Qt::AspectRatioMode mode)
{
  QSize *cthat = (QSize *)that;
   cthat->scale(s, mode);
}

  // proto:  void QSize::scale(int w, int h, Qt::AspectRatioMode mode);
void demth_ZN5QSize5scaleEiiN2Qt15AspectRatioModeE(void *that, int w, int h, Qt::AspectRatioMode mode)
{
  QSize *cthat = (QSize *)that;
   cthat->scale(w, h, mode);
}

  // proto:  int QSize::width();
int demth_ZNK5QSize5widthEv(void *that)
{
  QSize *cthat = (QSize *)that;
  return cthat->width();
}

  // proto:  QSize QSize::transposed();
QSize* demth_ZNK5QSize10transposedEv(void *that)
{
  QSize *cthat = (QSize *)that;
  auto recret = cthat->transposed();
  return new QSize(recret);
}

  // proto:  int & QSize::rwidth();
int * demth_ZN5QSize6rwidthEv(void *that)
{
  QSize *cthat = (QSize *)that;
  return &cthat->rwidth();
}

  // proto:  QSize QSize::scaled(int w, int h, Qt::AspectRatioMode mode);
QSize* demth_ZNK5QSize6scaledEiiN2Qt15AspectRatioModeE(void *that, int w, int h, Qt::AspectRatioMode mode)
{
  QSize *cthat = (QSize *)that;
  auto recret = cthat->scaled(w, h, mode);
  return new QSize(recret);
}

  // proto:  void QSize::setHeight(int h);
void demth_ZN5QSize9setHeightEi(void *that, int h)
{
  QSize *cthat = (QSize *)that;
   cthat->setHeight(h);
}

  // proto:  bool QSize::isEmpty();
bool demth_ZNK5QSize7isEmptyEv(void *that)
{
  QSize *cthat = (QSize *)that;
  return cthat->isEmpty();
}

  // proto:  void QSize::setWidth(int w);
void demth_ZN5QSize8setWidthEi(void *that, int w)
{
  QSize *cthat = (QSize *)that;
   cthat->setWidth(w);
}

int QSizeF_Class_Size()
{
  return sizeof(QSizeF);
}

// QSizeF()
QSizeF* dector_ZN6QSizeFC1Ev()
{
  // static_assert(sizeof(QSizeF) == 32, "tyszerr");
  QSizeF* rthis = new QSizeF();
  return rthis;
}

// QSizeF(const class QSize &)
QSizeF* dector_ZN6QSizeFC1ERK5QSize(const QSize & sz)
{
  // static_assert(sizeof(QSizeF) == 32, "tyszerr");
  QSizeF* rthis = new QSizeF(sz);
  return rthis;
}

// QSizeF(qreal, qreal)
QSizeF* dector_ZN6QSizeFC1Edd(double w, double h)
{
  // static_assert(sizeof(QSizeF) == 32, "tyszerr");
  QSizeF* rthis = new QSizeF(w, h);
  return rthis;
}

  // proto:  qreal & QSizeF::rheight();
qreal * demth_ZN6QSizeF7rheightEv(void *that)
{
  QSizeF *cthat = (QSizeF *)that;
  return &cthat->rheight();
}

  // proto:  QSizeF QSizeF::scaled(qreal w, qreal h, Qt::AspectRatioMode mode);
QSizeF* demth_ZNK6QSizeF6scaledEddN2Qt15AspectRatioModeE(void *that, double w, double h, Qt::AspectRatioMode mode)
{
  QSizeF *cthat = (QSizeF *)that;
  auto recret = cthat->scaled(w, h, mode);
  return new QSizeF(recret);
}

  // proto:  qreal & QSizeF::rwidth();
qreal * demth_ZN6QSizeF6rwidthEv(void *that)
{
  QSizeF *cthat = (QSizeF *)that;
  return &cthat->rwidth();
}

  // proto:  QSizeF QSizeF::transposed();
QSizeF* demth_ZNK6QSizeF10transposedEv(void *that)
{
  QSizeF *cthat = (QSizeF *)that;
  auto recret = cthat->transposed();
  return new QSizeF(recret);
}

  // proto:  bool QSizeF::isValid();
bool demth_ZNK6QSizeF7isValidEv(void *that)
{
  QSizeF *cthat = (QSizeF *)that;
  return cthat->isValid();
}

  // proto:  void QSizeF::setHeight(qreal h);
void demth_ZN6QSizeF9setHeightEd(void *that, double h)
{
  QSizeF *cthat = (QSizeF *)that;
   cthat->setHeight(h);
}

  // proto:  qreal QSizeF::width();
qreal demth_ZNK6QSizeF5widthEv(void *that)
{
  QSizeF *cthat = (QSizeF *)that;
  return cthat->width();
}

  // proto:  bool QSizeF::isNull();
bool demth_ZNK6QSizeF6isNullEv(void *that)
{
  QSizeF *cthat = (QSizeF *)that;
  return cthat->isNull();
}

  // proto:  QSizeF QSizeF::boundedTo(const QSizeF & );
QSizeF* demth_ZNK6QSizeF9boundedToERKS_(void *that, const QSizeF & arg1)
{
  QSizeF *cthat = (QSizeF *)that;
  auto recret = cthat->boundedTo(arg1);
  return new QSizeF(recret);
}

  // proto:  qreal QSizeF::height();
qreal demth_ZNK6QSizeF6heightEv(void *that)
{
  QSizeF *cthat = (QSizeF *)that;
  return cthat->height();
}

  // proto:  void QSizeF::scale(qreal w, qreal h, Qt::AspectRatioMode mode);
void demth_ZN6QSizeF5scaleEddN2Qt15AspectRatioModeE(void *that, double w, double h, Qt::AspectRatioMode mode)
{
  QSizeF *cthat = (QSizeF *)that;
   cthat->scale(w, h, mode);
}

  // proto:  QSizeF QSizeF::expandedTo(const QSizeF & );
QSizeF* demth_ZNK6QSizeF10expandedToERKS_(void *that, const QSizeF & arg1)
{
  QSizeF *cthat = (QSizeF *)that;
  auto recret = cthat->expandedTo(arg1);
  return new QSizeF(recret);
}

  // proto:  bool QSizeF::isEmpty();
bool demth_ZNK6QSizeF7isEmptyEv(void *that)
{
  QSizeF *cthat = (QSizeF *)that;
  return cthat->isEmpty();
}

  // proto:  void QSizeF::setWidth(qreal w);
void demth_ZN6QSizeF8setWidthEd(void *that, double w)
{
  QSizeF *cthat = (QSizeF *)that;
   cthat->setWidth(w);
}

  // proto:  void QSizeF::scale(const QSizeF & s, Qt::AspectRatioMode mode);
void demth_ZN6QSizeF5scaleERKS_N2Qt15AspectRatioModeE(void *that, const QSizeF & s, Qt::AspectRatioMode mode)
{
  QSizeF *cthat = (QSizeF *)that;
   cthat->scale(s, mode);
}

  // proto:  QSize QSizeF::toSize();
QSize* demth_ZNK6QSizeF6toSizeEv(void *that)
{
  QSizeF *cthat = (QSizeF *)that;
  auto recret = cthat->toSize();
  return new QSize(recret);
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

