// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qgraphicsitem.h
// dst-file: /src/widgets/qgraphicsitem.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgraphicsitem.h>


#include <qnamespace.h>
#include <qglobal.h>
#include <qfont.h>
#include <qstring.h>
#include <qcolor.h>
#include <qpainterpath.h>
#include <qtextcursor.h>
#include <qrect.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qtransform.h>
#include <qlist.h>
#include <qfontdatabase.h>
#include <qmatrix.h>
#include <qvariant.h>
#include <qcursor.h>
#include <qline.h>
#include <qpen.h>
#include <qbrush.h>
// <= header block end

// main block begin =>
void __keep_qgraphicsitem_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 838, column 17>
//   // proto:  void QGraphicsPixmapItem::setOffset(qreal x, qreal y);
if (true) {
  auto f = [](QGraphicsPixmapItem flythis, qreal arg1, qreal arg2) {
    ((QGraphicsPixmapItem*)0)->setOffset(arg1, arg2);
    flythis.setOffset(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN19QGraphicsPixmapItem9setOffsetEdd setOffset(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 669, column 17>
//   // proto:  void QGraphicsRectItem::setRect(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](QGraphicsRectItem flythis, qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsRectItem*)0)->setRect(arg1, arg2, arg3, arg4);
    flythis.setRect(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN17QGraphicsRectItem7setRectEdddd setRect(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 707, column 17>
//   // proto:  void QGraphicsEllipseItem::setRect(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](QGraphicsEllipseItem flythis, qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsEllipseItem*)0)->setRect(arg1, arg2, arg3, arg4);
    flythis.setRect(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN20QGraphicsEllipseItem7setRectEdddd setRect(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 394, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapFromItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](const QGraphicsItem * arg1, qreal arg2, qreal arg3, qreal arg4, qreal arg5) {
    ((QGraphicsItem*)0)->mapFromItem(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem11mapFromItemEPKS_dddd mapFromItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 395, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapFromParent(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapFromParent(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem13mapFromParentEdddd mapFromParent(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 336, column 17>
//   // proto:  bool QGraphicsItem::isObscured(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->isObscured(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem10isObscuredEdddd isObscured(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 388, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectToItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](const QGraphicsItem * arg1, qreal arg2, qreal arg3, qreal arg4, qreal arg5) {
    ((QGraphicsItem*)0)->mapRectToItem(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem13mapRectToItemEPKS_dddd mapRectToItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 284, column 17>
//   // proto:  void QGraphicsItem::ensureVisible(qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin);
if (true) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4, int arg5, int arg6) {
    ((QGraphicsItem*)0)->ensureVisible(arg1, arg2, arg3, arg4, arg5, arg6);
  };
  if (f == nullptr){}
}
// _ZN13QGraphicsItem13ensureVisibleEddddii ensureVisible(qreal, qreal, qreal, qreal, int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 385, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapToItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](const QGraphicsItem * arg1, qreal arg2, qreal arg3, qreal arg4, qreal arg5) {
    ((QGraphicsItem*)0)->mapToItem(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem9mapToItemEPKS_dddd mapToItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 382, column 20>
//   // proto:  QPointF QGraphicsItem::mapToItem(const QGraphicsItem * item, qreal x, qreal y);
if (true) {
  auto f = [](const QGraphicsItem * arg1, qreal arg2, qreal arg3) {
    ((QGraphicsItem*)0)->mapToItem(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem9mapToItemEPKS_dd mapToItem(const class QGraphicsItem *, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 389, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectToParent(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapRectToParent(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem15mapRectToParentEdddd mapRectToParent(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 347, column 17>
//   // proto:  void QGraphicsItem::update(qreal x, qreal y, qreal width, qreal height);
if (true) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->update(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN13QGraphicsItem6updateEdddd update(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 391, column 20>
//   // proto:  QPointF QGraphicsItem::mapFromItem(const QGraphicsItem * item, qreal x, qreal y);
if (true) {
  auto f = [](const QGraphicsItem * arg1, qreal arg2, qreal arg3) {
    ((QGraphicsItem*)0)->mapFromItem(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem11mapFromItemEPKS_dd mapFromItem(const class QGraphicsItem *, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 392, column 20>
//   // proto:  QPointF QGraphicsItem::mapFromParent(qreal x, qreal y);
if (true) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->mapFromParent(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem13mapFromParentEdd mapFromParent(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 397, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectFromItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](const QGraphicsItem * arg1, qreal arg2, qreal arg3, qreal arg4, qreal arg5) {
    ((QGraphicsItem*)0)->mapRectFromItem(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem15mapRectFromItemEPKS_dddd mapRectFromItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 396, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapFromScene(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapFromScene(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem12mapFromSceneEdddd mapFromScene(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 387, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapToScene(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapToScene(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem10mapToSceneEdddd mapToScene(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 384, column 20>
//   // proto:  QPointF QGraphicsItem::mapToScene(qreal x, qreal y);
if (true) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->mapToScene(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem10mapToSceneEdd mapToScene(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 399, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectFromScene(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapRectFromScene(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem16mapRectFromSceneEdddd mapRectFromScene(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 314, column 17>
//   // proto:  void QGraphicsItem::setTransformOriginPoint(qreal ax, qreal ay);
if (true) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->setTransformOriginPoint(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QGraphicsItem23setTransformOriginPointEdd setTransformOriginPoint(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 281, column 17>
//   // proto:  void QGraphicsItem::moveBy(qreal dx, qreal dy);
if (true) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->moveBy(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QGraphicsItem6moveByEdd moveBy(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 393, column 20>
//   // proto:  QPointF QGraphicsItem::mapFromScene(qreal x, qreal y);
if (true) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->mapFromScene(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem12mapFromSceneEdd mapFromScene(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 386, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapToParent(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapToParent(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem11mapToParentEdddd mapToParent(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 398, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectFromParent(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapRectFromParent(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem17mapRectFromParentEdddd mapRectFromParent(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 216, column 17>
//   // proto:  void QGraphicsItem::show();
if (true) {
  auto f = []() {
    ((QGraphicsItem*)0)->show();
  };
  if (f == nullptr){}
}
// _ZN13QGraphicsItem4showEv show()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 276, column 18>
//   // proto:  qreal QGraphicsItem::y();
if (true) {
  auto f = []() {
    ((QGraphicsItem*)0)->y();
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem1yEv y()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 280, column 17>
//   // proto:  void QGraphicsItem::setPos(qreal x, qreal y);
if (true) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->setPos(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QGraphicsItem6setPosEdd setPos(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 383, column 20>
//   // proto:  QPointF QGraphicsItem::mapToParent(qreal x, qreal y);
if (true) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->mapToParent(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem11mapToParentEdd mapToParent(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 215, column 17>
//   // proto:  void QGraphicsItem::hide();
if (true) {
  auto f = []() {
    ((QGraphicsItem*)0)->hide();
  };
  if (f == nullptr){}
}
// _ZN13QGraphicsItem4hideEv hide()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 390, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectToScene(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapRectToScene(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem14mapRectToSceneEdddd mapRectToScene(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 274, column 18>
//   // proto:  qreal QGraphicsItem::x();
if (true) {
  auto f = []() {
    ((QGraphicsItem*)0)->x();
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsItem1xEv x()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 791, column 17>
//   // proto:  void QGraphicsLineItem::setLine(qreal x1, qreal y1, qreal x2, qreal y2);
if (true) {
  auto f = [](QGraphicsLineItem flythis, qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsLineItem*)0)->setLine(arg1, arg2, arg3, arg4);
    flythis.setLine(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN17QGraphicsLineItem7setLineEdddd setLine(qreal, qreal, qreal, qreal)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGraphicsTextItem_Class_Size()
{
  return sizeof(QGraphicsTextItem);
}

extern "C"
int QGraphicsPixmapItem_Class_Size()
{
  return sizeof(QGraphicsPixmapItem);
}

extern "C"
int QGraphicsRectItem_Class_Size()
{
  return sizeof(QGraphicsRectItem);
}

extern "C"
int QGraphicsEllipseItem_Class_Size()
{
  return sizeof(QGraphicsEllipseItem);
}

extern "C"
int QGraphicsPolygonItem_Class_Size()
{
  return sizeof(QGraphicsPolygonItem);
}

extern "C"
int QGraphicsPathItem_Class_Size()
{
  return sizeof(QGraphicsPathItem);
}

extern "C"
int QGraphicsItem_Class_Size()
{
  return sizeof(QGraphicsItem);
}

extern "C"
int QGraphicsLineItem_Class_Size()
{
  return sizeof(QGraphicsLineItem);
}

extern "C"
int QGraphicsItemGroup_Class_Size()
{
  return sizeof(QGraphicsItemGroup);
}

extern "C"
int QAbstractGraphicsShapeItem_Class_Size()
{
  return sizeof(QAbstractGraphicsShapeItem);
}

extern "C"
int QGraphicsObject_Class_Size()
{
  return sizeof(QGraphicsObject);
}

extern "C"
int QGraphicsSimpleTextItem_Class_Size()
{
  return sizeof(QGraphicsSimpleTextItem);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 915, column 30>
//   // proto:  Qt::TextInteractionFlags QGraphicsTextItem::textInteractionFlags();
// _ZNK17QGraphicsTextItem20textInteractionFlagsEv textInteractionFlags()
extern "C"
QFlags<Qt::TextInteractionFlag>*
C_ZNK17QGraphicsTextItem20textInteractionFlagsEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->textInteractionFlags();
  return new QFlags<Qt::TextInteractionFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 921, column 10>
//   // proto:  bool QGraphicsTextItem::openExternalLinks();
// _ZNK17QGraphicsTextItem17openExternalLinksEv openExternalLinks()
extern "C"
bool
C_ZNK17QGraphicsTextItem17openExternalLinksEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->openExternalLinks();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 907, column 11>
//   // proto:  qreal QGraphicsTextItem::textWidth();
// _ZNK17QGraphicsTextItem9textWidthEv textWidth()
extern "C"
double
C_ZNK17QGraphicsTextItem9textWidthEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->textWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 906, column 10>
//   // proto:  void QGraphicsTextItem::setTextWidth(qreal width);
// _ZN17QGraphicsTextItem12setTextWidthEd setTextWidth(qreal)
extern "C"
void
C_ZN17QGraphicsTextItem12setTextWidthEd(void *qthis,
qreal arg1) {
  ((QGraphicsTextItem*)qthis)->setTextWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 923, column 10>
//   // proto:  void QGraphicsTextItem::setTextCursor(const QTextCursor & cursor);
// _ZN17QGraphicsTextItem13setTextCursorERK11QTextCursor setTextCursor(const class QTextCursor &)
extern "C"
void
C_ZN17QGraphicsTextItem13setTextCursorERK11QTextCursor(void *qthis,
const QTextCursor* arg1) {
  ((QGraphicsTextItem*)qthis)->setTextCursor(*((const QTextCursor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 904, column 9>
//   // proto:  int QGraphicsTextItem::type();
// _ZNK17QGraphicsTextItem4typeEv type()
extern "C"
int
C_ZNK17QGraphicsTextItem4typeEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->type();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 888, column 11>
//   // proto:  QFont QGraphicsTextItem::font();
// _ZNK17QGraphicsTextItem4fontEv font()
extern "C"
QFont*
C_ZNK17QGraphicsTextItem4fontEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->font();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 879, column 14>
//   // proto:  void QGraphicsTextItem::QGraphicsTextItem(const QString & text, QGraphicsItem * parent);
extern "C"
QGraphicsTextItem*
C_ZN17QGraphicsTextItemC2ERK7QStringP13QGraphicsItem(const QString* arg1,
QGraphicsItem * arg2) {
  auto ret = new QGraphicsTextItem(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 873, column 5>
//   // proto:  const QMetaObject * QGraphicsTextItem::metaObject();
// _ZNK17QGraphicsTextItem10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QGraphicsTextItem10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 920, column 10>
//   // proto:  void QGraphicsTextItem::setOpenExternalLinks(bool open);
// _ZN17QGraphicsTextItem20setOpenExternalLinksEb setOpenExternalLinks(_Bool)
extern "C"
void
C_ZN17QGraphicsTextItem20setOpenExternalLinksEb(void *qthis,
bool arg1) {
  ((QGraphicsTextItem*)qthis)->setOpenExternalLinks(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 917, column 10>
//   // proto:  void QGraphicsTextItem::setTabChangesFocus(bool b);
// _ZN17QGraphicsTextItem18setTabChangesFocusEb setTabChangesFocus(_Bool)
extern "C"
void
C_ZN17QGraphicsTextItem18setTabChangesFocusEb(void *qthis,
bool arg1) {
  ((QGraphicsTextItem*)qthis)->setTabChangesFocus(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 882, column 13>
//   // proto:  QString QGraphicsTextItem::toHtml();
// _ZNK17QGraphicsTextItem6toHtmlEv toHtml()
extern "C"
QString*
C_ZNK17QGraphicsTextItem6toHtmlEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->toHtml();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 911, column 10>
//   // proto:  void QGraphicsTextItem::setDocument(QTextDocument * document);
// _ZN17QGraphicsTextItem11setDocumentEP13QTextDocument setDocument(class QTextDocument *)
extern "C"
void
C_ZN17QGraphicsTextItem11setDocumentEP13QTextDocument(void *qthis,
QTextDocument * arg1) {
  ((QGraphicsTextItem*)qthis)->setDocument(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 886, column 10>
//   // proto:  void QGraphicsTextItem::setPlainText(const QString & text);
// _ZN17QGraphicsTextItem12setPlainTextERK7QString setPlainText(const class QString &)
extern "C"
void
C_ZN17QGraphicsTextItem12setPlainTextERK7QString(void *qthis,
const QString* arg1) {
  ((QGraphicsTextItem*)qthis)->setPlainText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 928, column 10>
//   // proto:  void QGraphicsTextItem::linkHovered(const QString & );
// _ZN17QGraphicsTextItem11linkHoveredERK7QString linkHovered(const class QString &)
extern "C"
void
C_ZN17QGraphicsTextItem11linkHoveredERK7QString(void *qthis,
const QString* arg1) {
  ((QGraphicsTextItem*)qthis)->linkHovered(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 898, column 10>
//   // proto:  void QGraphicsTextItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN17QGraphicsTextItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN17QGraphicsTextItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsTextItem*)qthis)->paint(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 889, column 10>
//   // proto:  void QGraphicsTextItem::setFont(const QFont & font);
// _ZN17QGraphicsTextItem7setFontERK5QFont setFont(const class QFont &)
extern "C"
void
C_ZN17QGraphicsTextItem7setFontERK5QFont(void *qthis,
const QFont* arg1) {
  ((QGraphicsTextItem*)qthis)->setFont(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 891, column 10>
//   // proto:  void QGraphicsTextItem::setDefaultTextColor(const QColor & c);
// _ZN17QGraphicsTextItem19setDefaultTextColorERK6QColor setDefaultTextColor(const class QColor &)
extern "C"
void
C_ZN17QGraphicsTextItem19setDefaultTextColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QGraphicsTextItem*)qthis)->setDefaultTextColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 892, column 12>
//   // proto:  QColor QGraphicsTextItem::defaultTextColor();
// _ZNK17QGraphicsTextItem16defaultTextColorEv defaultTextColor()
extern "C"
QColor*
C_ZNK17QGraphicsTextItem16defaultTextColorEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->defaultTextColor();
  return new QColor(ret); // 5
}
//   // proto:  void QGraphicsTextItem::~QGraphicsTextItem();
extern "C"
void C_ZN17QGraphicsTextItemD2Ev(void *qthis) {
  delete (QGraphicsTextItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 895, column 18>
//   // proto:  QPainterPath QGraphicsTextItem::shape();
// _ZNK17QGraphicsTextItem5shapeEv shape()
extern "C"
QPainterPath*
C_ZNK17QGraphicsTextItem5shapeEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->shape();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 927, column 10>
//   // proto:  void QGraphicsTextItem::linkActivated(const QString & );
// _ZN17QGraphicsTextItem13linkActivatedERK7QString linkActivated(const class QString &)
extern "C"
void
C_ZN17QGraphicsTextItem13linkActivatedERK7QString(void *qthis,
const QString* arg1) {
  ((QGraphicsTextItem*)qthis)->linkActivated(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 924, column 17>
//   // proto:  QTextCursor QGraphicsTextItem::textCursor();
// _ZNK17QGraphicsTextItem10textCursorEv textCursor()
extern "C"
QTextCursor*
C_ZNK17QGraphicsTextItem10textCursorEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->textCursor();
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 894, column 12>
//   // proto:  QRectF QGraphicsTextItem::boundingRect();
// _ZNK17QGraphicsTextItem12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK17QGraphicsTextItem12boundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 885, column 13>
//   // proto:  QString QGraphicsTextItem::toPlainText();
// _ZNK17QGraphicsTextItem11toPlainTextEv toPlainText()
extern "C"
QString*
C_ZNK17QGraphicsTextItem11toPlainTextEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->toPlainText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 883, column 10>
//   // proto:  void QGraphicsTextItem::setHtml(const QString & html);
// _ZN17QGraphicsTextItem7setHtmlERK7QString setHtml(const class QString &)
extern "C"
void
C_ZN17QGraphicsTextItem7setHtmlERK7QString(void *qthis,
const QString* arg1) {
  ((QGraphicsTextItem*)qthis)->setHtml(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 918, column 10>
//   // proto:  bool QGraphicsTextItem::tabChangesFocus();
// _ZNK17QGraphicsTextItem15tabChangesFocusEv tabChangesFocus()
extern "C"
bool
C_ZNK17QGraphicsTextItem15tabChangesFocusEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->tabChangesFocus();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 878, column 14>
//   // proto:  void QGraphicsTextItem::QGraphicsTextItem(QGraphicsItem * parent);
extern "C"
QGraphicsTextItem*
C_ZN17QGraphicsTextItemC2EP13QGraphicsItem(QGraphicsItem * arg1) {
  auto ret = new QGraphicsTextItem(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 912, column 20>
//   // proto:  QTextDocument * QGraphicsTextItem::document();
// _ZNK17QGraphicsTextItem8documentEv document()
extern "C"
void*
C_ZNK17QGraphicsTextItem8documentEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->document();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 900, column 10>
//   // proto:  bool QGraphicsTextItem::isObscuredBy(const QGraphicsItem * item);
// _ZNK17QGraphicsTextItem12isObscuredByEPK13QGraphicsItem isObscuredBy(const class QGraphicsItem *)
extern "C"
bool
C_ZNK17QGraphicsTextItem12isObscuredByEPK13QGraphicsItem(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->isObscuredBy(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 901, column 18>
//   // proto:  QPainterPath QGraphicsTextItem::opaqueArea();
// _ZNK17QGraphicsTextItem10opaqueAreaEv opaqueArea()
extern "C"
QPainterPath*
C_ZNK17QGraphicsTextItem10opaqueAreaEv(void *qthis) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->opaqueArea();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 896, column 10>
//   // proto:  bool QGraphicsTextItem::contains(const QPointF & point);
// _ZNK17QGraphicsTextItem8containsERK7QPointF contains(const class QPointF &)
extern "C"
bool
C_ZNK17QGraphicsTextItem8containsERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsTextItem*)qthis)->contains(*((const QPointF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 909, column 10>
//   // proto:  void QGraphicsTextItem::adjustSize();
// _ZN17QGraphicsTextItem10adjustSizeEv adjustSize()
extern "C"
void
C_ZN17QGraphicsTextItem10adjustSizeEv(void *qthis) {
  ((QGraphicsTextItem*)qthis)->adjustSize();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 914, column 10>
//   // proto:  void QGraphicsTextItem::setTextInteractionFlags(Qt::TextInteractionFlags flags);
// _ZN17QGraphicsTextItem23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void
C_ZN17QGraphicsTextItem23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *qthis,
Qt::TextInteractionFlags* arg1) {
  ((QGraphicsTextItem*)qthis)->setTextInteractionFlags(*((Qt::TextInteractionFlags*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 826, column 14>
//   // proto:  void QGraphicsPixmapItem::QGraphicsPixmapItem(QGraphicsItem * parent);
extern "C"
QGraphicsPixmapItem*
C_ZN19QGraphicsPixmapItemC2EP13QGraphicsItem(QGraphicsItem * arg1) {
  auto ret = new QGraphicsPixmapItem(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 827, column 14>
//   // proto:  void QGraphicsPixmapItem::QGraphicsPixmapItem(const QPixmap & pixmap, QGraphicsItem * parent);
extern "C"
QGraphicsPixmapItem*
C_ZN19QGraphicsPixmapItemC2ERK7QPixmapP13QGraphicsItem(const QPixmap* arg1,
QGraphicsItem * arg2) {
  auto ret = new QGraphicsPixmapItem(*((const QPixmap*)arg1),
arg2);
  return ret;
}
//   // proto:  void QGraphicsPixmapItem::~QGraphicsPixmapItem();
extern "C"
void C_ZN19QGraphicsPixmapItemD2Ev(void *qthis) {
  delete (QGraphicsPixmapItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 847, column 18>
//   // proto:  QPainterPath QGraphicsPixmapItem::opaqueArea();
// _ZNK19QGraphicsPixmapItem10opaqueAreaEv opaqueArea()
extern "C"
QPainterPath*
C_ZNK19QGraphicsPixmapItem10opaqueAreaEv(void *qthis) {
  auto ret =
  ((QGraphicsPixmapItem*)qthis)->opaqueArea();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 846, column 10>
//   // proto:  bool QGraphicsPixmapItem::isObscuredBy(const QGraphicsItem * item);
// _ZNK19QGraphicsPixmapItem12isObscuredByEPK13QGraphicsItem isObscuredBy(const class QGraphicsItem *)
extern "C"
bool
C_ZNK19QGraphicsPixmapItem12isObscuredByEPK13QGraphicsItem(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsPixmapItem*)qthis)->isObscuredBy(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 834, column 10>
//   // proto:  void QGraphicsPixmapItem::setTransformationMode(Qt::TransformationMode mode);
// _ZN19QGraphicsPixmapItem21setTransformationModeEN2Qt18TransformationModeE setTransformationMode(Qt::TransformationMode)
extern "C"
void
C_ZN19QGraphicsPixmapItem21setTransformationModeEN2Qt18TransformationModeE(void *qthis,
Qt::TransformationMode* arg1) {
  ((QGraphicsPixmapItem*)qthis)->setTransformationMode(*((Qt::TransformationMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 850, column 9>
//   // proto:  int QGraphicsPixmapItem::type();
// _ZNK19QGraphicsPixmapItem4typeEv type()
extern "C"
int
C_ZNK19QGraphicsPixmapItem4typeEv(void *qthis) {
  auto ret =
  ((QGraphicsPixmapItem*)qthis)->type();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 841, column 18>
//   // proto:  QPainterPath QGraphicsPixmapItem::shape();
// _ZNK19QGraphicsPixmapItem5shapeEv shape()
extern "C"
QPainterPath*
C_ZNK19QGraphicsPixmapItem5shapeEv(void *qthis) {
  auto ret =
  ((QGraphicsPixmapItem*)qthis)->shape();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 830, column 13>
//   // proto:  QPixmap QGraphicsPixmapItem::pixmap();
// _ZNK19QGraphicsPixmapItem6pixmapEv pixmap()
extern "C"
QPixmap*
C_ZNK19QGraphicsPixmapItem6pixmapEv(void *qthis) {
  auto ret =
  ((QGraphicsPixmapItem*)qthis)->pixmap();
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 838, column 17>
//   // proto:  void QGraphicsPixmapItem::setOffset(qreal x, qreal y);
// _ZN19QGraphicsPixmapItem9setOffsetEdd setOffset(qreal, qreal)
extern "C"
void
C_ZN19QGraphicsPixmapItem9setOffsetEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QGraphicsPixmapItem*)qthis)->setOffset(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 853, column 10>
//   // proto:  void QGraphicsPixmapItem::setShapeMode(QGraphicsPixmapItem::ShapeMode mode);
// _ZN19QGraphicsPixmapItem12setShapeModeENS_9ShapeModeE setShapeMode(enum QGraphicsPixmapItem::ShapeMode)
extern "C"
void
C_ZN19QGraphicsPixmapItem12setShapeModeENS_9ShapeModeE(void *qthis,
QGraphicsPixmapItem::ShapeMode arg1) {
  ((QGraphicsPixmapItem*)qthis)->setShapeMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 844, column 10>
//   // proto:  void QGraphicsPixmapItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN19QGraphicsPixmapItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN19QGraphicsPixmapItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsPixmapItem*)qthis)->paint(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 836, column 13>
//   // proto:  QPointF QGraphicsPixmapItem::offset();
// _ZNK19QGraphicsPixmapItem6offsetEv offset()
extern "C"
QPointF*
C_ZNK19QGraphicsPixmapItem6offsetEv(void *qthis) {
  auto ret =
  ((QGraphicsPixmapItem*)qthis)->offset();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 833, column 28>
//   // proto:  Qt::TransformationMode QGraphicsPixmapItem::transformationMode();
// _ZNK19QGraphicsPixmapItem18transformationModeEv transformationMode()
extern "C"
Qt::TransformationMode
C_ZNK19QGraphicsPixmapItem18transformationModeEv(void *qthis) {
  auto ret =
  ((QGraphicsPixmapItem*)qthis)->transformationMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 840, column 12>
//   // proto:  QRectF QGraphicsPixmapItem::boundingRect();
// _ZNK19QGraphicsPixmapItem12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK19QGraphicsPixmapItem12boundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsPixmapItem*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 842, column 10>
//   // proto:  bool QGraphicsPixmapItem::contains(const QPointF & point);
// _ZNK19QGraphicsPixmapItem8containsERK7QPointF contains(const class QPointF &)
extern "C"
bool
C_ZNK19QGraphicsPixmapItem8containsERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsPixmapItem*)qthis)->contains(*((const QPointF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 831, column 10>
//   // proto:  void QGraphicsPixmapItem::setPixmap(const QPixmap & pixmap);
// _ZN19QGraphicsPixmapItem9setPixmapERK7QPixmap setPixmap(const class QPixmap &)
extern "C"
void
C_ZN19QGraphicsPixmapItem9setPixmapERK7QPixmap(void *qthis,
const QPixmap* arg1) {
  ((QGraphicsPixmapItem*)qthis)->setPixmap(*((const QPixmap*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 852, column 15>
//   // proto:  QGraphicsPixmapItem::ShapeMode QGraphicsPixmapItem::shapeMode();
// _ZNK19QGraphicsPixmapItem9shapeModeEv shapeMode()
extern "C"
QGraphicsPixmapItem::ShapeMode
C_ZNK19QGraphicsPixmapItem9shapeModeEv(void *qthis) {
  auto ret =
  ((QGraphicsPixmapItem*)qthis)->shapeMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 837, column 10>
//   // proto:  void QGraphicsPixmapItem::setOffset(const QPointF & offset);
// _ZN19QGraphicsPixmapItem9setOffsetERK7QPointF setOffset(const class QPointF &)
extern "C"
void
C_ZN19QGraphicsPixmapItem9setOffsetERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsPixmapItem*)qthis)->setOffset(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 677, column 10>
//   // proto:  bool QGraphicsRectItem::isObscuredBy(const QGraphicsItem * item);
// _ZNK17QGraphicsRectItem12isObscuredByEPK13QGraphicsItem isObscuredBy(const class QGraphicsItem *)
extern "C"
bool
C_ZNK17QGraphicsRectItem12isObscuredByEPK13QGraphicsItem(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsRectItem*)qthis)->isObscuredBy(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 671, column 12>
//   // proto:  QRectF QGraphicsRectItem::boundingRect();
// _ZNK17QGraphicsRectItem12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK17QGraphicsRectItem12boundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsRectItem*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 681, column 9>
//   // proto:  int QGraphicsRectItem::type();
// _ZNK17QGraphicsRectItem4typeEv type()
extern "C"
int
C_ZNK17QGraphicsRectItem4typeEv(void *qthis) {
  auto ret =
  ((QGraphicsRectItem*)qthis)->type();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 667, column 12>
//   // proto:  QRectF QGraphicsRectItem::rect();
// _ZNK17QGraphicsRectItem4rectEv rect()
extern "C"
QRectF*
C_ZNK17QGraphicsRectItem4rectEv(void *qthis) {
  auto ret =
  ((QGraphicsRectItem*)qthis)->rect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 672, column 18>
//   // proto:  QPainterPath QGraphicsRectItem::shape();
// _ZNK17QGraphicsRectItem5shapeEv shape()
extern "C"
QPainterPath*
C_ZNK17QGraphicsRectItem5shapeEv(void *qthis) {
  auto ret =
  ((QGraphicsRectItem*)qthis)->shape();
  return new QPainterPath(ret); // 5
}
//   // proto:  void QGraphicsRectItem::~QGraphicsRectItem();
extern "C"
void C_ZN17QGraphicsRectItemD2Ev(void *qthis) {
  delete (QGraphicsRectItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 663, column 14>
//   // proto:  void QGraphicsRectItem::QGraphicsRectItem(const QRectF & rect, QGraphicsItem * parent);
extern "C"
QGraphicsRectItem*
C_ZN17QGraphicsRectItemC2ERK6QRectFP13QGraphicsItem(const QRectF* arg1,
QGraphicsItem * arg2) {
  auto ret = new QGraphicsRectItem(*((const QRectF*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 678, column 18>
//   // proto:  QPainterPath QGraphicsRectItem::opaqueArea();
// _ZNK17QGraphicsRectItem10opaqueAreaEv opaqueArea()
extern "C"
QPainterPath*
C_ZNK17QGraphicsRectItem10opaqueAreaEv(void *qthis) {
  auto ret =
  ((QGraphicsRectItem*)qthis)->opaqueArea();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 668, column 10>
//   // proto:  void QGraphicsRectItem::setRect(const QRectF & rect);
// _ZN17QGraphicsRectItem7setRectERK6QRectF setRect(const class QRectF &)
extern "C"
void
C_ZN17QGraphicsRectItem7setRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QGraphicsRectItem*)qthis)->setRect(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 669, column 17>
//   // proto:  void QGraphicsRectItem::setRect(qreal x, qreal y, qreal w, qreal h);
// _ZN17QGraphicsRectItem7setRectEdddd setRect(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN17QGraphicsRectItem7setRectEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QGraphicsRectItem*)qthis)->setRect(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 662, column 14>
//   // proto:  void QGraphicsRectItem::QGraphicsRectItem(QGraphicsItem * parent);
extern "C"
QGraphicsRectItem*
C_ZN17QGraphicsRectItemC2EP13QGraphicsItem(QGraphicsItem * arg1) {
  auto ret = new QGraphicsRectItem(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 673, column 10>
//   // proto:  bool QGraphicsRectItem::contains(const QPointF & point);
// _ZNK17QGraphicsRectItem8containsERK7QPointF contains(const class QPointF &)
extern "C"
bool
C_ZNK17QGraphicsRectItem8containsERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsRectItem*)qthis)->contains(*((const QPointF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 675, column 10>
//   // proto:  void QGraphicsRectItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN17QGraphicsRectItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN17QGraphicsRectItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsRectItem*)qthis)->paint(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 664, column 14>
//   // proto:  void QGraphicsRectItem::QGraphicsRectItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent);
extern "C"
QGraphicsRectItem*
C_ZN17QGraphicsRectItemC2EddddP13QGraphicsItem(qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4,
QGraphicsItem * arg5) {
  auto ret = new QGraphicsRectItem(arg1,
arg2,
arg3,
arg4,
arg5);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 710, column 10>
//   // proto:  void QGraphicsEllipseItem::setStartAngle(int angle);
// _ZN20QGraphicsEllipseItem13setStartAngleEi setStartAngle(int)
extern "C"
void
C_ZN20QGraphicsEllipseItem13setStartAngleEi(void *qthis,
int arg1) {
  ((QGraphicsEllipseItem*)qthis)->setStartAngle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 717, column 10>
//   // proto:  bool QGraphicsEllipseItem::contains(const QPointF & point);
// _ZNK20QGraphicsEllipseItem8containsERK7QPointF contains(const class QPointF &)
extern "C"
bool
C_ZNK20QGraphicsEllipseItem8containsERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsEllipseItem*)qthis)->contains(*((const QPointF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 701, column 14>
//   // proto:  void QGraphicsEllipseItem::QGraphicsEllipseItem(const QRectF & rect, QGraphicsItem * parent);
extern "C"
QGraphicsEllipseItem*
C_ZN20QGraphicsEllipseItemC2ERK6QRectFP13QGraphicsItem(const QRectF* arg1,
QGraphicsItem * arg2) {
  auto ret = new QGraphicsEllipseItem(*((const QRectF*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 706, column 10>
//   // proto:  void QGraphicsEllipseItem::setRect(const QRectF & rect);
// _ZN20QGraphicsEllipseItem7setRectERK6QRectF setRect(const class QRectF &)
extern "C"
void
C_ZN20QGraphicsEllipseItem7setRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QGraphicsEllipseItem*)qthis)->setRect(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 719, column 10>
//   // proto:  void QGraphicsEllipseItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN20QGraphicsEllipseItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN20QGraphicsEllipseItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsEllipseItem*)qthis)->paint(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 721, column 10>
//   // proto:  bool QGraphicsEllipseItem::isObscuredBy(const QGraphicsItem * item);
// _ZNK20QGraphicsEllipseItem12isObscuredByEPK13QGraphicsItem isObscuredBy(const class QGraphicsItem *)
extern "C"
bool
C_ZNK20QGraphicsEllipseItem12isObscuredByEPK13QGraphicsItem(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsEllipseItem*)qthis)->isObscuredBy(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 705, column 12>
//   // proto:  QRectF QGraphicsEllipseItem::rect();
// _ZNK20QGraphicsEllipseItem4rectEv rect()
extern "C"
QRectF*
C_ZNK20QGraphicsEllipseItem4rectEv(void *qthis) {
  auto ret =
  ((QGraphicsEllipseItem*)qthis)->rect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 712, column 9>
//   // proto:  int QGraphicsEllipseItem::spanAngle();
// _ZNK20QGraphicsEllipseItem9spanAngleEv spanAngle()
extern "C"
int
C_ZNK20QGraphicsEllipseItem9spanAngleEv(void *qthis) {
  auto ret =
  ((QGraphicsEllipseItem*)qthis)->spanAngle();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 709, column 9>
//   // proto:  int QGraphicsEllipseItem::startAngle();
// _ZNK20QGraphicsEllipseItem10startAngleEv startAngle()
extern "C"
int
C_ZNK20QGraphicsEllipseItem10startAngleEv(void *qthis) {
  auto ret =
  ((QGraphicsEllipseItem*)qthis)->startAngle();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 702, column 14>
//   // proto:  void QGraphicsEllipseItem::QGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent);
extern "C"
QGraphicsEllipseItem*
C_ZN20QGraphicsEllipseItemC2EddddP13QGraphicsItem(qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4,
QGraphicsItem * arg5) {
  auto ret = new QGraphicsEllipseItem(arg1,
arg2,
arg3,
arg4,
arg5);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 707, column 17>
//   // proto:  void QGraphicsEllipseItem::setRect(qreal x, qreal y, qreal w, qreal h);
// _ZN20QGraphicsEllipseItem7setRectEdddd setRect(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN20QGraphicsEllipseItem7setRectEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QGraphicsEllipseItem*)qthis)->setRect(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 713, column 10>
//   // proto:  void QGraphicsEllipseItem::setSpanAngle(int angle);
// _ZN20QGraphicsEllipseItem12setSpanAngleEi setSpanAngle(int)
extern "C"
void
C_ZN20QGraphicsEllipseItem12setSpanAngleEi(void *qthis,
int arg1) {
  ((QGraphicsEllipseItem*)qthis)->setSpanAngle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 725, column 9>
//   // proto:  int QGraphicsEllipseItem::type();
// _ZNK20QGraphicsEllipseItem4typeEv type()
extern "C"
int
C_ZNK20QGraphicsEllipseItem4typeEv(void *qthis) {
  auto ret =
  ((QGraphicsEllipseItem*)qthis)->type();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 715, column 12>
//   // proto:  QRectF QGraphicsEllipseItem::boundingRect();
// _ZNK20QGraphicsEllipseItem12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK20QGraphicsEllipseItem12boundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsEllipseItem*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 716, column 18>
//   // proto:  QPainterPath QGraphicsEllipseItem::shape();
// _ZNK20QGraphicsEllipseItem5shapeEv shape()
extern "C"
QPainterPath*
C_ZNK20QGraphicsEllipseItem5shapeEv(void *qthis) {
  auto ret =
  ((QGraphicsEllipseItem*)qthis)->shape();
  return new QPainterPath(ret); // 5
}
//   // proto:  void QGraphicsEllipseItem::~QGraphicsEllipseItem();
extern "C"
void C_ZN20QGraphicsEllipseItemD2Ev(void *qthis) {
  delete (QGraphicsEllipseItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 700, column 14>
//   // proto:  void QGraphicsEllipseItem::QGraphicsEllipseItem(QGraphicsItem * parent);
extern "C"
QGraphicsEllipseItem*
C_ZN20QGraphicsEllipseItemC2EP13QGraphicsItem(QGraphicsItem * arg1) {
  auto ret = new QGraphicsEllipseItem(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 722, column 18>
//   // proto:  QPainterPath QGraphicsEllipseItem::opaqueArea();
// _ZNK20QGraphicsEllipseItem10opaqueAreaEv opaqueArea()
extern "C"
QPainterPath*
C_ZNK20QGraphicsEllipseItem10opaqueAreaEv(void *qthis) {
  auto ret =
  ((QGraphicsEllipseItem*)qthis)->opaqueArea();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 756, column 18>
//   // proto:  QPainterPath QGraphicsPolygonItem::shape();
// _ZNK20QGraphicsPolygonItem5shapeEv shape()
extern "C"
QPainterPath*
C_ZNK20QGraphicsPolygonItem5shapeEv(void *qthis) {
  auto ret =
  ((QGraphicsPolygonItem*)qthis)->shape();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 761, column 10>
//   // proto:  bool QGraphicsPolygonItem::isObscuredBy(const QGraphicsItem * item);
// _ZNK20QGraphicsPolygonItem12isObscuredByEPK13QGraphicsItem isObscuredBy(const class QGraphicsItem *)
extern "C"
bool
C_ZNK20QGraphicsPolygonItem12isObscuredByEPK13QGraphicsItem(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsPolygonItem*)qthis)->isObscuredBy(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 753, column 10>
//   // proto:  void QGraphicsPolygonItem::setFillRule(Qt::FillRule rule);
// _ZN20QGraphicsPolygonItem11setFillRuleEN2Qt8FillRuleE setFillRule(Qt::FillRule)
extern "C"
void
C_ZN20QGraphicsPolygonItem11setFillRuleEN2Qt8FillRuleE(void *qthis,
Qt::FillRule* arg1) {
  ((QGraphicsPolygonItem*)qthis)->setFillRule(*((Qt::FillRule*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 759, column 10>
//   // proto:  void QGraphicsPolygonItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN20QGraphicsPolygonItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN20QGraphicsPolygonItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsPolygonItem*)qthis)->paint(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 744, column 14>
//   // proto:  void QGraphicsPolygonItem::QGraphicsPolygonItem(QGraphicsItem * parent);
extern "C"
QGraphicsPolygonItem*
C_ZN20QGraphicsPolygonItemC2EP13QGraphicsItem(QGraphicsItem * arg1) {
  auto ret = new QGraphicsPolygonItem(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 755, column 12>
//   // proto:  QRectF QGraphicsPolygonItem::boundingRect();
// _ZNK20QGraphicsPolygonItem12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK20QGraphicsPolygonItem12boundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsPolygonItem*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 765, column 9>
//   // proto:  int QGraphicsPolygonItem::type();
// _ZNK20QGraphicsPolygonItem4typeEv type()
extern "C"
int
C_ZNK20QGraphicsPolygonItem4typeEv(void *qthis) {
  auto ret =
  ((QGraphicsPolygonItem*)qthis)->type();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QGraphicsPolygonItem::~QGraphicsPolygonItem();
extern "C"
void C_ZN20QGraphicsPolygonItemD2Ev(void *qthis) {
  delete (QGraphicsPolygonItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 752, column 18>
//   // proto:  Qt::FillRule QGraphicsPolygonItem::fillRule();
// _ZNK20QGraphicsPolygonItem8fillRuleEv fillRule()
extern "C"
Qt::FillRule
C_ZNK20QGraphicsPolygonItem8fillRuleEv(void *qthis) {
  auto ret =
  ((QGraphicsPolygonItem*)qthis)->fillRule();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 749, column 15>
//   // proto:  QPolygonF QGraphicsPolygonItem::polygon();
// _ZNK20QGraphicsPolygonItem7polygonEv polygon()
extern "C"
QPolygonF*
C_ZNK20QGraphicsPolygonItem7polygonEv(void *qthis) {
  auto ret =
  ((QGraphicsPolygonItem*)qthis)->polygon();
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 762, column 18>
//   // proto:  QPainterPath QGraphicsPolygonItem::opaqueArea();
// _ZNK20QGraphicsPolygonItem10opaqueAreaEv opaqueArea()
extern "C"
QPainterPath*
C_ZNK20QGraphicsPolygonItem10opaqueAreaEv(void *qthis) {
  auto ret =
  ((QGraphicsPolygonItem*)qthis)->opaqueArea();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 745, column 14>
//   // proto:  void QGraphicsPolygonItem::QGraphicsPolygonItem(const QPolygonF & polygon, QGraphicsItem * parent);
extern "C"
QGraphicsPolygonItem*
C_ZN20QGraphicsPolygonItemC2ERK9QPolygonFP13QGraphicsItem(const QPolygonF* arg1,
QGraphicsItem * arg2) {
  auto ret = new QGraphicsPolygonItem(*((const QPolygonF*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 757, column 10>
//   // proto:  bool QGraphicsPolygonItem::contains(const QPointF & point);
// _ZNK20QGraphicsPolygonItem8containsERK7QPointF contains(const class QPointF &)
extern "C"
bool
C_ZNK20QGraphicsPolygonItem8containsERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsPolygonItem*)qthis)->contains(*((const QPointF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 750, column 10>
//   // proto:  void QGraphicsPolygonItem::setPolygon(const QPolygonF & polygon);
// _ZN20QGraphicsPolygonItem10setPolygonERK9QPolygonF setPolygon(const class QPolygonF &)
extern "C"
void
C_ZN20QGraphicsPolygonItem10setPolygonERK9QPolygonF(void *qthis,
const QPolygonF* arg1) {
  ((QGraphicsPolygonItem*)qthis)->setPolygon(*((const QPolygonF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 634, column 10>
//   // proto:  void QGraphicsPathItem::setPath(const QPainterPath & path);
// _ZN17QGraphicsPathItem7setPathERK12QPainterPath setPath(const class QPainterPath &)
extern "C"
void
C_ZN17QGraphicsPathItem7setPathERK12QPainterPath(void *qthis,
const QPainterPath* arg1) {
  ((QGraphicsPathItem*)qthis)->setPath(*((const QPainterPath*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 630, column 14>
//   // proto:  void QGraphicsPathItem::QGraphicsPathItem(const QPainterPath & path, QGraphicsItem * parent);
extern "C"
QGraphicsPathItem*
C_ZN17QGraphicsPathItemC2ERK12QPainterPathP13QGraphicsItem(const QPainterPath* arg1,
QGraphicsItem * arg2) {
  auto ret = new QGraphicsPathItem(*((const QPainterPath*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 638, column 10>
//   // proto:  bool QGraphicsPathItem::contains(const QPointF & point);
// _ZNK17QGraphicsPathItem8containsERK7QPointF contains(const class QPointF &)
extern "C"
bool
C_ZNK17QGraphicsPathItem8containsERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsPathItem*)qthis)->contains(*((const QPointF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 636, column 12>
//   // proto:  QRectF QGraphicsPathItem::boundingRect();
// _ZNK17QGraphicsPathItem12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK17QGraphicsPathItem12boundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsPathItem*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 646, column 9>
//   // proto:  int QGraphicsPathItem::type();
// _ZNK17QGraphicsPathItem4typeEv type()
extern "C"
int
C_ZNK17QGraphicsPathItem4typeEv(void *qthis) {
  auto ret =
  ((QGraphicsPathItem*)qthis)->type();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 643, column 18>
//   // proto:  QPainterPath QGraphicsPathItem::opaqueArea();
// _ZNK17QGraphicsPathItem10opaqueAreaEv opaqueArea()
extern "C"
QPainterPath*
C_ZNK17QGraphicsPathItem10opaqueAreaEv(void *qthis) {
  auto ret =
  ((QGraphicsPathItem*)qthis)->opaqueArea();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 633, column 18>
//   // proto:  QPainterPath QGraphicsPathItem::path();
// _ZNK17QGraphicsPathItem4pathEv path()
extern "C"
QPainterPath*
C_ZNK17QGraphicsPathItem4pathEv(void *qthis) {
  auto ret =
  ((QGraphicsPathItem*)qthis)->path();
  return new QPainterPath(ret); // 5
}
//   // proto:  void QGraphicsPathItem::~QGraphicsPathItem();
extern "C"
void C_ZN17QGraphicsPathItemD2Ev(void *qthis) {
  delete (QGraphicsPathItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 637, column 18>
//   // proto:  QPainterPath QGraphicsPathItem::shape();
// _ZNK17QGraphicsPathItem5shapeEv shape()
extern "C"
QPainterPath*
C_ZNK17QGraphicsPathItem5shapeEv(void *qthis) {
  auto ret =
  ((QGraphicsPathItem*)qthis)->shape();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 642, column 10>
//   // proto:  bool QGraphicsPathItem::isObscuredBy(const QGraphicsItem * item);
// _ZNK17QGraphicsPathItem12isObscuredByEPK13QGraphicsItem isObscuredBy(const class QGraphicsItem *)
extern "C"
bool
C_ZNK17QGraphicsPathItem12isObscuredByEPK13QGraphicsItem(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsPathItem*)qthis)->isObscuredBy(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 629, column 14>
//   // proto:  void QGraphicsPathItem::QGraphicsPathItem(QGraphicsItem * parent);
extern "C"
QGraphicsPathItem*
C_ZN17QGraphicsPathItemC2EP13QGraphicsItem(QGraphicsItem * arg1) {
  auto ret = new QGraphicsPathItem(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 640, column 10>
//   // proto:  void QGraphicsPathItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN17QGraphicsPathItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN17QGraphicsPathItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsPathItem*)qthis)->paint(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 379, column 18>
//   // proto:  QPainterPath QGraphicsItem::mapFromParent(const QPainterPath & path);
// _ZNK13QGraphicsItem13mapFromParentERK12QPainterPath mapFromParent(const class QPainterPath &)
extern "C"
QPainterPath*
C_ZNK13QGraphicsItem13mapFromParentERK12QPainterPath(void *qthis,
const QPainterPath* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromParent(*((const QPainterPath*)arg1));
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 366, column 13>
//   // proto:  QPointF QGraphicsItem::mapFromItem(const QGraphicsItem * item, const QPointF & point);
// _ZNK13QGraphicsItem11mapFromItemEPKS_RK7QPointF mapFromItem(const class QGraphicsItem *, const class QPointF &)
extern "C"
QPointF*
C_ZNK13QGraphicsItem11mapFromItemEPKS_RK7QPointF(void *qthis,
const QGraphicsItem * arg1,
const QPointF* arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromItem(arg1,
*((const QPointF*)arg2));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 238, column 10>
//   // proto:  void QGraphicsItem::setAcceptedMouseButtons(Qt::MouseButtons buttons);
// _ZN13QGraphicsItem23setAcceptedMouseButtonsE6QFlagsIN2Qt11MouseButtonEE setAcceptedMouseButtons(Qt::MouseButtons)
extern "C"
void
C_ZN13QGraphicsItem23setAcceptedMouseButtonsE6QFlagsIN2Qt11MouseButtonEE(void *qthis,
Qt::MouseButtons* arg1) {
  ((QGraphicsItem*)qthis)->setAcceptedMouseButtons(*((Qt::MouseButtons*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 264, column 20>
//   // proto:  QGraphicsItem * QGraphicsItem::focusItem();
// _ZNK13QGraphicsItem9focusItemEv focusItem()
extern "C"
void*
C_ZNK13QGraphicsItem9focusItemEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->focusItem();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 169, column 22>
//   // proto:  QGraphicsObject * QGraphicsItem::parentObject();
// _ZNK13QGraphicsItem12parentObjectEv parentObject()
extern "C"
void*
C_ZNK13QGraphicsItem12parentObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->parentObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 313, column 10>
//   // proto:  void QGraphicsItem::setTransformOriginPoint(const QPointF & origin);
// _ZN13QGraphicsItem23setTransformOriginPointERK7QPointF setTransformOriginPoint(const class QPointF &)
extern "C"
void
C_ZN13QGraphicsItem23setTransformOriginPointERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsItem*)qthis)->setTransformOriginPoint(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 268, column 10>
//   // proto:  void QGraphicsItem::ungrabMouse();
// _ZN13QGraphicsItem11ungrabMouseEv ungrabMouse()
extern "C"
void
C_ZN13QGraphicsItem11ungrabMouseEv(void *qthis) {
  ((QGraphicsItem*)qthis)->ungrabMouse();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 416, column 17>
//   // proto:  int QGraphicsItem::type();
// _ZNK13QGraphicsItem4typeEv type()
extern "C"
int
C_ZNK13QGraphicsItem4typeEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->type();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 221, column 10>
//   // proto:  bool QGraphicsItem::isSelected();
// _ZNK13QGraphicsItem10isSelectedEv isSelected()
extern "C"
bool
C_ZNK13QGraphicsItem10isSelectedEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->isSelected();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 394, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapFromItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem11mapFromItemEPKS_dddd mapFromItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem11mapFromItemEPKS_dddd(void *qthis,
const QGraphicsItem * arg1,
qreal arg2,
qreal arg3,
qreal arg4,
qreal arg5) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromItem(arg1,
arg2,
arg3,
arg4,
arg5);
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 170, column 22>
//   // proto:  QGraphicsWidget * QGraphicsItem::parentWidget();
// _ZNK13QGraphicsItem12parentWidgetEv parentWidget()
extern "C"
void*
C_ZNK13QGraphicsItem12parentWidgetEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->parentWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 296, column 10>
//   // proto:  void QGraphicsItem::resetTransform();
// _ZN13QGraphicsItem14resetTransformEv resetTransform()
extern "C"
void
C_ZN13QGraphicsItem14resetTransformEv(void *qthis) {
  ((QGraphicsItem*)qthis)->resetTransform();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 340, column 13>
//   // proto:  QRegion QGraphicsItem::boundingRegion(const QTransform & itemToDeviceTransform);
// _ZNK13QGraphicsItem14boundingRegionERK10QTransform boundingRegion(const class QTransform &)
extern "C"
QRegion*
C_ZNK13QGraphicsItem14boundingRegionERK10QTransform(void *qthis,
const QTransform* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->boundingRegion(*((const QTransform*)arg1));
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 345, column 18>
//   // proto:  void QGraphicsItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN13QGraphicsItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN13QGraphicsItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsItem*)qthis)->paint(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 254, column 10>
//   // proto:  bool QGraphicsItem::isActive();
// _ZNK13QGraphicsItem8isActiveEv isActive()
extern "C"
bool
C_ZNK13QGraphicsItem8isActiveEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->isActive();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 162, column 14>
//   // proto:  void QGraphicsItem::QGraphicsItem(QGraphicsItem * parent);
extern "C"
QGraphicsItem*
C_ZN13QGraphicsItemC2EPS_(QGraphicsItem * arg1) {
  // auto ret = new QGraphicsItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 361, column 15>
//   // proto:  QPolygonF QGraphicsItem::mapToParent(const QPolygonF & polygon);
// _ZNK13QGraphicsItem11mapToParentERK9QPolygonF mapToParent(const class QPolygonF &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem11mapToParentERK9QPolygonF(void *qthis,
const QPolygonF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToParent(*((const QPolygonF*)arg1));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 196, column 19>
//   // proto:  QGraphicsItem::PanelModality QGraphicsItem::panelModality();
// _ZNK13QGraphicsItem13panelModalityEv panelModality()
extern "C"
QGraphicsItem::PanelModality
C_ZNK13QGraphicsItem13panelModalityEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->panelModality();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 197, column 10>
//   // proto:  void QGraphicsItem::setPanelModality(QGraphicsItem::PanelModality panelModality);
// _ZN13QGraphicsItem16setPanelModalityENS_13PanelModalityE setPanelModality(enum QGraphicsItem::PanelModality)
extern "C"
void
C_ZN13QGraphicsItem16setPanelModalityENS_13PanelModalityE(void *qthis,
QGraphicsItem::PanelModality arg1) {
  ((QGraphicsItem*)qthis)->setPanelModality(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 179, column 10>
//   // proto:  bool QGraphicsItem::isWidget();
// _ZNK13QGraphicsItem8isWidgetEv isWidget()
extern "C"
bool
C_ZNK13QGraphicsItem8isWidgetEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->isWidget();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 174, column 10>
//   // proto:  void QGraphicsItem::setParentItem(QGraphicsItem * parent);
// _ZN13QGraphicsItem13setParentItemEPS_ setParentItem(class QGraphicsItem *)
extern "C"
void
C_ZN13QGraphicsItem13setParentItemEPS_(void *qthis,
QGraphicsItem * arg1) {
  ((QGraphicsItem*)qthis)->setParentItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 354, column 15>
//   // proto:  QPolygonF QGraphicsItem::mapToItem(const QGraphicsItem * item, const QRectF & rect);
// _ZNK13QGraphicsItem9mapToItemEPKS_RK6QRectF mapToItem(const class QGraphicsItem *, const class QRectF &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem9mapToItemEPKS_RK6QRectF(void *qthis,
const QGraphicsItem * arg1,
const QRectF* arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToItem(arg1,
*((const QRectF*)arg2));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 172, column 22>
//   // proto:  QGraphicsWidget * QGraphicsItem::window();
// _ZNK13QGraphicsItem6windowEv window()
extern "C"
void*
C_ZNK13QGraphicsItem6windowEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->window();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 278, column 13>
//   // proto:  QPointF QGraphicsItem::scenePos();
// _ZNK13QGraphicsItem8scenePosEv scenePos()
extern "C"
QPointF*
C_ZNK13QGraphicsItem8scenePosEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->scenePos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 251, column 10>
//   // proto:  bool QGraphicsItem::handlesChildEvents();
// _ZNK13QGraphicsItem18handlesChildEventsEv handlesChildEvents()
extern "C"
bool
C_ZNK13QGraphicsItem18handlesChildEventsEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->handlesChildEvents();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 229, column 10>
//   // proto:  void QGraphicsItem::setOpacity(qreal opacity);
// _ZN13QGraphicsItem10setOpacityEd setOpacity(qreal)
extern "C"
void
C_ZN13QGraphicsItem10setOpacityEd(void *qthis,
qreal arg1) {
  ((QGraphicsItem*)qthis)->setOpacity(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 292, column 16>
//   // proto:  QTransform QGraphicsItem::sceneTransform();
// _ZNK13QGraphicsItem14sceneTransformEv sceneTransform()
extern "C"
QTransform*
C_ZNK13QGraphicsItem14sceneTransformEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->sceneTransform();
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 321, column 10>
//   // proto:  void QGraphicsItem::setZValue(qreal z);
// _ZN13QGraphicsItem9setZValueEd setZValue(qreal)
extern "C"
void
C_ZN13QGraphicsItem9setZValueEd(void *qthis,
qreal arg1) {
  ((QGraphicsItem*)qthis)->setZValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 370, column 15>
//   // proto:  QPolygonF QGraphicsItem::mapFromParent(const QRectF & rect);
// _ZNK13QGraphicsItem13mapFromParentERK6QRectF mapFromParent(const class QRectF &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem13mapFromParentERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromParent(*((const QRectF*)arg1));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 395, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapFromParent(qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem13mapFromParentEdddd mapFromParent(qreal, qreal, qreal, qreal)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem13mapFromParentEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromParent(arg1,
arg2,
arg3,
arg4);
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 336, column 17>
//   // proto:  bool QGraphicsItem::isObscured(qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem10isObscuredEdddd isObscured(qreal, qreal, qreal, qreal)
extern "C"
bool
C_ZNK13QGraphicsItem10isObscuredEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  ((QGraphicsItem*)qthis)->isObscured(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 418, column 10>
//   // proto:  void QGraphicsItem::installSceneEventFilter(QGraphicsItem * filterItem);
// _ZN13QGraphicsItem23installSceneEventFilterEPS_ installSceneEventFilter(class QGraphicsItem *)
extern "C"
void
C_ZN13QGraphicsItem23installSceneEventFilterEPS_(void *qthis,
QGraphicsItem * arg1) {
  ((QGraphicsItem*)qthis)->installSceneEventFilter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 277, column 10>
//   // proto:  void QGraphicsItem::setY(qreal y);
// _ZN13QGraphicsItem4setYEd setY(qreal)
extern "C"
void
C_ZN13QGraphicsItem4setYEd(void *qthis,
qreal arg1) {
  ((QGraphicsItem*)qthis)->setY(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 258, column 10>
//   // proto:  void QGraphicsItem::setFocus(Qt::FocusReason focusReason);
// _ZN13QGraphicsItem8setFocusEN2Qt11FocusReasonE setFocus(Qt::FocusReason)
extern "C"
void
C_ZN13QGraphicsItem8setFocusEN2Qt11FocusReasonE(void *qthis,
Qt::FocusReason* arg1) {
  ((QGraphicsItem*)qthis)->setFocus(*((Qt::FocusReason*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 388, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectToItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem13mapRectToItemEPKS_dddd mapRectToItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
extern "C"
QRectF*
C_ZNK13QGraphicsItem13mapRectToItemEPKS_dddd(void *qthis,
const QGraphicsItem * arg1,
qreal arg2,
qreal arg3,
qreal arg4,
qreal arg5) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapRectToItem(arg1,
arg2,
arg3,
arg4,
arg5);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 167, column 20>
//   // proto:  QGraphicsItem * QGraphicsItem::parentItem();
// _ZNK13QGraphicsItem10parentItemEv parentItem()
extern "C"
void*
C_ZNK13QGraphicsItem10parentItemEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->parentItem();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 190, column 10>
//   // proto:  void QGraphicsItem::setFlag(QGraphicsItem::GraphicsItemFlag flag, bool enabled);
// _ZN13QGraphicsItem7setFlagENS_16GraphicsItemFlagEb setFlag(enum QGraphicsItem::GraphicsItemFlag, _Bool)
extern "C"
void
C_ZN13QGraphicsItem7setFlagENS_16GraphicsItemFlagEb(void *qthis,
QGraphicsItem::GraphicsItemFlag arg1,
bool arg2) {
  ((QGraphicsItem*)qthis)->setFlag(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 259, column 10>
//   // proto:  void QGraphicsItem::clearFocus();
// _ZN13QGraphicsItem10clearFocusEv clearFocus()
extern "C"
void
C_ZN13QGraphicsItem10clearFocusEv(void *qthis) {
  ((QGraphicsItem*)qthis)->clearFocus();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 180, column 10>
//   // proto:  bool QGraphicsItem::isWindow();
// _ZNK13QGraphicsItem8isWindowEv isWindow()
extern "C"
bool
C_ZNK13QGraphicsItem8isWindowEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->isWindow();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 312, column 13>
//   // proto:  QPointF QGraphicsItem::transformOriginPoint();
// _ZNK13QGraphicsItem20transformOriginPointEv transformOriginPoint()
extern "C"
QPointF*
C_ZNK13QGraphicsItem20transformOriginPointEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->transformOriginPoint();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 325, column 20>
//   // proto:  QRectF QGraphicsItem::boundingRect();
// _ZNK13QGraphicsItem12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK13QGraphicsItem12boundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 326, column 12>
//   // proto:  QRectF QGraphicsItem::childrenBoundingRect();
// _ZNK13QGraphicsItem20childrenBoundingRectEv childrenBoundingRect()
extern "C"
QRectF*
C_ZNK13QGraphicsItem20childrenBoundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->childrenBoundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 335, column 10>
//   // proto:  bool QGraphicsItem::isObscured(const QRectF & rect);
// _ZNK13QGraphicsItem10isObscuredERK6QRectF isObscured(const class QRectF &)
extern "C"
bool
C_ZNK13QGraphicsItem10isObscuredERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->isObscured(*((const QRectF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 371, column 15>
//   // proto:  QPolygonF QGraphicsItem::mapFromScene(const QRectF & rect);
// _ZNK13QGraphicsItem12mapFromSceneERK6QRectF mapFromScene(const class QRectF &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem12mapFromSceneERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromScene(*((const QRectF*)arg1));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 208, column 10>
//   // proto:  bool QGraphicsItem::hasCursor();
// _ZNK13QGraphicsItem9hasCursorEv hasCursor()
extern "C"
bool
C_ZNK13QGraphicsItem9hasCursorEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->hasCursor();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 234, column 10>
//   // proto:  void QGraphicsItem::setGraphicsEffect(QGraphicsEffect * effect);
// _ZN13QGraphicsItem17setGraphicsEffectEP15QGraphicsEffect setGraphicsEffect(class QGraphicsEffect *)
extern "C"
void
C_ZN13QGraphicsItem17setGraphicsEffectEP15QGraphicsEffect(void *qthis,
QGraphicsEffect * arg1) {
  ((QGraphicsItem*)qthis)->setGraphicsEffect(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 364, column 18>
//   // proto:  QPainterPath QGraphicsItem::mapToParent(const QPainterPath & path);
// _ZNK13QGraphicsItem11mapToParentERK12QPainterPath mapToParent(const class QPainterPath &)
extern "C"
QPainterPath*
C_ZNK13QGraphicsItem11mapToParentERK12QPainterPath(void *qthis,
const QPainterPath* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToParent(*((const QPainterPath*)arg1));
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 284, column 17>
//   // proto:  void QGraphicsItem::ensureVisible(qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin);
// _ZN13QGraphicsItem13ensureVisibleEddddii ensureVisible(qreal, qreal, qreal, qreal, int, int)
extern "C"
void
C_ZN13QGraphicsItem13ensureVisibleEddddii(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4,
int arg5,
int arg6) {
  ((QGraphicsItem*)qthis)->ensureVisible(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 385, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapToItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem9mapToItemEPKS_dddd mapToItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem9mapToItemEPKS_dddd(void *qthis,
const QGraphicsItem * arg1,
qreal arg2,
qreal arg3,
qreal arg4,
qreal arg5) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToItem(arg1,
arg2,
arg3,
arg4,
arg5);
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 382, column 20>
//   // proto:  QPointF QGraphicsItem::mapToItem(const QGraphicsItem * item, qreal x, qreal y);
// _ZNK13QGraphicsItem9mapToItemEPKS_dd mapToItem(const class QGraphicsItem *, qreal, qreal)
extern "C"
QPointF*
C_ZNK13QGraphicsItem9mapToItemEPKS_dd(void *qthis,
const QGraphicsItem * arg1,
qreal arg2,
qreal arg3) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToItem(arg1,
arg2,
arg3);
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 358, column 12>
//   // proto:  QRectF QGraphicsItem::mapRectToParent(const QRectF & rect);
// _ZNK13QGraphicsItem15mapRectToParentERK6QRectF mapRectToParent(const class QRectF &)
extern "C"
QRectF*
C_ZNK13QGraphicsItem15mapRectToParentERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapRectToParent(*((const QRectF*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 202, column 10>
//   // proto:  void QGraphicsItem::setToolTip(const QString & toolTip);
// _ZN13QGraphicsItem10setToolTipERK7QString setToolTip(const class QString &)
extern "C"
void
C_ZN13QGraphicsItem10setToolTipERK7QString(void *qthis,
const QString* arg1) {
  ((QGraphicsItem*)qthis)->setToolTip(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 304, column 11>
//   // proto:  qreal QGraphicsItem::rotation();
// _ZNK13QGraphicsItem8rotationEv rotation()
extern "C"
double
C_ZNK13QGraphicsItem8rotationEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->rotation();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 332, column 18>
//   // proto:  bool QGraphicsItem::collidesWithItem(const QGraphicsItem * other, Qt::ItemSelectionMode mode);
// _ZNK13QGraphicsItem16collidesWithItemEPKS_N2Qt17ItemSelectionModeE collidesWithItem(const class QGraphicsItem *, Qt::ItemSelectionMode)
extern "C"
bool
C_ZNK13QGraphicsItem16collidesWithItemEPKS_N2Qt17ItemSelectionModeE(void *qthis,
const QGraphicsItem * arg1,
Qt::ItemSelectionMode* arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->collidesWithItem(arg1,
*((Qt::ItemSelectionMode*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 165, column 21>
//   // proto:  QGraphicsScene * QGraphicsItem::scene();
// _ZNK13QGraphicsItem5sceneEv scene()
extern "C"
void*
C_ZNK13QGraphicsItem5sceneEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->scene();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 363, column 18>
//   // proto:  QPainterPath QGraphicsItem::mapToItem(const QGraphicsItem * item, const QPainterPath & path);
// _ZNK13QGraphicsItem9mapToItemEPKS_RK12QPainterPath mapToItem(const class QGraphicsItem *, const class QPainterPath &)
extern "C"
QPainterPath*
C_ZNK13QGraphicsItem9mapToItemEPKS_RK12QPainterPath(void *qthis,
const QGraphicsItem * arg1,
const QPainterPath* arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToItem(arg1,
*((const QPainterPath*)arg2));
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 389, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectToParent(qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem15mapRectToParentEdddd mapRectToParent(qreal, qreal, qreal, qreal)
extern "C"
QRectF*
C_ZNK13QGraphicsItem15mapRectToParentEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapRectToParent(arg1,
arg2,
arg3,
arg4);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 193, column 15>
//   // proto:  QGraphicsItem::CacheMode QGraphicsItem::cacheMode();
// _ZNK13QGraphicsItem9cacheModeEv cacheMode()
extern "C"
QGraphicsItem::CacheMode
C_ZNK13QGraphicsItem9cacheModeEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->cacheMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 369, column 15>
//   // proto:  QPolygonF QGraphicsItem::mapFromItem(const QGraphicsItem * item, const QRectF & rect);
// _ZNK13QGraphicsItem11mapFromItemEPKS_RK6QRectF mapFromItem(const class QGraphicsItem *, const class QRectF &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem11mapFromItemEPKS_RK6QRectF(void *qthis,
const QGraphicsItem * arg1,
const QRectF* arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromItem(arg1,
*((const QRectF*)arg2));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 373, column 12>
//   // proto:  QRectF QGraphicsItem::mapRectFromParent(const QRectF & rect);
// _ZNK13QGraphicsItem17mapRectFromParentERK6QRectF mapRectFromParent(const class QRectF &)
extern "C"
QRectF*
C_ZNK13QGraphicsItem17mapRectFromParentERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapRectFromParent(*((const QRectF*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 262, column 10>
//   // proto:  void QGraphicsItem::setFocusProxy(QGraphicsItem * item);
// _ZN13QGraphicsItem13setFocusProxyEPS_ setFocusProxy(class QGraphicsItem *)
extern "C"
void
C_ZN13QGraphicsItem13setFocusProxyEPS_(void *qthis,
QGraphicsItem * arg1) {
  ((QGraphicsItem*)qthis)->setFocusProxy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 224, column 10>
//   // proto:  bool QGraphicsItem::acceptDrops();
// _ZNK13QGraphicsItem11acceptDropsEv acceptDrops()
extern "C"
bool
C_ZNK13QGraphicsItem11acceptDropsEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->acceptDrops();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 352, column 13>
//   // proto:  QPointF QGraphicsItem::mapToParent(const QPointF & point);
// _ZNK13QGraphicsItem11mapToParentERK7QPointF mapToParent(const class QPointF &)
extern "C"
QPointF*
C_ZNK13QGraphicsItem11mapToParentERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToParent(*((const QPointF*)arg1));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 374, column 12>
//   // proto:  QRectF QGraphicsItem::mapRectFromScene(const QRectF & rect);
// _ZNK13QGraphicsItem16mapRectFromSceneERK6QRectF mapRectFromScene(const class QRectF &)
extern "C"
QRectF*
C_ZNK13QGraphicsItem16mapRectFromSceneERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapRectFromScene(*((const QRectF*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 265, column 20>
//   // proto:  QGraphicsItem * QGraphicsItem::focusScopeItem();
// _ZNK13QGraphicsItem14focusScopeItemEv focusScopeItem()
extern "C"
void*
C_ZNK13QGraphicsItem14focusScopeItemEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->focusScopeItem();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 419, column 10>
//   // proto:  void QGraphicsItem::removeSceneEventFilter(QGraphicsItem * filterItem);
// _ZN13QGraphicsItem22removeSceneEventFilterEPS_ removeSceneEventFilter(class QGraphicsItem *)
extern "C"
void
C_ZN13QGraphicsItem22removeSceneEventFilterEPS_(void *qthis,
QGraphicsItem * arg1) {
  ((QGraphicsItem*)qthis)->removeSceneEventFilter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 261, column 20>
//   // proto:  QGraphicsItem * QGraphicsItem::focusProxy();
// _ZNK13QGraphicsItem10focusProxyEv focusProxy()
extern "C"
void*
C_ZNK13QGraphicsItem10focusProxyEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->focusProxy();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 351, column 13>
//   // proto:  QPointF QGraphicsItem::mapToItem(const QGraphicsItem * item, const QPointF & point);
// _ZNK13QGraphicsItem9mapToItemEPKS_RK7QPointF mapToItem(const class QGraphicsItem *, const class QPointF &)
extern "C"
QPointF*
C_ZNK13QGraphicsItem9mapToItemEPKS_RK7QPointF(void *qthis,
const QGraphicsItem * arg1,
const QPointF* arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToItem(arg1,
*((const QPointF*)arg2));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 327, column 12>
//   // proto:  QRectF QGraphicsItem::sceneBoundingRect();
// _ZNK13QGraphicsItem17sceneBoundingRectEv sceneBoundingRect()
extern "C"
QRectF*
C_ZNK13QGraphicsItem17sceneBoundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->sceneBoundingRect();
  return new QRectF(ret); // 5
}
//   // proto:  void QGraphicsItem::~QGraphicsItem();
extern "C"
void C_ZN13QGraphicsItemD2Ev(void *qthis) {
  delete (QGraphicsItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 275, column 10>
//   // proto:  void QGraphicsItem::setX(qreal x);
// _ZN13QGraphicsItem4setXEd setX(qreal)
extern "C"
void
C_ZN13QGraphicsItem4setXEd(void *qthis,
qreal arg1) {
  ((QGraphicsItem*)qthis)->setX(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 347, column 17>
//   // proto:  void QGraphicsItem::update(qreal x, qreal y, qreal width, qreal height);
// _ZN13QGraphicsItem6updateEdddd update(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN13QGraphicsItem6updateEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QGraphicsItem*)qthis)->update(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 222, column 10>
//   // proto:  void QGraphicsItem::setSelected(bool selected);
// _ZN13QGraphicsItem11setSelectedEb setSelected(_Bool)
extern "C"
void
C_ZN13QGraphicsItem11setSelectedEb(void *qthis,
bool arg1) {
  ((QGraphicsItem*)qthis)->setSelected(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 310, column 10>
//   // proto:  void QGraphicsItem::setTransformations(const QList<QGraphicsTransform *> & transformations);
// _ZN13QGraphicsItem18setTransformationsERK5QListIP18QGraphicsTransformE setTransformations(const QList<class QGraphicsTransform *> &)
extern "C"
void
C_ZN13QGraphicsItem18setTransformationsERK5QListIP18QGraphicsTransformE(void *qthis,
const QList<QGraphicsTransform *>* arg1) {
  ((QGraphicsItem*)qthis)->setTransformations(*((const QList<QGraphicsTransform *>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 357, column 12>
//   // proto:  QRectF QGraphicsItem::mapRectToItem(const QGraphicsItem * item, const QRectF & rect);
// _ZNK13QGraphicsItem13mapRectToItemEPKS_RK6QRectF mapRectToItem(const class QGraphicsItem *, const class QRectF &)
extern "C"
QRectF*
C_ZNK13QGraphicsItem13mapRectToItemEPKS_RK6QRectF(void *qthis,
const QGraphicsItem * arg1,
const QRectF* arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapRectToItem(arg1,
*((const QRectF*)arg2));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 322, column 10>
//   // proto:  void QGraphicsItem::stackBefore(const QGraphicsItem * sibling);
// _ZN13QGraphicsItem11stackBeforeEPKS_ stackBefore(const class QGraphicsItem *)
extern "C"
void
C_ZN13QGraphicsItem11stackBeforeEPKS_(void *qthis,
const QGraphicsItem * arg1) {
  ((QGraphicsItem*)qthis)->stackBefore(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 391, column 20>
//   // proto:  QPointF QGraphicsItem::mapFromItem(const QGraphicsItem * item, qreal x, qreal y);
// _ZNK13QGraphicsItem11mapFromItemEPKS_dd mapFromItem(const class QGraphicsItem *, qreal, qreal)
extern "C"
QPointF*
C_ZNK13QGraphicsItem11mapFromItemEPKS_dd(void *qthis,
const QGraphicsItem * arg1,
qreal arg2,
qreal arg3) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromItem(arg1,
arg2,
arg3);
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 290, column 10>
//   // proto:  void QGraphicsItem::resetMatrix();
// _ZN13QGraphicsItem11resetMatrixEv resetMatrix()
extern "C"
void
C_ZN13QGraphicsItem11resetMatrixEv(void *qthis) {
  ((QGraphicsItem*)qthis)->resetMatrix();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 338, column 26>
//   // proto:  QPainterPath QGraphicsItem::opaqueArea();
// _ZNK13QGraphicsItem10opaqueAreaEv opaqueArea()
extern "C"
QPainterPath*
C_ZNK13QGraphicsItem10opaqueAreaEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->opaqueArea();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 209, column 10>
//   // proto:  void QGraphicsItem::unsetCursor();
// _ZN13QGraphicsItem11unsetCursorEv unsetCursor()
extern "C"
void
C_ZN13QGraphicsItem11unsetCursorEv(void *qthis) {
  ((QGraphicsItem*)qthis)->unsetCursor();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 392, column 20>
//   // proto:  QPointF QGraphicsItem::mapFromParent(qreal x, qreal y);
// _ZNK13QGraphicsItem13mapFromParentEdd mapFromParent(qreal, qreal)
extern "C"
QPointF*
C_ZNK13QGraphicsItem13mapFromParentEdd(void *qthis,
qreal arg1,
qreal arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromParent(arg1,
arg2);
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 359, column 12>
//   // proto:  QRectF QGraphicsItem::mapRectToScene(const QRectF & rect);
// _ZNK13QGraphicsItem14mapRectToSceneERK6QRectF mapRectToScene(const class QRectF &)
extern "C"
QRectF*
C_ZNK13QGraphicsItem14mapRectToSceneERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapRectToScene(*((const QRectF*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 397, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectFromItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem15mapRectFromItemEPKS_dddd mapRectFromItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
extern "C"
QRectF*
C_ZNK13QGraphicsItem15mapRectFromItemEPKS_dddd(void *qthis,
const QGraphicsItem * arg1,
qreal arg2,
qreal arg3,
qreal arg4,
qreal arg5) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapRectFromItem(arg1,
arg2,
arg3,
arg4,
arg5);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 307, column 11>
//   // proto:  qreal QGraphicsItem::scale();
// _ZNK13QGraphicsItem5scaleEv scale()
extern "C"
double
C_ZNK13QGraphicsItem5scaleEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->scale();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 342, column 10>
//   // proto:  void QGraphicsItem::setBoundingRegionGranularity(qreal granularity);
// _ZN13QGraphicsItem28setBoundingRegionGranularityEd setBoundingRegionGranularity(qreal)
extern "C"
void
C_ZN13QGraphicsItem28setBoundingRegionGranularityEd(void *qthis,
qreal arg1) {
  ((QGraphicsItem*)qthis)->setBoundingRegionGranularity(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 225, column 10>
//   // proto:  void QGraphicsItem::setAcceptDrops(bool on);
// _ZN13QGraphicsItem14setAcceptDropsEb setAcceptDrops(_Bool)
extern "C"
void
C_ZN13QGraphicsItem14setAcceptDropsEb(void *qthis,
bool arg1) {
  ((QGraphicsItem*)qthis)->setAcceptDrops(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 396, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapFromScene(qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem12mapFromSceneEdddd mapFromScene(qreal, qreal, qreal, qreal)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem12mapFromSceneEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromScene(arg1,
arg2,
arg3,
arg4);
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 270, column 10>
//   // proto:  void QGraphicsItem::ungrabKeyboard();
// _ZN13QGraphicsItem14ungrabKeyboardEv ungrabKeyboard()
extern "C"
void
C_ZN13QGraphicsItem14ungrabKeyboardEv(void *qthis) {
  ((QGraphicsItem*)qthis)->ungrabKeyboard();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 219, column 10>
//   // proto:  void QGraphicsItem::setEnabled(bool enabled);
// _ZN13QGraphicsItem10setEnabledEb setEnabled(_Bool)
extern "C"
void
C_ZN13QGraphicsItem10setEnabledEb(void *qthis,
bool arg1) {
  ((QGraphicsItem*)qthis)->setEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 233, column 22>
//   // proto:  QGraphicsEffect * QGraphicsItem::graphicsEffect();
// _ZNK13QGraphicsItem14graphicsEffectEv graphicsEffect()
extern "C"
void*
C_ZNK13QGraphicsItem14graphicsEffectEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->graphicsEffect();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 243, column 10>
//   // proto:  bool QGraphicsItem::acceptHoverEvents();
// _ZNK13QGraphicsItem17acceptHoverEventsEv acceptHoverEvents()
extern "C"
bool
C_ZNK13QGraphicsItem17acceptHoverEventsEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->acceptHoverEvents();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 171, column 22>
//   // proto:  QGraphicsWidget * QGraphicsItem::topLevelWidget();
// _ZNK13QGraphicsItem14topLevelWidgetEv topLevelWidget()
extern "C"
void*
C_ZNK13QGraphicsItem14topLevelWidgetEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->topLevelWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 309, column 33>
//   // proto:  QList<QGraphicsTransform *> QGraphicsItem::transformations();
// _ZNK13QGraphicsItem15transformationsEv transformations()
extern "C"
QList<QGraphicsTransform *>*
C_ZNK13QGraphicsItem15transformationsEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->transformations();
  return new QList<QGraphicsTransform *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 387, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapToScene(qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem10mapToSceneEdddd mapToScene(qreal, qreal, qreal, qreal)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem10mapToSceneEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToScene(arg1,
arg2,
arg3,
arg4);
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 384, column 20>
//   // proto:  QPointF QGraphicsItem::mapToScene(qreal x, qreal y);
// _ZNK13QGraphicsItem10mapToSceneEdd mapToScene(qreal, qreal)
extern "C"
QPointF*
C_ZNK13QGraphicsItem10mapToSceneEdd(void *qthis,
qreal arg1,
qreal arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToScene(arg1,
arg2);
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 399, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectFromScene(qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem16mapRectFromSceneEdddd mapRectFromScene(qreal, qreal, qreal, qreal)
extern "C"
QRectF*
C_ZNK13QGraphicsItem16mapRectFromSceneEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapRectFromScene(arg1,
arg2,
arg3,
arg4);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 317, column 18>
//   // proto:  void QGraphicsItem::advance(int phase);
// _ZN13QGraphicsItem7advanceEi advance(int)
extern "C"
void
C_ZN13QGraphicsItem7advanceEi(void *qthis,
int arg1) {
  ((QGraphicsItem*)qthis)->advance(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 288, column 13>
//   // proto:  QMatrix QGraphicsItem::sceneMatrix();
// _ZNK13QGraphicsItem11sceneMatrixEv sceneMatrix()
extern "C"
QMatrix*
C_ZNK13QGraphicsItem11sceneMatrixEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->sceneMatrix();
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 249, column 10>
//   // proto:  void QGraphicsItem::setFiltersChildEvents(bool enabled);
// _ZN13QGraphicsItem21setFiltersChildEventsEb setFiltersChildEvents(_Bool)
extern "C"
void
C_ZN13QGraphicsItem21setFiltersChildEventsEb(void *qthis,
bool arg1) {
  ((QGraphicsItem*)qthis)->setFiltersChildEvents(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 362, column 15>
//   // proto:  QPolygonF QGraphicsItem::mapToScene(const QPolygonF & polygon);
// _ZNK13QGraphicsItem10mapToSceneERK9QPolygonF mapToScene(const class QPolygonF &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem10mapToSceneERK9QPolygonF(void *qthis,
const QPolygonF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToScene(*((const QPolygonF*)arg1));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 294, column 16>
//   // proto:  QTransform QGraphicsItem::itemTransform(const QGraphicsItem * other, bool * ok);
// _ZNK13QGraphicsItem13itemTransformEPKS_Pb itemTransform(const class QGraphicsItem *, _Bool *)
extern "C"
QTransform*
C_ZNK13QGraphicsItem13itemTransformEPKS_Pb(void *qthis,
const QGraphicsItem * arg1,
bool * arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->itemTransform(arg1,
arg2);
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 314, column 17>
//   // proto:  void QGraphicsItem::setTransformOriginPoint(qreal ax, qreal ay);
// _ZN13QGraphicsItem23setTransformOriginPointEdd setTransformOriginPoint(qreal, qreal)
extern "C"
void
C_ZN13QGraphicsItem23setTransformOriginPointEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QGraphicsItem*)qthis)->setTransformOriginPoint(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 281, column 17>
//   // proto:  void QGraphicsItem::moveBy(qreal dx, qreal dy);
// _ZN13QGraphicsItem6moveByEdd moveBy(qreal, qreal)
extern "C"
void
C_ZN13QGraphicsItem6moveByEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QGraphicsItem*)qthis)->moveBy(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 377, column 15>
//   // proto:  QPolygonF QGraphicsItem::mapFromScene(const QPolygonF & polygon);
// _ZNK13QGraphicsItem12mapFromSceneERK9QPolygonF mapFromScene(const class QPolygonF &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem12mapFromSceneERK9QPolygonF(void *qthis,
const QPolygonF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromScene(*((const QPolygonF*)arg1));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 194, column 10>
//   // proto:  void QGraphicsItem::setCacheMode(QGraphicsItem::CacheMode mode, const QSize & cacheSize);
// _ZN13QGraphicsItem12setCacheModeENS_9CacheModeERK5QSize setCacheMode(enum QGraphicsItem::CacheMode, const class QSize &)
extern "C"
void
C_ZN13QGraphicsItem12setCacheModeENS_9CacheModeERK5QSize(void *qthis,
QGraphicsItem::CacheMode arg1,
const QSize* arg2) {
  ((QGraphicsItem*)qthis)->setCacheMode(arg1,
*((const QSize*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 186, column 25>
//   // proto:  QGraphicsItemGroup * QGraphicsItem::group();
// _ZNK13QGraphicsItem5groupEv group()
extern "C"
void*
C_ZNK13QGraphicsItem5groupEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->group();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 328, column 26>
//   // proto:  QPainterPath QGraphicsItem::shape();
// _ZNK13QGraphicsItem5shapeEv shape()
extern "C"
QPainterPath*
C_ZNK13QGraphicsItem5shapeEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->shape();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 393, column 20>
//   // proto:  QPointF QGraphicsItem::mapFromScene(qreal x, qreal y);
// _ZNK13QGraphicsItem12mapFromSceneEdd mapFromScene(qreal, qreal)
extern "C"
QPointF*
C_ZNK13QGraphicsItem12mapFromSceneEdd(void *qthis,
qreal arg1,
qreal arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromScene(arg1,
arg2);
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 348, column 10>
//   // proto:  void QGraphicsItem::scroll(qreal dx, qreal dy, const QRectF & rect);
// _ZN13QGraphicsItem6scrollEddRK6QRectF scroll(qreal, qreal, const class QRectF &)
extern "C"
void
C_ZN13QGraphicsItem6scrollEddRK6QRectF(void *qthis,
qreal arg1,
qreal arg2,
const QRectF* arg3) {
  ((QGraphicsItem*)qthis)->scroll(arg1,
arg2,
*((const QRectF*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 337, column 18>
//   // proto:  bool QGraphicsItem::isObscuredBy(const QGraphicsItem * item);
// _ZNK13QGraphicsItem12isObscuredByEPKS_ isObscuredBy(const class QGraphicsItem *)
extern "C"
bool
C_ZNK13QGraphicsItem12isObscuredByEPKS_(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->isObscuredBy(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 367, column 13>
//   // proto:  QPointF QGraphicsItem::mapFromParent(const QPointF & point);
// _ZNK13QGraphicsItem13mapFromParentERK7QPointF mapFromParent(const class QPointF &)
extern "C"
QPointF*
C_ZNK13QGraphicsItem13mapFromParentERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromParent(*((const QPointF*)arg1));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 407, column 10>
//   // proto:  void QGraphicsItem::setData(int key, const QVariant & value);
// _ZN13QGraphicsItem7setDataEiRK8QVariant setData(int, const class QVariant &)
extern "C"
void
C_ZN13QGraphicsItem7setDataEiRK8QVariant(void *qthis,
int arg1,
const QVariant* arg2) {
  ((QGraphicsItem*)qthis)->setData(arg1,
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 402, column 20>
//   // proto:  QGraphicsItem * QGraphicsItem::commonAncestorItem(const QGraphicsItem * other);
// _ZNK13QGraphicsItem18commonAncestorItemEPKS_ commonAncestorItem(const class QGraphicsItem *)
extern "C"
void*
C_ZNK13QGraphicsItem18commonAncestorItemEPKS_(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->commonAncestorItem(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 380, column 18>
//   // proto:  QPainterPath QGraphicsItem::mapFromScene(const QPainterPath & path);
// _ZNK13QGraphicsItem12mapFromSceneERK12QPainterPath mapFromScene(const class QPainterPath &)
extern "C"
QPainterPath*
C_ZNK13QGraphicsItem12mapFromSceneERK12QPainterPath(void *qthis,
const QPainterPath* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromScene(*((const QPainterPath*)arg1));
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 365, column 18>
//   // proto:  QPainterPath QGraphicsItem::mapToScene(const QPainterPath & path);
// _ZNK13QGraphicsItem10mapToSceneERK12QPainterPath mapToScene(const class QPainterPath &)
extern "C"
QPainterPath*
C_ZNK13QGraphicsItem10mapToSceneERK12QPainterPath(void *qthis,
const QPainterPath* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToScene(*((const QPainterPath*)arg1));
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 386, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapToParent(qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem11mapToParentEdddd mapToParent(qreal, qreal, qreal, qreal)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem11mapToParentEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToParent(arg1,
arg2,
arg3,
arg4);
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 187, column 10>
//   // proto:  void QGraphicsItem::setGroup(QGraphicsItemGroup * group);
// _ZN13QGraphicsItem8setGroupEP18QGraphicsItemGroup setGroup(class QGraphicsItemGroup *)
extern "C"
void
C_ZN13QGraphicsItem8setGroupEP18QGraphicsItemGroup(void *qthis,
QGraphicsItemGroup * arg1) {
  ((QGraphicsItem*)qthis)->setGroup(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 398, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectFromParent(qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem17mapRectFromParentEdddd mapRectFromParent(qreal, qreal, qreal, qreal)
extern "C"
QRectF*
C_ZNK13QGraphicsItem17mapRectFromParentEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapRectFromParent(arg1,
arg2,
arg3,
arg4);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 216, column 17>
//   // proto:  void QGraphicsItem::show();
// _ZN13QGraphicsItem4showEv show()
extern "C"
void
C_ZN13QGraphicsItem4showEv(void *qthis) {
  ((QGraphicsItem*)qthis)->show();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 372, column 12>
//   // proto:  QRectF QGraphicsItem::mapRectFromItem(const QGraphicsItem * item, const QRectF & rect);
// _ZNK13QGraphicsItem15mapRectFromItemEPKS_RK6QRectF mapRectFromItem(const class QGraphicsItem *, const class QRectF &)
extern "C"
QRectF*
C_ZNK13QGraphicsItem15mapRectFromItemEPKS_RK6QRectF(void *qthis,
const QGraphicsItem * arg1,
const QRectF* arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapRectFromItem(arg1,
*((const QRectF*)arg2));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 276, column 18>
//   // proto:  qreal QGraphicsItem::y();
// _ZNK13QGraphicsItem1yEv y()
extern "C"
double
C_ZNK13QGraphicsItem1yEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->y();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 368, column 13>
//   // proto:  QPointF QGraphicsItem::mapFromScene(const QPointF & point);
// _ZNK13QGraphicsItem12mapFromSceneERK7QPointF mapFromScene(const class QPointF &)
extern "C"
QPointF*
C_ZNK13QGraphicsItem12mapFromSceneERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromScene(*((const QPointF*)arg1));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 257, column 10>
//   // proto:  bool QGraphicsItem::hasFocus();
// _ZNK13QGraphicsItem8hasFocusEv hasFocus()
extern "C"
bool
C_ZNK13QGraphicsItem8hasFocusEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->hasFocus();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 330, column 18>
//   // proto:  QPainterPath QGraphicsItem::clipPath();
// _ZNK13QGraphicsItem8clipPathEv clipPath()
extern "C"
QPainterPath*
C_ZNK13QGraphicsItem8clipPathEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->clipPath();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 280, column 17>
//   // proto:  void QGraphicsItem::setPos(qreal x, qreal y);
// _ZN13QGraphicsItem6setPosEdd setPos(qreal, qreal)
extern "C"
void
C_ZN13QGraphicsItem6setPosEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QGraphicsItem*)qthis)->setPos(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 218, column 10>
//   // proto:  bool QGraphicsItem::isEnabled();
// _ZNK13QGraphicsItem9isEnabledEv isEnabled()
extern "C"
bool
C_ZNK13QGraphicsItem9isEnabledEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->isEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 331, column 18>
//   // proto:  bool QGraphicsItem::contains(const QPointF & point);
// _ZNK13QGraphicsItem8containsERK7QPointF contains(const class QPointF &)
extern "C"
bool
C_ZNK13QGraphicsItem8containsERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->contains(*((const QPointF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 181, column 10>
//   // proto:  bool QGraphicsItem::isPanel();
// _ZNK13QGraphicsItem7isPanelEv isPanel()
extern "C"
bool
C_ZNK13QGraphicsItem7isPanelEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->isPanel();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 248, column 10>
//   // proto:  bool QGraphicsItem::filtersChildEvents();
// _ZNK13QGraphicsItem18filtersChildEventsEv filtersChildEvents()
extern "C"
bool
C_ZNK13QGraphicsItem18filtersChildEventsEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->filtersChildEvents();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 269, column 10>
//   // proto:  void QGraphicsItem::grabKeyboard();
// _ZN13QGraphicsItem12grabKeyboardEv grabKeyboard()
extern "C"
void
C_ZN13QGraphicsItem12grabKeyboardEv(void *qthis) {
  ((QGraphicsItem*)qthis)->grabKeyboard();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 237, column 22>
//   // proto:  Qt::MouseButtons QGraphicsItem::acceptedMouseButtons();
// _ZNK13QGraphicsItem20acceptedMouseButtonsEv acceptedMouseButtons()
extern "C"
QFlags<Qt::MouseButton>*
C_ZNK13QGraphicsItem20acceptedMouseButtonsEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->acceptedMouseButtons();
  return new QFlags<Qt::MouseButton>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 378, column 18>
//   // proto:  QPainterPath QGraphicsItem::mapFromItem(const QGraphicsItem * item, const QPainterPath & path);
// _ZNK13QGraphicsItem11mapFromItemEPKS_RK12QPainterPath mapFromItem(const class QGraphicsItem *, const class QPainterPath &)
extern "C"
QPainterPath*
C_ZNK13QGraphicsItem11mapFromItemEPKS_RK12QPainterPath(void *qthis,
const QGraphicsItem * arg1,
const QPainterPath* arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromItem(arg1,
*((const QPainterPath*)arg2));
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 255, column 10>
//   // proto:  void QGraphicsItem::setActive(bool active);
// _ZN13QGraphicsItem9setActiveEb setActive(_Bool)
extern "C"
void
C_ZN13QGraphicsItem9setActiveEb(void *qthis,
bool arg1) {
  ((QGraphicsItem*)qthis)->setActive(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 183, column 22>
//   // proto:  QGraphicsObject * QGraphicsItem::toGraphicsObject();
// _ZN13QGraphicsItem16toGraphicsObjectEv toGraphicsObject()
extern "C"
void*
C_ZN13QGraphicsItem16toGraphicsObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->toGraphicsObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 375, column 15>
//   // proto:  QPolygonF QGraphicsItem::mapFromItem(const QGraphicsItem * item, const QPolygonF & polygon);
// _ZNK13QGraphicsItem11mapFromItemEPKS_RK9QPolygonF mapFromItem(const class QGraphicsItem *, const class QPolygonF &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem11mapFromItemEPKS_RK9QPolygonF(void *qthis,
const QGraphicsItem * arg1,
const QPolygonF* arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromItem(arg1,
*((const QPolygonF*)arg2));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 252, column 10>
//   // proto:  void QGraphicsItem::setHandlesChildEvents(bool enabled);
// _ZN13QGraphicsItem21setHandlesChildEventsEb setHandlesChildEvents(_Bool)
extern "C"
void
C_ZN13QGraphicsItem21setHandlesChildEventsEb(void *qthis,
bool arg1) {
  ((QGraphicsItem*)qthis)->setHandlesChildEvents(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 376, column 15>
//   // proto:  QPolygonF QGraphicsItem::mapFromParent(const QPolygonF & polygon);
// _ZNK13QGraphicsItem13mapFromParentERK9QPolygonF mapFromParent(const class QPolygonF &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem13mapFromParentERK9QPolygonF(void *qthis,
const QPolygonF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapFromParent(*((const QPolygonF*)arg1));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 383, column 20>
//   // proto:  QPointF QGraphicsItem::mapToParent(qreal x, qreal y);
// _ZNK13QGraphicsItem11mapToParentEdd mapToParent(qreal, qreal)
extern "C"
QPointF*
C_ZNK13QGraphicsItem11mapToParentEdd(void *qthis,
qreal arg1,
qreal arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToParent(arg1,
arg2);
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 289, column 10>
//   // proto:  void QGraphicsItem::setMatrix(const QMatrix & matrix, bool combine);
// _ZN13QGraphicsItem9setMatrixERK7QMatrixb setMatrix(const class QMatrix &, _Bool)
extern "C"
void
C_ZN13QGraphicsItem9setMatrixERK7QMatrixb(void *qthis,
const QMatrix* arg1,
bool arg2) {
  ((QGraphicsItem*)qthis)->setMatrix(*((const QMatrix*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 346, column 10>
//   // proto:  void QGraphicsItem::update(const QRectF & rect);
// _ZN13QGraphicsItem6updateERK6QRectF update(const class QRectF &)
extern "C"
void
C_ZN13QGraphicsItem6updateERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QGraphicsItem*)qthis)->update(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 360, column 15>
//   // proto:  QPolygonF QGraphicsItem::mapToItem(const QGraphicsItem * item, const QPolygonF & polygon);
// _ZNK13QGraphicsItem9mapToItemEPKS_RK9QPolygonF mapToItem(const class QGraphicsItem *, const class QPolygonF &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem9mapToItemEPKS_RK9QPolygonF(void *qthis,
const QGraphicsItem * arg1,
const QPolygonF* arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToItem(arg1,
*((const QPolygonF*)arg2));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 291, column 16>
//   // proto:  QTransform QGraphicsItem::transform();
// _ZNK13QGraphicsItem9transformEv transform()
extern "C"
QTransform*
C_ZNK13QGraphicsItem9transformEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->transform();
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 406, column 14>
//   // proto:  QVariant QGraphicsItem::data(int key);
// _ZNK13QGraphicsItem4dataEi data(int)
extern "C"
QVariant*
C_ZNK13QGraphicsItem4dataEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->data(arg1);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 215, column 17>
//   // proto:  void QGraphicsItem::hide();
// _ZN13QGraphicsItem4hideEv hide()
extern "C"
void
C_ZN13QGraphicsItem4hideEv(void *qthis) {
  ((QGraphicsItem*)qthis)->hide();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 403, column 10>
//   // proto:  bool QGraphicsItem::isUnderMouse();
// _ZNK13QGraphicsItem12isUnderMouseEv isUnderMouse()
extern "C"
bool
C_ZNK13QGraphicsItem12isUnderMouseEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->isUnderMouse();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 246, column 10>
//   // proto:  void QGraphicsItem::setAcceptTouchEvents(bool enabled);
// _ZN13QGraphicsItem20setAcceptTouchEventsEb setAcceptTouchEvents(_Bool)
extern "C"
void
C_ZN13QGraphicsItem20setAcceptTouchEventsEb(void *qthis,
bool arg1) {
  ((QGraphicsItem*)qthis)->setAcceptTouchEvents(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 244, column 10>
//   // proto:  void QGraphicsItem::setAcceptHoverEvents(bool enabled);
// _ZN13QGraphicsItem20setAcceptHoverEventsEb setAcceptHoverEvents(_Bool)
extern "C"
void
C_ZN13QGraphicsItem20setAcceptHoverEventsEb(void *qthis,
bool arg1) {
  ((QGraphicsItem*)qthis)->setAcceptHoverEvents(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 178, column 28>
//   // proto:  QList<QGraphicsItem *> QGraphicsItem::childItems();
// _ZNK13QGraphicsItem10childItemsEv childItems()
extern "C"
QList<QGraphicsItem *>*
C_ZNK13QGraphicsItem10childItemsEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->childItems();
  return new QList<QGraphicsItem *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 401, column 10>
//   // proto:  bool QGraphicsItem::isAncestorOf(const QGraphicsItem * child);
// _ZNK13QGraphicsItem12isAncestorOfEPKS_ isAncestorOf(const class QGraphicsItem *)
extern "C"
bool
C_ZNK13QGraphicsItem12isAncestorOfEPKS_(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->isAncestorOf(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 333, column 18>
//   // proto:  bool QGraphicsItem::collidesWithPath(const QPainterPath & path, Qt::ItemSelectionMode mode);
// _ZNK13QGraphicsItem16collidesWithPathERK12QPainterPathN2Qt17ItemSelectionModeE collidesWithPath(const class QPainterPath &, Qt::ItemSelectionMode)
extern "C"
bool
C_ZNK13QGraphicsItem16collidesWithPathERK12QPainterPathN2Qt17ItemSelectionModeE(void *qthis,
const QPainterPath* arg1,
Qt::ItemSelectionMode* arg2) {
  auto ret =
  ((QGraphicsItem*)qthis)->collidesWithPath(*((const QPainterPath*)arg1),
*((Qt::ItemSelectionMode*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 227, column 11>
//   // proto:  qreal QGraphicsItem::opacity();
// _ZNK13QGraphicsItem7opacityEv opacity()
extern "C"
double
C_ZNK13QGraphicsItem7opacityEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->opacity();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 213, column 10>
//   // proto:  bool QGraphicsItem::isVisibleTo(const QGraphicsItem * parent);
// _ZNK13QGraphicsItem11isVisibleToEPKS_ isVisibleTo(const class QGraphicsItem *)
extern "C"
bool
C_ZNK13QGraphicsItem11isVisibleToEPKS_(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->isVisibleTo(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 201, column 13>
//   // proto:  QString QGraphicsItem::toolTip();
// _ZNK13QGraphicsItem7toolTipEv toolTip()
extern "C"
QString*
C_ZNK13QGraphicsItem7toolTipEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->toolTip();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 206, column 13>
//   // proto:  QCursor QGraphicsItem::cursor();
// _ZNK13QGraphicsItem6cursorEv cursor()
extern "C"
QCursor*
C_ZNK13QGraphicsItem6cursorEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->cursor();
  return new QCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 189, column 23>
//   // proto:  GraphicsItemFlags QGraphicsItem::flags();
// _ZNK13QGraphicsItem5flagsEv flags()
extern "C"
QFlags<QGraphicsItem::GraphicsItemFlag>*
C_ZNK13QGraphicsItem5flagsEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->flags();
  return new QFlags<QGraphicsItem::GraphicsItemFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 353, column 13>
//   // proto:  QPointF QGraphicsItem::mapToScene(const QPointF & point);
// _ZNK13QGraphicsItem10mapToSceneERK7QPointF mapToScene(const class QPointF &)
extern "C"
QPointF*
C_ZNK13QGraphicsItem10mapToSceneERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToScene(*((const QPointF*)arg1));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 320, column 11>
//   // proto:  qreal QGraphicsItem::zValue();
// _ZNK13QGraphicsItem6zValueEv zValue()
extern "C"
double
C_ZNK13QGraphicsItem6zValueEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->zValue();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 287, column 13>
//   // proto:  QMatrix QGraphicsItem::matrix();
// _ZNK13QGraphicsItem6matrixEv matrix()
extern "C"
QMatrix*
C_ZNK13QGraphicsItem6matrixEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->matrix();
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 390, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectToScene(qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsItem14mapRectToSceneEdddd mapRectToScene(qreal, qreal, qreal, qreal)
extern "C"
QRectF*
C_ZNK13QGraphicsItem14mapRectToSceneEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapRectToScene(arg1,
arg2,
arg3,
arg4);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 279, column 10>
//   // proto:  void QGraphicsItem::setPos(const QPointF & pos);
// _ZN13QGraphicsItem6setPosERK7QPointF setPos(const class QPointF &)
extern "C"
void
C_ZN13QGraphicsItem6setPosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsItem*)qthis)->setPos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 173, column 20>
//   // proto:  QGraphicsItem * QGraphicsItem::panel();
// _ZNK13QGraphicsItem5panelEv panel()
extern "C"
void*
C_ZNK13QGraphicsItem5panelEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->panel();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 329, column 10>
//   // proto:  bool QGraphicsItem::isClipped();
// _ZNK13QGraphicsItem9isClippedEv isClipped()
extern "C"
bool
C_ZNK13QGraphicsItem9isClippedEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->isClipped();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 168, column 20>
//   // proto:  QGraphicsItem * QGraphicsItem::topLevelItem();
// _ZNK13QGraphicsItem12topLevelItemEv topLevelItem()
extern "C"
void*
C_ZNK13QGraphicsItem12topLevelItemEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->topLevelItem();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 356, column 15>
//   // proto:  QPolygonF QGraphicsItem::mapToScene(const QRectF & rect);
// _ZNK13QGraphicsItem10mapToSceneERK6QRectF mapToScene(const class QRectF &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem10mapToSceneERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToScene(*((const QRectF*)arg1));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 306, column 10>
//   // proto:  void QGraphicsItem::setScale(qreal scale);
// _ZN13QGraphicsItem8setScaleEd setScale(qreal)
extern "C"
void
C_ZN13QGraphicsItem8setScaleEd(void *qthis,
qreal arg1) {
  ((QGraphicsItem*)qthis)->setScale(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 207, column 10>
//   // proto:  void QGraphicsItem::setCursor(const QCursor & cursor);
// _ZN13QGraphicsItem9setCursorERK7QCursor setCursor(const class QCursor &)
extern "C"
void
C_ZN13QGraphicsItem9setCursorERK7QCursor(void *qthis,
const QCursor* arg1) {
  ((QGraphicsItem*)qthis)->setCursor(*((const QCursor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 212, column 10>
//   // proto:  bool QGraphicsItem::isVisible();
// _ZNK13QGraphicsItem9isVisibleEv isVisible()
extern "C"
bool
C_ZNK13QGraphicsItem9isVisibleEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->isVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 191, column 10>
//   // proto:  void QGraphicsItem::setFlags(GraphicsItemFlags flags);
// _ZN13QGraphicsItem8setFlagsE6QFlagsINS_16GraphicsItemFlagEE setFlags(GraphicsItemFlags)
extern "C"
void
C_ZN13QGraphicsItem8setFlagsE6QFlagsINS_16GraphicsItemFlagEE(void *qthis,
QGraphicsItem::GraphicsItemFlags arg1) {
  ((QGraphicsItem*)qthis)->setFlags(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 273, column 13>
//   // proto:  QPointF QGraphicsItem::pos();
// _ZNK13QGraphicsItem3posEv pos()
extern "C"
QPointF*
C_ZNK13QGraphicsItem3posEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->pos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 198, column 10>
//   // proto:  bool QGraphicsItem::isBlockedByModalPanel(QGraphicsItem ** blockingPanel);
// _ZNK13QGraphicsItem21isBlockedByModalPanelEPPS_ isBlockedByModalPanel(class QGraphicsItem **)
extern "C"
bool
C_ZNK13QGraphicsItem21isBlockedByModalPanelEPPS_(void *qthis,
QGraphicsItem ** arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->isBlockedByModalPanel(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 228, column 11>
//   // proto:  qreal QGraphicsItem::effectiveOpacity();
// _ZNK13QGraphicsItem16effectiveOpacityEv effectiveOpacity()
extern "C"
double
C_ZNK13QGraphicsItem16effectiveOpacityEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->effectiveOpacity();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 283, column 10>
//   // proto:  void QGraphicsItem::ensureVisible(const QRectF & rect, int xmargin, int ymargin);
// _ZN13QGraphicsItem13ensureVisibleERK6QRectFii ensureVisible(const class QRectF &, int, int)
extern "C"
void
C_ZN13QGraphicsItem13ensureVisibleERK6QRectFii(void *qthis,
const QRectF* arg1,
int arg2,
int arg3) {
  ((QGraphicsItem*)qthis)->ensureVisible(*((const QRectF*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 409, column 26>
//   // proto:  Qt::InputMethodHints QGraphicsItem::inputMethodHints();
// _ZNK13QGraphicsItem16inputMethodHintsEv inputMethodHints()
extern "C"
QFlags<Qt::InputMethodHint>*
C_ZNK13QGraphicsItem16inputMethodHintsEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->inputMethodHints();
  return new QFlags<Qt::InputMethodHint>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 334, column 28>
//   // proto:  QList<QGraphicsItem *> QGraphicsItem::collidingItems(Qt::ItemSelectionMode mode);
// _ZNK13QGraphicsItem14collidingItemsEN2Qt17ItemSelectionModeE collidingItems(Qt::ItemSelectionMode)
extern "C"
QList<QGraphicsItem *>*
C_ZNK13QGraphicsItem14collidingItemsEN2Qt17ItemSelectionModeE(void *qthis,
Qt::ItemSelectionMode* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->collidingItems(*((Qt::ItemSelectionMode*)arg1));
  return new QList<QGraphicsItem *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 410, column 10>
//   // proto:  void QGraphicsItem::setInputMethodHints(Qt::InputMethodHints hints);
// _ZN13QGraphicsItem19setInputMethodHintsE6QFlagsIN2Qt15InputMethodHintEE setInputMethodHints(Qt::InputMethodHints)
extern "C"
void
C_ZN13QGraphicsItem19setInputMethodHintsE6QFlagsIN2Qt15InputMethodHintEE(void *qthis,
Qt::InputMethodHints* arg1) {
  ((QGraphicsItem*)qthis)->setInputMethodHints(*((Qt::InputMethodHints*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 341, column 11>
//   // proto:  qreal QGraphicsItem::boundingRegionGranularity();
// _ZNK13QGraphicsItem25boundingRegionGranularityEv boundingRegionGranularity()
extern "C"
double
C_ZNK13QGraphicsItem25boundingRegionGranularityEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->boundingRegionGranularity();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 274, column 18>
//   // proto:  qreal QGraphicsItem::x();
// _ZNK13QGraphicsItem1xEv x()
extern "C"
double
C_ZNK13QGraphicsItem1xEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->x();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 267, column 10>
//   // proto:  void QGraphicsItem::grabMouse();
// _ZN13QGraphicsItem9grabMouseEv grabMouse()
extern "C"
void
C_ZN13QGraphicsItem9grabMouseEv(void *qthis) {
  ((QGraphicsItem*)qthis)->grabMouse();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 214, column 10>
//   // proto:  void QGraphicsItem::setVisible(bool visible);
// _ZN13QGraphicsItem10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN13QGraphicsItem10setVisibleEb(void *qthis,
bool arg1) {
  ((QGraphicsItem*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 303, column 10>
//   // proto:  void QGraphicsItem::setRotation(qreal angle);
// _ZN13QGraphicsItem11setRotationEd setRotation(qreal)
extern "C"
void
C_ZN13QGraphicsItem11setRotationEd(void *qthis,
qreal arg1) {
  ((QGraphicsItem*)qthis)->setRotation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 184, column 28>
//   // proto:  const QGraphicsObject * QGraphicsItem::toGraphicsObject();
// _ZNK13QGraphicsItem16toGraphicsObjectEv toGraphicsObject()
extern "C"
void*
C_ZNK13QGraphicsItem16toGraphicsObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->toGraphicsObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 293, column 16>
//   // proto:  QTransform QGraphicsItem::deviceTransform(const QTransform & viewportTransform);
// _ZNK13QGraphicsItem15deviceTransformERK10QTransform deviceTransform(const class QTransform &)
extern "C"
QTransform*
C_ZNK13QGraphicsItem15deviceTransformERK10QTransform(void *qthis,
const QTransform* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->deviceTransform(*((const QTransform*)arg1));
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 245, column 10>
//   // proto:  bool QGraphicsItem::acceptTouchEvents();
// _ZNK13QGraphicsItem17acceptTouchEventsEv acceptTouchEvents()
extern "C"
bool
C_ZNK13QGraphicsItem17acceptTouchEventsEv(void *qthis) {
  auto ret =
  ((QGraphicsItem*)qthis)->acceptTouchEvents();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 295, column 10>
//   // proto:  void QGraphicsItem::setTransform(const QTransform & matrix, bool combine);
// _ZN13QGraphicsItem12setTransformERK10QTransformb setTransform(const class QTransform &, _Bool)
extern "C"
void
C_ZN13QGraphicsItem12setTransformERK10QTransformb(void *qthis,
const QTransform* arg1,
bool arg2) {
  ((QGraphicsItem*)qthis)->setTransform(*((const QTransform*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 355, column 15>
//   // proto:  QPolygonF QGraphicsItem::mapToParent(const QRectF & rect);
// _ZNK13QGraphicsItem11mapToParentERK6QRectF mapToParent(const class QRectF &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsItem11mapToParentERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsItem*)qthis)->mapToParent(*((const QRectF*)arg1));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 787, column 10>
//   // proto:  void QGraphicsLineItem::setPen(const QPen & pen);
// _ZN17QGraphicsLineItem6setPenERK4QPen setPen(const class QPen &)
extern "C"
void
C_ZN17QGraphicsLineItem6setPenERK4QPen(void *qthis,
const QPen* arg1) {
  ((QGraphicsLineItem*)qthis)->setPen(*((const QPen*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 781, column 14>
//   // proto:  void QGraphicsLineItem::QGraphicsLineItem(QGraphicsItem * parent);
extern "C"
QGraphicsLineItem*
C_ZN17QGraphicsLineItemC2EP13QGraphicsItem(QGraphicsItem * arg1) {
  auto ret = new QGraphicsLineItem(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 800, column 10>
//   // proto:  bool QGraphicsLineItem::isObscuredBy(const QGraphicsItem * item);
// _ZNK17QGraphicsLineItem12isObscuredByEPK13QGraphicsItem isObscuredBy(const class QGraphicsItem *)
extern "C"
bool
C_ZNK17QGraphicsLineItem12isObscuredByEPK13QGraphicsItem(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsLineItem*)qthis)->isObscuredBy(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 782, column 14>
//   // proto:  void QGraphicsLineItem::QGraphicsLineItem(const QLineF & line, QGraphicsItem * parent);
extern "C"
QGraphicsLineItem*
C_ZN17QGraphicsLineItemC2ERK6QLineFP13QGraphicsItem(const QLineF* arg1,
QGraphicsItem * arg2) {
  auto ret = new QGraphicsLineItem(*((const QLineF*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 789, column 12>
//   // proto:  QLineF QGraphicsLineItem::line();
// _ZNK17QGraphicsLineItem4lineEv line()
extern "C"
QLineF*
C_ZNK17QGraphicsLineItem4lineEv(void *qthis) {
  auto ret =
  ((QGraphicsLineItem*)qthis)->line();
  return new QLineF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 801, column 18>
//   // proto:  QPainterPath QGraphicsLineItem::opaqueArea();
// _ZNK17QGraphicsLineItem10opaqueAreaEv opaqueArea()
extern "C"
QPainterPath*
C_ZNK17QGraphicsLineItem10opaqueAreaEv(void *qthis) {
  auto ret =
  ((QGraphicsLineItem*)qthis)->opaqueArea();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 791, column 17>
//   // proto:  void QGraphicsLineItem::setLine(qreal x1, qreal y1, qreal x2, qreal y2);
// _ZN17QGraphicsLineItem7setLineEdddd setLine(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN17QGraphicsLineItem7setLineEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QGraphicsLineItem*)qthis)->setLine(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 794, column 12>
//   // proto:  QRectF QGraphicsLineItem::boundingRect();
// _ZNK17QGraphicsLineItem12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK17QGraphicsLineItem12boundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsLineItem*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 786, column 10>
//   // proto:  QPen QGraphicsLineItem::pen();
// _ZNK17QGraphicsLineItem3penEv pen()
extern "C"
QPen*
C_ZNK17QGraphicsLineItem3penEv(void *qthis) {
  auto ret =
  ((QGraphicsLineItem*)qthis)->pen();
  return new QPen(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 790, column 10>
//   // proto:  void QGraphicsLineItem::setLine(const QLineF & line);
// _ZN17QGraphicsLineItem7setLineERK6QLineF setLine(const class QLineF &)
extern "C"
void
C_ZN17QGraphicsLineItem7setLineERK6QLineF(void *qthis,
const QLineF* arg1) {
  ((QGraphicsLineItem*)qthis)->setLine(*((const QLineF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 795, column 18>
//   // proto:  QPainterPath QGraphicsLineItem::shape();
// _ZNK17QGraphicsLineItem5shapeEv shape()
extern "C"
QPainterPath*
C_ZNK17QGraphicsLineItem5shapeEv(void *qthis) {
  auto ret =
  ((QGraphicsLineItem*)qthis)->shape();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 798, column 10>
//   // proto:  void QGraphicsLineItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN17QGraphicsLineItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN17QGraphicsLineItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsLineItem*)qthis)->paint(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 804, column 9>
//   // proto:  int QGraphicsLineItem::type();
// _ZNK17QGraphicsLineItem4typeEv type()
extern "C"
int
C_ZNK17QGraphicsLineItem4typeEv(void *qthis) {
  auto ret =
  ((QGraphicsLineItem*)qthis)->type();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 783, column 14>
//   // proto:  void QGraphicsLineItem::QGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem * parent);
extern "C"
QGraphicsLineItem*
C_ZN17QGraphicsLineItemC2EddddP13QGraphicsItem(qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4,
QGraphicsItem * arg5) {
  auto ret = new QGraphicsLineItem(arg1,
arg2,
arg3,
arg4,
arg5);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 796, column 10>
//   // proto:  bool QGraphicsLineItem::contains(const QPointF & point);
// _ZNK17QGraphicsLineItem8containsERK7QPointF contains(const class QPointF &)
extern "C"
bool
C_ZNK17QGraphicsLineItem8containsERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsLineItem*)qthis)->contains(*((const QPointF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QGraphicsLineItem::~QGraphicsLineItem();
extern "C"
void C_ZN17QGraphicsLineItemD2Ev(void *qthis) {
  delete (QGraphicsLineItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 1014, column 10>
//   // proto:  bool QGraphicsItemGroup::isObscuredBy(const QGraphicsItem * item);
// _ZNK18QGraphicsItemGroup12isObscuredByEPK13QGraphicsItem isObscuredBy(const class QGraphicsItem *)
extern "C"
bool
C_ZNK18QGraphicsItemGroup12isObscuredByEPK13QGraphicsItem(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsItemGroup*)qthis)->isObscuredBy(arg1);
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QGraphicsItemGroup::~QGraphicsItemGroup();
extern "C"
void C_ZN18QGraphicsItemGroupD2Ev(void *qthis) {
  delete (QGraphicsItemGroup*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 1005, column 14>
//   // proto:  void QGraphicsItemGroup::QGraphicsItemGroup(QGraphicsItem * parent);
extern "C"
QGraphicsItemGroup*
C_ZN18QGraphicsItemGroupC2EP13QGraphicsItem(QGraphicsItem * arg1) {
  auto ret = new QGraphicsItemGroup(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 1018, column 9>
//   // proto:  int QGraphicsItemGroup::type();
// _ZNK18QGraphicsItemGroup4typeEv type()
extern "C"
int
C_ZNK18QGraphicsItemGroup4typeEv(void *qthis) {
  auto ret =
  ((QGraphicsItemGroup*)qthis)->type();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 1011, column 12>
//   // proto:  QRectF QGraphicsItemGroup::boundingRect();
// _ZNK18QGraphicsItemGroup12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK18QGraphicsItemGroup12boundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsItemGroup*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 1012, column 10>
//   // proto:  void QGraphicsItemGroup::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN18QGraphicsItemGroup5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN18QGraphicsItemGroup5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsItemGroup*)qthis)->paint(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 1009, column 10>
//   // proto:  void QGraphicsItemGroup::removeFromGroup(QGraphicsItem * item);
// _ZN18QGraphicsItemGroup15removeFromGroupEP13QGraphicsItem removeFromGroup(class QGraphicsItem *)
extern "C"
void
C_ZN18QGraphicsItemGroup15removeFromGroupEP13QGraphicsItem(void *qthis,
QGraphicsItem * arg1) {
  ((QGraphicsItemGroup*)qthis)->removeFromGroup(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 1008, column 10>
//   // proto:  void QGraphicsItemGroup::addToGroup(QGraphicsItem * item);
// _ZN18QGraphicsItemGroup10addToGroupEP13QGraphicsItem addToGroup(class QGraphicsItem *)
extern "C"
void
C_ZN18QGraphicsItemGroup10addToGroupEP13QGraphicsItem(void *qthis,
QGraphicsItem * arg1) {
  ((QGraphicsItemGroup*)qthis)->addToGroup(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 1015, column 18>
//   // proto:  QPainterPath QGraphicsItemGroup::opaqueArea();
// _ZNK18QGraphicsItemGroup10opaqueAreaEv opaqueArea()
extern "C"
QPainterPath*
C_ZNK18QGraphicsItemGroup10opaqueAreaEv(void *qthis) {
  auto ret =
  ((QGraphicsItemGroup*)qthis)->opaqueArea();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 613, column 10>
//   // proto:  bool QAbstractGraphicsShapeItem::isObscuredBy(const QGraphicsItem * item);
// _ZNK26QAbstractGraphicsShapeItem12isObscuredByEPK13QGraphicsItem isObscuredBy(const class QGraphicsItem *)
extern "C"
bool
C_ZNK26QAbstractGraphicsShapeItem12isObscuredByEPK13QGraphicsItem(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QAbstractGraphicsShapeItem*)qthis)->isObscuredBy(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 610, column 12>
//   // proto:  QBrush QAbstractGraphicsShapeItem::brush();
// _ZNK26QAbstractGraphicsShapeItem5brushEv brush()
extern "C"
QBrush*
C_ZNK26QAbstractGraphicsShapeItem5brushEv(void *qthis) {
  auto ret =
  ((QAbstractGraphicsShapeItem*)qthis)->brush();
  return new QBrush(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 604, column 14>
//   // proto:  void QAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem(QGraphicsItem * parent);
extern "C"
QAbstractGraphicsShapeItem*
C_ZN26QAbstractGraphicsShapeItemC2EP13QGraphicsItem(QGraphicsItem * arg1) {
  // auto ret = new QAbstractGraphicsShapeItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 614, column 18>
//   // proto:  QPainterPath QAbstractGraphicsShapeItem::opaqueArea();
// _ZNK26QAbstractGraphicsShapeItem10opaqueAreaEv opaqueArea()
extern "C"
QPainterPath*
C_ZNK26QAbstractGraphicsShapeItem10opaqueAreaEv(void *qthis) {
  auto ret =
  ((QAbstractGraphicsShapeItem*)qthis)->opaqueArea();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 611, column 10>
//   // proto:  void QAbstractGraphicsShapeItem::setBrush(const QBrush & brush);
// _ZN26QAbstractGraphicsShapeItem8setBrushERK6QBrush setBrush(const class QBrush &)
extern "C"
void
C_ZN26QAbstractGraphicsShapeItem8setBrushERK6QBrush(void *qthis,
const QBrush* arg1) {
  ((QAbstractGraphicsShapeItem*)qthis)->setBrush(*((const QBrush*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 608, column 10>
//   // proto:  void QAbstractGraphicsShapeItem::setPen(const QPen & pen);
// _ZN26QAbstractGraphicsShapeItem6setPenERK4QPen setPen(const class QPen &)
extern "C"
void
C_ZN26QAbstractGraphicsShapeItem6setPenERK4QPen(void *qthis,
const QPen* arg1) {
  ((QAbstractGraphicsShapeItem*)qthis)->setPen(*((const QPen*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 607, column 10>
//   // proto:  QPen QAbstractGraphicsShapeItem::pen();
// _ZNK26QAbstractGraphicsShapeItem3penEv pen()
extern "C"
QPen*
C_ZNK26QAbstractGraphicsShapeItem3penEv(void *qthis) {
  auto ret =
  ((QAbstractGraphicsShapeItem*)qthis)->pen();
  return new QPen(ret); // 5
}
//   // proto:  void QAbstractGraphicsShapeItem::~QAbstractGraphicsShapeItem();
extern "C"
void C_ZN26QAbstractGraphicsShapeItemD2Ev(void *qthis) {
  delete (QAbstractGraphicsShapeItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 581, column 10>
//   // proto:  void QGraphicsObject::yChanged();
// _ZN15QGraphicsObject8yChangedEv yChanged()
extern "C"
void
C_ZN15QGraphicsObject8yChangedEv(void *qthis) {
  ((QGraphicsObject*)qthis)->yChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 579, column 10>
//   // proto:  void QGraphicsObject::enabledChanged();
// _ZN15QGraphicsObject14enabledChangedEv enabledChanged()
extern "C"
void
C_ZN15QGraphicsObject14enabledChangedEv(void *qthis) {
  ((QGraphicsObject*)qthis)->enabledChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 586, column 10>
//   // proto:  void QGraphicsObject::widthChanged();
// _ZN15QGraphicsObject12widthChangedEv widthChanged()
extern "C"
void
C_ZN15QGraphicsObject12widthChangedEv(void *qthis) {
  ((QGraphicsObject*)qthis)->widthChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 578, column 10>
//   // proto:  void QGraphicsObject::visibleChanged();
// _ZN15QGraphicsObject14visibleChangedEv visibleChanged()
extern "C"
void
C_ZN15QGraphicsObject14visibleChangedEv(void *qthis) {
  ((QGraphicsObject*)qthis)->visibleChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 585, column 10>
//   // proto:  void QGraphicsObject::childrenChanged();
// _ZN15QGraphicsObject15childrenChangedEv childrenChanged()
extern "C"
void
C_ZN15QGraphicsObject15childrenChangedEv(void *qthis) {
  ((QGraphicsObject*)qthis)->childrenChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 582, column 10>
//   // proto:  void QGraphicsObject::zChanged();
// _ZN15QGraphicsObject8zChangedEv zChanged()
extern "C"
void
C_ZN15QGraphicsObject8zChangedEv(void *qthis) {
  ((QGraphicsObject*)qthis)->zChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 577, column 10>
//   // proto:  void QGraphicsObject::opacityChanged();
// _ZN15QGraphicsObject14opacityChangedEv opacityChanged()
extern "C"
void
C_ZN15QGraphicsObject14opacityChangedEv(void *qthis) {
  ((QGraphicsObject*)qthis)->opacityChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 562, column 14>
//   // proto:  void QGraphicsObject::QGraphicsObject(QGraphicsItem * parent);
extern "C"
QGraphicsObject*
C_ZN15QGraphicsObjectC2EP13QGraphicsItem(QGraphicsItem * arg1) {
  // auto ret = new QGraphicsObject(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 580, column 10>
//   // proto:  void QGraphicsObject::xChanged();
// _ZN15QGraphicsObject8xChangedEv xChanged()
extern "C"
void
C_ZN15QGraphicsObject8xChangedEv(void *qthis) {
  ((QGraphicsObject*)qthis)->xChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 568, column 10>
//   // proto:  void QGraphicsObject::grabGesture(Qt::GestureType type, Qt::GestureFlags flags);
// _ZN15QGraphicsObject11grabGestureEN2Qt11GestureTypeE6QFlagsINS0_11GestureFlagEE grabGesture(Qt::GestureType, Qt::GestureFlags)
extern "C"
void
C_ZN15QGraphicsObject11grabGestureEN2Qt11GestureTypeE6QFlagsINS0_11GestureFlagEE(void *qthis,
Qt::GestureType* arg1,
Qt::GestureFlags* arg2) {
  ((QGraphicsObject*)qthis)->grabGesture(*((Qt::GestureType*)arg1),
*((Qt::GestureFlags*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 583, column 10>
//   // proto:  void QGraphicsObject::rotationChanged();
// _ZN15QGraphicsObject15rotationChangedEv rotationChanged()
extern "C"
void
C_ZN15QGraphicsObject15rotationChangedEv(void *qthis) {
  ((QGraphicsObject*)qthis)->rotationChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 569, column 10>
//   // proto:  void QGraphicsObject::ungrabGesture(Qt::GestureType type);
// _ZN15QGraphicsObject13ungrabGestureEN2Qt11GestureTypeE ungrabGesture(Qt::GestureType)
extern "C"
void
C_ZN15QGraphicsObject13ungrabGestureEN2Qt11GestureTypeE(void *qthis,
Qt::GestureType* arg1) {
  ((QGraphicsObject*)qthis)->ungrabGesture(*((Qt::GestureType*)arg1));
}
//   // proto:  void QGraphicsObject::~QGraphicsObject();
extern "C"
void C_ZN15QGraphicsObjectD2Ev(void *qthis) {
  delete (QGraphicsObject*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 587, column 10>
//   // proto:  void QGraphicsObject::heightChanged();
// _ZN15QGraphicsObject13heightChangedEv heightChanged()
extern "C"
void
C_ZN15QGraphicsObject13heightChangedEv(void *qthis) {
  ((QGraphicsObject*)qthis)->heightChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 541, column 5>
//   // proto:  const QMetaObject * QGraphicsObject::metaObject();
// _ZNK15QGraphicsObject10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QGraphicsObject10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsObject*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 584, column 10>
//   // proto:  void QGraphicsObject::scaleChanged();
// _ZN15QGraphicsObject12scaleChangedEv scaleChanged()
extern "C"
void
C_ZN15QGraphicsObject12scaleChangedEv(void *qthis) {
  ((QGraphicsObject*)qthis)->scaleChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 576, column 10>
//   // proto:  void QGraphicsObject::parentChanged();
// _ZN15QGraphicsObject13parentChangedEv parentChanged()
extern "C"
void
C_ZN15QGraphicsObject13parentChangedEv(void *qthis) {
  ((QGraphicsObject*)qthis)->parentChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 989, column 9>
//   // proto:  int QGraphicsSimpleTextItem::type();
// _ZNK23QGraphicsSimpleTextItem4typeEv type()
extern "C"
int
C_ZNK23QGraphicsSimpleTextItem4typeEv(void *qthis) {
  auto ret =
  ((QGraphicsSimpleTextItem*)qthis)->type();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 977, column 11>
//   // proto:  QFont QGraphicsSimpleTextItem::font();
// _ZNK23QGraphicsSimpleTextItem4fontEv font()
extern "C"
QFont*
C_ZNK23QGraphicsSimpleTextItem4fontEv(void *qthis) {
  auto ret =
  ((QGraphicsSimpleTextItem*)qthis)->font();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 983, column 10>
//   // proto:  void QGraphicsSimpleTextItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
// _ZN23QGraphicsSimpleTextItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void
C_ZN23QGraphicsSimpleTextItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *qthis,
QPainter * arg1,
const QStyleOptionGraphicsItem * arg2,
QWidget * arg3) {
  ((QGraphicsSimpleTextItem*)qthis)->paint(arg1,
arg2,
arg3);
}
//   // proto:  void QGraphicsSimpleTextItem::~QGraphicsSimpleTextItem();
extern "C"
void C_ZN23QGraphicsSimpleTextItemD2Ev(void *qthis) {
  delete (QGraphicsSimpleTextItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 973, column 10>
//   // proto:  void QGraphicsSimpleTextItem::setText(const QString & text);
// _ZN23QGraphicsSimpleTextItem7setTextERK7QString setText(const class QString &)
extern "C"
void
C_ZN23QGraphicsSimpleTextItem7setTextERK7QString(void *qthis,
const QString* arg1) {
  ((QGraphicsSimpleTextItem*)qthis)->setText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 974, column 13>
//   // proto:  QString QGraphicsSimpleTextItem::text();
// _ZNK23QGraphicsSimpleTextItem4textEv text()
extern "C"
QString*
C_ZNK23QGraphicsSimpleTextItem4textEv(void *qthis) {
  auto ret =
  ((QGraphicsSimpleTextItem*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 970, column 14>
//   // proto:  void QGraphicsSimpleTextItem::QGraphicsSimpleTextItem(const QString & text, QGraphicsItem * parent);
extern "C"
QGraphicsSimpleTextItem*
C_ZN23QGraphicsSimpleTextItemC2ERK7QStringP13QGraphicsItem(const QString* arg1,
QGraphicsItem * arg2) {
  auto ret = new QGraphicsSimpleTextItem(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 985, column 10>
//   // proto:  bool QGraphicsSimpleTextItem::isObscuredBy(const QGraphicsItem * item);
// _ZNK23QGraphicsSimpleTextItem12isObscuredByEPK13QGraphicsItem isObscuredBy(const class QGraphicsItem *)
extern "C"
bool
C_ZNK23QGraphicsSimpleTextItem12isObscuredByEPK13QGraphicsItem(void *qthis,
const QGraphicsItem * arg1) {
  auto ret =
  ((QGraphicsSimpleTextItem*)qthis)->isObscuredBy(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 980, column 18>
//   // proto:  QPainterPath QGraphicsSimpleTextItem::shape();
// _ZNK23QGraphicsSimpleTextItem5shapeEv shape()
extern "C"
QPainterPath*
C_ZNK23QGraphicsSimpleTextItem5shapeEv(void *qthis) {
  auto ret =
  ((QGraphicsSimpleTextItem*)qthis)->shape();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 969, column 14>
//   // proto:  void QGraphicsSimpleTextItem::QGraphicsSimpleTextItem(QGraphicsItem * parent);
extern "C"
QGraphicsSimpleTextItem*
C_ZN23QGraphicsSimpleTextItemC2EP13QGraphicsItem(QGraphicsItem * arg1) {
  auto ret = new QGraphicsSimpleTextItem(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 976, column 10>
//   // proto:  void QGraphicsSimpleTextItem::setFont(const QFont & font);
// _ZN23QGraphicsSimpleTextItem7setFontERK5QFont setFont(const class QFont &)
extern "C"
void
C_ZN23QGraphicsSimpleTextItem7setFontERK5QFont(void *qthis,
const QFont* arg1) {
  ((QGraphicsSimpleTextItem*)qthis)->setFont(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 986, column 18>
//   // proto:  QPainterPath QGraphicsSimpleTextItem::opaqueArea();
// _ZNK23QGraphicsSimpleTextItem10opaqueAreaEv opaqueArea()
extern "C"
QPainterPath*
C_ZNK23QGraphicsSimpleTextItem10opaqueAreaEv(void *qthis) {
  auto ret =
  ((QGraphicsSimpleTextItem*)qthis)->opaqueArea();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 979, column 12>
//   // proto:  QRectF QGraphicsSimpleTextItem::boundingRect();
// _ZNK23QGraphicsSimpleTextItem12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK23QGraphicsSimpleTextItem12boundingRectEv(void *qthis) {
  auto ret =
  ((QGraphicsSimpleTextItem*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 981, column 10>
//   // proto:  bool QGraphicsSimpleTextItem::contains(const QPointF & point);
// _ZNK23QGraphicsSimpleTextItem8containsERK7QPointF contains(const class QPointF &)
extern "C"
bool
C_ZNK23QGraphicsSimpleTextItem8containsERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsSimpleTextItem*)qthis)->contains(*((const QPointF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QGraphicsTextItem_SlotProxy here
class QGraphicsTextItem_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsTextItem_SlotProxy():QObject(){}

public slots:
  // linkHovered(const class QString &)
  void slot_proxy_func__ZN17QGraphicsTextItem11linkHoveredERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN17QGraphicsTextItem11linkHoveredERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // linkActivated(const class QString &)
  void slot_proxy_func__ZN17QGraphicsTextItem13linkActivatedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN17QGraphicsTextItem13linkActivatedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsTextItem_SlotProxy* QGraphicsTextItem_SlotProxy_new()
  {
    return new QGraphicsTextItem_SlotProxy();
  }
};

void QGraphicsTextItem_SlotProxy::slot_proxy_func__ZN17QGraphicsTextItem11linkHoveredERK7QString(const QString & arg0) {
  if (this->slot_func__ZN17QGraphicsTextItem11linkHoveredERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN17QGraphicsTextItem11linkHoveredERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsTextItem_SlotProxy_connect__ZN17QGraphicsTextItem11linkHoveredERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsTextItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QGraphicsTextItem11linkHoveredERK7QString = (decltype(that->slot_func__ZN17QGraphicsTextItem11linkHoveredERK7QString))ffifptr;
  QObject::connect((QGraphicsTextItem*)sender, SIGNAL(linkHovered(const class QString &)), that, SLOT(slot_proxy_func__ZN17QGraphicsTextItem11linkHoveredERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QGraphicsTextItem_SlotProxy_disconnect__ZN17QGraphicsTextItem11linkHoveredERK7QString(QGraphicsTextItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsTextItem_SlotProxy::slot_proxy_func__ZN17QGraphicsTextItem13linkActivatedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN17QGraphicsTextItem13linkActivatedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN17QGraphicsTextItem13linkActivatedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsTextItem_SlotProxy_connect__ZN17QGraphicsTextItem13linkActivatedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsTextItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QGraphicsTextItem13linkActivatedERK7QString = (decltype(that->slot_func__ZN17QGraphicsTextItem13linkActivatedERK7QString))ffifptr;
  QObject::connect((QGraphicsTextItem*)sender, SIGNAL(linkActivated(const class QString &)), that, SLOT(slot_proxy_func__ZN17QGraphicsTextItem13linkActivatedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QGraphicsTextItem_SlotProxy_disconnect__ZN17QGraphicsTextItem13linkActivatedERK7QString(QGraphicsTextItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsObject_SlotProxy here
class QGraphicsObject_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsObject_SlotProxy():QObject(){}

public slots:
  // yChanged()
  void slot_proxy_func__ZN15QGraphicsObject8yChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject8yChangedEv)(void* rsfptr) = NULL;
public slots:
  // opacityChanged()
  void slot_proxy_func__ZN15QGraphicsObject14opacityChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject14opacityChangedEv)(void* rsfptr) = NULL;
public slots:
  // visibleChanged()
  void slot_proxy_func__ZN15QGraphicsObject14visibleChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject14visibleChangedEv)(void* rsfptr) = NULL;
public slots:
  // childrenChanged()
  void slot_proxy_func__ZN15QGraphicsObject15childrenChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject15childrenChangedEv)(void* rsfptr) = NULL;
public slots:
  // zChanged()
  void slot_proxy_func__ZN15QGraphicsObject8zChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject8zChangedEv)(void* rsfptr) = NULL;
public slots:
  // widthChanged()
  void slot_proxy_func__ZN15QGraphicsObject12widthChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject12widthChangedEv)(void* rsfptr) = NULL;
public slots:
  // rotationChanged()
  void slot_proxy_func__ZN15QGraphicsObject15rotationChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject15rotationChangedEv)(void* rsfptr) = NULL;
public slots:
  // enabledChanged()
  void slot_proxy_func__ZN15QGraphicsObject14enabledChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject14enabledChangedEv)(void* rsfptr) = NULL;
public slots:
  // scaleChanged()
  void slot_proxy_func__ZN15QGraphicsObject12scaleChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject12scaleChangedEv)(void* rsfptr) = NULL;
public slots:
  // heightChanged()
  void slot_proxy_func__ZN15QGraphicsObject13heightChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject13heightChangedEv)(void* rsfptr) = NULL;
public slots:
  // parentChanged()
  void slot_proxy_func__ZN15QGraphicsObject13parentChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject13parentChangedEv)(void* rsfptr) = NULL;
public slots:
  // xChanged()
  void slot_proxy_func__ZN15QGraphicsObject8xChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject8xChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicsitem.moc"

extern "C" {
  QGraphicsObject_SlotProxy* QGraphicsObject_SlotProxy_new()
  {
    return new QGraphicsObject_SlotProxy();
  }
};

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject8yChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject8yChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject8yChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject8yChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject8yChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject8yChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(yChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject8yChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject8yChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject14opacityChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject14opacityChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject14opacityChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject14opacityChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject14opacityChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject14opacityChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(opacityChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject14opacityChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject14opacityChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject14visibleChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject14visibleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject14visibleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject14visibleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject14visibleChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject14visibleChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(visibleChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject14visibleChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject14visibleChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject15childrenChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject15childrenChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject15childrenChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject15childrenChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject15childrenChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject15childrenChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(childrenChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject15childrenChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject15childrenChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject8zChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject8zChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject8zChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject8zChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject8zChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject8zChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(zChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject8zChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject8zChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject12widthChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject12widthChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject12widthChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject12widthChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject12widthChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject12widthChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(widthChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject12widthChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject12widthChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject15rotationChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject15rotationChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject15rotationChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject15rotationChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject15rotationChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject15rotationChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(rotationChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject15rotationChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject15rotationChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject14enabledChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject14enabledChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject14enabledChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject14enabledChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject14enabledChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject14enabledChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(enabledChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject14enabledChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject14enabledChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject12scaleChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject12scaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject12scaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject12scaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject12scaleChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject12scaleChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(scaleChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject12scaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject12scaleChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject13heightChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject13heightChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject13heightChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject13heightChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject13heightChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject13heightChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(heightChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject13heightChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject13heightChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject13parentChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject13parentChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject13parentChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject13parentChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject13parentChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject13parentChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(parentChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject13parentChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject13parentChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject8xChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject8xChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject8xChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject8xChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject8xChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject8xChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(xChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject8xChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject8xChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

