//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsTextItem is pure virtual: false
// QGraphicsTextItem has virtual projected: true
//  header block end

//  main block begin

class MyQGraphicsTextItem : public QGraphicsTextItem {
public:
  virtual ~MyQGraphicsTextItem() {}
// void QGraphicsTextItem(class QGraphicsItem *)
MyQGraphicsTextItem(QGraphicsItem * parent) : QGraphicsTextItem(parent) {}
// void QGraphicsTextItem(const class QString &, class QGraphicsItem *)
MyQGraphicsTextItem(const QString & text, QGraphicsItem * parent) : QGraphicsTextItem(text, parent) {}
// bool sceneEvent(class QEvent *)
  virtual bool sceneEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sceneEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsTextItem::sceneEvent(event);
  }
  }

// void mousePressEvent(class QGraphicsSceneMouseEvent *)
  virtual void mousePressEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::mousePressEvent(event);
  }
  }

// void mouseMoveEvent(class QGraphicsSceneMouseEvent *)
  virtual void mouseMoveEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::mouseMoveEvent(event);
  }
  }

// void mouseReleaseEvent(class QGraphicsSceneMouseEvent *)
  virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::mouseReleaseEvent(event);
  }
  }

// void mouseDoubleClickEvent(class QGraphicsSceneMouseEvent *)
  virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::mouseDoubleClickEvent(event);
  }
  }

// void contextMenuEvent(class QGraphicsSceneContextMenuEvent *)
  virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::contextMenuEvent(event);
  }
  }

// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::keyPressEvent(event);
  }
  }

// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::keyReleaseEvent(event);
  }
  }

// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::focusInEvent(event);
  }
  }

// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::focusOutEvent(event);
  }
  }

// void dragEnterEvent(class QGraphicsSceneDragDropEvent *)
  virtual void dragEnterEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::dragEnterEvent(event);
  }
  }

// void dragLeaveEvent(class QGraphicsSceneDragDropEvent *)
  virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::dragLeaveEvent(event);
  }
  }

// void dragMoveEvent(class QGraphicsSceneDragDropEvent *)
  virtual void dragMoveEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::dragMoveEvent(event);
  }
  }

// void dropEvent(class QGraphicsSceneDragDropEvent *)
  virtual void dropEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::dropEvent(event);
  }
  }

// void inputMethodEvent(class QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::inputMethodEvent(event);
  }
  }

// void hoverEnterEvent(class QGraphicsSceneHoverEvent *)
  virtual void hoverEnterEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::hoverEnterEvent(event);
  }
  }

// void hoverMoveEvent(class QGraphicsSceneHoverEvent *)
  virtual void hoverMoveEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::hoverMoveEvent(event);
  }
  }

// void hoverLeaveEvent(class QGraphicsSceneHoverEvent *)
  virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::hoverLeaveEvent(event);
  }
  }

// QVariant inputMethodQuery(Qt::InputMethodQuery)
  virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodQuery", &handled, 1, (uint64_t)query, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsTextItem::inputMethodQuery(query);
  }
  }

// bool supportsExtension(enum QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsTextItem::supportsExtension(extension);
  }
  }

// void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
  virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setExtension", &handled, 2, (uint64_t)extension, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::setExtension(extension, variant);
  }
  }

// QVariant extension(const class QVariant &)
  virtual QVariant extension(const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"extension", &handled, 1, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsTextItem::extension(variant);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:872
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK17QGraphicsTextItem10metaObjectEv(void *this_) {
  return (void*)((QGraphicsTextItem*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:877
// [-2] void QGraphicsTextItem(class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsTextItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsTextItem*)(0);
  return  new MyQGraphicsTextItem(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:878
// [-2] void QGraphicsTextItem(const class QString &, class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsTextItemC2ERK7QStringP13QGraphicsItem(QString* text, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsTextItem*)(0);
  return  new MyQGraphicsTextItem(*text, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:879
// [-2] void ~QGraphicsTextItem()
extern "C"
void C_ZN17QGraphicsTextItemD2Ev(void *this_) {
  delete (QGraphicsTextItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:881
// [8] QString toHtml()
extern "C"
void* C_ZNK17QGraphicsTextItem6toHtmlEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->toHtml();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:882
// [-2] void setHtml(const class QString &)
extern "C"
void C_ZN17QGraphicsTextItem7setHtmlERK7QString(void *this_, QString* html) {
  ((QGraphicsTextItem*)this_)->setHtml(*html);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:884
// [8] QString toPlainText()
extern "C"
void* C_ZNK17QGraphicsTextItem11toPlainTextEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->toPlainText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:885
// [-2] void setPlainText(const class QString &)
extern "C"
void C_ZN17QGraphicsTextItem12setPlainTextERK7QString(void *this_, QString* text) {
  ((QGraphicsTextItem*)this_)->setPlainText(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:887
// [16] QFont font()
extern "C"
void* C_ZNK17QGraphicsTextItem4fontEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->font();
return new QFont(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:888
// [-2] void setFont(const class QFont &)
extern "C"
void C_ZN17QGraphicsTextItem7setFontERK5QFont(void *this_, QFont* font) {
  ((QGraphicsTextItem*)this_)->setFont(*font);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:890
// [-2] void setDefaultTextColor(const class QColor &)
extern "C"
void C_ZN17QGraphicsTextItem19setDefaultTextColorERK6QColor(void *this_, QColor* c) {
  ((QGraphicsTextItem*)this_)->setDefaultTextColor(*c);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:891
// [16] QColor defaultTextColor()
extern "C"
void* C_ZNK17QGraphicsTextItem16defaultTextColorEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->defaultTextColor();
return new QColor(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:893
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK17QGraphicsTextItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->boundingRect();
return new QRectF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:894
// [8] QPainterPath shape()
extern "C"
void* C_ZNK17QGraphicsTextItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->shape();
return new QPainterPath(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:895
// [1] bool contains(const class QPointF &)
extern "C"
bool C_ZNK17QGraphicsTextItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsTextItem*)this_)->contains(*point);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:897
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN17QGraphicsTextItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsTextItem*)this_)->paint(painter, option, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:899
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C"
bool C_ZNK17QGraphicsTextItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsTextItem*)this_)->isObscuredBy(item);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:900
// [8] QPainterPath opaqueArea()
extern "C"
void* C_ZNK17QGraphicsTextItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:903
// [4] int type()
extern "C"
int C_ZNK17QGraphicsTextItem4typeEv(void *this_) {
  return (int)((QGraphicsTextItem*)this_)->type();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:905
// [-2] void setTextWidth(qreal)
extern "C"
void C_ZN17QGraphicsTextItem12setTextWidthEd(void *this_, qreal width) {
  ((QGraphicsTextItem*)this_)->setTextWidth(width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:906
// [8] qreal textWidth()
extern "C"
qreal C_ZNK17QGraphicsTextItem9textWidthEv(void *this_) {
  return (qreal)((QGraphicsTextItem*)this_)->textWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:908
// [-2] void adjustSize()
extern "C"
void C_ZN17QGraphicsTextItem10adjustSizeEv(void *this_) {
  ((QGraphicsTextItem*)this_)->adjustSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:910
// [-2] void setDocument(class QTextDocument *)
extern "C"
void C_ZN17QGraphicsTextItem11setDocumentEP13QTextDocument(void *this_, QTextDocument * document) {
  ((QGraphicsTextItem*)this_)->setDocument(document);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:911
// [8] QTextDocument * document()
extern "C"
void* C_ZNK17QGraphicsTextItem8documentEv(void *this_) {
  return (void*)((QGraphicsTextItem*)this_)->document();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:913
// [-2] void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void C_ZN17QGraphicsTextItem23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QGraphicsTextItem*)this_)->setTextInteractionFlags(flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:914
// [4] Qt::TextInteractionFlags textInteractionFlags()
extern "C"
Qt::TextInteractionFlags C_ZNK17QGraphicsTextItem20textInteractionFlagsEv(void *this_) {
  return (Qt::TextInteractionFlags)((QGraphicsTextItem*)this_)->textInteractionFlags();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:916
// [-2] void setTabChangesFocus(_Bool)
extern "C"
void C_ZN17QGraphicsTextItem18setTabChangesFocusEb(void *this_, bool b) {
  ((QGraphicsTextItem*)this_)->setTabChangesFocus(b);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:917
// [1] bool tabChangesFocus()
extern "C"
bool C_ZNK17QGraphicsTextItem15tabChangesFocusEv(void *this_) {
  return (bool)((QGraphicsTextItem*)this_)->tabChangesFocus();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:919
// [-2] void setOpenExternalLinks(_Bool)
extern "C"
void C_ZN17QGraphicsTextItem20setOpenExternalLinksEb(void *this_, bool open) {
  ((QGraphicsTextItem*)this_)->setOpenExternalLinks(open);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:920
// [1] bool openExternalLinks()
extern "C"
bool C_ZNK17QGraphicsTextItem17openExternalLinksEv(void *this_) {
  return (bool)((QGraphicsTextItem*)this_)->openExternalLinks();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:922
// [-2] void setTextCursor(const class QTextCursor &)
extern "C"
void C_ZN17QGraphicsTextItem13setTextCursorERK11QTextCursor(void *this_, QTextCursor* cursor) {
  ((QGraphicsTextItem*)this_)->setTextCursor(*cursor);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:923
// [8] QTextCursor textCursor()
extern "C"
void* C_ZNK17QGraphicsTextItem10textCursorEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->textCursor();
return new QTextCursor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:926
// [-2] void linkActivated(const class QString &)
extern "C"
void C_ZN17QGraphicsTextItem13linkActivatedERK7QString(void *this_, QString* arg0) {
  ((QGraphicsTextItem*)this_)->linkActivated(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:927
// [-2] void linkHovered(const class QString &)
extern "C"
void C_ZN17QGraphicsTextItem11linkHoveredERK7QString(void *this_, QString* arg0) {
  ((QGraphicsTextItem*)this_)->linkHovered(*arg0);
}
//  main block end
