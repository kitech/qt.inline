// /usr/include/qt/QtWidgets/qstyleditemdelegate.h
#include <qstyleditemdelegate.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:58
// const QMetaObject * metaObject()
extern "C"
void C_ZNK19QStyledItemDelegate10metaObjectEv(void *this_) {
  /*return*/ ((QStyledItemDelegate*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:61
// void QStyledItemDelegate(class QObject *)
extern "C"
void* C_ZN19QStyledItemDelegateC1EP7QObject(QObject * parent) {
  return new QStyledItemDelegate(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:62
// void ~QStyledItemDelegate()
extern "C"
void C_ZN19QStyledItemDelegateD1Ev(void *this_) {
  delete (QStyledItemDelegate*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:65
// void paint(class QPainter *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK19QStyledItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) {
  ((QStyledItemDelegate*)this_)->paint(painter, option, index);
}
// virtual
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:67
// QSize sizeHint(const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK19QStyledItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex(void *this_, const QStyleOptionViewItem & option, const QModelIndex & index) {
  /*return*/ ((QStyledItemDelegate*)this_)->sizeHint(option, index);
}
// virtual
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:71
// QWidget * createEditor(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK19QStyledItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) {
  /*return*/ ((QStyledItemDelegate*)this_)->createEditor(parent, option, index);
}
// virtual
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:75
// void setEditorData(class QWidget *, const class QModelIndex &)
extern "C"
void C_ZNK19QStyledItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void *this_, QWidget * editor, const QModelIndex & index) {
  ((QStyledItemDelegate*)this_)->setEditorData(editor, index);
}
// virtual
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:76
// void setModelData(class QWidget *, class QAbstractItemModel *, const class QModelIndex &)
extern "C"
void C_ZNK19QStyledItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex(void *this_, QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) {
  ((QStyledItemDelegate*)this_)->setModelData(editor, model, index);
}
// virtual
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:80
// void updateEditorGeometry(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK19QStyledItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) {
  ((QStyledItemDelegate*)this_)->updateEditorGeometry(editor, option, index);
}
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:85
// QItemEditorFactory * itemEditorFactory()
extern "C"
void C_ZNK19QStyledItemDelegate17itemEditorFactoryEv(void *this_) {
  /*return*/ ((QStyledItemDelegate*)this_)->itemEditorFactory();
}
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:86
// void setItemEditorFactory(class QItemEditorFactory *)
extern "C"
void C_ZN19QStyledItemDelegate20setItemEditorFactoryEP18QItemEditorFactory(void *this_, QItemEditorFactory * factory) {
  ((QStyledItemDelegate*)this_)->setItemEditorFactory(factory);
}
// virtual
// /usr/include/qt/QtWidgets/qstyleditemdelegate.h:88
// QString displayText(const class QVariant &, const class QLocale &)
extern "C"
void C_ZNK19QStyledItemDelegate11displayTextERK8QVariantRK7QLocale(void *this_, const QVariant & value, const QLocale & locale) {
  /*return*/ ((QStyledItemDelegate*)this_)->displayText(value, locale);
}