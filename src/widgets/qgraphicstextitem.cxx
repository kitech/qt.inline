//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:873
// const QMetaObject * metaObject()
extern "C"
void C_ZNK17QGraphicsTextItem10metaObjectEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:878
// void QGraphicsTextItem(class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsTextItemC1EP13QGraphicsItem(QGraphicsItem * parent) {
  return new QGraphicsTextItem(parent);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:879
// void QGraphicsTextItem(const class QString &, class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsTextItemC1ERK7QStringP13QGraphicsItem(const QString & text, QGraphicsItem * parent) {
  return new QGraphicsTextItem(text, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:880
// void ~QGraphicsTextItem()
extern "C"
void C_ZN17QGraphicsTextItemD1Ev(void *this_) {
  delete (QGraphicsTextItem*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:882
// QString toHtml()
extern "C"
void C_ZNK17QGraphicsTextItem6toHtmlEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->toHtml();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:883
// void setHtml(const class QString &)
extern "C"
void C_ZN17QGraphicsTextItem7setHtmlERK7QString(void *this_, const QString & html) {
  ((QGraphicsTextItem*)this_)->setHtml(html);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:885
// QString toPlainText()
extern "C"
void C_ZNK17QGraphicsTextItem11toPlainTextEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->toPlainText();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:886
// void setPlainText(const class QString &)
extern "C"
void C_ZN17QGraphicsTextItem12setPlainTextERK7QString(void *this_, const QString & text) {
  ((QGraphicsTextItem*)this_)->setPlainText(text);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:888
// QFont font()
extern "C"
void C_ZNK17QGraphicsTextItem4fontEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->font();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:889
// void setFont(const class QFont &)
extern "C"
void C_ZN17QGraphicsTextItem7setFontERK5QFont(void *this_, const QFont & font) {
  ((QGraphicsTextItem*)this_)->setFont(font);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:891
// void setDefaultTextColor(const class QColor &)
extern "C"
void C_ZN17QGraphicsTextItem19setDefaultTextColorERK6QColor(void *this_, const QColor & c) {
  ((QGraphicsTextItem*)this_)->setDefaultTextColor(c);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:892
// QColor defaultTextColor()
extern "C"
void C_ZNK17QGraphicsTextItem16defaultTextColorEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->defaultTextColor();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:894
// QRectF boundingRect()
extern "C"
void C_ZNK17QGraphicsTextItem12boundingRectEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->boundingRect();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:895
// QPainterPath shape()
extern "C"
void C_ZNK17QGraphicsTextItem5shapeEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->shape();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:896
// bool contains(const class QPointF &)
extern "C"
void C_ZNK17QGraphicsTextItem8containsERK7QPointF(void *this_, const QPointF & point) {
  /*return*/ ((QGraphicsTextItem*)this_)->contains(point);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:898
// void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN17QGraphicsTextItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsTextItem*)this_)->paint(painter, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:900
// bool isObscuredBy(const class QGraphicsItem *)
extern "C"
void C_ZNK17QGraphicsTextItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  /*return*/ ((QGraphicsTextItem*)this_)->isObscuredBy(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:901
// QPainterPath opaqueArea()
extern "C"
void C_ZNK17QGraphicsTextItem10opaqueAreaEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->opaqueArea();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:904
// int type()
extern "C"
void C_ZNK17QGraphicsTextItem4typeEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->type();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:906
// void setTextWidth(qreal)
extern "C"
void C_ZN17QGraphicsTextItem12setTextWidthEd(void *this_, qreal width) {
  ((QGraphicsTextItem*)this_)->setTextWidth(width);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:907
// qreal textWidth()
extern "C"
void C_ZNK17QGraphicsTextItem9textWidthEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->textWidth();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:909
// void adjustSize()
extern "C"
void C_ZN17QGraphicsTextItem10adjustSizeEv(void *this_) {
  ((QGraphicsTextItem*)this_)->adjustSize();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:911
// void setDocument(class QTextDocument *)
extern "C"
void C_ZN17QGraphicsTextItem11setDocumentEP13QTextDocument(void *this_, QTextDocument * document) {
  ((QGraphicsTextItem*)this_)->setDocument(document);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:912
// QTextDocument * document()
extern "C"
void C_ZNK17QGraphicsTextItem8documentEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->document();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:914
// void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void C_ZN17QGraphicsTextItem23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QGraphicsTextItem*)this_)->setTextInteractionFlags(flags);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:915
// Qt::TextInteractionFlags textInteractionFlags()
extern "C"
void C_ZNK17QGraphicsTextItem20textInteractionFlagsEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->textInteractionFlags();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:917
// void setTabChangesFocus(_Bool)
extern "C"
void C_ZN17QGraphicsTextItem18setTabChangesFocusEb(void *this_, bool b) {
  ((QGraphicsTextItem*)this_)->setTabChangesFocus(b);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:918
// bool tabChangesFocus()
extern "C"
void C_ZNK17QGraphicsTextItem15tabChangesFocusEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->tabChangesFocus();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:920
// void setOpenExternalLinks(_Bool)
extern "C"
void C_ZN17QGraphicsTextItem20setOpenExternalLinksEb(void *this_, bool open) {
  ((QGraphicsTextItem*)this_)->setOpenExternalLinks(open);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:921
// bool openExternalLinks()
extern "C"
void C_ZNK17QGraphicsTextItem17openExternalLinksEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->openExternalLinks();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:923
// void setTextCursor(const class QTextCursor &)
extern "C"
void C_ZN17QGraphicsTextItem13setTextCursorERK11QTextCursor(void *this_, const QTextCursor & cursor) {
  ((QGraphicsTextItem*)this_)->setTextCursor(cursor);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:924
// QTextCursor textCursor()
extern "C"
void C_ZNK17QGraphicsTextItem10textCursorEv(void *this_) {
  /*return*/ ((QGraphicsTextItem*)this_)->textCursor();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:927
// void linkActivated(const class QString &)
extern "C"
void C_ZN17QGraphicsTextItem13linkActivatedERK7QString(void *this_, const QString & arg0) {
  ((QGraphicsTextItem*)this_)->linkActivated(arg0);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:928
// void linkHovered(const class QString &)
extern "C"
void C_ZN17QGraphicsTextItem11linkHoveredERK7QString(void *this_, const QString & arg0) {
  ((QGraphicsTextItem*)this_)->linkHovered(arg0);
}
//  main block end
