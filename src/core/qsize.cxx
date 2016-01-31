// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qsize.h
// dst-file: /src/core/qsize.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsize.h>


#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qsize_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 65, column 35>
//   // proto:  QSize QSize::boundedTo(const QSize & );
if (true) {
  auto f = [](QSize flythis, const QSize & arg1) {
    ((QSize*)0)->boundedTo(arg1);
    flythis.boundedTo(arg1);
  };
  if (f == nullptr){}
}
// _ZNK5QSize9boundedToERKS_ boundedTo(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 50, column 34>
//   // proto:  bool QSize::isValid();
if (true) {
  auto f = [](QSize flythis) {
    ((QSize*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK5QSize7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 48, column 34>
//   // proto:  bool QSize::isNull();
if (true) {
  auto f = [](QSize flythis) {
    ((QSize*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK5QSize6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 45, column 22>
//   // proto:  void QSize::QSize();
if (true) {
  auto f = []() {
    new QSize();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 64, column 35>
//   // proto:  QSize QSize::expandedTo(const QSize & );
if (true) {
  auto f = [](QSize flythis, const QSize & arg1) {
    ((QSize*)0)->expandedTo(arg1);
    flythis.expandedTo(arg1);
  };
  if (f == nullptr){}
}
// _ZNK5QSize10expandedToERKS_ expandedTo(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 53, column 33>
//   // proto:  int QSize::height();
if (true) {
  auto f = [](QSize flythis) {
    ((QSize*)0)->height();
    flythis.height();
  };
  if (f == nullptr){}
}
// _ZNK5QSize6heightEv height()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 68, column 42>
//   // proto:  int & QSize::rheight();
if (true) {
  auto f = [](QSize flythis) {
    ((QSize*)0)->rheight();
    flythis.rheight();
  };
  if (f == nullptr){}
}
// _ZN5QSize7rheightEv rheight()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 60, column 17>
//   // proto:  void QSize::scale(const QSize & s, Qt::AspectRatioMode mode);
if (true) {
  auto f = [](QSize flythis, const QSize & arg1, Qt::AspectRatioMode arg2) {
    ((QSize*)0)->scale(arg1, arg2);
    flythis.scale(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN5QSize5scaleERKS_N2Qt15AspectRatioModeE scale(const class QSize &, Qt::AspectRatioMode)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 46, column 22>
//   // proto:  void QSize::QSize(int w, int h);
if (true) {
  auto f = [](int arg1, int arg2) {
    new QSize(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 59, column 17>
//   // proto:  void QSize::scale(int w, int h, Qt::AspectRatioMode mode);
if (true) {
  auto f = [](QSize flythis, int arg1, int arg2, Qt::AspectRatioMode arg3) {
    ((QSize*)0)->scale(arg1, arg2, arg3);
    flythis.scale(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN5QSize5scaleEiiN2Qt15AspectRatioModeE scale(int, int, Qt::AspectRatioMode)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 52, column 33>
//   // proto:  int QSize::width();
if (true) {
  auto f = [](QSize flythis) {
    ((QSize*)0)->width();
    flythis.width();
  };
  if (f == nullptr){}
}
// _ZNK5QSize5widthEv width()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 57, column 35>
//   // proto:  QSize QSize::transposed();
if (true) {
  auto f = [](QSize flythis) {
    ((QSize*)0)->transposed();
    flythis.transposed();
  };
  if (f == nullptr){}
}
// _ZNK5QSize10transposedEv transposed()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 67, column 42>
//   // proto:  int & QSize::rwidth();
if (true) {
  auto f = [](QSize flythis) {
    ((QSize*)0)->rwidth();
    flythis.rwidth();
  };
  if (f == nullptr){}
}
// _ZN5QSize6rwidthEv rwidth()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 61, column 11>
//   // proto:  QSize QSize::scaled(int w, int h, Qt::AspectRatioMode mode);
if (true) {
  auto f = [](QSize flythis, int arg1, int arg2, Qt::AspectRatioMode arg3) {
    ((QSize*)0)->scaled(arg1, arg2, arg3);
    flythis.scaled(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZNK5QSize6scaledEiiN2Qt15AspectRatioModeE scaled(int, int, Qt::AspectRatioMode)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 55, column 42>
//   // proto:  void QSize::setHeight(int h);
if (true) {
  auto f = [](QSize flythis, int arg1) {
    ((QSize*)0)->setHeight(arg1);
    flythis.setHeight(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QSize9setHeightEi setHeight(int)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 49, column 34>
//   // proto:  bool QSize::isEmpty();
if (true) {
  auto f = [](QSize flythis) {
    ((QSize*)0)->isEmpty();
    flythis.isEmpty();
  };
  if (f == nullptr){}
}
// _ZNK5QSize7isEmptyEv isEmpty()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 54, column 42>
//   // proto:  void QSize::setWidth(int w);
if (true) {
  auto f = [](QSize flythis, int arg1) {
    ((QSize*)0)->setWidth(arg1);
    flythis.setWidth(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QSize8setWidthEi setWidth(int)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 228, column 44>
//   // proto:  qreal & QSizeF::rheight();
if (true) {
  auto f = [](QSizeF flythis) {
    ((QSizeF*)0)->rheight();
    flythis.rheight();
  };
  if (f == nullptr){}
}
// _ZN6QSizeF7rheightEv rheight()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 221, column 12>
//   // proto:  QSizeF QSizeF::scaled(qreal w, qreal h, Qt::AspectRatioMode mode);
if (true) {
  auto f = [](QSizeF flythis, qreal arg1, qreal arg2, Qt::AspectRatioMode arg3) {
    ((QSizeF*)0)->scaled(arg1, arg2, arg3);
    flythis.scaled(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZNK6QSizeF6scaledEddN2Qt15AspectRatioModeE scaled(qreal, qreal, Qt::AspectRatioMode)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 227, column 44>
//   // proto:  qreal & QSizeF::rwidth();
if (true) {
  auto f = [](QSizeF flythis) {
    ((QSizeF*)0)->rwidth();
    flythis.rwidth();
  };
  if (f == nullptr){}
}
// _ZN6QSizeF6rwidthEv rwidth()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 217, column 36>
//   // proto:  QSizeF QSizeF::transposed();
if (true) {
  auto f = [](QSizeF flythis) {
    ((QSizeF*)0)->transposed();
    flythis.transposed();
  };
  if (f == nullptr){}
}
// _ZNK6QSizeF10transposedEv transposed()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 210, column 34>
//   // proto:  bool QSizeF::isValid();
if (true) {
  auto f = [](QSizeF flythis) {
    ((QSizeF*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK6QSizeF7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 215, column 42>
//   // proto:  void QSizeF::setHeight(qreal h);
if (true) {
  auto f = [](QSizeF flythis, qreal arg1) {
    ((QSizeF*)0)->setHeight(arg1);
    flythis.setHeight(arg1);
  };
  if (f == nullptr){}
}
// _ZN6QSizeF9setHeightEd setHeight(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 204, column 22>
//   // proto:  void QSizeF::QSizeF();
if (true) {
  auto f = []() {
    new QSizeF();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 212, column 35>
//   // proto:  qreal QSizeF::width();
if (true) {
  auto f = [](QSizeF flythis) {
    ((QSizeF*)0)->width();
    flythis.width();
  };
  if (f == nullptr){}
}
// _ZNK6QSizeF5widthEv width()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 208, column 17>
//   // proto:  bool QSizeF::isNull();
if (true) {
  auto f = [](QSizeF flythis) {
    ((QSizeF*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK6QSizeF6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 225, column 36>
//   // proto:  QSizeF QSizeF::boundedTo(const QSizeF & );
if (true) {
  auto f = [](QSizeF flythis, const QSizeF & arg1) {
    ((QSizeF*)0)->boundedTo(arg1);
    flythis.boundedTo(arg1);
  };
  if (f == nullptr){}
}
// _ZNK6QSizeF9boundedToERKS_ boundedTo(const class QSizeF &)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 213, column 35>
//   // proto:  qreal QSizeF::height();
if (true) {
  auto f = [](QSizeF flythis) {
    ((QSizeF*)0)->height();
    flythis.height();
  };
  if (f == nullptr){}
}
// _ZNK6QSizeF6heightEv height()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 205, column 22>
//   // proto:  void QSizeF::QSizeF(const QSize & sz);
if (true) {
  auto f = [](const QSize & arg1) {
    new QSizeF(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 219, column 17>
//   // proto:  void QSizeF::scale(qreal w, qreal h, Qt::AspectRatioMode mode);
if (true) {
  auto f = [](QSizeF flythis, qreal arg1, qreal arg2, Qt::AspectRatioMode arg3) {
    ((QSizeF*)0)->scale(arg1, arg2, arg3);
    flythis.scale(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN6QSizeF5scaleEddN2Qt15AspectRatioModeE scale(qreal, qreal, Qt::AspectRatioMode)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 224, column 36>
//   // proto:  QSizeF QSizeF::expandedTo(const QSizeF & );
if (true) {
  auto f = [](QSizeF flythis, const QSizeF & arg1) {
    ((QSizeF*)0)->expandedTo(arg1);
    flythis.expandedTo(arg1);
  };
  if (f == nullptr){}
}
// _ZNK6QSizeF10expandedToERKS_ expandedTo(const class QSizeF &)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 209, column 34>
//   // proto:  bool QSizeF::isEmpty();
if (true) {
  auto f = [](QSizeF flythis) {
    ((QSizeF*)0)->isEmpty();
    flythis.isEmpty();
  };
  if (f == nullptr){}
}
// _ZNK6QSizeF7isEmptyEv isEmpty()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 214, column 42>
//   // proto:  void QSizeF::setWidth(qreal w);
if (true) {
  auto f = [](QSizeF flythis, qreal arg1) {
    ((QSizeF*)0)->setWidth(arg1);
    flythis.setWidth(arg1);
  };
  if (f == nullptr){}
}
// _ZN6QSizeF8setWidthEd setWidth(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 220, column 17>
//   // proto:  void QSizeF::scale(const QSizeF & s, Qt::AspectRatioMode mode);
if (true) {
  auto f = [](QSizeF flythis, const QSizeF & arg1, Qt::AspectRatioMode arg2) {
    ((QSizeF*)0)->scale(arg1, arg2);
    flythis.scale(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN6QSizeF5scaleERKS_N2Qt15AspectRatioModeE scale(const class QSizeF &, Qt::AspectRatioMode)
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 243, column 35>
//   // proto:  QSize QSizeF::toSize();
if (true) {
  auto f = [](QSizeF flythis) {
    ((QSizeF*)0)->toSize();
    flythis.toSize();
  };
  if (f == nullptr){}
}
// _ZNK6QSizeF6toSizeEv toSize()
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 206, column 22>
//   // proto:  void QSizeF::QSizeF(qreal w, qreal h);
if (true) {
  auto f = [](qreal arg1, qreal arg2) {
    new QSizeF(arg1, arg2);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSize_Class_Size()
{
  return sizeof(QSize);
}

extern "C"
int QSizeF_Class_Size()
{
  return sizeof(QSizeF);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 65, column 35>
//   // proto:  QSize QSize::boundedTo(const QSize & );
// _ZNK5QSize9boundedToERKS_ boundedTo(const class QSize &)
extern "C"
QSize*
C_ZNK5QSize9boundedToERKS_(void *qthis,
const QSize* arg1) {
  auto ret =
  ((QSize*)qthis)->boundedTo(*((const QSize*)arg1));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 50, column 34>
//   // proto:  bool QSize::isValid();
// _ZNK5QSize7isValidEv isValid()
extern "C"
bool
C_ZNK5QSize7isValidEv(void *qthis) {
  auto ret =
  ((QSize*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 48, column 34>
//   // proto:  bool QSize::isNull();
// _ZNK5QSize6isNullEv isNull()
extern "C"
bool
C_ZNK5QSize6isNullEv(void *qthis) {
  auto ret =
  ((QSize*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 45, column 22>
//   // proto:  void QSize::QSize();
extern "C"
QSize*
C_ZN5QSizeC2Ev() {
  auto ret = new QSize();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 64, column 35>
//   // proto:  QSize QSize::expandedTo(const QSize & );
// _ZNK5QSize10expandedToERKS_ expandedTo(const class QSize &)
extern "C"
QSize*
C_ZNK5QSize10expandedToERKS_(void *qthis,
const QSize* arg1) {
  auto ret =
  ((QSize*)qthis)->expandedTo(*((const QSize*)arg1));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 53, column 33>
//   // proto:  int QSize::height();
// _ZNK5QSize6heightEv height()
extern "C"
int
C_ZNK5QSize6heightEv(void *qthis) {
  auto ret =
  ((QSize*)qthis)->height();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 68, column 42>
//   // proto:  int & QSize::rheight();
// _ZN5QSize7rheightEv rheight()
extern "C"
int
C_ZN5QSize7rheightEv(void *qthis) {
  auto& ret =
  ((QSize*)qthis)->rheight();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 60, column 17>
//   // proto:  void QSize::scale(const QSize & s, Qt::AspectRatioMode mode);
// _ZN5QSize5scaleERKS_N2Qt15AspectRatioModeE scale(const class QSize &, Qt::AspectRatioMode)
extern "C"
void
C_ZN5QSize5scaleERKS_N2Qt15AspectRatioModeE(void *qthis,
const QSize* arg1,
Qt::AspectRatioMode* arg2) {
  ((QSize*)qthis)->scale(*((const QSize*)arg1),
*((Qt::AspectRatioMode*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 46, column 22>
//   // proto:  void QSize::QSize(int w, int h);
extern "C"
QSize*
C_ZN5QSizeC2Eii(int arg1,
int arg2) {
  auto ret = new QSize(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 62, column 11>
//   // proto:  QSize QSize::scaled(const QSize & s, Qt::AspectRatioMode mode);
// _ZNK5QSize6scaledERKS_N2Qt15AspectRatioModeE scaled(const class QSize &, Qt::AspectRatioMode)
extern "C"
QSize*
C_ZNK5QSize6scaledERKS_N2Qt15AspectRatioModeE(void *qthis,
const QSize* arg1,
Qt::AspectRatioMode* arg2) {
  auto ret =
  ((QSize*)qthis)->scaled(*((const QSize*)arg1),
*((Qt::AspectRatioMode*)arg2));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 59, column 17>
//   // proto:  void QSize::scale(int w, int h, Qt::AspectRatioMode mode);
// _ZN5QSize5scaleEiiN2Qt15AspectRatioModeE scale(int, int, Qt::AspectRatioMode)
extern "C"
void
C_ZN5QSize5scaleEiiN2Qt15AspectRatioModeE(void *qthis,
int arg1,
int arg2,
Qt::AspectRatioMode* arg3) {
  ((QSize*)qthis)->scale(arg1,
arg2,
*((Qt::AspectRatioMode*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 52, column 33>
//   // proto:  int QSize::width();
// _ZNK5QSize5widthEv width()
extern "C"
int
C_ZNK5QSize5widthEv(void *qthis) {
  auto ret =
  ((QSize*)qthis)->width();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 57, column 35>
//   // proto:  QSize QSize::transposed();
// _ZNK5QSize10transposedEv transposed()
extern "C"
QSize*
C_ZNK5QSize10transposedEv(void *qthis) {
  auto ret =
  ((QSize*)qthis)->transposed();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 67, column 42>
//   // proto:  int & QSize::rwidth();
// _ZN5QSize6rwidthEv rwidth()
extern "C"
int
C_ZN5QSize6rwidthEv(void *qthis) {
  auto& ret =
  ((QSize*)qthis)->rwidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 61, column 11>
//   // proto:  QSize QSize::scaled(int w, int h, Qt::AspectRatioMode mode);
// _ZNK5QSize6scaledEiiN2Qt15AspectRatioModeE scaled(int, int, Qt::AspectRatioMode)
extern "C"
QSize*
C_ZNK5QSize6scaledEiiN2Qt15AspectRatioModeE(void *qthis,
int arg1,
int arg2,
Qt::AspectRatioMode* arg3) {
  auto ret =
  ((QSize*)qthis)->scaled(arg1,
arg2,
*((Qt::AspectRatioMode*)arg3));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 55, column 42>
//   // proto:  void QSize::setHeight(int h);
// _ZN5QSize9setHeightEi setHeight(int)
extern "C"
void
C_ZN5QSize9setHeightEi(void *qthis,
int arg1) {
  ((QSize*)qthis)->setHeight(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 49, column 34>
//   // proto:  bool QSize::isEmpty();
// _ZNK5QSize7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK5QSize7isEmptyEv(void *qthis) {
  auto ret =
  ((QSize*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 54, column 42>
//   // proto:  void QSize::setWidth(int w);
// _ZN5QSize8setWidthEi setWidth(int)
extern "C"
void
C_ZN5QSize8setWidthEi(void *qthis,
int arg1) {
  ((QSize*)qthis)->setWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 56, column 10>
//   // proto:  void QSize::transpose();
// _ZN5QSize9transposeEv transpose()
extern "C"
void
C_ZN5QSize9transposeEv(void *qthis) {
  ((QSize*)qthis)->transpose();
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 228, column 44>
//   // proto:  qreal & QSizeF::rheight();
// _ZN6QSizeF7rheightEv rheight()
extern "C"
double
C_ZN6QSizeF7rheightEv(void *qthis) {
  auto& ret =
  ((QSizeF*)qthis)->rheight();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 221, column 12>
//   // proto:  QSizeF QSizeF::scaled(qreal w, qreal h, Qt::AspectRatioMode mode);
// _ZNK6QSizeF6scaledEddN2Qt15AspectRatioModeE scaled(qreal, qreal, Qt::AspectRatioMode)
extern "C"
QSizeF*
C_ZNK6QSizeF6scaledEddN2Qt15AspectRatioModeE(void *qthis,
qreal arg1,
qreal arg2,
Qt::AspectRatioMode* arg3) {
  auto ret =
  ((QSizeF*)qthis)->scaled(arg1,
arg2,
*((Qt::AspectRatioMode*)arg3));
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 227, column 44>
//   // proto:  qreal & QSizeF::rwidth();
// _ZN6QSizeF6rwidthEv rwidth()
extern "C"
double
C_ZN6QSizeF6rwidthEv(void *qthis) {
  auto& ret =
  ((QSizeF*)qthis)->rwidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 217, column 36>
//   // proto:  QSizeF QSizeF::transposed();
// _ZNK6QSizeF10transposedEv transposed()
extern "C"
QSizeF*
C_ZNK6QSizeF10transposedEv(void *qthis) {
  auto ret =
  ((QSizeF*)qthis)->transposed();
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 210, column 34>
//   // proto:  bool QSizeF::isValid();
// _ZNK6QSizeF7isValidEv isValid()
extern "C"
bool
C_ZNK6QSizeF7isValidEv(void *qthis) {
  auto ret =
  ((QSizeF*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 215, column 42>
//   // proto:  void QSizeF::setHeight(qreal h);
// _ZN6QSizeF9setHeightEd setHeight(qreal)
extern "C"
void
C_ZN6QSizeF9setHeightEd(void *qthis,
qreal arg1) {
  ((QSizeF*)qthis)->setHeight(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 222, column 12>
//   // proto:  QSizeF QSizeF::scaled(const QSizeF & s, Qt::AspectRatioMode mode);
// _ZNK6QSizeF6scaledERKS_N2Qt15AspectRatioModeE scaled(const class QSizeF &, Qt::AspectRatioMode)
extern "C"
QSizeF*
C_ZNK6QSizeF6scaledERKS_N2Qt15AspectRatioModeE(void *qthis,
const QSizeF* arg1,
Qt::AspectRatioMode* arg2) {
  auto ret =
  ((QSizeF*)qthis)->scaled(*((const QSizeF*)arg1),
*((Qt::AspectRatioMode*)arg2));
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 204, column 22>
//   // proto:  void QSizeF::QSizeF();
extern "C"
QSizeF*
C_ZN6QSizeFC2Ev() {
  auto ret = new QSizeF();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 212, column 35>
//   // proto:  qreal QSizeF::width();
// _ZNK6QSizeF5widthEv width()
extern "C"
double
C_ZNK6QSizeF5widthEv(void *qthis) {
  auto ret =
  ((QSizeF*)qthis)->width();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 208, column 17>
//   // proto:  bool QSizeF::isNull();
// _ZNK6QSizeF6isNullEv isNull()
extern "C"
bool
C_ZNK6QSizeF6isNullEv(void *qthis) {
  auto ret =
  ((QSizeF*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 225, column 36>
//   // proto:  QSizeF QSizeF::boundedTo(const QSizeF & );
// _ZNK6QSizeF9boundedToERKS_ boundedTo(const class QSizeF &)
extern "C"
QSizeF*
C_ZNK6QSizeF9boundedToERKS_(void *qthis,
const QSizeF* arg1) {
  auto ret =
  ((QSizeF*)qthis)->boundedTo(*((const QSizeF*)arg1));
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 213, column 35>
//   // proto:  qreal QSizeF::height();
// _ZNK6QSizeF6heightEv height()
extern "C"
double
C_ZNK6QSizeF6heightEv(void *qthis) {
  auto ret =
  ((QSizeF*)qthis)->height();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 216, column 10>
//   // proto:  void QSizeF::transpose();
// _ZN6QSizeF9transposeEv transpose()
extern "C"
void
C_ZN6QSizeF9transposeEv(void *qthis) {
  ((QSizeF*)qthis)->transpose();
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 205, column 22>
//   // proto:  void QSizeF::QSizeF(const QSize & sz);
extern "C"
QSizeF*
C_ZN6QSizeFC2ERK5QSize(const QSize* arg1) {
  auto ret = new QSizeF(*((const QSize*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 219, column 17>
//   // proto:  void QSizeF::scale(qreal w, qreal h, Qt::AspectRatioMode mode);
// _ZN6QSizeF5scaleEddN2Qt15AspectRatioModeE scale(qreal, qreal, Qt::AspectRatioMode)
extern "C"
void
C_ZN6QSizeF5scaleEddN2Qt15AspectRatioModeE(void *qthis,
qreal arg1,
qreal arg2,
Qt::AspectRatioMode* arg3) {
  ((QSizeF*)qthis)->scale(arg1,
arg2,
*((Qt::AspectRatioMode*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 224, column 36>
//   // proto:  QSizeF QSizeF::expandedTo(const QSizeF & );
// _ZNK6QSizeF10expandedToERKS_ expandedTo(const class QSizeF &)
extern "C"
QSizeF*
C_ZNK6QSizeF10expandedToERKS_(void *qthis,
const QSizeF* arg1) {
  auto ret =
  ((QSizeF*)qthis)->expandedTo(*((const QSizeF*)arg1));
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 209, column 34>
//   // proto:  bool QSizeF::isEmpty();
// _ZNK6QSizeF7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK6QSizeF7isEmptyEv(void *qthis) {
  auto ret =
  ((QSizeF*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 214, column 42>
//   // proto:  void QSizeF::setWidth(qreal w);
// _ZN6QSizeF8setWidthEd setWidth(qreal)
extern "C"
void
C_ZN6QSizeF8setWidthEd(void *qthis,
qreal arg1) {
  ((QSizeF*)qthis)->setWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 220, column 17>
//   // proto:  void QSizeF::scale(const QSizeF & s, Qt::AspectRatioMode mode);
// _ZN6QSizeF5scaleERKS_N2Qt15AspectRatioModeE scale(const class QSizeF &, Qt::AspectRatioMode)
extern "C"
void
C_ZN6QSizeF5scaleERKS_N2Qt15AspectRatioModeE(void *qthis,
const QSizeF* arg1,
Qt::AspectRatioMode* arg2) {
  ((QSizeF*)qthis)->scale(*((const QSizeF*)arg1),
*((Qt::AspectRatioMode*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 243, column 35>
//   // proto:  QSize QSizeF::toSize();
// _ZNK6QSizeF6toSizeEv toSize()
extern "C"
QSize*
C_ZNK6QSizeF6toSizeEv(void *qthis) {
  auto ret =
  ((QSizeF*)qthis)->toSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsize.h', line 206, column 22>
//   // proto:  void QSizeF::QSizeF(qreal w, qreal h);
extern "C"
QSizeF*
C_ZN6QSizeFC2Edd(qreal arg1,
qreal arg2) {
  auto ret = new QSizeF(arg1,
arg2);
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

