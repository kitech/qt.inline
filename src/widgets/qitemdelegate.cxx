//  header block begin
// /usr/include/qt/QtWidgets/qitemdelegate.h
#ifndef protected
#define protected public
#endif
#include <qitemdelegate.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QItemDelegate is pure virtual: false
// QItemDelegate has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQItemDelegate : public QItemDelegate {
public:
  virtual ~MyQItemDelegate() {}
// void QItemDelegate(class QObject *)
MyQItemDelegate(QObject * parent) : QItemDelegate(parent) {}
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:92
// [-2] void drawDisplay(class QPainter *, const class QStyleOptionViewItem &, const class QRect &, const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate11drawDisplayEP8QPainterRK20QStyleOptionViewItemRK5QRectRK7QString(void *this_, QPainter * painter, QStyleOptionViewItem* option, QRect* rect, QString* text) {
  ((QItemDelegate*)this_)->QItemDelegate::drawDisplay(painter, *option, *rect, *text);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:94
// [-2] void drawDecoration(class QPainter *, const class QStyleOptionViewItem &, const class QRect &, const class QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate14drawDecorationEP8QPainterRK20QStyleOptionViewItemRK5QRectRK7QPixmap(void *this_, QPainter * painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap) {
  ((QItemDelegate*)this_)->QItemDelegate::drawDecoration(painter, *option, *rect, *pixmap);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:96
// [-2] void drawFocus(class QPainter *, const class QStyleOptionViewItem &, const class QRect &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate9drawFocusEP8QPainterRK20QStyleOptionViewItemRK5QRect(void *this_, QPainter * painter, QStyleOptionViewItem* option, QRect* rect) {
  ((QItemDelegate*)this_)->QItemDelegate::drawFocus(painter, *option, *rect);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:98
// [-2] void drawCheck(class QPainter *, const class QStyleOptionViewItem &, const class QRect &, Qt::CheckState)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate9drawCheckEP8QPainterRK20QStyleOptionViewItemRK5QRectN2Qt10CheckStateE(void *this_, QPainter * painter, QStyleOptionViewItem* option, QRect* rect, Qt::CheckState state) {
  ((QItemDelegate*)this_)->QItemDelegate::drawCheck(painter, *option, *rect, state);
}

// Protected Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qitemdelegate.h:100
// [-2] void drawBackground(class QPainter *, const class QStyleOptionViewItem &, const class QModelIndex &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate14drawBackgroundEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QPainter * painter, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QItemDelegate*)this_)->QItemDelegate::drawBackground(painter, *option, *index);
}
#endif // QT_VERSION >= 0x040200

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:103
// [-2] void doLayout(const class QStyleOptionViewItem &, class QRect *, class QRect *, class QRect *, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate8doLayoutERK20QStyleOptionViewItemP5QRectS4_S4_b(void *this_, QStyleOptionViewItem* option, QRect * checkRect, QRect * iconRect, QRect * textRect, bool hint) {
  ((QItemDelegate*)this_)->QItemDelegate::doLayout(*option, checkRect, iconRect, textRect, hint);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:106
// [16] QRect rect(const class QStyleOptionViewItem &, const class QModelIndex &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate4rectERK20QStyleOptionViewItemRK11QModelIndexi(void *this_, QStyleOptionViewItem* option, QModelIndex* index, int role) {
  auto rv = ((QItemDelegate*)this_)->QItemDelegate::rect(*option, *index, role);
return new QRect(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:108
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QItemDelegate11eventFilterEP7QObjectP6QEvent(void *this_, QObject * object, QEvent * event) {
  return (bool)((QItemDelegate*)this_)->QItemDelegate::eventFilter(object, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:109
// [1] bool editorEvent(class QEvent *, class QAbstractItemModel *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN13QItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QEvent * event, QAbstractItemModel * model, QStyleOptionViewItem* option, QModelIndex* index) {
  return (bool)((QItemDelegate*)this_)->QItemDelegate::editorEvent(event, model, *option, *index);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:112
// [192] QStyleOptionViewItem setOptions(const class QModelIndex &, const class QStyleOptionViewItem &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate10setOptionsERK11QModelIndexRK20QStyleOptionViewItem(void *this_, QModelIndex* index, QStyleOptionViewItem* option) {
  auto rv = ((QItemDelegate*)this_)->QItemDelegate::setOptions(*index, *option);
return new QStyleOptionViewItem(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:115
// [32] QPixmap decoration(const class QStyleOptionViewItem &, const class QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate10decorationERK20QStyleOptionViewItemRK8QVariant(void *this_, QStyleOptionViewItem* option, QVariant* variant) {
  auto rv = ((QItemDelegate*)this_)->QItemDelegate::decoration(*option, *variant);
return new QPixmap(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:116
// [8] QPixmap * selected(const class QPixmap &, const class QPalette &, _Bool)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate8selectedERK7QPixmapRK8QPaletteb(void *this_, QPixmap* pixmap, QPalette* palette, bool enabled) {
  return (void*)((QItemDelegate*)this_)->QItemDelegate::selected(*pixmap, *palette, enabled);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:118
// [16] QRect doCheck(const class QStyleOptionViewItem &, const class QRect &, const class QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate7doCheckERK20QStyleOptionViewItemRK5QRectRK8QVariant(void *this_, QStyleOptionViewItem* option, QRect* bounding, QVariant* variant) {
  auto rv = ((QItemDelegate*)this_)->QItemDelegate::doCheck(*option, *bounding, *variant);
return new QRect(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:120
// [16] QRect textRectangle(class QPainter *, const class QRect &, const class QFont &, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate13textRectangleEP8QPainterRK5QRectRK5QFontRK7QString(void *this_, QPainter * painter, QRect* rect, QFont* font, QString* text) {
  auto rv = ((QItemDelegate*)this_)->QItemDelegate::textRectangle(painter, *rect, *font, *text);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate10metaObjectEv(void *this_) {
  return (void*)((QItemDelegate*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:62
// [-2] void QItemDelegate(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QItemDelegateC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQItemDelegate*)(0);
  return  new MyQItemDelegate(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:63
// [-2] void ~QItemDelegate()
extern "C" Q_DECL_EXPORT
void C_ZN13QItemDelegateD2Ev(void *this_) {
  delete (QItemDelegate*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:65
// [1] bool hasClipping()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QItemDelegate11hasClippingEv(void *this_) {
  return (bool)((QItemDelegate*)this_)->hasClipping();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:66
// [-2] void setClipping(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QItemDelegate11setClippingEb(void *this_, bool clip) {
  ((QItemDelegate*)this_)->setClipping(clip);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:69
// [-2] void paint(class QPainter *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QPainter * painter, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QItemDelegate*)this_)->paint(painter, *option, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:72
// [8] QSize sizeHint(const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex(void *this_, QStyleOptionViewItem* option, QModelIndex* index) {
  auto rv = ((QItemDelegate*)this_)->sizeHint(*option, *index);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:76
// [8] QWidget * createEditor(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * parent, QStyleOptionViewItem* option, QModelIndex* index) {
  return (void*)((QItemDelegate*)this_)->createEditor(parent, *option, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:80
// [-2] void setEditorData(class QWidget *, const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void *this_, QWidget * editor, QModelIndex* index) {
  ((QItemDelegate*)this_)->setEditorData(editor, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:81
// [-2] void setModelData(class QWidget *, class QAbstractItemModel *, const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex(void *this_, QWidget * editor, QAbstractItemModel * model, QModelIndex* index) {
  ((QItemDelegate*)this_)->setModelData(editor, model, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:83
// [-2] void updateEditorGeometry(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * editor, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QItemDelegate*)this_)->updateEditorGeometry(editor, *option, *index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:88
// [8] QItemEditorFactory * itemEditorFactory()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate17itemEditorFactoryEv(void *this_) {
  return (void*)((QItemDelegate*)this_)->itemEditorFactory();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:89
// [-2] void setItemEditorFactory(class QItemEditorFactory *)
extern "C" Q_DECL_EXPORT
void C_ZN13QItemDelegate20setItemEditorFactoryEP18QItemEditorFactory(void *this_, QItemEditorFactory * factory) {
  ((QItemDelegate*)this_)->setItemEditorFactory(factory);
}

//  main block end
