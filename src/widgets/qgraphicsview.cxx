// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qgraphicsview.h
// dst-file: /src/widgets/qgraphicsview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgraphicsview.h>


#include <qpolygon.h>
#include <qpoint.h>
#include <qrect.h>
#include <qpainter.h>
#include <qbrush.h>
#include <qmatrix.h>
#include <qnamespace.h>
#include <qvariant.h>
#include <qtransform.h>
#include <qlist.h>
#include <qfontdatabase.h>
#include <qsize.h>
#include <qpainterpath.h>
// <= header block end

// main block begin =>
void __keep_qgraphicsview_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 212, column 20>
//   // proto:  QPointF QGraphicsView::mapToScene(int x, int y);
if (true) {
  auto f = [](QGraphicsView flythis, int arg1, int arg2) {
    ((QGraphicsView*)0)->mapToScene(arg1, arg2);
    flythis.mapToScene(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsView10mapToSceneEii mapToScene(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 164, column 17>
//   // proto:  void QGraphicsView::setSceneRect(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](QGraphicsView flythis, qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsView*)0)->setSceneRect(arg1, arg2, arg3, arg4);
    flythis.setSceneRect(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN13QGraphicsView12setSceneRectEdddd setSceneRect(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 202, column 27>
//   // proto:  QGraphicsItem * QGraphicsView::itemAt(int x, int y);
if (true) {
  auto f = [](QGraphicsView flythis, int arg1, int arg2) {
    ((QGraphicsView*)0)->itemAt(arg1, arg2);
    flythis.itemAt(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsView6itemAtEii itemAt(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 213, column 22>
//   // proto:  QPolygonF QGraphicsView::mapToScene(int x, int y, int w, int h);
if (true) {
  auto f = [](QGraphicsView flythis, int arg1, int arg2, int arg3, int arg4) {
    ((QGraphicsView*)0)->mapToScene(arg1, arg2, arg3, arg4);
    flythis.mapToScene(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsView10mapToSceneEiiii mapToScene(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 198, column 35>
//   // proto:  QList<QGraphicsItem *> QGraphicsView::items(int x, int y, int w, int h, Qt::ItemSelectionMode mode);
if (true) {
  auto f = [](QGraphicsView flythis, int arg1, int arg2, int arg3, int arg4, Qt::ItemSelectionMode arg5) {
    ((QGraphicsView*)0)->items(arg1, arg2, arg3, arg4, arg5);
    flythis.items(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsView5itemsEiiiiN2Qt17ItemSelectionModeE items(int, int, int, int, Qt::ItemSelectionMode)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 214, column 19>
//   // proto:  QPoint QGraphicsView::mapFromScene(qreal x, qreal y);
if (true) {
  auto f = [](QGraphicsView flythis, qreal arg1, qreal arg2) {
    ((QGraphicsView*)0)->mapFromScene(arg1, arg2);
    flythis.mapFromScene(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsView12mapFromSceneEdd mapFromScene(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 196, column 35>
//   // proto:  QList<QGraphicsItem *> QGraphicsView::items(int x, int y);
if (true) {
  auto f = [](QGraphicsView flythis, int arg1, int arg2) {
    ((QGraphicsView*)0)->items(arg1, arg2);
    flythis.items(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsView5itemsEii items(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 180, column 17>
//   // proto:  void QGraphicsView::centerOn(qreal x, qreal y);
if (true) {
  auto f = [](QGraphicsView flythis, qreal arg1, qreal arg2) {
    ((QGraphicsView*)0)->centerOn(arg1, arg2);
    flythis.centerOn(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QGraphicsView8centerOnEdd centerOn(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 183, column 17>
//   // proto:  void QGraphicsView::ensureVisible(qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin);
if (true) {
  auto f = [](QGraphicsView flythis, qreal arg1, qreal arg2, qreal arg3, qreal arg4, int arg5, int arg6) {
    ((QGraphicsView*)0)->ensureVisible(arg1, arg2, arg3, arg4, arg5, arg6);
    flythis.ensureVisible(arg1, arg2, arg3, arg4, arg5, arg6);
  };
  if (f == nullptr){}
}
// _ZN13QGraphicsView13ensureVisibleEddddii ensureVisible(qreal, qreal, qreal, qreal, int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 215, column 21>
//   // proto:  QPolygon QGraphicsView::mapFromScene(qreal x, qreal y, qreal w, qreal h);
if (true) {
  auto f = [](QGraphicsView flythis, qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsView*)0)->mapFromScene(arg1, arg2, arg3, arg4);
    flythis.mapFromScene(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK13QGraphicsView12mapFromSceneEdddd mapFromScene(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 186, column 17>
//   // proto:  void QGraphicsView::fitInView(qreal x, qreal y, qreal w, qreal h, Qt::AspectRatioMode aspectRadioMode);
if (true) {
  auto f = [](QGraphicsView flythis, qreal arg1, qreal arg2, qreal arg3, qreal arg4, Qt::AspectRatioMode arg5) {
    ((QGraphicsView*)0)->fitInView(arg1, arg2, arg3, arg4, arg5);
    flythis.fitInView(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN13QGraphicsView9fitInViewEddddN2Qt15AspectRatioModeE fitInView(qreal, qreal, qreal, qreal, Qt::AspectRatioMode)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGraphicsView_Class_Size()
{
  return sizeof(QGraphicsView);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 175, column 10>
//   // proto:  void QGraphicsView::scale(qreal sx, qreal sy);
// _ZN13QGraphicsView5scaleEdd scale(qreal, qreal)
extern "C"
void
C_ZN13QGraphicsView5scaleEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QGraphicsView*)qthis)->scale(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 125, column 10>
//   // proto:  void QGraphicsView::setRenderHints(QPainter::RenderHints hints);
// _ZN13QGraphicsView14setRenderHintsE6QFlagsIN8QPainter10RenderHintEE setRenderHints(class QPainter::RenderHints)
extern "C"
void
C_ZN13QGraphicsView14setRenderHintsE6QFlagsIN8QPainter10RenderHintEE(void *qthis,
QPainter::RenderHints* arg1) {
  ((QGraphicsView*)qthis)->setRenderHints(*((QPainter::RenderHints*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 205, column 15>
//   // proto:  QPolygonF QGraphicsView::mapToScene(const QRect & rect);
// _ZNK13QGraphicsView10mapToSceneERK5QRect mapToScene(const class QRect &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsView10mapToSceneERK5QRect(void *qthis,
const QRect* arg1) {
  auto ret =
  ((QGraphicsView*)qthis)->mapToScene(*((const QRect*)arg1));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 209, column 14>
//   // proto:  QPolygon QGraphicsView::mapFromScene(const QRectF & rect);
// _ZNK13QGraphicsView12mapFromSceneERK6QRectF mapFromScene(const class QRectF &)
extern "C"
QPolygon*
C_ZNK13QGraphicsView12mapFromSceneERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QGraphicsView*)qthis)->mapFromScene(*((const QRectF*)arg1));
  return new QPolygon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 177, column 10>
//   // proto:  void QGraphicsView::translate(qreal dx, qreal dy);
// _ZN13QGraphicsView9translateEdd translate(qreal, qreal)
extern "C"
void
C_ZN13QGraphicsView9translateEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QGraphicsView*)qthis)->translate(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 212, column 20>
//   // proto:  QPointF QGraphicsView::mapToScene(int x, int y);
// _ZNK13QGraphicsView10mapToSceneEii mapToScene(int, int)
extern "C"
QPointF*
C_ZNK13QGraphicsView10mapToSceneEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QGraphicsView*)qthis)->mapToScene(arg1,
arg2);
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 134, column 10>
//   // proto:  void QGraphicsView::setResizeAnchor(QGraphicsView::ViewportAnchor anchor);
// _ZN13QGraphicsView15setResizeAnchorENS_14ViewportAnchorE setResizeAnchor(enum QGraphicsView::ViewportAnchor)
extern "C"
void
C_ZN13QGraphicsView15setResizeAnchorENS_14ViewportAnchorE(void *qthis,
QGraphicsView::ViewportAnchor arg1) {
  ((QGraphicsView*)qthis)->setResizeAnchor(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 61, column 5>
//   // proto:  const QMetaObject * QGraphicsView::metaObject();
// _ZNK13QGraphicsView10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QGraphicsView10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 164, column 17>
//   // proto:  void QGraphicsView::setSceneRect(qreal x, qreal y, qreal w, qreal h);
// _ZN13QGraphicsView12setSceneRectEdddd setSceneRect(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN13QGraphicsView12setSceneRectEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QGraphicsView*)qthis)->setSceneRect(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 149, column 11>
//   // proto:  QRect QGraphicsView::rubberBandRect();
// _ZNK13QGraphicsView14rubberBandRectEv rubberBandRect()
extern "C"
QRect*
C_ZNK13QGraphicsView14rubberBandRectEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->rubberBandRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 167, column 10>
//   // proto:  void QGraphicsView::setMatrix(const QMatrix & matrix, bool combine);
// _ZN13QGraphicsView9setMatrixERK7QMatrixb setMatrix(const class QMatrix &, _Bool)
extern "C"
void
C_ZN13QGraphicsView9setMatrixERK7QMatrixb(void *qthis,
const QMatrix* arg1,
bool arg2) {
  ((QGraphicsView*)qthis)->setMatrix(*((const QMatrix*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 148, column 10>
//   // proto:  void QGraphicsView::setRubberBandSelectionMode(Qt::ItemSelectionMode mode);
// _ZN13QGraphicsView26setRubberBandSelectionModeEN2Qt17ItemSelectionModeE setRubberBandSelectionMode(Qt::ItemSelectionMode)
extern "C"
void
C_ZN13QGraphicsView26setRubberBandSelectionModeEN2Qt17ItemSelectionModeE(void *qthis,
Qt::ItemSelectionMode* arg1) {
  ((QGraphicsView*)qthis)->setRubberBandSelectionMode(*((Qt::ItemSelectionMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 143, column 14>
//   // proto:  QGraphicsView::DragMode QGraphicsView::dragMode();
// _ZNK13QGraphicsView8dragModeEv dragMode()
extern "C"
QGraphicsView::DragMode
C_ZNK13QGraphicsView8dragModeEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->dragMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 156, column 10>
//   // proto:  bool QGraphicsView::isInteractive();
// _ZNK13QGraphicsView13isInteractiveEv isInteractive()
extern "C"
bool
C_ZNK13QGraphicsView13isInteractiveEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->isInteractive();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 136, column 24>
//   // proto:  QGraphicsView::ViewportUpdateMode QGraphicsView::viewportUpdateMode();
// _ZNK13QGraphicsView18viewportUpdateModeEv viewportUpdateMode()
extern "C"
QGraphicsView::ViewportUpdateMode
C_ZNK13QGraphicsView18viewportUpdateModeEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->viewportUpdateMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 220, column 10>
//   // proto:  void QGraphicsView::setBackgroundBrush(const QBrush & brush);
// _ZN13QGraphicsView18setBackgroundBrushERK6QBrush setBackgroundBrush(const class QBrush &)
extern "C"
void
C_ZN13QGraphicsView18setBackgroundBrushERK6QBrush(void *qthis,
const QBrush* arg1) {
  ((QGraphicsView*)qthis)->setBackgroundBrush(*((const QBrush*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 171, column 10>
//   // proto:  bool QGraphicsView::isTransformed();
// _ZNK13QGraphicsView13isTransformedEv isTransformed()
extern "C"
bool
C_ZNK13QGraphicsView13isTransformedEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->isTransformed();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 202, column 27>
//   // proto:  QGraphicsItem * QGraphicsView::itemAt(int x, int y);
// _ZNK13QGraphicsView6itemAtEii itemAt(int, int)
extern "C"
void*
C_ZNK13QGraphicsView6itemAtEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QGraphicsView*)qthis)->itemAt(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 179, column 10>
//   // proto:  void QGraphicsView::centerOn(const QPointF & pos);
// _ZN13QGraphicsView8centerOnERK7QPointF centerOn(const class QPointF &)
extern "C"
void
C_ZN13QGraphicsView8centerOnERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsView*)qthis)->centerOn(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 123, column 27>
//   // proto:  QPainter::RenderHints QGraphicsView::renderHints();
// _ZNK13QGraphicsView11renderHintsEv renderHints()
extern "C"
QFlags<QPainter::RenderHint>*
C_ZNK13QGraphicsView11renderHintsEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->renderHints();
  return new QFlags<QPainter::RenderHint>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 223, column 10>
//   // proto:  void QGraphicsView::setForegroundBrush(const QBrush & brush);
// _ZN13QGraphicsView18setForegroundBrushERK6QBrush setForegroundBrush(const class QBrush &)
extern "C"
void
C_ZN13QGraphicsView18setForegroundBrushERK6QBrush(void *qthis,
const QBrush* arg1) {
  ((QGraphicsView*)qthis)->setForegroundBrush(*((const QBrush*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 176, column 10>
//   // proto:  void QGraphicsView::shear(qreal sh, qreal sv);
// _ZN13QGraphicsView5shearEdd shear(qreal, qreal)
extern "C"
void
C_ZN13QGraphicsView5shearEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QGraphicsView*)qthis)->shear(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 227, column 10>
//   // proto:  void QGraphicsView::invalidateScene(const QRectF & rect, QGraphicsScene::SceneLayers layers);
// _ZN13QGraphicsView15invalidateSceneERK6QRectF6QFlagsIN14QGraphicsScene10SceneLayerEE invalidateScene(const class QRectF &, class QGraphicsScene::SceneLayers)
extern "C"
void
C_ZN13QGraphicsView15invalidateSceneERK6QRectF6QFlagsIN14QGraphicsScene10SceneLayerEE(void *qthis,
const QRectF* arg1,
QGraphicsScene::SceneLayers* arg2) {
  ((QGraphicsView*)qthis)->invalidateScene(*((const QRectF*)arg1),
*((QGraphicsScene::SceneLayers*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 222, column 12>
//   // proto:  QBrush QGraphicsView::foregroundBrush();
// _ZNK13QGraphicsView15foregroundBrushEv foregroundBrush()
extern "C"
QBrush*
C_ZNK13QGraphicsView15foregroundBrushEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->foregroundBrush();
  return new QBrush(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 201, column 20>
//   // proto:  QGraphicsItem * QGraphicsView::itemAt(const QPoint & pos);
// _ZNK13QGraphicsView6itemAtERK6QPoint itemAt(const class QPoint &)
extern "C"
void*
C_ZNK13QGraphicsView6itemAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QGraphicsView*)qthis)->itemAt(*((const QPoint*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 228, column 10>
//   // proto:  void QGraphicsView::updateSceneRect(const QRectF & rect);
// _ZN13QGraphicsView15updateSceneRectERK6QRectF updateSceneRect(const class QRectF &)
extern "C"
void
C_ZN13QGraphicsView15updateSceneRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QGraphicsView*)qthis)->updateSceneRect(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 204, column 13>
//   // proto:  QPointF QGraphicsView::mapToScene(const QPoint & point);
// _ZNK13QGraphicsView10mapToSceneERK6QPoint mapToScene(const class QPoint &)
extern "C"
QPointF*
C_ZNK13QGraphicsView10mapToSceneERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QGraphicsView*)qthis)->mapToScene(*((const QPoint*)arg1));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 157, column 10>
//   // proto:  void QGraphicsView::setInteractive(bool allowed);
// _ZN13QGraphicsView14setInteractiveEb setInteractive(_Bool)
extern "C"
void
C_ZN13QGraphicsView14setInteractiveEb(void *qthis,
bool arg1) {
  ((QGraphicsView*)qthis)->setInteractive(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 133, column 20>
//   // proto:  QGraphicsView::ViewportAnchor QGraphicsView::resizeAnchor();
// _ZNK13QGraphicsView12resizeAnchorEv resizeAnchor()
extern "C"
QGraphicsView::ViewportAnchor
C_ZNK13QGraphicsView12resizeAnchorEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->resizeAnchor();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 166, column 13>
//   // proto:  QMatrix QGraphicsView::matrix();
// _ZNK13QGraphicsView6matrixEv matrix()
extern "C"
QMatrix*
C_ZNK13QGraphicsView6matrixEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->matrix();
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 147, column 27>
//   // proto:  Qt::ItemSelectionMode QGraphicsView::rubberBandSelectionMode();
// _ZNK13QGraphicsView23rubberBandSelectionModeEv rubberBandSelectionMode()
extern "C"
Qt::ItemSelectionMode
C_ZNK13QGraphicsView23rubberBandSelectionModeEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->rubberBandSelectionMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 213, column 22>
//   // proto:  QPolygonF QGraphicsView::mapToScene(int x, int y, int w, int h);
// _ZNK13QGraphicsView10mapToSceneEiiii mapToScene(int, int, int, int)
extern "C"
QPolygonF*
C_ZNK13QGraphicsView10mapToSceneEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  auto ret =
  ((QGraphicsView*)qthis)->mapToScene(arg1,
arg2,
arg3,
arg4);
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 118, column 5>
//   // proto:  void QGraphicsView::QGraphicsView(QGraphicsScene * scene, QWidget * parent);
extern "C"
QGraphicsView*
C_ZN13QGraphicsViewC2EP14QGraphicsSceneP7QWidget(QGraphicsScene * arg1,
QWidget * arg2) {
  auto ret = new QGraphicsView(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 117, column 5>
//   // proto:  void QGraphicsView::QGraphicsView(QWidget * parent);
extern "C"
QGraphicsView*
C_ZN13QGraphicsViewC2EP7QWidget(QWidget * arg1) {
  auto ret = new QGraphicsView(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 181, column 10>
//   // proto:  void QGraphicsView::centerOn(const QGraphicsItem * item);
// _ZN13QGraphicsView8centerOnEPK13QGraphicsItem centerOn(const class QGraphicsItem *)
extern "C"
void
C_ZN13QGraphicsView8centerOnEPK13QGraphicsItem(void *qthis,
const QGraphicsItem * arg1) {
  ((QGraphicsView*)qthis)->centerOn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 217, column 14>
//   // proto:  QVariant QGraphicsView::inputMethodQuery(Qt::InputMethodQuery query);
// _ZNK13QGraphicsView16inputMethodQueryEN2Qt16InputMethodQueryE inputMethodQuery(Qt::InputMethodQuery)
extern "C"
QVariant*
C_ZNK13QGraphicsView16inputMethodQueryEN2Qt16InputMethodQueryE(void *qthis,
Qt::InputMethodQuery* arg1) {
  auto ret =
  ((QGraphicsView*)qthis)->inputMethodQuery(*((Qt::InputMethodQuery*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 170, column 16>
//   // proto:  QTransform QGraphicsView::viewportTransform();
// _ZNK13QGraphicsView17viewportTransformEv viewportTransform()
extern "C"
QTransform*
C_ZNK13QGraphicsView17viewportTransformEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->viewportTransform();
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 154, column 10>
//   // proto:  void QGraphicsView::resetCachedContent();
// _ZN13QGraphicsView18resetCachedContentEv resetCachedContent()
extern "C"
void
C_ZN13QGraphicsView18resetCachedContentEv(void *qthis) {
  ((QGraphicsView*)qthis)->resetCachedContent();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 206, column 15>
//   // proto:  QPolygonF QGraphicsView::mapToScene(const QPolygon & polygon);
// _ZNK13QGraphicsView10mapToSceneERK8QPolygon mapToScene(const class QPolygon &)
extern "C"
QPolygonF*
C_ZNK13QGraphicsView10mapToSceneERK8QPolygon(void *qthis,
const QPolygon* arg1) {
  auto ret =
  ((QGraphicsView*)qthis)->mapToScene(*((const QPolygon*)arg1));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 184, column 10>
//   // proto:  void QGraphicsView::ensureVisible(const QGraphicsItem * item, int xmargin, int ymargin);
// _ZN13QGraphicsView13ensureVisibleEPK13QGraphicsItemii ensureVisible(const class QGraphicsItem *, int, int)
extern "C"
void
C_ZN13QGraphicsView13ensureVisibleEPK13QGraphicsItemii(void *qthis,
const QGraphicsItem * arg1,
int arg2,
int arg3) {
  ((QGraphicsView*)qthis)->ensureVisible(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 198, column 35>
//   // proto:  QList<QGraphicsItem *> QGraphicsView::items(int x, int y, int w, int h, Qt::ItemSelectionMode mode);
// _ZNK13QGraphicsView5itemsEiiiiN2Qt17ItemSelectionModeE items(int, int, int, int, Qt::ItemSelectionMode)
extern "C"
QList<QGraphicsItem *>*
C_ZNK13QGraphicsView5itemsEiiiiN2Qt17ItemSelectionModeE(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
Qt::ItemSelectionMode* arg5) {
  auto ret =
  ((QGraphicsView*)qthis)->items(arg1,
arg2,
arg3,
arg4,
*((Qt::ItemSelectionMode*)arg5));
  return new QList<QGraphicsItem *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 162, column 12>
//   // proto:  QRectF QGraphicsView::sceneRect();
// _ZNK13QGraphicsView9sceneRectEv sceneRect()
extern "C"
QRectF*
C_ZNK13QGraphicsView9sceneRectEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->sceneRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 159, column 21>
//   // proto:  QGraphicsScene * QGraphicsView::scene();
// _ZNK13QGraphicsView5sceneEv scene()
extern "C"
void*
C_ZNK13QGraphicsView5sceneEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->scene();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 121, column 11>
//   // proto:  QSize QGraphicsView::sizeHint();
// _ZNK13QGraphicsView8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK13QGraphicsView8sizeHintEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 140, column 10>
//   // proto:  void QGraphicsView::setOptimizationFlag(QGraphicsView::OptimizationFlag flag, bool enabled);
// _ZN13QGraphicsView19setOptimizationFlagENS_16OptimizationFlagEb setOptimizationFlag(enum QGraphicsView::OptimizationFlag, _Bool)
extern "C"
void
C_ZN13QGraphicsView19setOptimizationFlagENS_16OptimizationFlagEb(void *qthis,
QGraphicsView::OptimizationFlag arg1,
bool arg2) {
  ((QGraphicsView*)qthis)->setOptimizationFlag(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 139, column 23>
//   // proto:  OptimizationFlags QGraphicsView::optimizationFlags();
// _ZNK13QGraphicsView17optimizationFlagsEv optimizationFlags()
extern "C"
QFlags<QGraphicsView::OptimizationFlag>*
C_ZNK13QGraphicsView17optimizationFlagsEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->optimizationFlags();
  return new QFlags<QGraphicsView::OptimizationFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 219, column 12>
//   // proto:  QBrush QGraphicsView::backgroundBrush();
// _ZNK13QGraphicsView15backgroundBrushEv backgroundBrush()
extern "C"
QBrush*
C_ZNK13QGraphicsView15backgroundBrushEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->backgroundBrush();
  return new QBrush(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 197, column 28>
//   // proto:  QList<QGraphicsItem *> QGraphicsView::items(const QRect & rect, Qt::ItemSelectionMode mode);
// _ZNK13QGraphicsView5itemsERK5QRectN2Qt17ItemSelectionModeE items(const class QRect &, Qt::ItemSelectionMode)
extern "C"
QList<QGraphicsItem *>*
C_ZNK13QGraphicsView5itemsERK5QRectN2Qt17ItemSelectionModeE(void *qthis,
const QRect* arg1,
Qt::ItemSelectionMode* arg2) {
  auto ret =
  ((QGraphicsView*)qthis)->items(*((const QRect*)arg1),
*((Qt::ItemSelectionMode*)arg2));
  return new QList<QGraphicsItem *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 141, column 10>
//   // proto:  void QGraphicsView::setOptimizationFlags(OptimizationFlags flags);
// _ZN13QGraphicsView20setOptimizationFlagsE6QFlagsINS_16OptimizationFlagEE setOptimizationFlags(OptimizationFlags)
extern "C"
void
C_ZN13QGraphicsView20setOptimizationFlagsE6QFlagsINS_16OptimizationFlagEE(void *qthis,
QGraphicsView::OptimizationFlags arg1) {
  ((QGraphicsView*)qthis)->setOptimizationFlags(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 214, column 19>
//   // proto:  QPoint QGraphicsView::mapFromScene(qreal x, qreal y);
// _ZNK13QGraphicsView12mapFromSceneEdd mapFromScene(qreal, qreal)
extern "C"
QPoint*
C_ZNK13QGraphicsView12mapFromSceneEdd(void *qthis,
qreal arg1,
qreal arg2) {
  auto ret =
  ((QGraphicsView*)qthis)->mapFromScene(arg1,
arg2);
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 199, column 28>
//   // proto:  QList<QGraphicsItem *> QGraphicsView::items(const QPolygon & polygon, Qt::ItemSelectionMode mode);
// _ZNK13QGraphicsView5itemsERK8QPolygonN2Qt17ItemSelectionModeE items(const class QPolygon &, Qt::ItemSelectionMode)
extern "C"
QList<QGraphicsItem *>*
C_ZNK13QGraphicsView5itemsERK8QPolygonN2Qt17ItemSelectionModeE(void *qthis,
const QPolygon* arg1,
Qt::ItemSelectionMode* arg2) {
  auto ret =
  ((QGraphicsView*)qthis)->items(*((const QPolygon*)arg1),
*((Qt::ItemSelectionMode*)arg2));
  return new QList<QGraphicsItem *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 182, column 10>
//   // proto:  void QGraphicsView::ensureVisible(const QRectF & rect, int xmargin, int ymargin);
// _ZN13QGraphicsView13ensureVisibleERK6QRectFii ensureVisible(const class QRectF &, int, int)
extern "C"
void
C_ZN13QGraphicsView13ensureVisibleERK6QRectFii(void *qthis,
const QRectF* arg1,
int arg2,
int arg3) {
  ((QGraphicsView*)qthis)->ensureVisible(*((const QRectF*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 194, column 28>
//   // proto:  QList<QGraphicsItem *> QGraphicsView::items();
// _ZNK13QGraphicsView5itemsEv items()
extern "C"
QList<QGraphicsItem *>*
C_ZNK13QGraphicsView5itemsEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->items();
  return new QList<QGraphicsItem *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 169, column 16>
//   // proto:  QTransform QGraphicsView::transform();
// _ZNK13QGraphicsView9transformEv transform()
extern "C"
QTransform*
C_ZNK13QGraphicsView9transformEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->transform();
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 153, column 10>
//   // proto:  void QGraphicsView::setCacheMode(CacheMode mode);
// _ZN13QGraphicsView12setCacheModeE6QFlagsINS_13CacheModeFlagEE setCacheMode(CacheMode)
extern "C"
void
C_ZN13QGraphicsView12setCacheModeE6QFlagsINS_13CacheModeFlagEE(void *qthis,
QGraphicsView::CacheMode arg1) {
  ((QGraphicsView*)qthis)->setCacheMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 196, column 35>
//   // proto:  QList<QGraphicsItem *> QGraphicsView::items(int x, int y);
// _ZNK13QGraphicsView5itemsEii items(int, int)
extern "C"
QList<QGraphicsItem *>*
C_ZNK13QGraphicsView5itemsEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QGraphicsView*)qthis)->items(arg1,
arg2);
  return new QList<QGraphicsItem *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 180, column 17>
//   // proto:  void QGraphicsView::centerOn(qreal x, qreal y);
// _ZN13QGraphicsView8centerOnEdd centerOn(qreal, qreal)
extern "C"
void
C_ZN13QGraphicsView8centerOnEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QGraphicsView*)qthis)->centerOn(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 232, column 10>
//   // proto:  void QGraphicsView::rubberBandChanged(QRect viewportRect, QPointF fromScenePoint, QPointF toScenePoint);
// _ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_ rubberBandChanged(class QRect, class QPointF, class QPointF)
extern "C"
void
C_ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(void *qthis,
QRect* arg1,
QPointF* arg2,
QPointF* arg3) {
  ((QGraphicsView*)qthis)->rubberBandChanged(*((QRect*)arg1),
*((QPointF*)arg2),
*((QPointF*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 183, column 17>
//   // proto:  void QGraphicsView::ensureVisible(qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin);
// _ZN13QGraphicsView13ensureVisibleEddddii ensureVisible(qreal, qreal, qreal, qreal, int, int)
extern "C"
void
C_ZN13QGraphicsView13ensureVisibleEddddii(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4,
int arg5,
int arg6) {
  ((QGraphicsView*)qthis)->ensureVisible(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 174, column 10>
//   // proto:  void QGraphicsView::rotate(qreal angle);
// _ZN13QGraphicsView6rotateEd rotate(qreal)
extern "C"
void
C_ZN13QGraphicsView6rotateEd(void *qthis,
qreal arg1) {
  ((QGraphicsView*)qthis)->rotate(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 185, column 10>
//   // proto:  void QGraphicsView::fitInView(const QRectF & rect, Qt::AspectRatioMode aspectRadioMode);
// _ZN13QGraphicsView9fitInViewERK6QRectFN2Qt15AspectRatioModeE fitInView(const class QRectF &, Qt::AspectRatioMode)
extern "C"
void
C_ZN13QGraphicsView9fitInViewERK6QRectFN2Qt15AspectRatioModeE(void *qthis,
const QRectF* arg1,
Qt::AspectRatioMode* arg2) {
  ((QGraphicsView*)qthis)->fitInView(*((const QRectF*)arg1),
*((Qt::AspectRatioMode*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 215, column 21>
//   // proto:  QPolygon QGraphicsView::mapFromScene(qreal x, qreal y, qreal w, qreal h);
// _ZNK13QGraphicsView12mapFromSceneEdddd mapFromScene(qreal, qreal, qreal, qreal)
extern "C"
QPolygon*
C_ZNK13QGraphicsView12mapFromSceneEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  auto ret =
  ((QGraphicsView*)qthis)->mapFromScene(arg1,
arg2,
arg3,
arg4);
  return new QPolygon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 200, column 28>
//   // proto:  QList<QGraphicsItem *> QGraphicsView::items(const QPainterPath & path, Qt::ItemSelectionMode mode);
// _ZNK13QGraphicsView5itemsERK12QPainterPathN2Qt17ItemSelectionModeE items(const class QPainterPath &, Qt::ItemSelectionMode)
extern "C"
QList<QGraphicsItem *>*
C_ZNK13QGraphicsView5itemsERK12QPainterPathN2Qt17ItemSelectionModeE(void *qthis,
const QPainterPath* arg1,
Qt::ItemSelectionMode* arg2) {
  auto ret =
  ((QGraphicsView*)qthis)->items(*((const QPainterPath*)arg1),
*((Qt::ItemSelectionMode*)arg2));
  return new QList<QGraphicsItem *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 130, column 20>
//   // proto:  QGraphicsView::ViewportAnchor QGraphicsView::transformationAnchor();
// _ZNK13QGraphicsView20transformationAnchorEv transformationAnchor()
extern "C"
QGraphicsView::ViewportAnchor
C_ZNK13QGraphicsView20transformationAnchorEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->transformationAnchor();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 172, column 10>
//   // proto:  void QGraphicsView::setTransform(const QTransform & matrix, bool combine);
// _ZN13QGraphicsView12setTransformERK10QTransformb setTransform(const class QTransform &, _Bool)
extern "C"
void
C_ZN13QGraphicsView12setTransformERK10QTransformb(void *qthis,
const QTransform* arg1,
bool arg2) {
  ((QGraphicsView*)qthis)->setTransform(*((const QTransform*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 163, column 10>
//   // proto:  void QGraphicsView::setSceneRect(const QRectF & rect);
// _ZN13QGraphicsView12setSceneRectERK6QRectF setSceneRect(const class QRectF &)
extern "C"
void
C_ZN13QGraphicsView12setSceneRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QGraphicsView*)qthis)->setSceneRect(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 128, column 10>
//   // proto:  void QGraphicsView::setAlignment(Qt::Alignment alignment);
// _ZN13QGraphicsView12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setAlignment(Qt::Alignment)
extern "C"
void
C_ZN13QGraphicsView12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  ((QGraphicsView*)qthis)->setAlignment(*((Qt::Alignment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 210, column 14>
//   // proto:  QPolygon QGraphicsView::mapFromScene(const QPolygonF & polygon);
// _ZNK13QGraphicsView12mapFromSceneERK9QPolygonF mapFromScene(const class QPolygonF &)
extern "C"
QPolygon*
C_ZNK13QGraphicsView12mapFromSceneERK9QPolygonF(void *qthis,
const QPolygonF* arg1) {
  auto ret =
  ((QGraphicsView*)qthis)->mapFromScene(*((const QPolygonF*)arg1));
  return new QPolygon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 131, column 10>
//   // proto:  void QGraphicsView::setTransformationAnchor(QGraphicsView::ViewportAnchor anchor);
// _ZN13QGraphicsView23setTransformationAnchorENS_14ViewportAnchorE setTransformationAnchor(enum QGraphicsView::ViewportAnchor)
extern "C"
void
C_ZN13QGraphicsView23setTransformationAnchorENS_14ViewportAnchorE(void *qthis,
QGraphicsView::ViewportAnchor arg1) {
  ((QGraphicsView*)qthis)->setTransformationAnchor(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 188, column 10>
//   // proto:  void QGraphicsView::fitInView(const QGraphicsItem * item, Qt::AspectRatioMode aspectRadioMode);
// _ZN13QGraphicsView9fitInViewEPK13QGraphicsItemN2Qt15AspectRatioModeE fitInView(const class QGraphicsItem *, Qt::AspectRatioMode)
extern "C"
void
C_ZN13QGraphicsView9fitInViewEPK13QGraphicsItemN2Qt15AspectRatioModeE(void *qthis,
const QGraphicsItem * arg1,
Qt::AspectRatioMode* arg2) {
  ((QGraphicsView*)qthis)->fitInView(arg1,
*((Qt::AspectRatioMode*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 208, column 12>
//   // proto:  QPoint QGraphicsView::mapFromScene(const QPointF & point);
// _ZNK13QGraphicsView12mapFromSceneERK7QPointF mapFromScene(const class QPointF &)
extern "C"
QPoint*
C_ZNK13QGraphicsView12mapFromSceneERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGraphicsView*)qthis)->mapFromScene(*((const QPointF*)arg1));
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 144, column 10>
//   // proto:  void QGraphicsView::setDragMode(QGraphicsView::DragMode mode);
// _ZN13QGraphicsView11setDragModeENS_8DragModeE setDragMode(enum QGraphicsView::DragMode)
extern "C"
void
C_ZN13QGraphicsView11setDragModeENS_8DragModeE(void *qthis,
QGraphicsView::DragMode arg1) {
  ((QGraphicsView*)qthis)->setDragMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 211, column 18>
//   // proto:  QPainterPath QGraphicsView::mapFromScene(const QPainterPath & path);
// _ZNK13QGraphicsView12mapFromSceneERK12QPainterPath mapFromScene(const class QPainterPath &)
extern "C"
QPainterPath*
C_ZNK13QGraphicsView12mapFromSceneERK12QPainterPath(void *qthis,
const QPainterPath* arg1) {
  auto ret =
  ((QGraphicsView*)qthis)->mapFromScene(*((const QPainterPath*)arg1));
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 191, column 10>
//   // proto:  void QGraphicsView::render(QPainter * painter, const QRectF & target, const QRect & source, Qt::AspectRatioMode aspectRatioMode);
// _ZN13QGraphicsView6renderEP8QPainterRK6QRectFRK5QRectN2Qt15AspectRatioModeE render(class QPainter *, const class QRectF &, const class QRect &, Qt::AspectRatioMode)
extern "C"
void
C_ZN13QGraphicsView6renderEP8QPainterRK6QRectFRK5QRectN2Qt15AspectRatioModeE(void *qthis,
QPainter * arg1,
const QRectF* arg2,
const QRect* arg3,
Qt::AspectRatioMode* arg4) {
  ((QGraphicsView*)qthis)->render(arg1,
*((const QRectF*)arg2),
*((const QRect*)arg3),
*((Qt::AspectRatioMode*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 124, column 10>
//   // proto:  void QGraphicsView::setRenderHint(QPainter::RenderHint hint, bool enabled);
// _ZN13QGraphicsView13setRenderHintEN8QPainter10RenderHintEb setRenderHint(class QPainter::RenderHint, _Bool)
extern "C"
void
C_ZN13QGraphicsView13setRenderHintEN8QPainter10RenderHintEb(void *qthis,
QPainter::RenderHint* arg1,
bool arg2) {
  ((QGraphicsView*)qthis)->setRenderHint(*((QPainter::RenderHint*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 137, column 10>
//   // proto:  void QGraphicsView::setViewportUpdateMode(QGraphicsView::ViewportUpdateMode mode);
// _ZN13QGraphicsView21setViewportUpdateModeENS_18ViewportUpdateModeE setViewportUpdateMode(enum QGraphicsView::ViewportUpdateMode)
extern "C"
void
C_ZN13QGraphicsView21setViewportUpdateModeENS_18ViewportUpdateModeE(void *qthis,
QGraphicsView::ViewportUpdateMode arg1) {
  ((QGraphicsView*)qthis)->setViewportUpdateMode(arg1);
}
//   // proto:  void QGraphicsView::~QGraphicsView();
extern "C"
void C_ZN13QGraphicsViewD2Ev(void *qthis) {
  delete (QGraphicsView*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 127, column 19>
//   // proto:  Qt::Alignment QGraphicsView::alignment();
// _ZNK13QGraphicsView9alignmentEv alignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK13QGraphicsView9alignmentEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->alignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 152, column 15>
//   // proto:  CacheMode QGraphicsView::cacheMode();
// _ZNK13QGraphicsView9cacheModeEv cacheMode()
extern "C"
QFlags<QGraphicsView::CacheModeFlag>*
C_ZNK13QGraphicsView9cacheModeEv(void *qthis) {
  auto ret =
  ((QGraphicsView*)qthis)->cacheMode();
  return new QFlags<QGraphicsView::CacheModeFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 226, column 10>
//   // proto:  void QGraphicsView::updateScene(const QList<QRectF> & rects);
// _ZN13QGraphicsView11updateSceneERK5QListI6QRectFE updateScene(const QList<class QRectF> &)
extern "C"
void
C_ZN13QGraphicsView11updateSceneERK5QListI6QRectFE(void *qthis,
const QList<QRectF>* arg1) {
  ((QGraphicsView*)qthis)->updateScene(*((const QList<QRectF>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 195, column 28>
//   // proto:  QList<QGraphicsItem *> QGraphicsView::items(const QPoint & pos);
// _ZNK13QGraphicsView5itemsERK6QPoint items(const class QPoint &)
extern "C"
QList<QGraphicsItem *>*
C_ZNK13QGraphicsView5itemsERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QGraphicsView*)qthis)->items(*((const QPoint*)arg1));
  return new QList<QGraphicsItem *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 186, column 17>
//   // proto:  void QGraphicsView::fitInView(qreal x, qreal y, qreal w, qreal h, Qt::AspectRatioMode aspectRadioMode);
// _ZN13QGraphicsView9fitInViewEddddN2Qt15AspectRatioModeE fitInView(qreal, qreal, qreal, qreal, Qt::AspectRatioMode)
extern "C"
void
C_ZN13QGraphicsView9fitInViewEddddN2Qt15AspectRatioModeE(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4,
Qt::AspectRatioMode* arg5) {
  ((QGraphicsView*)qthis)->fitInView(arg1,
arg2,
arg3,
arg4,
*((Qt::AspectRatioMode*)arg5));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 168, column 10>
//   // proto:  void QGraphicsView::resetMatrix();
// _ZN13QGraphicsView11resetMatrixEv resetMatrix()
extern "C"
void
C_ZN13QGraphicsView11resetMatrixEv(void *qthis) {
  ((QGraphicsView*)qthis)->resetMatrix();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 173, column 10>
//   // proto:  void QGraphicsView::resetTransform();
// _ZN13QGraphicsView14resetTransformEv resetTransform()
extern "C"
void
C_ZN13QGraphicsView14resetTransformEv(void *qthis) {
  ((QGraphicsView*)qthis)->resetTransform();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 207, column 18>
//   // proto:  QPainterPath QGraphicsView::mapToScene(const QPainterPath & path);
// _ZNK13QGraphicsView10mapToSceneERK12QPainterPath mapToScene(const class QPainterPath &)
extern "C"
QPainterPath*
C_ZNK13QGraphicsView10mapToSceneERK12QPainterPath(void *qthis,
const QPainterPath* arg1) {
  auto ret =
  ((QGraphicsView*)qthis)->mapToScene(*((const QPainterPath*)arg1));
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 160, column 10>
//   // proto:  void QGraphicsView::setScene(QGraphicsScene * scene);
// _ZN13QGraphicsView8setSceneEP14QGraphicsScene setScene(class QGraphicsScene *)
extern "C"
void
C_ZN13QGraphicsView8setSceneEP14QGraphicsScene(void *qthis,
QGraphicsScene * arg1) {
  ((QGraphicsView*)qthis)->setScene(arg1);
}
// <= ext block end

// body block begin =>
// QGraphicsView_SlotProxy here
class QGraphicsView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsView_SlotProxy():QObject(){}

public slots:
  // rubberBandChanged(class QRect, class QPointF, class QPointF)
  void slot_proxy_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(QRect arg0, QPointF arg1, QPointF arg2);
public:
  void (*slot_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_)(void* rsfptr, QRect arg0, QPointF arg1, QPointF arg2) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicsview.moc"

extern "C" {
  QGraphicsView_SlotProxy* QGraphicsView_SlotProxy_new()
  {
    return new QGraphicsView_SlotProxy();
  }
};

void QGraphicsView_SlotProxy::slot_proxy_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(QRect arg0, QPointF arg1, QPointF arg2) {
  if (this->slot_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_ != NULL) {
    // do smth...
    this->slot_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(this->rsfptr, arg0, arg1, arg2);
  }
}
extern "C"
void* QGraphicsView_SlotProxy_connect__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_ = (decltype(that->slot_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_))ffifptr;
  QObject::connect((QGraphicsView*)sender, SIGNAL(rubberBandChanged(class QRect, class QPointF, class QPointF)), that, SLOT(slot_proxy_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(QRect arg0, QPointF arg1, QPointF arg2)));
  return that;
}
extern "C"
void QGraphicsView_SlotProxy_disconnect__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(QGraphicsView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

