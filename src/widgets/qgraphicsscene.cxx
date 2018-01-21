//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsscene.h
#include <qgraphicsscene.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgraphicsscene.h:98
// const QMetaObject * metaObject()
extern "C"
void C_ZNK14QGraphicsScene10metaObjectEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:124
// void QGraphicsScene(class QObject *)
extern "C"
void* C_ZN14QGraphicsSceneC1EP7QObject(QObject * parent) {
  return new QGraphicsScene(parent);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:125
// void QGraphicsScene(const class QRectF &, class QObject *)
extern "C"
void* C_ZN14QGraphicsSceneC1ERK6QRectFP7QObject(const QRectF & sceneRect, QObject * parent) {
  return new QGraphicsScene(sceneRect, parent);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:126
// void QGraphicsScene(qreal, qreal, qreal, qreal, class QObject *)
extern "C"
void* C_ZN14QGraphicsSceneC1EddddP7QObject(qreal x, qreal y, qreal width, qreal height, QObject * parent) {
  return new QGraphicsScene(x, y, width, height, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsscene.h:127
// void ~QGraphicsScene()
extern "C"
void C_ZN14QGraphicsSceneD1Ev(void *this_) {
  delete (QGraphicsScene*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:129
// QRectF sceneRect()
extern "C"
void C_ZNK14QGraphicsScene9sceneRectEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->sceneRect();
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsscene.h:130
// qreal width()
extern "C"
void C_ZNK14QGraphicsScene5widthEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->width();
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsscene.h:131
// qreal height()
extern "C"
void C_ZNK14QGraphicsScene6heightEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->height();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:132
// void setSceneRect(const class QRectF &)
extern "C"
void C_ZN14QGraphicsScene12setSceneRectERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsScene*)this_)->setSceneRect(rect);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsscene.h:133
// void setSceneRect(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN14QGraphicsScene12setSceneRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsScene*)this_)->setSceneRect(x, y, w, h);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:136
// void render(class QPainter *, const class QRectF &, const class QRectF &, Qt::AspectRatioMode)
extern "C"
void C_ZN14QGraphicsScene6renderEP8QPainterRK6QRectFS4_N2Qt15AspectRatioModeE(void *this_, QPainter * painter, const QRectF & target, const QRectF & source, Qt::AspectRatioMode aspectRatioMode) {
  ((QGraphicsScene*)this_)->render(painter, target, source, aspectRatioMode);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:140
// QGraphicsScene::ItemIndexMethod itemIndexMethod()
extern "C"
void C_ZNK14QGraphicsScene15itemIndexMethodEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->itemIndexMethod();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:141
// void setItemIndexMethod(enum QGraphicsScene::ItemIndexMethod)
extern "C"
void C_ZN14QGraphicsScene18setItemIndexMethodENS_15ItemIndexMethodE(void *this_, QGraphicsScene::ItemIndexMethod method) {
  ((QGraphicsScene*)this_)->setItemIndexMethod(method);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:143
// bool isSortCacheEnabled()
extern "C"
void C_ZNK14QGraphicsScene18isSortCacheEnabledEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->isSortCacheEnabled();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:144
// void setSortCacheEnabled(_Bool)
extern "C"
void C_ZN14QGraphicsScene19setSortCacheEnabledEb(void *this_, bool enabled) {
  ((QGraphicsScene*)this_)->setSortCacheEnabled(enabled);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:146
// int bspTreeDepth()
extern "C"
void C_ZNK14QGraphicsScene12bspTreeDepthEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->bspTreeDepth();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:147
// void setBspTreeDepth(int)
extern "C"
void C_ZN14QGraphicsScene15setBspTreeDepthEi(void *this_, int depth) {
  ((QGraphicsScene*)this_)->setBspTreeDepth(depth);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:149
// QRectF itemsBoundingRect()
extern "C"
void C_ZNK14QGraphicsScene17itemsBoundingRectEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->itemsBoundingRect();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:151
// QList<QGraphicsItem *> items(Qt::SortOrder)
extern "C"
void C_ZNK14QGraphicsScene5itemsEN2Qt9SortOrderE(void *this_, Qt::SortOrder order) {
  /*return*/ ((QGraphicsScene*)this_)->items(order);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:153
// QList<QGraphicsItem *> items(const class QPointF &, Qt::ItemSelectionMode, Qt::SortOrder, const class QTransform &)
extern "C"
void C_ZNK14QGraphicsScene5itemsERK7QPointFN2Qt17ItemSelectionModeENS3_9SortOrderERK10QTransform(void *this_, const QPointF & pos, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform) {
  /*return*/ ((QGraphicsScene*)this_)->items(pos, mode, order, deviceTransform);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:154
// QList<QGraphicsItem *> items(const class QRectF &, Qt::ItemSelectionMode, Qt::SortOrder, const class QTransform &)
extern "C"
void C_ZNK14QGraphicsScene5itemsERK6QRectFN2Qt17ItemSelectionModeENS3_9SortOrderERK10QTransform(void *this_, const QRectF & rect, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform) {
  /*return*/ ((QGraphicsScene*)this_)->items(rect, mode, order, deviceTransform);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:155
// QList<QGraphicsItem *> items(const class QPolygonF &, Qt::ItemSelectionMode, Qt::SortOrder, const class QTransform &)
extern "C"
void C_ZNK14QGraphicsScene5itemsERK9QPolygonFN2Qt17ItemSelectionModeENS3_9SortOrderERK10QTransform(void *this_, const QPolygonF & polygon, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform) {
  /*return*/ ((QGraphicsScene*)this_)->items(polygon, mode, order, deviceTransform);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:156
// QList<QGraphicsItem *> items(const class QPainterPath &, Qt::ItemSelectionMode, Qt::SortOrder, const class QTransform &)
extern "C"
void C_ZNK14QGraphicsScene5itemsERK12QPainterPathN2Qt17ItemSelectionModeENS3_9SortOrderERK10QTransform(void *this_, const QPainterPath & path, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform) {
  /*return*/ ((QGraphicsScene*)this_)->items(path, mode, order, deviceTransform);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:158
// QList<QGraphicsItem *> collidingItems(const class QGraphicsItem *, Qt::ItemSelectionMode)
extern "C"
void C_ZNK14QGraphicsScene14collidingItemsEPK13QGraphicsItemN2Qt17ItemSelectionModeE(void *this_, const QGraphicsItem * item, Qt::ItemSelectionMode mode) {
  /*return*/ ((QGraphicsScene*)this_)->collidingItems(item, mode);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:165
// QGraphicsItem * itemAt(const class QPointF &, const class QTransform &)
extern "C"
void C_ZNK14QGraphicsScene6itemAtERK7QPointFRK10QTransform(void *this_, const QPointF & pos, const QTransform & deviceTransform) {
  /*return*/ ((QGraphicsScene*)this_)->itemAt(pos, deviceTransform);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsscene.h:170
// QList<QGraphicsItem *> items(qreal, qreal, qreal, qreal, Qt::ItemSelectionMode, Qt::SortOrder, const class QTransform &)
extern "C"
void C_ZNK14QGraphicsScene5itemsEddddN2Qt17ItemSelectionModeENS0_9SortOrderERK10QTransform(void *this_, qreal x, qreal y, qreal w, qreal h, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform) {
  /*return*/ ((QGraphicsScene*)this_)->items(x, y, w, h, mode, order, deviceTransform);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsscene.h:179
// QGraphicsItem * itemAt(qreal, qreal, const class QTransform &)
extern "C"
void C_ZNK14QGraphicsScene6itemAtEddRK10QTransform(void *this_, qreal x, qreal y, const QTransform & deviceTransform) {
  /*return*/ ((QGraphicsScene*)this_)->itemAt(x, y, deviceTransform);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:182
// QList<QGraphicsItem *> selectedItems()
extern "C"
void C_ZNK14QGraphicsScene13selectedItemsEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->selectedItems();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:183
// QPainterPath selectionArea()
extern "C"
void C_ZNK14QGraphicsScene13selectionAreaEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->selectionArea();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:184
// void setSelectionArea(const class QPainterPath &, const class QTransform &)
extern "C"
void C_ZN14QGraphicsScene16setSelectionAreaERK12QPainterPathRK10QTransform(void *this_, const QPainterPath & path, const QTransform & deviceTransform) {
  ((QGraphicsScene*)this_)->setSelectionArea(path, deviceTransform);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:185
// void setSelectionArea(const class QPainterPath &, Qt::ItemSelectionMode, const class QTransform &)
extern "C"
void C_ZN14QGraphicsScene16setSelectionAreaERK12QPainterPathN2Qt17ItemSelectionModeERK10QTransform(void *this_, const QPainterPath & path, Qt::ItemSelectionMode mode, const QTransform & deviceTransform) {
  ((QGraphicsScene*)this_)->setSelectionArea(path, mode, deviceTransform);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:186
// void setSelectionArea(const class QPainterPath &, Qt::ItemSelectionOperation, Qt::ItemSelectionMode, const class QTransform &)
extern "C"
void C_ZN14QGraphicsScene16setSelectionAreaERK12QPainterPathN2Qt22ItemSelectionOperationENS3_17ItemSelectionModeERK10QTransform(void *this_, const QPainterPath & path, Qt::ItemSelectionOperation selectionOperation, Qt::ItemSelectionMode mode, const QTransform & deviceTransform) {
  ((QGraphicsScene*)this_)->setSelectionArea(path, selectionOperation, mode, deviceTransform);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:189
// QGraphicsItemGroup * createItemGroup(const QList<class QGraphicsItem *> &)
extern "C"
void C_ZN14QGraphicsScene15createItemGroupERK5QListIP13QGraphicsItemE(void *this_, const QList<QGraphicsItem *> & items) {
  /*return*/ ((QGraphicsScene*)this_)->createItemGroup(items);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:190
// void destroyItemGroup(class QGraphicsItemGroup *)
extern "C"
void C_ZN14QGraphicsScene16destroyItemGroupEP18QGraphicsItemGroup(void *this_, QGraphicsItemGroup * group) {
  ((QGraphicsScene*)this_)->destroyItemGroup(group);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:192
// void addItem(class QGraphicsItem *)
extern "C"
void C_ZN14QGraphicsScene7addItemEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsScene*)this_)->addItem(item);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:193
// QGraphicsEllipseItem * addEllipse(const class QRectF &, const class QPen &, const class QBrush &)
extern "C"
void C_ZN14QGraphicsScene10addEllipseERK6QRectFRK4QPenRK6QBrush(void *this_, const QRectF & rect, const QPen & pen, const QBrush & brush) {
  /*return*/ ((QGraphicsScene*)this_)->addEllipse(rect, pen, brush);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:194
// QGraphicsLineItem * addLine(const class QLineF &, const class QPen &)
extern "C"
void C_ZN14QGraphicsScene7addLineERK6QLineFRK4QPen(void *this_, const QLineF & line, const QPen & pen) {
  /*return*/ ((QGraphicsScene*)this_)->addLine(line, pen);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:195
// QGraphicsPathItem * addPath(const class QPainterPath &, const class QPen &, const class QBrush &)
extern "C"
void C_ZN14QGraphicsScene7addPathERK12QPainterPathRK4QPenRK6QBrush(void *this_, const QPainterPath & path, const QPen & pen, const QBrush & brush) {
  /*return*/ ((QGraphicsScene*)this_)->addPath(path, pen, brush);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:196
// QGraphicsPixmapItem * addPixmap(const class QPixmap &)
extern "C"
void C_ZN14QGraphicsScene9addPixmapERK7QPixmap(void *this_, const QPixmap & pixmap) {
  /*return*/ ((QGraphicsScene*)this_)->addPixmap(pixmap);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:197
// QGraphicsPolygonItem * addPolygon(const class QPolygonF &, const class QPen &, const class QBrush &)
extern "C"
void C_ZN14QGraphicsScene10addPolygonERK9QPolygonFRK4QPenRK6QBrush(void *this_, const QPolygonF & polygon, const QPen & pen, const QBrush & brush) {
  /*return*/ ((QGraphicsScene*)this_)->addPolygon(polygon, pen, brush);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:198
// QGraphicsRectItem * addRect(const class QRectF &, const class QPen &, const class QBrush &)
extern "C"
void C_ZN14QGraphicsScene7addRectERK6QRectFRK4QPenRK6QBrush(void *this_, const QRectF & rect, const QPen & pen, const QBrush & brush) {
  /*return*/ ((QGraphicsScene*)this_)->addRect(rect, pen, brush);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:199
// QGraphicsTextItem * addText(const class QString &, const class QFont &)
extern "C"
void C_ZN14QGraphicsScene7addTextERK7QStringRK5QFont(void *this_, const QString & text, const QFont & font) {
  /*return*/ ((QGraphicsScene*)this_)->addText(text, font);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:200
// QGraphicsSimpleTextItem * addSimpleText(const class QString &, const class QFont &)
extern "C"
void C_ZN14QGraphicsScene13addSimpleTextERK7QStringRK5QFont(void *this_, const QString & text, const QFont & font) {
  /*return*/ ((QGraphicsScene*)this_)->addSimpleText(text, font);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:201
// QGraphicsProxyWidget * addWidget(class QWidget *, Qt::WindowFlags)
extern "C"
void C_ZN14QGraphicsScene9addWidgetEP7QWidget6QFlagsIN2Qt10WindowTypeEE(void *this_, QWidget * widget, QFlags<Qt::WindowType> wFlags) {
  /*return*/ ((QGraphicsScene*)this_)->addWidget(widget, wFlags);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsscene.h:202
// QGraphicsEllipseItem * addEllipse(qreal, qreal, qreal, qreal, const class QPen &, const class QBrush &)
extern "C"
void C_ZN14QGraphicsScene10addEllipseEddddRK4QPenRK6QBrush(void *this_, qreal x, qreal y, qreal w, qreal h, const QPen & pen, const QBrush & brush) {
  /*return*/ ((QGraphicsScene*)this_)->addEllipse(x, y, w, h, pen, brush);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsscene.h:204
// QGraphicsLineItem * addLine(qreal, qreal, qreal, qreal, const class QPen &)
extern "C"
void C_ZN14QGraphicsScene7addLineEddddRK4QPen(void *this_, qreal x1, qreal y1, qreal x2, qreal y2, const QPen & pen) {
  /*return*/ ((QGraphicsScene*)this_)->addLine(x1, y1, x2, y2, pen);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsscene.h:206
// QGraphicsRectItem * addRect(qreal, qreal, qreal, qreal, const class QPen &, const class QBrush &)
extern "C"
void C_ZN14QGraphicsScene7addRectEddddRK4QPenRK6QBrush(void *this_, qreal x, qreal y, qreal w, qreal h, const QPen & pen, const QBrush & brush) {
  /*return*/ ((QGraphicsScene*)this_)->addRect(x, y, w, h, pen, brush);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:208
// void removeItem(class QGraphicsItem *)
extern "C"
void C_ZN14QGraphicsScene10removeItemEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsScene*)this_)->removeItem(item);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:210
// QGraphicsItem * focusItem()
extern "C"
void C_ZNK14QGraphicsScene9focusItemEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->focusItem();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:211
// void setFocusItem(class QGraphicsItem *, Qt::FocusReason)
extern "C"
void C_ZN14QGraphicsScene12setFocusItemEP13QGraphicsItemN2Qt11FocusReasonE(void *this_, QGraphicsItem * item, Qt::FocusReason focusReason) {
  ((QGraphicsScene*)this_)->setFocusItem(item, focusReason);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:212
// bool hasFocus()
extern "C"
void C_ZNK14QGraphicsScene8hasFocusEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->hasFocus();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:213
// void setFocus(Qt::FocusReason)
extern "C"
void C_ZN14QGraphicsScene8setFocusEN2Qt11FocusReasonE(void *this_, Qt::FocusReason focusReason) {
  ((QGraphicsScene*)this_)->setFocus(focusReason);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:214
// void clearFocus()
extern "C"
void C_ZN14QGraphicsScene10clearFocusEv(void *this_) {
  ((QGraphicsScene*)this_)->clearFocus();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:216
// void setStickyFocus(_Bool)
extern "C"
void C_ZN14QGraphicsScene14setStickyFocusEb(void *this_, bool enabled) {
  ((QGraphicsScene*)this_)->setStickyFocus(enabled);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:217
// bool stickyFocus()
extern "C"
void C_ZNK14QGraphicsScene11stickyFocusEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->stickyFocus();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:219
// QGraphicsItem * mouseGrabberItem()
extern "C"
void C_ZNK14QGraphicsScene16mouseGrabberItemEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->mouseGrabberItem();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:221
// QBrush backgroundBrush()
extern "C"
void C_ZNK14QGraphicsScene15backgroundBrushEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->backgroundBrush();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:222
// void setBackgroundBrush(const class QBrush &)
extern "C"
void C_ZN14QGraphicsScene18setBackgroundBrushERK6QBrush(void *this_, const QBrush & brush) {
  ((QGraphicsScene*)this_)->setBackgroundBrush(brush);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:224
// QBrush foregroundBrush()
extern "C"
void C_ZNK14QGraphicsScene15foregroundBrushEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->foregroundBrush();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:225
// void setForegroundBrush(const class QBrush &)
extern "C"
void C_ZN14QGraphicsScene18setForegroundBrushERK6QBrush(void *this_, const QBrush & brush) {
  ((QGraphicsScene*)this_)->setForegroundBrush(brush);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsscene.h:227
// QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C"
void C_ZNK14QGraphicsScene16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery query) {
  /*return*/ ((QGraphicsScene*)this_)->inputMethodQuery(query);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:229
// QList<QGraphicsView *> views()
extern "C"
void C_ZNK14QGraphicsScene5viewsEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->views();
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsscene.h:231
// void update(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN14QGraphicsScene6updateEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsScene*)this_)->update(x, y, w, h);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsscene.h:233
// void invalidate(qreal, qreal, qreal, qreal, SceneLayers)
extern "C"
void C_ZN14QGraphicsScene10invalidateEdddd6QFlagsINS_10SceneLayerEE(void *this_, qreal x, qreal y, qreal w, qreal h, QFlags<QGraphicsScene::SceneLayer> layers) {
  ((QGraphicsScene*)this_)->invalidate(x, y, w, h, layers);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:236
// QStyle * style()
extern "C"
void C_ZNK14QGraphicsScene5styleEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->style();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:237
// void setStyle(class QStyle *)
extern "C"
void C_ZN14QGraphicsScene8setStyleEP6QStyle(void *this_, QStyle * style) {
  ((QGraphicsScene*)this_)->setStyle(style);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:239
// QFont font()
extern "C"
void C_ZNK14QGraphicsScene4fontEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->font();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:240
// void setFont(const class QFont &)
extern "C"
void C_ZN14QGraphicsScene7setFontERK5QFont(void *this_, const QFont & font) {
  ((QGraphicsScene*)this_)->setFont(font);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:242
// QPalette palette()
extern "C"
void C_ZNK14QGraphicsScene7paletteEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->palette();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:243
// void setPalette(const class QPalette &)
extern "C"
void C_ZN14QGraphicsScene10setPaletteERK8QPalette(void *this_, const QPalette & palette) {
  ((QGraphicsScene*)this_)->setPalette(palette);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:245
// bool isActive()
extern "C"
void C_ZNK14QGraphicsScene8isActiveEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->isActive();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:246
// QGraphicsItem * activePanel()
extern "C"
void C_ZNK14QGraphicsScene11activePanelEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->activePanel();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:247
// void setActivePanel(class QGraphicsItem *)
extern "C"
void C_ZN14QGraphicsScene14setActivePanelEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsScene*)this_)->setActivePanel(item);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:248
// QGraphicsWidget * activeWindow()
extern "C"
void C_ZNK14QGraphicsScene12activeWindowEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->activeWindow();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:249
// void setActiveWindow(class QGraphicsWidget *)
extern "C"
void C_ZN14QGraphicsScene15setActiveWindowEP15QGraphicsWidget(void *this_, QGraphicsWidget * widget) {
  ((QGraphicsScene*)this_)->setActiveWindow(widget);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:251
// bool sendEvent(class QGraphicsItem *, class QEvent *)
extern "C"
void C_ZN14QGraphicsScene9sendEventEP13QGraphicsItemP6QEvent(void *this_, QGraphicsItem * item, QEvent * event) {
  /*return*/ ((QGraphicsScene*)this_)->sendEvent(item, event);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:253
// qreal minimumRenderSize()
extern "C"
void C_ZNK14QGraphicsScene17minimumRenderSizeEv(void *this_) {
  /*return*/ ((QGraphicsScene*)this_)->minimumRenderSize();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:254
// void setMinimumRenderSize(qreal)
extern "C"
void C_ZN14QGraphicsScene20setMinimumRenderSizeEd(void *this_, qreal minSize) {
  ((QGraphicsScene*)this_)->setMinimumRenderSize(minSize);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:257
// void update(const class QRectF &)
extern "C"
void C_ZN14QGraphicsScene6updateERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsScene*)this_)->update(rect);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:258
// void invalidate(const class QRectF &, SceneLayers)
extern "C"
void C_ZN14QGraphicsScene10invalidateERK6QRectF6QFlagsINS_10SceneLayerEE(void *this_, const QRectF & rect, QFlags<QGraphicsScene::SceneLayer> layers) {
  ((QGraphicsScene*)this_)->invalidate(rect, layers);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:259
// void advance()
extern "C"
void C_ZN14QGraphicsScene7advanceEv(void *this_) {
  ((QGraphicsScene*)this_)->advance();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:260
// void clearSelection()
extern "C"
void C_ZN14QGraphicsScene14clearSelectionEv(void *this_) {
  ((QGraphicsScene*)this_)->clearSelection();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:261
// void clear()
extern "C"
void C_ZN14QGraphicsScene5clearEv(void *this_) {
  ((QGraphicsScene*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:298
// void changed(const QList<class QRectF> &)
extern "C"
void C_ZN14QGraphicsScene7changedERK5QListI6QRectFE(void *this_, const QList<QRectF> & region) {
  ((QGraphicsScene*)this_)->changed(region);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:299
// void sceneRectChanged(const class QRectF &)
extern "C"
void C_ZN14QGraphicsScene16sceneRectChangedERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsScene*)this_)->sceneRectChanged(rect);
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:300
// void selectionChanged()
extern "C"
void C_ZN14QGraphicsScene16selectionChangedEv(void *this_) {
  ((QGraphicsScene*)this_)->selectionChanged();
}
// /usr/include/qt/QtWidgets/qgraphicsscene.h:301
// void focusItemChanged(class QGraphicsItem *, class QGraphicsItem *, Qt::FocusReason)
extern "C"
void C_ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(void *this_, QGraphicsItem * newFocus, QGraphicsItem * oldFocus, Qt::FocusReason reason) {
  ((QGraphicsScene*)this_)->focusItemChanged(newFocus, oldFocus, reason);
}
//  main block end
