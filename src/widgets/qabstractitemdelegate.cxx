//  header block begin
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h
#ifndef protected
#define protected public
#endif
#include <qabstractitemdelegate.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractItemDelegate is pure virtual: true
// QAbstractItemDelegate has virtual projected: false
//  header block end

//  main block begin

class MyQAbstractItemDelegate : public QAbstractItemDelegate {
public:
  virtual ~MyQAbstractItemDelegate() {}
// void QAbstractItemDelegate(class QObject *)
MyQAbstractItemDelegate(QObject * parent) : QAbstractItemDelegate(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:60
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK21QAbstractItemDelegate10metaObjectEv(void *this_) {
  return (void*)((QAbstractItemDelegate*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:72
// [-2] void QAbstractItemDelegate(class QObject *)
extern "C"
void* C_ZN21QAbstractItemDelegateC2EP7QObject(QObject * parent) {
  return 0; // new QAbstractItemDelegate(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:73
// [-2] void ~QAbstractItemDelegate()
extern "C"
void C_ZN21QAbstractItemDelegateD2Ev(void *this_) {
  delete (QAbstractItemDelegate*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:76
// [-2] void paint(class QPainter *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK21QAbstractItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QPainter * painter, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QAbstractItemDelegate*)this_)->paint(painter, *option, *index);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:80
// [8] QSize sizeHint(const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void* C_ZNK21QAbstractItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex(void *this_, QStyleOptionViewItem* option, QModelIndex* index) {
  auto rv = ((QAbstractItemDelegate*)this_)->sizeHint(*option, *index);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:84
// [8] QWidget * createEditor(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void* C_ZNK21QAbstractItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * parent, QStyleOptionViewItem* option, QModelIndex* index) {
  return (void*)((QAbstractItemDelegate*)this_)->createEditor(parent, *option, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:88
// [-2] void destroyEditor(class QWidget *, const class QModelIndex &)
extern "C"
void C_ZNK21QAbstractItemDelegate13destroyEditorEP7QWidgetRK11QModelIndex(void *this_, QWidget * editor, QModelIndex* index) {
  ((QAbstractItemDelegate*)this_)->destroyEditor(editor, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:90
// [-2] void setEditorData(class QWidget *, const class QModelIndex &)
extern "C"
void C_ZNK21QAbstractItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void *this_, QWidget * editor, QModelIndex* index) {
  ((QAbstractItemDelegate*)this_)->setEditorData(editor, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:92
// [-2] void setModelData(class QWidget *, class QAbstractItemModel *, const class QModelIndex &)
extern "C"
void C_ZNK21QAbstractItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex(void *this_, QWidget * editor, QAbstractItemModel * model, QModelIndex* index) {
  ((QAbstractItemDelegate*)this_)->setModelData(editor, model, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:96
// [-2] void updateEditorGeometry(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void C_ZNK21QAbstractItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * editor, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QAbstractItemDelegate*)this_)->updateEditorGeometry(editor, *option, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:101
// [1] bool editorEvent(class QEvent *, class QAbstractItemModel *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
bool C_ZN21QAbstractItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QEvent * event, QAbstractItemModel * model, QStyleOptionViewItem* option, QModelIndex* index) {
  return (bool)((QAbstractItemDelegate*)this_)->editorEvent(event, model, *option, *index);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:106
// [8] QString elidedText(const class QFontMetrics &, int, Qt::TextElideMode, const class QString &)
extern "C"
void* C_ZN21QAbstractItemDelegate10elidedTextERK12QFontMetricsiN2Qt13TextElideModeERK7QString(QFontMetrics* fontMetrics, int width, Qt::TextElideMode mode, QString* text) {
  auto rv = QAbstractItemDelegate::elidedText(*fontMetrics, width, mode, *text);
return new QString(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:109
// [1] bool helpEvent(class QHelpEvent *, class QAbstractItemView *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
bool C_ZN21QAbstractItemDelegate9helpEventEP10QHelpEventP17QAbstractItemViewRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QHelpEvent * event, QAbstractItemView * view, QStyleOptionViewItem* option, QModelIndex* index) {
  return (bool)((QAbstractItemDelegate*)this_)->helpEvent(event, view, *option, *index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:117
// [-2] void commitData(class QWidget *)
extern "C"
void C_ZN21QAbstractItemDelegate10commitDataEP7QWidget(void *this_, QWidget * editor) {
  ((QAbstractItemDelegate*)this_)->commitData(editor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:118
// [-2] void closeEditor(class QWidget *, class QAbstractItemDelegate::EndEditHint)
extern "C"
void C_ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(void *this_, QWidget * editor, QAbstractItemDelegate::EndEditHint hint) {
  ((QAbstractItemDelegate*)this_)->closeEditor(editor, hint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:119
// [-2] void sizeHintChanged(const class QModelIndex &)
extern "C"
void C_ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(void *this_, QModelIndex* arg0) {
  ((QAbstractItemDelegate*)this_)->sizeHintChanged(*arg0);
}

//  main block end
