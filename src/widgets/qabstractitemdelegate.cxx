// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qabstractitemdelegate.h
// dst-file: /src/widgets/qabstractitemdelegate.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractitemdelegate.h>


#include <qvector.h>
#include <qdatastream.h>
#include <qstring.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qabstractitemdelegate_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractItemDelegate_Class_Size()
{
  return sizeof(QAbstractItemDelegate);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 111, column 10>
//   // proto:  void QAbstractItemDelegate::commitData(QWidget * editor);
// _ZN21QAbstractItemDelegate10commitDataEP7QWidget commitData(class QWidget *)
extern "C"
void
C_ZN21QAbstractItemDelegate10commitDataEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QAbstractItemDelegate*)qthis)->commitData(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 108, column 26>
//   // proto:  QVector<int> QAbstractItemDelegate::paintingRoles();
// _ZNK21QAbstractItemDelegate13paintingRolesEv paintingRoles()
extern "C"
QVector<int>*
C_ZNK21QAbstractItemDelegate13paintingRolesEv(void *qthis) {
  auto ret =
  ((QAbstractItemDelegate*)qthis)->paintingRoles();
  return new QVector<int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 113, column 10>
//   // proto:  void QAbstractItemDelegate::sizeHintChanged(const QModelIndex & );
// _ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex sizeHintChanged(const class QModelIndex &)
extern "C"
void
C_ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemDelegate*)qthis)->sizeHintChanged(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 54, column 5>
//   // proto:  const QMetaObject * QAbstractItemDelegate::metaObject();
// _ZNK21QAbstractItemDelegate10metaObjectEv metaObject()
extern "C"
void*
C_ZNK21QAbstractItemDelegate10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractItemDelegate*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 90, column 18>
//   // proto:  void QAbstractItemDelegate::updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZNK21QAbstractItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex updateEditorGeometry(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void
C_ZNK21QAbstractItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
QWidget * arg1,
const QStyleOptionViewItem* arg2,
const QModelIndex* arg3) {
  ((QAbstractItemDelegate*)qthis)->updateEditorGeometry(arg1,
*((const QStyleOptionViewItem*)arg2),
*((const QModelIndex*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 84, column 18>
//   // proto:  void QAbstractItemDelegate::setEditorData(QWidget * editor, const QModelIndex & index);
// _ZNK21QAbstractItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex setEditorData(class QWidget *, const class QModelIndex &)
extern "C"
void
C_ZNK21QAbstractItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void *qthis,
QWidget * arg1,
const QModelIndex* arg2) {
  ((QAbstractItemDelegate*)qthis)->setEditorData(arg1,
*((const QModelIndex*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 66, column 14>
//   // proto:  void QAbstractItemDelegate::QAbstractItemDelegate(QObject * parent);
extern "C"
QAbstractItemDelegate*
C_ZN21QAbstractItemDelegateC2EP7QObject(QObject * arg1) {
  // auto ret = new QAbstractItemDelegate(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 100, column 20>
//   // proto: static QString QAbstractItemDelegate::elidedText(const QFontMetrics & fontMetrics, int width, Qt::TextElideMode mode, const QString & text);
// _ZN21QAbstractItemDelegate10elidedTextERK12QFontMetricsiN2Qt13TextElideModeERK7QString elidedText(const class QFontMetrics &, int, Qt::TextElideMode, const class QString &)
extern "C"
QString*
C_ZN21QAbstractItemDelegate10elidedTextERK12QFontMetricsiN2Qt13TextElideModeERK7QString(const QFontMetrics* arg1,
int arg2,
Qt::TextElideMode* arg3,
const QString* arg4) {
  auto ret =
  QAbstractItemDelegate::elidedText(*((const QFontMetrics*)arg1),
arg2,
*((Qt::TextElideMode*)arg3),
*((const QString*)arg4));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 78, column 22>
//   // proto:  QWidget * QAbstractItemDelegate::createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZNK21QAbstractItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex createEditor(class QWidget *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void*
C_ZNK21QAbstractItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
QWidget * arg1,
const QStyleOptionViewItem* arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractItemDelegate*)qthis)->createEditor(arg1,
*((const QStyleOptionViewItem*)arg2),
*((const QModelIndex*)arg3));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 70, column 18>
//   // proto:  void QAbstractItemDelegate::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZNK21QAbstractItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex paint(class QPainter *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
void
C_ZNK21QAbstractItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
QPainter * arg1,
const QStyleOptionViewItem* arg2,
const QModelIndex* arg3) {
  ((QAbstractItemDelegate*)qthis)->paint(arg1,
*((const QStyleOptionViewItem*)arg2),
*((const QModelIndex*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 112, column 10>
//   // proto:  void QAbstractItemDelegate::closeEditor(QWidget * editor, QAbstractItemDelegate::EndEditHint hint);
// _ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE closeEditor(class QWidget *, class QAbstractItemDelegate::EndEditHint)
extern "C"
void
C_ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(void *qthis,
QWidget * arg1,
QAbstractItemDelegate::EndEditHint* arg2) {
  ((QAbstractItemDelegate*)qthis)->closeEditor(arg1,
*((QAbstractItemDelegate::EndEditHint*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 74, column 19>
//   // proto:  QSize QAbstractItemDelegate::sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZNK21QAbstractItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex sizeHint(const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
QSize*
C_ZNK21QAbstractItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
const QStyleOptionViewItem* arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QAbstractItemDelegate*)qthis)->sizeHint(*((const QStyleOptionViewItem*)arg1),
*((const QModelIndex*)arg2));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 95, column 18>
//   // proto:  bool QAbstractItemDelegate::editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZN21QAbstractItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex editorEvent(class QEvent *, class QAbstractItemModel *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
bool
C_ZN21QAbstractItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
QEvent * arg1,
QAbstractItemModel * arg2,
const QStyleOptionViewItem* arg3,
const QModelIndex* arg4) {
  auto ret =
  ((QAbstractItemDelegate*)qthis)->editorEvent(arg1,
arg2,
*((const QStyleOptionViewItem*)arg3),
*((const QModelIndex*)arg4));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 103, column 18>
//   // proto:  bool QAbstractItemDelegate::helpEvent(QHelpEvent * event, QAbstractItemView * view, const QStyleOptionViewItem & option, const QModelIndex & index);
// _ZN21QAbstractItemDelegate9helpEventEP10QHelpEventP17QAbstractItemViewRK20QStyleOptionViewItemRK11QModelIndex helpEvent(class QHelpEvent *, class QAbstractItemView *, const class QStyleOptionViewItem &, const class QModelIndex &)
extern "C"
bool
C_ZN21QAbstractItemDelegate9helpEventEP10QHelpEventP17QAbstractItemViewRK20QStyleOptionViewItemRK11QModelIndex(void *qthis,
QHelpEvent * arg1,
QAbstractItemView * arg2,
const QStyleOptionViewItem* arg3,
const QModelIndex* arg4) {
  auto ret =
  ((QAbstractItemDelegate*)qthis)->helpEvent(arg1,
arg2,
*((const QStyleOptionViewItem*)arg3),
*((const QModelIndex*)arg4));
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QAbstractItemDelegate::~QAbstractItemDelegate();
extern "C"
void C_ZN21QAbstractItemDelegateD2Ev(void *qthis) {
  delete (QAbstractItemDelegate*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 86, column 18>
//   // proto:  void QAbstractItemDelegate::setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index);
// _ZNK21QAbstractItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex setModelData(class QWidget *, class QAbstractItemModel *, const class QModelIndex &)
extern "C"
void
C_ZNK21QAbstractItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex(void *qthis,
QWidget * arg1,
QAbstractItemModel * arg2,
const QModelIndex* arg3) {
  ((QAbstractItemDelegate*)qthis)->setModelData(arg1,
arg2,
*((const QModelIndex*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemdelegate.h', line 82, column 18>
//   // proto:  void QAbstractItemDelegate::destroyEditor(QWidget * editor, const QModelIndex & index);
// _ZNK21QAbstractItemDelegate13destroyEditorEP7QWidgetRK11QModelIndex destroyEditor(class QWidget *, const class QModelIndex &)
extern "C"
void
C_ZNK21QAbstractItemDelegate13destroyEditorEP7QWidgetRK11QModelIndex(void *qthis,
QWidget * arg1,
const QModelIndex* arg2) {
  ((QAbstractItemDelegate*)qthis)->destroyEditor(arg1,
*((const QModelIndex*)arg2));
}
// <= ext block end

// body block begin =>
// QAbstractItemDelegate_SlotProxy here
class QAbstractItemDelegate_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractItemDelegate_SlotProxy():QObject(){}

public slots:
  // closeEditor(class QWidget *, class QAbstractItemDelegate::EndEditHint)
  void slot_proxy_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(QWidget * arg0, QAbstractItemDelegate::EndEditHint arg1);
public:
  void (*slot_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE)(void* rsfptr, QWidget * arg0, QAbstractItemDelegate::EndEditHint arg1) = NULL;
public slots:
  // sizeHintChanged(const class QModelIndex &)
  void slot_proxy_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // commitData(class QWidget *)
  void slot_proxy_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget(QWidget * arg0);
public:
  void (*slot_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget)(void* rsfptr, QWidget * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qabstractitemdelegate.moc"

extern "C" {
  QAbstractItemDelegate_SlotProxy* QAbstractItemDelegate_SlotProxy_new()
  {
    return new QAbstractItemDelegate_SlotProxy();
  }
};

void QAbstractItemDelegate_SlotProxy::slot_proxy_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(QWidget * arg0, QAbstractItemDelegate::EndEditHint arg1) {
  if (this->slot_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE != NULL) {
    // do smth...
    this->slot_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QAbstractItemDelegate_SlotProxy_connect__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemDelegate_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE = (decltype(that->slot_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE))ffifptr;
  QObject::connect((QAbstractItemDelegate*)sender, SIGNAL(closeEditor(class QWidget *, class QAbstractItemDelegate::EndEditHint)), that, SLOT(slot_proxy_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(QWidget * arg0, QAbstractItemDelegate::EndEditHint arg1)));
  return that;
}
extern "C"
void QAbstractItemDelegate_SlotProxy_disconnect__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(QAbstractItemDelegate_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemDelegate_SlotProxy::slot_proxy_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemDelegate_SlotProxy_connect__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemDelegate_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex = (decltype(that->slot_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex))ffifptr;
  QObject::connect((QAbstractItemDelegate*)sender, SIGNAL(sizeHintChanged(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QAbstractItemDelegate_SlotProxy_disconnect__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(QAbstractItemDelegate_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemDelegate_SlotProxy::slot_proxy_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget(QWidget * arg0) {
  if (this->slot_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget != NULL) {
    // do smth...
    this->slot_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemDelegate_SlotProxy_connect__ZN21QAbstractItemDelegate10commitDataEP7QWidget(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemDelegate_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget = (decltype(that->slot_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget))ffifptr;
  QObject::connect((QAbstractItemDelegate*)sender, SIGNAL(commitData(class QWidget *)), that, SLOT(slot_proxy_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget(QWidget * arg0)));
  return that;
}
extern "C"
void QAbstractItemDelegate_SlotProxy_disconnect__ZN21QAbstractItemDelegate10commitDataEP7QWidget(QAbstractItemDelegate_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

