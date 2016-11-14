// /usr/include/qt/QtWidgets/qgraphicsview.h
#include <qgraphicsview.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qgraphicsview.h:61
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QGraphicsView10metaObjectEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:117
// void QGraphicsView(class QWidget *)
extern "C"
void* C_ZN13QGraphicsViewC1EP7QWidget(QWidget * parent) {
  return new QGraphicsView(parent);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:118
// void QGraphicsView(class QGraphicsScene *, class QWidget *)
extern "C"
void* C_ZN13QGraphicsViewC1EP14QGraphicsSceneP7QWidget(QGraphicsScene * scene, QWidget * parent) {
  return new QGraphicsView(scene, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsview.h:119
// void ~QGraphicsView()
extern "C"
void C_ZN13QGraphicsViewD1Ev(void *this_) {
  delete (QGraphicsView*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsview.h:121
// QSize sizeHint()
extern "C"
void C_ZNK13QGraphicsView8sizeHintEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->sizeHint();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:123
// QPainter::RenderHints renderHints()
extern "C"
void C_ZNK13QGraphicsView11renderHintsEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->renderHints();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:124
// void setRenderHint(class QPainter::RenderHint, _Bool)
extern "C"
void C_ZN13QGraphicsView13setRenderHintEN8QPainter10RenderHintEb(void *this_, QPainter::RenderHint hint, bool enabled) {
  ((QGraphicsView*)this_)->setRenderHint(hint, enabled);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:125
// void setRenderHints(class QPainter::RenderHints)
extern "C"
void C_ZN13QGraphicsView14setRenderHintsE6QFlagsIN8QPainter10RenderHintEE(void *this_, QFlags<QPainter::RenderHint> hints) {
  ((QGraphicsView*)this_)->setRenderHints(hints);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:127
// Qt::Alignment alignment()
extern "C"
void C_ZNK13QGraphicsView9alignmentEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->alignment();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:128
// void setAlignment(Qt::Alignment)
extern "C"
void C_ZN13QGraphicsView12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsView*)this_)->setAlignment(alignment);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:130
// QGraphicsView::ViewportAnchor transformationAnchor()
extern "C"
void C_ZNK13QGraphicsView20transformationAnchorEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->transformationAnchor();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:131
// void setTransformationAnchor(enum QGraphicsView::ViewportAnchor)
extern "C"
void C_ZN13QGraphicsView23setTransformationAnchorENS_14ViewportAnchorE(void *this_, QGraphicsView::ViewportAnchor anchor) {
  ((QGraphicsView*)this_)->setTransformationAnchor(anchor);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:133
// QGraphicsView::ViewportAnchor resizeAnchor()
extern "C"
void C_ZNK13QGraphicsView12resizeAnchorEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->resizeAnchor();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:134
// void setResizeAnchor(enum QGraphicsView::ViewportAnchor)
extern "C"
void C_ZN13QGraphicsView15setResizeAnchorENS_14ViewportAnchorE(void *this_, QGraphicsView::ViewportAnchor anchor) {
  ((QGraphicsView*)this_)->setResizeAnchor(anchor);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:136
// QGraphicsView::ViewportUpdateMode viewportUpdateMode()
extern "C"
void C_ZNK13QGraphicsView18viewportUpdateModeEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->viewportUpdateMode();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:137
// void setViewportUpdateMode(enum QGraphicsView::ViewportUpdateMode)
extern "C"
void C_ZN13QGraphicsView21setViewportUpdateModeENS_18ViewportUpdateModeE(void *this_, QGraphicsView::ViewportUpdateMode mode) {
  ((QGraphicsView*)this_)->setViewportUpdateMode(mode);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:139
// OptimizationFlags optimizationFlags()
extern "C"
void C_ZNK13QGraphicsView17optimizationFlagsEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->optimizationFlags();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:140
// void setOptimizationFlag(enum QGraphicsView::OptimizationFlag, _Bool)
extern "C"
void C_ZN13QGraphicsView19setOptimizationFlagENS_16OptimizationFlagEb(void *this_, QGraphicsView::OptimizationFlag flag, bool enabled) {
  ((QGraphicsView*)this_)->setOptimizationFlag(flag, enabled);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:141
// void setOptimizationFlags(OptimizationFlags)
extern "C"
void C_ZN13QGraphicsView20setOptimizationFlagsE6QFlagsINS_16OptimizationFlagEE(void *this_, QFlags<QGraphicsView::OptimizationFlag> flags) {
  ((QGraphicsView*)this_)->setOptimizationFlags(flags);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:143
// QGraphicsView::DragMode dragMode()
extern "C"
void C_ZNK13QGraphicsView8dragModeEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->dragMode();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:144
// void setDragMode(enum QGraphicsView::DragMode)
extern "C"
void C_ZN13QGraphicsView11setDragModeENS_8DragModeE(void *this_, QGraphicsView::DragMode mode) {
  ((QGraphicsView*)this_)->setDragMode(mode);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:147
// Qt::ItemSelectionMode rubberBandSelectionMode()
extern "C"
void C_ZNK13QGraphicsView23rubberBandSelectionModeEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->rubberBandSelectionMode();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:148
// void setRubberBandSelectionMode(Qt::ItemSelectionMode)
extern "C"
void C_ZN13QGraphicsView26setRubberBandSelectionModeEN2Qt17ItemSelectionModeE(void *this_, Qt::ItemSelectionMode mode) {
  ((QGraphicsView*)this_)->setRubberBandSelectionMode(mode);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:149
// QRect rubberBandRect()
extern "C"
void C_ZNK13QGraphicsView14rubberBandRectEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->rubberBandRect();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:152
// CacheMode cacheMode()
extern "C"
void C_ZNK13QGraphicsView9cacheModeEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->cacheMode();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:153
// void setCacheMode(CacheMode)
extern "C"
void C_ZN13QGraphicsView12setCacheModeE6QFlagsINS_13CacheModeFlagEE(void *this_, QFlags<QGraphicsView::CacheModeFlag> mode) {
  ((QGraphicsView*)this_)->setCacheMode(mode);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:154
// void resetCachedContent()
extern "C"
void C_ZN13QGraphicsView18resetCachedContentEv(void *this_) {
  ((QGraphicsView*)this_)->resetCachedContent();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:156
// bool isInteractive()
extern "C"
void C_ZNK13QGraphicsView13isInteractiveEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->isInteractive();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:157
// void setInteractive(_Bool)
extern "C"
void C_ZN13QGraphicsView14setInteractiveEb(void *this_, bool allowed) {
  ((QGraphicsView*)this_)->setInteractive(allowed);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:159
// QGraphicsScene * scene()
extern "C"
void C_ZNK13QGraphicsView5sceneEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->scene();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:160
// void setScene(class QGraphicsScene *)
extern "C"
void C_ZN13QGraphicsView8setSceneEP14QGraphicsScene(void *this_, QGraphicsScene * scene) {
  ((QGraphicsView*)this_)->setScene(scene);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:162
// QRectF sceneRect()
extern "C"
void C_ZNK13QGraphicsView9sceneRectEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->sceneRect();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:163
// void setSceneRect(const class QRectF &)
extern "C"
void C_ZN13QGraphicsView12setSceneRectERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsView*)this_)->setSceneRect(rect);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsview.h:164
// void setSceneRect(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN13QGraphicsView12setSceneRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsView*)this_)->setSceneRect(x, y, w, h);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:166
// QMatrix matrix()
extern "C"
void C_ZNK13QGraphicsView6matrixEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->matrix();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:167
// void setMatrix(const class QMatrix &, _Bool)
extern "C"
void C_ZN13QGraphicsView9setMatrixERK7QMatrixb(void *this_, const QMatrix & matrix, bool combine) {
  ((QGraphicsView*)this_)->setMatrix(matrix, combine);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:168
// void resetMatrix()
extern "C"
void C_ZN13QGraphicsView11resetMatrixEv(void *this_) {
  ((QGraphicsView*)this_)->resetMatrix();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:169
// QTransform transform()
extern "C"
void C_ZNK13QGraphicsView9transformEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->transform();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:170
// QTransform viewportTransform()
extern "C"
void C_ZNK13QGraphicsView17viewportTransformEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->viewportTransform();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:171
// bool isTransformed()
extern "C"
void C_ZNK13QGraphicsView13isTransformedEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->isTransformed();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:172
// void setTransform(const class QTransform &, _Bool)
extern "C"
void C_ZN13QGraphicsView12setTransformERK10QTransformb(void *this_, const QTransform & matrix, bool combine) {
  ((QGraphicsView*)this_)->setTransform(matrix, combine);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:173
// void resetTransform()
extern "C"
void C_ZN13QGraphicsView14resetTransformEv(void *this_) {
  ((QGraphicsView*)this_)->resetTransform();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:174
// void rotate(qreal)
extern "C"
void C_ZN13QGraphicsView6rotateEd(void *this_, qreal angle) {
  ((QGraphicsView*)this_)->rotate(angle);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:175
// void scale(qreal, qreal)
extern "C"
void C_ZN13QGraphicsView5scaleEdd(void *this_, qreal sx, qreal sy) {
  ((QGraphicsView*)this_)->scale(sx, sy);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:176
// void shear(qreal, qreal)
extern "C"
void C_ZN13QGraphicsView5shearEdd(void *this_, qreal sh, qreal sv) {
  ((QGraphicsView*)this_)->shear(sh, sv);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:177
// void translate(qreal, qreal)
extern "C"
void C_ZN13QGraphicsView9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QGraphicsView*)this_)->translate(dx, dy);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:179
// void centerOn(const class QPointF &)
extern "C"
void C_ZN13QGraphicsView8centerOnERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsView*)this_)->centerOn(pos);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsview.h:180
// void centerOn(qreal, qreal)
extern "C"
void C_ZN13QGraphicsView8centerOnEdd(void *this_, qreal x, qreal y) {
  ((QGraphicsView*)this_)->centerOn(x, y);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:181
// void centerOn(const class QGraphicsItem *)
extern "C"
void C_ZN13QGraphicsView8centerOnEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  ((QGraphicsView*)this_)->centerOn(item);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:182
// void ensureVisible(const class QRectF &, int, int)
extern "C"
void C_ZN13QGraphicsView13ensureVisibleERK6QRectFii(void *this_, const QRectF & rect, int xmargin, int ymargin) {
  ((QGraphicsView*)this_)->ensureVisible(rect, xmargin, ymargin);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsview.h:183
// void ensureVisible(qreal, qreal, qreal, qreal, int, int)
extern "C"
void C_ZN13QGraphicsView13ensureVisibleEddddii(void *this_, qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin) {
  ((QGraphicsView*)this_)->ensureVisible(x, y, w, h, xmargin, ymargin);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:184
// void ensureVisible(const class QGraphicsItem *, int, int)
extern "C"
void C_ZN13QGraphicsView13ensureVisibleEPK13QGraphicsItemii(void *this_, const QGraphicsItem * item, int xmargin, int ymargin) {
  ((QGraphicsView*)this_)->ensureVisible(item, xmargin, ymargin);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:185
// void fitInView(const class QRectF &, Qt::AspectRatioMode)
extern "C"
void C_ZN13QGraphicsView9fitInViewERK6QRectFN2Qt15AspectRatioModeE(void *this_, const QRectF & rect, Qt::AspectRatioMode aspectRadioMode) {
  ((QGraphicsView*)this_)->fitInView(rect, aspectRadioMode);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsview.h:186
// void fitInView(qreal, qreal, qreal, qreal, Qt::AspectRatioMode)
extern "C"
void C_ZN13QGraphicsView9fitInViewEddddN2Qt15AspectRatioModeE(void *this_, qreal x, qreal y, qreal w, qreal h, Qt::AspectRatioMode aspectRadioMode) {
  ((QGraphicsView*)this_)->fitInView(x, y, w, h, aspectRadioMode);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:188
// void fitInView(const class QGraphicsItem *, Qt::AspectRatioMode)
extern "C"
void C_ZN13QGraphicsView9fitInViewEPK13QGraphicsItemN2Qt15AspectRatioModeE(void *this_, const QGraphicsItem * item, Qt::AspectRatioMode aspectRadioMode) {
  ((QGraphicsView*)this_)->fitInView(item, aspectRadioMode);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:191
// void render(class QPainter *, const class QRectF &, const class QRect &, Qt::AspectRatioMode)
extern "C"
void C_ZN13QGraphicsView6renderEP8QPainterRK6QRectFRK5QRectN2Qt15AspectRatioModeE(void *this_, QPainter * painter, const QRectF & target, const QRect & source, Qt::AspectRatioMode aspectRatioMode) {
  ((QGraphicsView*)this_)->render(painter, target, source, aspectRatioMode);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:194
// QList<QGraphicsItem *> items()
extern "C"
void C_ZNK13QGraphicsView5itemsEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->items();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:195
// QList<QGraphicsItem *> items(const class QPoint &)
extern "C"
void C_ZNK13QGraphicsView5itemsERK6QPoint(void *this_, const QPoint & pos) {
  /*return*/ ((QGraphicsView*)this_)->items(pos);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsview.h:196
// QList<QGraphicsItem *> items(int, int)
extern "C"
void C_ZNK13QGraphicsView5itemsEii(void *this_, int x, int y) {
  /*return*/ ((QGraphicsView*)this_)->items(x, y);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:197
// QList<QGraphicsItem *> items(const class QRect &, Qt::ItemSelectionMode)
extern "C"
void C_ZNK13QGraphicsView5itemsERK5QRectN2Qt17ItemSelectionModeE(void *this_, const QRect & rect, Qt::ItemSelectionMode mode) {
  /*return*/ ((QGraphicsView*)this_)->items(rect, mode);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsview.h:198
// QList<QGraphicsItem *> items(int, int, int, int, Qt::ItemSelectionMode)
extern "C"
void C_ZNK13QGraphicsView5itemsEiiiiN2Qt17ItemSelectionModeE(void *this_, int x, int y, int w, int h, Qt::ItemSelectionMode mode) {
  /*return*/ ((QGraphicsView*)this_)->items(x, y, w, h, mode);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:199
// QList<QGraphicsItem *> items(const class QPolygon &, Qt::ItemSelectionMode)
extern "C"
void C_ZNK13QGraphicsView5itemsERK8QPolygonN2Qt17ItemSelectionModeE(void *this_, const QPolygon & polygon, Qt::ItemSelectionMode mode) {
  /*return*/ ((QGraphicsView*)this_)->items(polygon, mode);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:200
// QList<QGraphicsItem *> items(const class QPainterPath &, Qt::ItemSelectionMode)
extern "C"
void C_ZNK13QGraphicsView5itemsERK12QPainterPathN2Qt17ItemSelectionModeE(void *this_, const QPainterPath & path, Qt::ItemSelectionMode mode) {
  /*return*/ ((QGraphicsView*)this_)->items(path, mode);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:201
// QGraphicsItem * itemAt(const class QPoint &)
extern "C"
void C_ZNK13QGraphicsView6itemAtERK6QPoint(void *this_, const QPoint & pos) {
  /*return*/ ((QGraphicsView*)this_)->itemAt(pos);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsview.h:202
// QGraphicsItem * itemAt(int, int)
extern "C"
void C_ZNK13QGraphicsView6itemAtEii(void *this_, int x, int y) {
  /*return*/ ((QGraphicsView*)this_)->itemAt(x, y);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:204
// QPointF mapToScene(const class QPoint &)
extern "C"
void C_ZNK13QGraphicsView10mapToSceneERK6QPoint(void *this_, const QPoint & point) {
  /*return*/ ((QGraphicsView*)this_)->mapToScene(point);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:205
// QPolygonF mapToScene(const class QRect &)
extern "C"
void C_ZNK13QGraphicsView10mapToSceneERK5QRect(void *this_, const QRect & rect) {
  /*return*/ ((QGraphicsView*)this_)->mapToScene(rect);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:206
// QPolygonF mapToScene(const class QPolygon &)
extern "C"
void C_ZNK13QGraphicsView10mapToSceneERK8QPolygon(void *this_, const QPolygon & polygon) {
  /*return*/ ((QGraphicsView*)this_)->mapToScene(polygon);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:207
// QPainterPath mapToScene(const class QPainterPath &)
extern "C"
void C_ZNK13QGraphicsView10mapToSceneERK12QPainterPath(void *this_, const QPainterPath & path) {
  /*return*/ ((QGraphicsView*)this_)->mapToScene(path);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:208
// QPoint mapFromScene(const class QPointF &)
extern "C"
void C_ZNK13QGraphicsView12mapFromSceneERK7QPointF(void *this_, const QPointF & point) {
  /*return*/ ((QGraphicsView*)this_)->mapFromScene(point);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:209
// QPolygon mapFromScene(const class QRectF &)
extern "C"
void C_ZNK13QGraphicsView12mapFromSceneERK6QRectF(void *this_, const QRectF & rect) {
  /*return*/ ((QGraphicsView*)this_)->mapFromScene(rect);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:210
// QPolygon mapFromScene(const class QPolygonF &)
extern "C"
void C_ZNK13QGraphicsView12mapFromSceneERK9QPolygonF(void *this_, const QPolygonF & polygon) {
  /*return*/ ((QGraphicsView*)this_)->mapFromScene(polygon);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:211
// QPainterPath mapFromScene(const class QPainterPath &)
extern "C"
void C_ZNK13QGraphicsView12mapFromSceneERK12QPainterPath(void *this_, const QPainterPath & path) {
  /*return*/ ((QGraphicsView*)this_)->mapFromScene(path);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsview.h:212
// QPointF mapToScene(int, int)
extern "C"
void C_ZNK13QGraphicsView10mapToSceneEii(void *this_, int x, int y) {
  /*return*/ ((QGraphicsView*)this_)->mapToScene(x, y);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsview.h:213
// QPolygonF mapToScene(int, int, int, int)
extern "C"
void C_ZNK13QGraphicsView10mapToSceneEiiii(void *this_, int x, int y, int w, int h) {
  /*return*/ ((QGraphicsView*)this_)->mapToScene(x, y, w, h);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsview.h:214
// QPoint mapFromScene(qreal, qreal)
extern "C"
void C_ZNK13QGraphicsView12mapFromSceneEdd(void *this_, qreal x, qreal y) {
  /*return*/ ((QGraphicsView*)this_)->mapFromScene(x, y);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsview.h:215
// QPolygon mapFromScene(qreal, qreal, qreal, qreal)
extern "C"
void C_ZNK13QGraphicsView12mapFromSceneEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  /*return*/ ((QGraphicsView*)this_)->mapFromScene(x, y, w, h);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsview.h:217
// QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C"
void C_ZNK13QGraphicsView16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery query) {
  /*return*/ ((QGraphicsView*)this_)->inputMethodQuery(query);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:219
// QBrush backgroundBrush()
extern "C"
void C_ZNK13QGraphicsView15backgroundBrushEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->backgroundBrush();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:220
// void setBackgroundBrush(const class QBrush &)
extern "C"
void C_ZN13QGraphicsView18setBackgroundBrushERK6QBrush(void *this_, const QBrush & brush) {
  ((QGraphicsView*)this_)->setBackgroundBrush(brush);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:222
// QBrush foregroundBrush()
extern "C"
void C_ZNK13QGraphicsView15foregroundBrushEv(void *this_) {
  /*return*/ ((QGraphicsView*)this_)->foregroundBrush();
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:223
// void setForegroundBrush(const class QBrush &)
extern "C"
void C_ZN13QGraphicsView18setForegroundBrushERK6QBrush(void *this_, const QBrush & brush) {
  ((QGraphicsView*)this_)->setForegroundBrush(brush);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:226
// void updateScene(const QList<class QRectF> &)
extern "C"
void C_ZN13QGraphicsView11updateSceneERK5QListI6QRectFE(void *this_, const QList<QRectF> & rects) {
  ((QGraphicsView*)this_)->updateScene(rects);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:227
// void invalidateScene(const class QRectF &, class QGraphicsScene::SceneLayers)
extern "C"
void C_ZN13QGraphicsView15invalidateSceneERK6QRectF6QFlagsIN14QGraphicsScene10SceneLayerEE(void *this_, const QRectF & rect, QFlags<QGraphicsScene::SceneLayer> layers) {
  ((QGraphicsView*)this_)->invalidateScene(rect, layers);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:228
// void updateSceneRect(const class QRectF &)
extern "C"
void C_ZN13QGraphicsView15updateSceneRectERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsView*)this_)->updateSceneRect(rect);
}
// /usr/include/qt/QtWidgets/qgraphicsview.h:232
// void rubberBandChanged(class QRect, class QPointF, class QPointF)
extern "C"
void C_ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(void *this_, QRect viewportRect, QPointF fromScenePoint, QPointF toScenePoint) {
  ((QGraphicsView*)this_)->rubberBandChanged(viewportRect, fromScenePoint, toScenePoint);
}