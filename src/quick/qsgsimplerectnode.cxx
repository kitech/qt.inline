// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qsgsimplerectnode.h
// dst-file: /src/quick/qsgsimplerectnode.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsgsimplerectnode.h>


#include <qrect.h>
#include <qcolor.h>
// <= header block end

// main block begin =>
void __keep_qsgsimplerectnode_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimplerectnode.h', line 49, column 17>
//   // proto:  void QSGSimpleRectNode::setRect(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](QSGSimpleRectNode flythis, qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QSGSimpleRectNode*)0)->setRect(arg1, arg2, arg3, arg4);
    flythis.setRect(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN17QSGSimpleRectNode7setRectEdddd setRect(qreal, qreal, qreal, qreal)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSGSimpleRectNode_Class_Size()
{
  return sizeof(QSGSimpleRectNode);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimplerectnode.h', line 46, column 5>
//   // proto:  void QSGSimpleRectNode::QSGSimpleRectNode();
extern "C"
QSGSimpleRectNode*
C_ZN17QSGSimpleRectNodeC2Ev() {
  auto ret = new QSGSimpleRectNode();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimplerectnode.h', line 50, column 12>
//   // proto:  QRectF QSGSimpleRectNode::rect();
// _ZNK17QSGSimpleRectNode4rectEv rect()
extern "C"
QRectF*
C_ZNK17QSGSimpleRectNode4rectEv(void *qthis) {
  auto ret =
  ((QSGSimpleRectNode*)qthis)->rect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimplerectnode.h', line 45, column 5>
//   // proto:  void QSGSimpleRectNode::QSGSimpleRectNode(const QRectF & rect, const QColor & color);
extern "C"
QSGSimpleRectNode*
C_ZN17QSGSimpleRectNodeC2ERK6QRectFRK6QColor(const QRectF* arg1,
const QColor* arg2) {
  auto ret = new QSGSimpleRectNode(*((const QRectF*)arg1), *((const QColor*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimplerectnode.h', line 53, column 12>
//   // proto:  QColor QSGSimpleRectNode::color();
// _ZNK17QSGSimpleRectNode5colorEv color()
extern "C"
QColor*
C_ZNK17QSGSimpleRectNode5colorEv(void *qthis) {
  auto ret =
  ((QSGSimpleRectNode*)qthis)->color();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimplerectnode.h', line 52, column 10>
//   // proto:  void QSGSimpleRectNode::setColor(const QColor & color);
// _ZN17QSGSimpleRectNode8setColorERK6QColor setColor(const class QColor &)
extern "C"
void
C_ZN17QSGSimpleRectNode8setColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QSGSimpleRectNode*)qthis)->setColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimplerectnode.h', line 48, column 10>
//   // proto:  void QSGSimpleRectNode::setRect(const QRectF & rect);
// _ZN17QSGSimpleRectNode7setRectERK6QRectF setRect(const class QRectF &)
extern "C"
void
C_ZN17QSGSimpleRectNode7setRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QSGSimpleRectNode*)qthis)->setRect(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgsimplerectnode.h', line 49, column 17>
//   // proto:  void QSGSimpleRectNode::setRect(qreal x, qreal y, qreal w, qreal h);
// _ZN17QSGSimpleRectNode7setRectEdddd setRect(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN17QSGSimpleRectNode7setRectEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QSGSimpleRectNode*)qthis)->setRect(arg1,
arg2,
arg3,
arg4);
}
// <= ext block end

// body block begin =>
// <= body block end

