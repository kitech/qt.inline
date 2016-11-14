// /usr/include/qt/QtWidgets/qitemdelegate.h
#include <qitemdelegate.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qitemdelegate.h:58
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QItemDelegate10metaObjectEv(void *this_) {
  /*return*/ ((QItemDelegate*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qitemdelegate.h:62
// void QItemDelegate(class QObject *)
extern "C"
void* C_ZN13QItemDelegateC1EP7QObject(QObject * parent) {
  return new QItemDelegate(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qitemdelegate.h:63
// void ~QItemDelegate()
extern "C"
void C_ZN13QItemDelegateD1Ev(void *this_) {
  delete (QItemDelegate*)(this_);
}
// /usr/include/qt/QtWidgets/qitemdelegate.h:65
// bool hasClipping()
extern "C"
void C_ZNK13QItemDelegate11hasClippingEv(void *this_) {
  /*return*/ ((QItemDelegate*)this_)->hasClipping();
}
// /usr/include/qt/QtWidgets/qitemdelegate.h:66
// void setClipping(_Bool)
extern "C"
void C_ZN13QItemDelegate11setClippingEb(void *this_, bool clip) {
  ((QItemDelegate*)this_)->setClipping(clip);
}
// virtual
// /usr/include/qt/QtWidgets/qitemdelegate.h:69
// void paint(class QPainter *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK13QItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) {
  ((QItemDelegate*)this_)->paint(painter, option, index);
}
// virtual
// /usr/include/qt/QtWidgets/qitemdelegate.h:72
// QSize sizeHint(const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK13QItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex(void *this_, const QStyleOptionViewItem & option, const QModelIndex & index) {
  /*return*/ ((QItemDelegate*)this_)->sizeHint(option, index);
}
// virtual
// /usr/include/qt/QtWidgets/qitemdelegate.h:76
// QWidget * createEditor(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK13QItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) {
  /*return*/ ((QItemDelegate*)this_)->createEditor(parent, option, index);
}
// virtual
// /usr/include/qt/QtWidgets/qitemdelegate.h:80
// void setEditorData(class QWidget *, const class QModelIndex &)
extern "C"
void C_ZNK13QItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void *this_, QWidget * editor, const QModelIndex & index) {
  ((QItemDelegate*)this_)->setEditorData(editor, index);
}
// virtual
// /usr/include/qt/QtWidgets/qitemdelegate.h:81
// void setModelData(class QWidget *, class QAbstractItemModel *, const class QModelIndex &)
extern "C"
void C_ZNK13QItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex(void *this_, QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) {
  ((QItemDelegate*)this_)->setModelData(editor, model, index);
}
// virtual
// /usr/include/qt/QtWidgets/qitemdelegate.h:83
// void updateEditorGeometry(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK13QItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) {
  ((QItemDelegate*)this_)->updateEditorGeometry(editor, option, index);
}
// /usr/include/qt/QtWidgets/qitemdelegate.h:88
// QItemEditorFactory * itemEditorFactory()
extern "C"
void C_ZNK13QItemDelegate17itemEditorFactoryEv(void *this_) {
  /*return*/ ((QItemDelegate*)this_)->itemEditorFactory();
}
// /usr/include/qt/QtWidgets/qitemdelegate.h:89
// void setItemEditorFactory(class QItemEditorFactory *)
extern "C"
void C_ZN13QItemDelegate20setItemEditorFactoryEP18QItemEditorFactory(void *this_, QItemEditorFactory * factory) {
  ((QItemDelegate*)this_)->setItemEditorFactory(factory);
}