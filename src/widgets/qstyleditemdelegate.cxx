// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qstyleditemdelegate.h
// dst-file: /src/widgets/qstyleditemdelegate.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstyleditemdelegate.h>


#include <qsize.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qstyleditemdelegate_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStyledItemDelegate_Class_Size()
{
  return sizeof(QStyledItemDelegate);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleditemdelegate.h', line 61, column 11>
//   // proto:  QSize QStyledItemDelegate::sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZNK19QStyledItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex sizeHint(const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
QSize*
C_ZNK19QStyledItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
const QStyleOptionViewItem* arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QStyledItemDelegate*)qthis)->sizeHint(*((const QStyleOptionViewItem*)arg1),
*((const QModelIndex*)arg2));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleditemdelegate.h', line 65, column 14>
//   // proto:  QWidget * QStyledItemDelegate::createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZNK19QStyledItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex createEditor(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void*
C_ZNK19QStyledItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
QWidget * arg1,
const QStyleOptionViewItem* arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QStyledItemDelegate*)qthis)->createEditor(arg1,
*((const QStyleOptionViewItem*)arg2),
*((const QModelIndex*)arg3));
  return (void*)ret;
}
//   // proto:  void QStyledItemDelegate::~QStyledItemDelegate();
extern "C"
void C_ZN19QStyledItemDelegateD2Ev(void *qthis) {
  delete (QStyledItemDelegate*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleditemdelegate.h', line 74, column 10>
//   // proto:  void QStyledItemDelegate::updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZNK19QStyledItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex updateEditorGeometry(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void
C_ZNK19QStyledItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
QWidget * arg1,
const QStyleOptionViewItem* arg2,
const QModelIndex* arg3) {
  ((QStyledItemDelegate*)qthis)->updateEditorGeometry(arg1,
*((const QStyleOptionViewItem*)arg2),
*((const QModelIndex*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleditemdelegate.h', line 69, column 10>
//   // proto:  void QStyledItemDelegate::setEditorData(QWidget * editor, const QModelIndex & index);
// _ZNK19QStyledItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex setEditorData(class QWidget *, const class QModelIndex &)
extern "C"
void
C_ZNK19QStyledItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void *qthis,
QWidget * arg1,
const QModelIndex* arg2) {
  ((QStyledItemDelegate*)qthis)->setEditorData(arg1,
*((const QModelIndex*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleditemdelegate.h', line 70, column 10>
//   // proto:  void QStyledItemDelegate::setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index);
// _ZNK19QStyledItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex setModelData(class QWidget *, class QAbstractItemModel *, const class QModelIndex &)
extern "C"
void
C_ZNK19QStyledItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex(void *qthis,
QWidget * arg1,
QAbstractItemModel * arg2,
const QModelIndex* arg3) {
  ((QStyledItemDelegate*)qthis)->setModelData(arg1,
arg2,
*((const QModelIndex*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleditemdelegate.h', line 80, column 10>
//   // proto:  void QStyledItemDelegate::setItemEditorFactory(QItemEditorFactory * factory);
// _ZN19QStyledItemDelegate20setItemEditorFactoryEP18QItemEditorFactory setItemEditorFactory(class QItemEditorFactory *)
extern "C"
void
C_ZN19QStyledItemDelegate20setItemEditorFactoryEP18QItemEditorFactory(void *qthis,
QItemEditorFactory * arg1) {
  ((QStyledItemDelegate*)qthis)->setItemEditorFactory(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleditemdelegate.h', line 59, column 10>
//   // proto:  void QStyledItemDelegate::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZNK19QStyledItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex paint(class QPainter *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void
C_ZNK19QStyledItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
QPainter * arg1,
const QStyleOptionViewItem* arg2,
const QModelIndex* arg3) {
  ((QStyledItemDelegate*)qthis)->paint(arg1,
*((const QStyleOptionViewItem*)arg2),
*((const QModelIndex*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleditemdelegate.h', line 79, column 25>
//   // proto:  QItemEditorFactory * QStyledItemDelegate::itemEditorFactory();
// _ZNK19QStyledItemDelegate17itemEditorFactoryEv itemEditorFactory()
extern "C"
void*
C_ZNK19QStyledItemDelegate17itemEditorFactoryEv(void *qthis) {
  auto ret =
  ((QStyledItemDelegate*)qthis)->itemEditorFactory();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleditemdelegate.h', line 55, column 14>
//   // proto:  void QStyledItemDelegate::QStyledItemDelegate(QObject * parent);
extern "C"
QStyledItemDelegate*
C_ZN19QStyledItemDelegateC2EP7QObject(QObject * arg1) {
  auto ret = new QStyledItemDelegate(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleditemdelegate.h', line 82, column 21>
//   // proto:  QString QStyledItemDelegate::displayText(const QVariant & value, const QLocale & locale);
// _ZNK19QStyledItemDelegate11displayTextERK8QVariantRK7QLocale displayText(const class QVariant &, const class QLocale &)
extern "C"
QString*
C_ZNK19QStyledItemDelegate11displayTextERK8QVariantRK7QLocale(void *qthis,
const QVariant* arg1,
const QLocale* arg2) {
  auto ret =
  ((QStyledItemDelegate*)qthis)->displayText(*((const QVariant*)arg1),
*((const QLocale*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstyleditemdelegate.h', line 52, column 5>
//   // proto:  const QMetaObject * QStyledItemDelegate::metaObject();
// _ZNK19QStyledItemDelegate10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QStyledItemDelegate10metaObjectEv(void *qthis) {
  auto ret =
  ((QStyledItemDelegate*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QStyledItemDelegate_SlotProxy here
class QStyledItemDelegate_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStyledItemDelegate_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qstyleditemdelegate.moc"

extern "C" {
  QStyledItemDelegate_SlotProxy* QStyledItemDelegate_SlotProxy_new()
  {
    return new QStyledItemDelegate_SlotProxy();
  }
};

// <= body block end

