// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qitemdelegate.h
// dst-file: /src/widgets/qitemdelegate.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qitemdelegate.h>


#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qitemdelegate_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QItemDelegate_Class_Size()
{
  return sizeof(QItemDelegate);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemdelegate.h', line 52, column 5>
//   // proto:  const QMetaObject * QItemDelegate::metaObject();
// _ZNK13QItemDelegate10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QItemDelegate10metaObjectEv(void *qthis) {
  auto ret =
  ((QItemDelegate*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemdelegate.h', line 66, column 11>
//   // proto:  QSize QItemDelegate::sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZNK13QItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex sizeHint(const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
QSize*
C_ZNK13QItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
const QStyleOptionViewItem* arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QItemDelegate*)qthis)->sizeHint(*((const QStyleOptionViewItem*)arg1),
*((const QModelIndex*)arg2));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemdelegate.h', line 75, column 10>
//   // proto:  void QItemDelegate::setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index);
// _ZNK13QItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex setModelData(class QWidget *, class QAbstractItemModel *, const class QModelIndex &)
extern "C"
void
C_ZNK13QItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex(void *qthis,
QWidget * arg1,
QAbstractItemModel * arg2,
const QModelIndex* arg3) {
  ((QItemDelegate*)qthis)->setModelData(arg1,
arg2,
*((const QModelIndex*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemdelegate.h', line 83, column 10>
//   // proto:  void QItemDelegate::setItemEditorFactory(QItemEditorFactory * factory);
// _ZN13QItemDelegate20setItemEditorFactoryEP18QItemEditorFactory setItemEditorFactory(class QItemEditorFactory *)
extern "C"
void
C_ZN13QItemDelegate20setItemEditorFactoryEP18QItemEditorFactory(void *qthis,
QItemEditorFactory * arg1) {
  ((QItemDelegate*)qthis)->setItemEditorFactory(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemdelegate.h', line 60, column 10>
//   // proto:  void QItemDelegate::setClipping(bool clip);
// _ZN13QItemDelegate11setClippingEb setClipping(_Bool)
extern "C"
void
C_ZN13QItemDelegate11setClippingEb(void *qthis,
bool arg1) {
  ((QItemDelegate*)qthis)->setClipping(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemdelegate.h', line 77, column 10>
//   // proto:  void QItemDelegate::updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZNK13QItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex updateEditorGeometry(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void
C_ZNK13QItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
QWidget * arg1,
const QStyleOptionViewItem* arg2,
const QModelIndex* arg3) {
  ((QItemDelegate*)qthis)->updateEditorGeometry(arg1,
*((const QStyleOptionViewItem*)arg2),
*((const QModelIndex*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemdelegate.h', line 82, column 25>
//   // proto:  QItemEditorFactory * QItemDelegate::itemEditorFactory();
// _ZNK13QItemDelegate17itemEditorFactoryEv itemEditorFactory()
extern "C"
void*
C_ZNK13QItemDelegate17itemEditorFactoryEv(void *qthis) {
  auto ret =
  ((QItemDelegate*)qthis)->itemEditorFactory();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemdelegate.h', line 70, column 14>
//   // proto:  QWidget * QItemDelegate::createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZNK13QItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex createEditor(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void*
C_ZNK13QItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
QWidget * arg1,
const QStyleOptionViewItem* arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QItemDelegate*)qthis)->createEditor(arg1,
*((const QStyleOptionViewItem*)arg2),
*((const QModelIndex*)arg3));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemdelegate.h', line 56, column 14>
//   // proto:  void QItemDelegate::QItemDelegate(QObject * parent);
extern "C"
QItemDelegate*
C_ZN13QItemDelegateC2EP7QObject(QObject * arg1) {
  auto ret = new QItemDelegate(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemdelegate.h', line 59, column 10>
//   // proto:  bool QItemDelegate::hasClipping();
// _ZNK13QItemDelegate11hasClippingEv hasClipping()
extern "C"
bool
C_ZNK13QItemDelegate11hasClippingEv(void *qthis) {
  auto ret =
  ((QItemDelegate*)qthis)->hasClipping();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QItemDelegate::~QItemDelegate();
extern "C"
void C_ZN13QItemDelegateD2Ev(void *qthis) {
  delete (QItemDelegate*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemdelegate.h', line 63, column 10>
//   // proto:  void QItemDelegate::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZNK13QItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex paint(class QPainter *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void
C_ZNK13QItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
QPainter * arg1,
const QStyleOptionViewItem* arg2,
const QModelIndex* arg3) {
  ((QItemDelegate*)qthis)->paint(arg1,
*((const QStyleOptionViewItem*)arg2),
*((const QModelIndex*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qitemdelegate.h', line 74, column 10>
//   // proto:  void QItemDelegate::setEditorData(QWidget * editor, const QModelIndex & index);
// _ZNK13QItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex setEditorData(class QWidget *, const class QModelIndex &)
extern "C"
void
C_ZNK13QItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void *qthis,
QWidget * arg1,
const QModelIndex* arg2) {
  ((QItemDelegate*)qthis)->setEditorData(arg1,
*((const QModelIndex*)arg2));
}
// <= ext block end

// body block begin =>
// QItemDelegate_SlotProxy here
class QItemDelegate_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QItemDelegate_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qitemdelegate.moc"

extern "C" {
  QItemDelegate_SlotProxy* QItemDelegate_SlotProxy_new()
  {
    return new QItemDelegate_SlotProxy();
  }
};

// <= body block end

