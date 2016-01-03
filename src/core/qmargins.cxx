// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qmargins.h
// dst-file: /src/core/qmargins.cxx
//

// header block begin =>
#include <qmargins.h>

extern "C" {

int QMarginsF_Class_Size()
{
  return sizeof(QMarginsF);
}

// QMarginsF()
QMarginsF* dector_ZN9QMarginsFC1Ev()
{
  // static_assert(sizeof(QMarginsF) == 32, "tyszerr");
  QMarginsF* rthis = new QMarginsF();
  return rthis;
}

// QMarginsF(qreal, qreal, qreal, qreal)
QMarginsF* dector_ZN9QMarginsFC1Edddd(double left, double top, double right, double bottom)
{
  // static_assert(sizeof(QMarginsF) == 32, "tyszerr");
  QMarginsF* rthis = new QMarginsF(left, top, right, bottom);
  return rthis;
}

// QMarginsF(const class QMargins &)
QMarginsF* dector_ZN9QMarginsFC1ERK8QMargins(const QMargins & margins)
{
  // static_assert(sizeof(QMarginsF) == 32, "tyszerr");
  QMarginsF* rthis = new QMarginsF(margins);
  return rthis;
}

  // proto:  QMargins QMarginsF::toMargins();
QMargins* demth_ZNK9QMarginsF9toMarginsEv(void *that)
{
  QMarginsF *cthat = (QMarginsF *)that;
  auto recret = cthat->toMargins();
  return new QMargins(recret);
}

  // proto:  qreal QMarginsF::right();
qreal demth_ZNK9QMarginsF5rightEv(void *that)
{
  QMarginsF *cthat = (QMarginsF *)that;
  return cthat->right();
}

  // proto:  bool QMarginsF::isNull();
bool demth_ZNK9QMarginsF6isNullEv(void *that)
{
  QMarginsF *cthat = (QMarginsF *)that;
  return cthat->isNull();
}

  // proto:  void QMarginsF::setRight(qreal right);
void demth_ZN9QMarginsF8setRightEd(void *that, double right)
{
  QMarginsF *cthat = (QMarginsF *)that;
   cthat->setRight(right);
}

  // proto:  void QMarginsF::setTop(qreal top);
void demth_ZN9QMarginsF6setTopEd(void *that, double top)
{
  QMarginsF *cthat = (QMarginsF *)that;
   cthat->setTop(top);
}

  // proto:  qreal QMarginsF::left();
qreal demth_ZNK9QMarginsF4leftEv(void *that)
{
  QMarginsF *cthat = (QMarginsF *)that;
  return cthat->left();
}

  // proto:  qreal QMarginsF::bottom();
qreal demth_ZNK9QMarginsF6bottomEv(void *that)
{
  QMarginsF *cthat = (QMarginsF *)that;
  return cthat->bottom();
}

  // proto:  void QMarginsF::setBottom(qreal bottom);
void demth_ZN9QMarginsF9setBottomEd(void *that, double bottom)
{
  QMarginsF *cthat = (QMarginsF *)that;
   cthat->setBottom(bottom);
}

  // proto:  qreal QMarginsF::top();
qreal demth_ZNK9QMarginsF3topEv(void *that)
{
  QMarginsF *cthat = (QMarginsF *)that;
  return cthat->top();
}

  // proto:  void QMarginsF::setLeft(qreal left);
void demth_ZN9QMarginsF7setLeftEd(void *that, double left)
{
  QMarginsF *cthat = (QMarginsF *)that;
   cthat->setLeft(left);
}

int QMargins_Class_Size()
{
  return sizeof(QMargins);
}

// QMargins()
QMargins* dector_ZN8QMarginsC1Ev()
{
  // static_assert(sizeof(QMargins) == 32, "tyszerr");
  QMargins* rthis = new QMargins();
  return rthis;
}

// QMargins(int, int, int, int)
QMargins* dector_ZN8QMarginsC1Eiiii(int left, int top, int right, int bottom)
{
  // static_assert(sizeof(QMargins) == 32, "tyszerr");
  QMargins* rthis = new QMargins(left, top, right, bottom);
  return rthis;
}

  // proto:  void QMargins::setLeft(int left);
void demth_ZN8QMargins7setLeftEi(void *that, int left)
{
  QMargins *cthat = (QMargins *)that;
   cthat->setLeft(left);
}

  // proto:  void QMargins::setRight(int right);
void demth_ZN8QMargins8setRightEi(void *that, int right)
{
  QMargins *cthat = (QMargins *)that;
   cthat->setRight(right);
}

  // proto:  int QMargins::left();
int demth_ZNK8QMargins4leftEv(void *that)
{
  QMargins *cthat = (QMargins *)that;
  return cthat->left();
}

  // proto:  int QMargins::top();
int demth_ZNK8QMargins3topEv(void *that)
{
  QMargins *cthat = (QMargins *)that;
  return cthat->top();
}

  // proto:  void QMargins::setTop(int top);
void demth_ZN8QMargins6setTopEi(void *that, int top)
{
  QMargins *cthat = (QMargins *)that;
   cthat->setTop(top);
}

  // proto:  void QMargins::setBottom(int bottom);
void demth_ZN8QMargins9setBottomEi(void *that, int bottom)
{
  QMargins *cthat = (QMargins *)that;
   cthat->setBottom(bottom);
}

  // proto:  int QMargins::right();
int demth_ZNK8QMargins5rightEv(void *that)
{
  QMargins *cthat = (QMargins *)that;
  return cthat->right();
}

  // proto:  int QMargins::bottom();
int demth_ZNK8QMargins6bottomEv(void *that)
{
  QMargins *cthat = (QMargins *)that;
  return cthat->bottom();
}

  // proto:  bool QMargins::isNull();
bool demth_ZNK8QMargins6isNullEv(void *that)
{
  QMargins *cthat = (QMargins *)that;
  return cthat->isNull();
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

