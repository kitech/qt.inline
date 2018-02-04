//  header block begin
// /usr/include/qt/QtWidgets/qitemdelegate.h
#include <qitemdelegate.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QItemDelegate is pure virtual: false
// QItemDelegate has virtual projected: true
//  header block end

//  main block begin

class MyQItemDelegate : public QItemDelegate {
public:
  virtual ~MyQItemDelegate() {}
// void QItemDelegate(class QObject *)
MyQItemDelegate(QObject * parent) : QItemDelegate(parent) {}
// void drawDisplay(class QPainter *, const class QStyleOptionViewItem &, const class QRect &, const class QString &)
  virtual void drawDisplay(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, const QString & text) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"drawDisplay", &handled, 4, (uint64_t)painter, (uint64_t)&option, (uint64_t)&rect, (uint64_t)&text, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QItemDelegate::drawDisplay(painter, option, rect, text);
  }
  }
// void drawDecoration(class QPainter *, const class QStyleOptionViewItem &, const class QRect &, const class QPixmap &)
  virtual void drawDecoration(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, const QPixmap & pixmap) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"drawDecoration", &handled, 4, (uint64_t)painter, (uint64_t)&option, (uint64_t)&rect, (uint64_t)&pixmap, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QItemDelegate::drawDecoration(painter, option, rect, pixmap);
  }
  }
// void drawFocus(class QPainter *, const class QStyleOptionViewItem &, const class QRect &)
  virtual void drawFocus(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"drawFocus", &handled, 3, (uint64_t)painter, (uint64_t)&option, (uint64_t)&rect, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QItemDelegate::drawFocus(painter, option, rect);
  }
  }
// void drawCheck(class QPainter *, const class QStyleOptionViewItem &, const class QRect &, Qt::CheckState)
  virtual void drawCheck(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, Qt::CheckState state) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"drawCheck", &handled, 4, (uint64_t)painter, (uint64_t)&option, (uint64_t)&rect, (uint64_t)state, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QItemDelegate::drawCheck(painter, option, rect, state);
  }
  }
// void drawBackground(class QPainter *, const class QStyleOptionViewItem &, const class QModelIndex &)
  virtual void drawBackground(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"drawBackground", &handled, 3, (uint64_t)painter, (uint64_t)&option, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QItemDelegate::drawBackground(painter, option, index);
  }
  }
// void doLayout(const class QStyleOptionViewItem &, class QRect *, class QRect *, class QRect *, _Bool)
  virtual void doLayout(const QStyleOptionViewItem & option, QRect * checkRect, QRect * iconRect, QRect * textRect, bool hint) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"doLayout", &handled, 5, (uint64_t)&option, (uint64_t)checkRect, (uint64_t)iconRect, (uint64_t)textRect, (uint64_t)hint, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QItemDelegate::doLayout(option, checkRect, iconRect, textRect, hint);
  }
  }
// QRect rect(const class QStyleOptionViewItem &, const class QModelIndex &, int)
  virtual QRect rect(const QStyleOptionViewItem & option, const QModelIndex & index, int role) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rect", &handled, 3, (uint64_t)&option, (uint64_t)&index, (uint64_t)role, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRect*)(irv);
      // RecordRecordQRect
    } else {
    return QItemDelegate::rect(option, index, role);
  }
  }
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QItemDelegate::eventFilter(object, event);
  }
  }
// bool editorEvent(class QEvent *, class QAbstractItemModel *, const class QStyleOptionViewItem &, const class QModelIndex &)
  virtual bool editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"editorEvent", &handled, 4, (uint64_t)event, (uint64_t)model, (uint64_t)&option, (uint64_t)&index, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QItemDelegate::editorEvent(event, model, option, index);
  }
  }
// QStyleOptionViewItem setOptions(const class QModelIndex &, const class QStyleOptionViewItem &)
  virtual QStyleOptionViewItem setOptions(const QModelIndex & index, const QStyleOptionViewItem & option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setOptions", &handled, 2, (uint64_t)&index, (uint64_t)&option, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QStyleOptionViewItem*)(irv);
      // RecordRecordQStyleOptionViewItem
    } else {
    return QItemDelegate::setOptions(index, option);
  }
  }
// QPixmap decoration(const class QStyleOptionViewItem &, const class QVariant &)
  virtual QPixmap decoration(const QStyleOptionViewItem & option, const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"decoration", &handled, 2, (uint64_t)&option, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QPixmap*)(irv);
      // RecordRecordQPixmap
    } else {
    return QItemDelegate::decoration(option, variant);
  }
  }
// QPixmap * selected(const class QPixmap &, const class QPalette &, _Bool)
  virtual QPixmap * selected(const QPixmap & pixmap, const QPalette & palette, bool enabled) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"selected", &handled, 3, (uint64_t)&pixmap, (uint64_t)&palette, (uint64_t)enabled, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPixmap *)(irv);
      // PointerPointerQPixmap *
    } else {
    return QItemDelegate::selected(pixmap, palette, enabled);
  }
  }
// QRect doCheck(const class QStyleOptionViewItem &, const class QRect &, const class QVariant &)
  virtual QRect doCheck(const QStyleOptionViewItem & option, const QRect & bounding, const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"doCheck", &handled, 3, (uint64_t)&option, (uint64_t)&bounding, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRect*)(irv);
      // RecordRecordQRect
    } else {
    return QItemDelegate::doCheck(option, bounding, variant);
  }
  }
// QRect textRectangle(class QPainter *, const class QRect &, const class QFont &, const class QString &)
  virtual QRect textRectangle(QPainter * painter, const QRect & rect, const QFont & font, const QString & text) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"textRectangle", &handled, 4, (uint64_t)painter, (uint64_t)&rect, (uint64_t)&font, (uint64_t)&text, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRect*)(irv);
      // RecordRecordQRect
    } else {
    return QItemDelegate::textRectangle(painter, rect, font, text);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:58
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QItemDelegate10metaObjectEv(void *this_) {
  return (void*)((QItemDelegate*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:62
// [-2] void QItemDelegate(class QObject *)
extern "C"
void* C_ZN13QItemDelegateC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQItemDelegate*)(0);
  return  new MyQItemDelegate(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:63
// [-2] void ~QItemDelegate()
extern "C"
void C_ZN13QItemDelegateD2Ev(void *this_) {
  delete (QItemDelegate*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:65
// [1] bool hasClipping()
extern "C"
bool C_ZNK13QItemDelegate11hasClippingEv(void *this_) {
  return (bool)((QItemDelegate*)this_)->hasClipping();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:66
// [-2] void setClipping(_Bool)
extern "C"
void C_ZN13QItemDelegate11setClippingEb(void *this_, bool clip) {
  ((QItemDelegate*)this_)->setClipping(clip);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:69
// [-2] void paint(class QPainter *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK13QItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QPainter * painter, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QItemDelegate*)this_)->paint(painter, *option, *index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:72
// [8] QSize sizeHint(const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void* C_ZNK13QItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex(void *this_, QStyleOptionViewItem* option, QModelIndex* index) {
  auto rv = ((QItemDelegate*)this_)->sizeHint(*option, *index);
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:76
// [8] QWidget * createEditor(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void* C_ZNK13QItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * parent, QStyleOptionViewItem* option, QModelIndex* index) {
  return (void*)((QItemDelegate*)this_)->createEditor(parent, *option, *index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:80
// [-2] void setEditorData(class QWidget *, const class QModelIndex &)
extern "C"
void C_ZNK13QItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void *this_, QWidget * editor, QModelIndex* index) {
  ((QItemDelegate*)this_)->setEditorData(editor, *index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:81
// [-2] void setModelData(class QWidget *, class QAbstractItemModel *, const class QModelIndex &)
extern "C"
void C_ZNK13QItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex(void *this_, QWidget * editor, QAbstractItemModel * model, QModelIndex* index) {
  ((QItemDelegate*)this_)->setModelData(editor, model, *index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:83
// [-2] void updateEditorGeometry(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK13QItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * editor, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QItemDelegate*)this_)->updateEditorGeometry(editor, *option, *index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:88
// [8] QItemEditorFactory * itemEditorFactory()
extern "C"
void* C_ZNK13QItemDelegate17itemEditorFactoryEv(void *this_) {
  return (void*)((QItemDelegate*)this_)->itemEditorFactory();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:89
// [-2] void setItemEditorFactory(class QItemEditorFactory *)
extern "C"
void C_ZN13QItemDelegate20setItemEditorFactoryEP18QItemEditorFactory(void *this_, QItemEditorFactory * factory) {
  ((QItemDelegate*)this_)->setItemEditorFactory(factory);
}
//  main block end
