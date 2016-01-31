// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qabstractitemview.h
// dst-file: /src/widgets/qabstractitemview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractitemview.h>


#include <qsize.h>
#include <qabstractitemmodel.h>
#include <qrect.h>
#include <qvariant.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qabstractitemview_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractItemView_Class_Size()
{
  return sizeof(QAbstractItemView);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 206, column 14>
//   // proto:  QWidget * QAbstractItemView::indexWidget(const QModelIndex & index);
// _ZNK17QAbstractItemView11indexWidgetERK11QModelIndex indexWidget(const class QModelIndex &)
extern "C"
void*
C_ZNK17QAbstractItemView11indexWidgetERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemView*)qthis)->indexWidget(*((const QModelIndex*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 229, column 10>
//   // proto:  void QAbstractItemView::scrollToBottom();
// _ZN17QAbstractItemView14scrollToBottomEv scrollToBottom()
extern "C"
void
C_ZN17QAbstractItemView14scrollToBottomEv(void *qthis) {
  ((QAbstractItemView*)qthis)->scrollToBottom();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 158, column 10>
//   // proto:  void QAbstractItemView::setDropIndicatorShown(bool enable);
// _ZN17QAbstractItemView21setDropIndicatorShownEb setDropIndicatorShown(_Bool)
extern "C"
void
C_ZN17QAbstractItemView21setDropIndicatorShownEb(void *qthis,
bool arg1) {
  ((QAbstractItemView*)qthis)->setDropIndicatorShown(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 142, column 10>
//   // proto:  void QAbstractItemView::setVerticalScrollMode(QAbstractItemView::ScrollMode mode);
// _ZN17QAbstractItemView21setVerticalScrollModeENS_10ScrollModeE setVerticalScrollMode(enum QAbstractItemView::ScrollMode)
extern "C"
void
C_ZN17QAbstractItemView21setVerticalScrollModeENS_10ScrollModeE(void *qthis,
QAbstractItemView::ScrollMode arg1) {
  ((QAbstractItemView*)qthis)->setVerticalScrollMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 198, column 11>
//   // proto:  QSize QAbstractItemView::sizeHintForIndex(const QModelIndex & index);
// _ZNK17QAbstractItemView16sizeHintForIndexERK11QModelIndex sizeHintForIndex(const class QModelIndex &)
extern "C"
QSize*
C_ZNK17QAbstractItemView16sizeHintForIndexERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemView*)qthis)->sizeHintForIndex(*((const QModelIndex*)arg1));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 211, column 10>
//   // proto:  void QAbstractItemView::setItemDelegateForColumn(int column, QAbstractItemDelegate * delegate);
// _ZN17QAbstractItemView24setItemDelegateForColumnEiP21QAbstractItemDelegate setItemDelegateForColumn(int, class QAbstractItemDelegate *)
extern "C"
void
C_ZN17QAbstractItemView24setItemDelegateForColumnEiP21QAbstractItemDelegate(void *qthis,
int arg1,
QAbstractItemDelegate * arg2) {
  ((QAbstractItemView*)qthis)->setItemDelegateForColumn(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 162, column 10>
//   // proto:  bool QAbstractItemView::dragEnabled();
// _ZNK17QAbstractItemView11dragEnabledEv dragEnabled()
extern "C"
bool
C_ZNK17QAbstractItemView11dragEnabledEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->dragEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 176, column 10>
//   // proto:  void QAbstractItemView::setDragDropMode(QAbstractItemView::DragDropMode behavior);
// _ZN17QAbstractItemView15setDragDropModeENS_12DragDropModeE setDragDropMode(enum QAbstractItemView::DragDropMode)
extern "C"
void
C_ZN17QAbstractItemView15setDragDropModeENS_12DragDropModeE(void *qthis,
QAbstractItemView::DragDropMode arg1) {
  ((QAbstractItemView*)qthis)->setDragDropMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 214, column 28>
//   // proto:  QAbstractItemDelegate * QAbstractItemView::itemDelegate(const QModelIndex & index);
// _ZNK17QAbstractItemView12itemDelegateERK11QModelIndex itemDelegate(const class QModelIndex &)
extern "C"
void*
C_ZNK17QAbstractItemView12itemDelegateERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemView*)qthis)->itemDelegate(*((const QModelIndex*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 192, column 18>
//   // proto:  void QAbstractItemView::keyboardSearch(const QString & search);
// _ZN17QAbstractItemView14keyboardSearchERK7QString keyboardSearch(const class QString &)
extern "C"
void
C_ZN17QAbstractItemView14keyboardSearchERK7QString(void *qthis,
const QString* arg1) {
  ((QAbstractItemView*)qthis)->keyboardSearch(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 137, column 17>
//   // proto:  QModelIndex QAbstractItemView::rootIndex();
// _ZNK17QAbstractItemView9rootIndexEv rootIndex()
extern "C"
QModelIndex*
C_ZNK17QAbstractItemView9rootIndexEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->rootIndex();
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 212, column 28>
//   // proto:  QAbstractItemDelegate * QAbstractItemView::itemDelegateForColumn(int column);
// _ZNK17QAbstractItemView21itemDelegateForColumnEi itemDelegateForColumn(int)
extern "C"
void*
C_ZNK17QAbstractItemView21itemDelegateForColumnEi(void *qthis,
int arg1) {
  auto ret =
  ((QAbstractItemView*)qthis)->itemDelegateForColumn(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 189, column 10>
//   // proto:  void QAbstractItemView::setTextElideMode(Qt::TextElideMode mode);
// _ZN17QAbstractItemView16setTextElideModeEN2Qt13TextElideModeE setTextElideMode(Qt::TextElideMode)
extern "C"
void
C_ZN17QAbstractItemView16setTextElideModeEN2Qt13TextElideModeE(void *qthis,
Qt::TextElideMode* arg1) {
  ((QAbstractItemView*)qthis)->setTextElideMode(*((Qt::TextElideMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 140, column 18>
//   // proto:  EditTriggers QAbstractItemView::editTriggers();
// _ZNK17QAbstractItemView12editTriggersEv editTriggers()
extern "C"
QFlags<QAbstractItemView::EditTrigger>*
C_ZNK17QAbstractItemView12editTriggersEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->editTriggers();
  return new QFlags<QAbstractItemView::EditTrigger>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 125, column 26>
//   // proto:  QItemSelectionModel * QAbstractItemView::selectionModel();
// _ZNK17QAbstractItemView14selectionModelEv selectionModel()
extern "C"
void*
C_ZNK17QAbstractItemView14selectionModelEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->selectionModel();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 256, column 10>
//   // proto:  void QAbstractItemView::viewportEntered();
// _ZN17QAbstractItemView15viewportEnteredEv viewportEntered()
extern "C"
void
C_ZN17QAbstractItemView15viewportEnteredEv(void *qthis) {
  ((QAbstractItemView*)qthis)->viewportEntered();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 255, column 10>
//   // proto:  void QAbstractItemView::entered(const QModelIndex & index);
// _ZN17QAbstractItemView7enteredERK11QModelIndex entered(const class QModelIndex &)
extern "C"
void
C_ZN17QAbstractItemView7enteredERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemView*)qthis)->entered(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 134, column 42>
//   // proto:  QAbstractItemView::SelectionBehavior QAbstractItemView::selectionBehavior();
// _ZNK17QAbstractItemView17selectionBehaviorEv selectionBehavior()
extern "C"
QAbstractItemView::SelectionBehavior
C_ZNK17QAbstractItemView17selectionBehaviorEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->selectionBehavior();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 221, column 18>
//   // proto:  void QAbstractItemView::reset();
// _ZN17QAbstractItemView5resetEv reset()
extern "C"
void
C_ZN17QAbstractItemView5resetEv(void *qthis) {
  ((QAbstractItemView*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 208, column 10>
//   // proto:  void QAbstractItemView::setItemDelegateForRow(int row, QAbstractItemDelegate * delegate);
// _ZN17QAbstractItemView21setItemDelegateForRowEiP21QAbstractItemDelegate setItemDelegateForRow(int, class QAbstractItemDelegate *)
extern "C"
void
C_ZN17QAbstractItemView21setItemDelegateForRowEiP21QAbstractItemDelegate(void *qthis,
int arg1,
QAbstractItemDelegate * arg2) {
  ((QAbstractItemView*)qthis)->setItemDelegateForRow(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 222, column 18>
//   // proto:  void QAbstractItemView::setRootIndex(const QModelIndex & index);
// _ZN17QAbstractItemView12setRootIndexERK11QModelIndex setRootIndex(const class QModelIndex &)
extern "C"
void
C_ZN17QAbstractItemView12setRootIndexERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemView*)qthis)->setRootIndex(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 151, column 10>
//   // proto:  void QAbstractItemView::setAutoScrollMargin(int margin);
// _ZN17QAbstractItemView19setAutoScrollMarginEi setAutoScrollMargin(int)
extern "C"
void
C_ZN17QAbstractItemView19setAutoScrollMarginEi(void *qthis,
int arg1) {
  ((QAbstractItemView*)qthis)->setAutoScrollMargin(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 194, column 19>
//   // proto:  QRect QAbstractItemView::visualRect(const QModelIndex & index);
// _ZNK17QAbstractItemView10visualRectERK11QModelIndex visualRect(const class QModelIndex &)
extern "C"
QRect*
C_ZNK17QAbstractItemView10visualRectERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemView*)qthis)->visualRect(*((const QModelIndex*)arg1));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 252, column 10>
//   // proto:  void QAbstractItemView::doubleClicked(const QModelIndex & index);
// _ZN17QAbstractItemView13doubleClickedERK11QModelIndex doubleClicked(const class QModelIndex &)
extern "C"
void
C_ZN17QAbstractItemView13doubleClickedERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemView*)qthis)->doubleClicked(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 223, column 18>
//   // proto:  void QAbstractItemView::doItemsLayout();
// _ZN17QAbstractItemView13doItemsLayoutEv doItemsLayout()
extern "C"
void
C_ZN17QAbstractItemView13doItemsLayoutEv(void *qthis) {
  ((QAbstractItemView*)qthis)->doItemsLayout();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 130, column 10>
//   // proto:  void QAbstractItemView::setSelectionMode(QAbstractItemView::SelectionMode mode);
// _ZN17QAbstractItemView16setSelectionModeENS_13SelectionModeE setSelectionMode(class QAbstractItemView::SelectionMode)
extern "C"
void
C_ZN17QAbstractItemView16setSelectionModeENS_13SelectionModeE(void *qthis,
QAbstractItemView::SelectionMode* arg1) {
  ((QAbstractItemView*)qthis)->setSelectionMode(*((QAbstractItemView::SelectionMode*)arg1));
}
//   // proto:  void QAbstractItemView::~QAbstractItemView();
extern "C"
void C_ZN17QAbstractItemViewD2Ev(void *qthis) {
  delete (QAbstractItemView*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 143, column 16>
//   // proto:  QAbstractItemView::ScrollMode QAbstractItemView::verticalScrollMode();
// _ZNK17QAbstractItemView18verticalScrollModeEv verticalScrollMode()
extern "C"
QAbstractItemView::ScrollMode
C_ZNK17QAbstractItemView18verticalScrollModeEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->verticalScrollMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 122, column 25>
//   // proto:  QAbstractItemModel * QAbstractItemView::model();
// _ZNK17QAbstractItemView5modelEv model()
extern "C"
void*
C_ZNK17QAbstractItemView5modelEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->model();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 187, column 11>
//   // proto:  QSize QAbstractItemView::iconSize();
// _ZNK17QAbstractItemView8iconSizeEv iconSize()
extern "C"
QSize*
C_ZNK17QAbstractItemView8iconSizeEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->iconSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 127, column 10>
//   // proto:  void QAbstractItemView::setItemDelegate(QAbstractItemDelegate * delegate);
// _ZN17QAbstractItemView15setItemDelegateEP21QAbstractItemDelegate setItemDelegate(class QAbstractItemDelegate *)
extern "C"
void
C_ZN17QAbstractItemView15setItemDelegateEP21QAbstractItemDelegate(void *qthis,
QAbstractItemDelegate * arg1) {
  ((QAbstractItemView*)qthis)->setItemDelegate(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 161, column 10>
//   // proto:  void QAbstractItemView::setDragEnabled(bool enable);
// _ZN17QAbstractItemView14setDragEnabledEb setDragEnabled(_Bool)
extern "C"
void
C_ZN17QAbstractItemView14setDragEnabledEb(void *qthis,
bool arg1) {
  ((QAbstractItemView*)qthis)->setDragEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 136, column 17>
//   // proto:  QModelIndex QAbstractItemView::currentIndex();
// _ZNK17QAbstractItemView12currentIndexEv currentIndex()
extern "C"
QModelIndex*
C_ZNK17QAbstractItemView12currentIndexEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->currentIndex();
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 131, column 38>
//   // proto:  QAbstractItemView::SelectionMode QAbstractItemView::selectionMode();
// _ZNK17QAbstractItemView13selectionModeEv selectionMode()
extern "C"
QAbstractItemView::SelectionMode
C_ZNK17QAbstractItemView13selectionModeEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->selectionMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 199, column 17>
//   // proto:  int QAbstractItemView::sizeHintForRow(int row);
// _ZNK17QAbstractItemView14sizeHintForRowEi sizeHintForRow(int)
extern "C"
int
C_ZNK17QAbstractItemView14sizeHintForRowEi(void *qthis,
int arg1) {
  auto ret =
  ((QAbstractItemView*)qthis)->sizeHintForRow(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 118, column 14>
//   // proto:  void QAbstractItemView::QAbstractItemView(QWidget * parent);
extern "C"
QAbstractItemView*
C_ZN17QAbstractItemViewC2EP7QWidget(QWidget * arg1) {
  // auto ret = new QAbstractItemView(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 159, column 10>
//   // proto:  bool QAbstractItemView::showDropIndicator();
// _ZNK17QAbstractItemView17showDropIndicatorEv showDropIndicator()
extern "C"
bool
C_ZNK17QAbstractItemView17showDropIndicatorEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->showDropIndicator();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 149, column 10>
//   // proto:  bool QAbstractItemView::hasAutoScroll();
// _ZNK17QAbstractItemView13hasAutoScrollEv hasAutoScroll()
extern "C"
bool
C_ZNK17QAbstractItemView13hasAutoScrollEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->hasAutoScroll();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 216, column 22>
//   // proto:  QVariant QAbstractItemView::inputMethodQuery(Qt::InputMethodQuery query);
// _ZNK17QAbstractItemView16inputMethodQueryEN2Qt16InputMethodQueryE inputMethodQuery(Qt::InputMethodQuery)
extern "C"
QVariant*
C_ZNK17QAbstractItemView16inputMethodQueryEN2Qt16InputMethodQueryE(void *qthis,
Qt::InputMethodQuery* arg1) {
  auto ret =
  ((QAbstractItemView*)qthis)->inputMethodQuery(*((Qt::InputMethodQuery*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 179, column 10>
//   // proto:  void QAbstractItemView::setDefaultDropAction(Qt::DropAction dropAction);
// _ZN17QAbstractItemView20setDefaultDropActionEN2Qt10DropActionE setDefaultDropAction(Qt::DropAction)
extern "C"
void
C_ZN17QAbstractItemView20setDefaultDropActionEN2Qt10DropActionE(void *qthis,
Qt::DropAction* arg1) {
  ((QAbstractItemView*)qthis)->setDefaultDropAction(*((Qt::DropAction*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 224, column 18>
//   // proto:  void QAbstractItemView::selectAll();
// _ZN17QAbstractItemView9selectAllEv selectAll()
extern "C"
void
C_ZN17QAbstractItemView9selectAllEv(void *qthis) {
  ((QAbstractItemView*)qthis)->selectAll();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 128, column 28>
//   // proto:  QAbstractItemDelegate * QAbstractItemView::itemDelegate();
// _ZNK17QAbstractItemView12itemDelegateEv itemDelegate()
extern "C"
void*
C_ZNK17QAbstractItemView12itemDelegateEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->itemDelegate();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 225, column 10>
//   // proto:  void QAbstractItemView::edit(const QModelIndex & index);
// _ZN17QAbstractItemView4editERK11QModelIndex edit(const class QModelIndex &)
extern "C"
void
C_ZN17QAbstractItemView4editERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemView*)qthis)->edit(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 183, column 10>
//   // proto:  void QAbstractItemView::setAlternatingRowColors(bool enable);
// _ZN17QAbstractItemView23setAlternatingRowColorsEb setAlternatingRowColors(_Bool)
extern "C"
void
C_ZN17QAbstractItemView23setAlternatingRowColorsEb(void *qthis,
bool arg1) {
  ((QAbstractItemView*)qthis)->setAlternatingRowColors(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 200, column 17>
//   // proto:  int QAbstractItemView::sizeHintForColumn(int column);
// _ZNK17QAbstractItemView17sizeHintForColumnEi sizeHintForColumn(int)
extern "C"
int
C_ZNK17QAbstractItemView17sizeHintForColumnEi(void *qthis,
int arg1) {
  auto ret =
  ((QAbstractItemView*)qthis)->sizeHintForColumn(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 133, column 10>
//   // proto:  void QAbstractItemView::setSelectionBehavior(QAbstractItemView::SelectionBehavior behavior);
// _ZN17QAbstractItemView20setSelectionBehaviorENS_17SelectionBehaviorE setSelectionBehavior(class QAbstractItemView::SelectionBehavior)
extern "C"
void
C_ZN17QAbstractItemView20setSelectionBehaviorENS_17SelectionBehaviorE(void *qthis,
QAbstractItemView::SelectionBehavior* arg1) {
  ((QAbstractItemView*)qthis)->setSelectionBehavior(*((QAbstractItemView::SelectionBehavior*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 186, column 10>
//   // proto:  void QAbstractItemView::setIconSize(const QSize & size);
// _ZN17QAbstractItemView11setIconSizeERK5QSize setIconSize(const class QSize &)
extern "C"
void
C_ZN17QAbstractItemView11setIconSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QAbstractItemView*)qthis)->setIconSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 203, column 10>
//   // proto:  void QAbstractItemView::closePersistentEditor(const QModelIndex & index);
// _ZN17QAbstractItemView21closePersistentEditorERK11QModelIndex closePersistentEditor(const class QModelIndex &)
extern "C"
void
C_ZN17QAbstractItemView21closePersistentEditorERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemView*)qthis)->closePersistentEditor(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 164, column 10>
//   // proto:  void QAbstractItemView::setDragDropOverwriteMode(bool overwrite);
// _ZN17QAbstractItemView24setDragDropOverwriteModeEb setDragDropOverwriteMode(_Bool)
extern "C"
void
C_ZN17QAbstractItemView24setDragDropOverwriteModeEb(void *qthis,
bool arg1) {
  ((QAbstractItemView*)qthis)->setDragDropOverwriteMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 226, column 10>
//   // proto:  void QAbstractItemView::clearSelection();
// _ZN17QAbstractItemView14clearSelectionEv clearSelection()
extern "C"
void
C_ZN17QAbstractItemView14clearSelectionEv(void *qthis) {
  ((QAbstractItemView*)qthis)->clearSelection();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 228, column 10>
//   // proto:  void QAbstractItemView::scrollToTop();
// _ZN17QAbstractItemView11scrollToTopEv scrollToTop()
extern "C"
void
C_ZN17QAbstractItemView11scrollToTopEv(void *qthis) {
  ((QAbstractItemView*)qthis)->scrollToTop();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 146, column 16>
//   // proto:  QAbstractItemView::ScrollMode QAbstractItemView::horizontalScrollMode();
// _ZNK17QAbstractItemView20horizontalScrollModeEv horizontalScrollMode()
extern "C"
QAbstractItemView::ScrollMode
C_ZNK17QAbstractItemView20horizontalScrollModeEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->horizontalScrollMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 124, column 18>
//   // proto:  void QAbstractItemView::setSelectionModel(QItemSelectionModel * selectionModel);
// _ZN17QAbstractItemView17setSelectionModelEP19QItemSelectionModel setSelectionModel(class QItemSelectionModel *)
extern "C"
void
C_ZN17QAbstractItemView17setSelectionModelEP19QItemSelectionModel(void *qthis,
QItemSelectionModel * arg1) {
  ((QAbstractItemView*)qthis)->setSelectionModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 250, column 10>
//   // proto:  void QAbstractItemView::pressed(const QModelIndex & index);
// _ZN17QAbstractItemView7pressedERK11QModelIndex pressed(const class QModelIndex &)
extern "C"
void
C_ZN17QAbstractItemView7pressedERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemView*)qthis)->pressed(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 227, column 10>
//   // proto:  void QAbstractItemView::setCurrentIndex(const QModelIndex & index);
// _ZN17QAbstractItemView15setCurrentIndexERK11QModelIndex setCurrentIndex(const class QModelIndex &)
extern "C"
void
C_ZN17QAbstractItemView15setCurrentIndexERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemView*)qthis)->setCurrentIndex(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 251, column 10>
//   // proto:  void QAbstractItemView::clicked(const QModelIndex & index);
// _ZN17QAbstractItemView7clickedERK11QModelIndex clicked(const class QModelIndex &)
extern "C"
void
C_ZN17QAbstractItemView7clickedERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemView*)qthis)->clicked(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 196, column 25>
//   // proto:  QModelIndex QAbstractItemView::indexAt(const QPoint & point);
// _ZNK17QAbstractItemView7indexAtERK6QPoint indexAt(const class QPoint &)
extern "C"
QModelIndex*
C_ZNK17QAbstractItemView7indexAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QAbstractItemView*)qthis)->indexAt(*((const QPoint*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 154, column 10>
//   // proto:  void QAbstractItemView::setTabKeyNavigation(bool enable);
// _ZN17QAbstractItemView19setTabKeyNavigationEb setTabKeyNavigation(_Bool)
extern "C"
void
C_ZN17QAbstractItemView19setTabKeyNavigationEb(void *qthis,
bool arg1) {
  ((QAbstractItemView*)qthis)->setTabKeyNavigation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 205, column 10>
//   // proto:  void QAbstractItemView::setIndexWidget(const QModelIndex & index, QWidget * widget);
// _ZN17QAbstractItemView14setIndexWidgetERK11QModelIndexP7QWidget setIndexWidget(const class QModelIndex &, class QWidget *)
extern "C"
void
C_ZN17QAbstractItemView14setIndexWidgetERK11QModelIndexP7QWidget(void *qthis,
const QModelIndex* arg1,
QWidget * arg2) {
  ((QAbstractItemView*)qthis)->setIndexWidget(*((const QModelIndex*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 148, column 10>
//   // proto:  void QAbstractItemView::setAutoScroll(bool enable);
// _ZN17QAbstractItemView13setAutoScrollEb setAutoScroll(_Bool)
extern "C"
void
C_ZN17QAbstractItemView13setAutoScrollEb(void *qthis,
bool arg1) {
  ((QAbstractItemView*)qthis)->setAutoScroll(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 180, column 20>
//   // proto:  Qt::DropAction QAbstractItemView::defaultDropAction();
// _ZNK17QAbstractItemView17defaultDropActionEv defaultDropAction()
extern "C"
Qt::DropAction
C_ZNK17QAbstractItemView17defaultDropActionEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->defaultDropAction();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 121, column 18>
//   // proto:  void QAbstractItemView::setModel(QAbstractItemModel * model);
// _ZN17QAbstractItemView8setModelEP18QAbstractItemModel setModel(class QAbstractItemModel *)
extern "C"
void
C_ZN17QAbstractItemView8setModelEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QAbstractItemView*)qthis)->setModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 195, column 18>
//   // proto:  void QAbstractItemView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint);
// _ZN17QAbstractItemView8scrollToERK11QModelIndexNS_10ScrollHintE scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void
C_ZN17QAbstractItemView8scrollToERK11QModelIndexNS_10ScrollHintE(void *qthis,
const QModelIndex* arg1,
QAbstractItemView::ScrollHint arg2) {
  ((QAbstractItemView*)qthis)->scrollTo(*((const QModelIndex*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 177, column 18>
//   // proto:  QAbstractItemView::DragDropMode QAbstractItemView::dragDropMode();
// _ZNK17QAbstractItemView12dragDropModeEv dragDropMode()
extern "C"
QAbstractItemView::DragDropMode
C_ZNK17QAbstractItemView12dragDropModeEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->dragDropMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 139, column 10>
//   // proto:  void QAbstractItemView::setEditTriggers(EditTriggers triggers);
// _ZN17QAbstractItemView15setEditTriggersE6QFlagsINS_11EditTriggerEE setEditTriggers(EditTriggers)
extern "C"
void
C_ZN17QAbstractItemView15setEditTriggersE6QFlagsINS_11EditTriggerEE(void *qthis,
QAbstractItemView::EditTriggers arg1) {
  ((QAbstractItemView*)qthis)->setEditTriggers(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 230, column 10>
//   // proto:  void QAbstractItemView::update(const QModelIndex & index);
// _ZN17QAbstractItemView6updateERK11QModelIndex update(const class QModelIndex &)
extern "C"
void
C_ZN17QAbstractItemView6updateERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemView*)qthis)->update(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 258, column 10>
//   // proto:  void QAbstractItemView::iconSizeChanged(const QSize & size);
// _ZN17QAbstractItemView15iconSizeChangedERK5QSize iconSizeChanged(const class QSize &)
extern "C"
void
C_ZN17QAbstractItemView15iconSizeChangedERK5QSize(void *qthis,
const QSize* arg1) {
  ((QAbstractItemView*)qthis)->iconSizeChanged(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 54, column 5>
//   // proto:  const QMetaObject * QAbstractItemView::metaObject();
// _ZNK17QAbstractItemView10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QAbstractItemView10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 202, column 10>
//   // proto:  void QAbstractItemView::openPersistentEditor(const QModelIndex & index);
// _ZN17QAbstractItemView20openPersistentEditorERK11QModelIndex openPersistentEditor(const class QModelIndex &)
extern "C"
void
C_ZN17QAbstractItemView20openPersistentEditorERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemView*)qthis)->openPersistentEditor(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 209, column 28>
//   // proto:  QAbstractItemDelegate * QAbstractItemView::itemDelegateForRow(int row);
// _ZNK17QAbstractItemView18itemDelegateForRowEi itemDelegateForRow(int)
extern "C"
void*
C_ZNK17QAbstractItemView18itemDelegateForRowEi(void *qthis,
int arg1) {
  auto ret =
  ((QAbstractItemView*)qthis)->itemDelegateForRow(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 145, column 10>
//   // proto:  void QAbstractItemView::setHorizontalScrollMode(QAbstractItemView::ScrollMode mode);
// _ZN17QAbstractItemView23setHorizontalScrollModeENS_10ScrollModeE setHorizontalScrollMode(enum QAbstractItemView::ScrollMode)
extern "C"
void
C_ZN17QAbstractItemView23setHorizontalScrollModeENS_10ScrollModeE(void *qthis,
QAbstractItemView::ScrollMode arg1) {
  ((QAbstractItemView*)qthis)->setHorizontalScrollMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 165, column 10>
//   // proto:  bool QAbstractItemView::dragDropOverwriteMode();
// _ZNK17QAbstractItemView21dragDropOverwriteModeEv dragDropOverwriteMode()
extern "C"
bool
C_ZNK17QAbstractItemView21dragDropOverwriteModeEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->dragDropOverwriteMode();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 155, column 10>
//   // proto:  bool QAbstractItemView::tabKeyNavigation();
// _ZNK17QAbstractItemView16tabKeyNavigationEv tabKeyNavigation()
extern "C"
bool
C_ZNK17QAbstractItemView16tabKeyNavigationEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->tabKeyNavigation();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 190, column 23>
//   // proto:  Qt::TextElideMode QAbstractItemView::textElideMode();
// _ZNK17QAbstractItemView13textElideModeEv textElideMode()
extern "C"
Qt::TextElideMode
C_ZNK17QAbstractItemView13textElideModeEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->textElideMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 152, column 9>
//   // proto:  int QAbstractItemView::autoScrollMargin();
// _ZNK17QAbstractItemView16autoScrollMarginEv autoScrollMargin()
extern "C"
int
C_ZNK17QAbstractItemView16autoScrollMarginEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->autoScrollMargin();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 254, column 10>
//   // proto:  void QAbstractItemView::activated(const QModelIndex & index);
// _ZN17QAbstractItemView9activatedERK11QModelIndex activated(const class QModelIndex &)
extern "C"
void
C_ZN17QAbstractItemView9activatedERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemView*)qthis)->activated(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractitemview.h', line 184, column 10>
//   // proto:  bool QAbstractItemView::alternatingRowColors();
// _ZNK17QAbstractItemView20alternatingRowColorsEv alternatingRowColors()
extern "C"
bool
C_ZNK17QAbstractItemView20alternatingRowColorsEv(void *qthis) {
  auto ret =
  ((QAbstractItemView*)qthis)->alternatingRowColors();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QAbstractItemView_SlotProxy here
class QAbstractItemView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractItemView_SlotProxy():QObject(){}

public slots:
  // entered(const class QModelIndex &)
  void slot_proxy_func__ZN17QAbstractItemView7enteredERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN17QAbstractItemView7enteredERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // doubleClicked(const class QModelIndex &)
  void slot_proxy_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // pressed(const class QModelIndex &)
  void slot_proxy_func__ZN17QAbstractItemView7pressedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN17QAbstractItemView7pressedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // viewportEntered()
  void slot_proxy_func__ZN17QAbstractItemView15viewportEnteredEv();
public:
  void (*slot_func__ZN17QAbstractItemView15viewportEnteredEv)(void* rsfptr) = NULL;
public slots:
  // iconSizeChanged(const class QSize &)
  void slot_proxy_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize(const QSize & arg0);
public:
  void (*slot_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize)(void* rsfptr, const QSize & arg0) = NULL;
public slots:
  // activated(const class QModelIndex &)
  void slot_proxy_func__ZN17QAbstractItemView9activatedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN17QAbstractItemView9activatedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // clicked(const class QModelIndex &)
  void slot_proxy_func__ZN17QAbstractItemView7clickedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN17QAbstractItemView7clickedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qabstractitemview.moc"

extern "C" {
  QAbstractItemView_SlotProxy* QAbstractItemView_SlotProxy_new()
  {
    return new QAbstractItemView_SlotProxy();
  }
};

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView7enteredERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN17QAbstractItemView7enteredERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView7enteredERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView7enteredERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView7enteredERK11QModelIndex = (decltype(that->slot_func__ZN17QAbstractItemView7enteredERK11QModelIndex))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(entered(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN17QAbstractItemView7enteredERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView7enteredERK11QModelIndex(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView13doubleClickedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex = (decltype(that->slot_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(doubleClicked(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView13doubleClickedERK11QModelIndex(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView7pressedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN17QAbstractItemView7pressedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView7pressedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView7pressedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView7pressedERK11QModelIndex = (decltype(that->slot_func__ZN17QAbstractItemView7pressedERK11QModelIndex))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(pressed(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN17QAbstractItemView7pressedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView7pressedERK11QModelIndex(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView15viewportEnteredEv() {
  if (this->slot_func__ZN17QAbstractItemView15viewportEnteredEv != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView15viewportEnteredEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView15viewportEnteredEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView15viewportEnteredEv = (decltype(that->slot_func__ZN17QAbstractItemView15viewportEnteredEv))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(viewportEntered()), that, SLOT(slot_proxy_func__ZN17QAbstractItemView15viewportEnteredEv()));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView15viewportEnteredEv(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize(const QSize & arg0) {
  if (this->slot_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView15iconSizeChangedERK5QSize(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize = (decltype(that->slot_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(iconSizeChanged(const class QSize &)), that, SLOT(slot_proxy_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize(const QSize & arg0)));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView15iconSizeChangedERK5QSize(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView9activatedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN17QAbstractItemView9activatedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView9activatedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView9activatedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView9activatedERK11QModelIndex = (decltype(that->slot_func__ZN17QAbstractItemView9activatedERK11QModelIndex))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(activated(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN17QAbstractItemView9activatedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView9activatedERK11QModelIndex(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView7clickedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN17QAbstractItemView7clickedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView7clickedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView7clickedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView7clickedERK11QModelIndex = (decltype(that->slot_func__ZN17QAbstractItemView7clickedERK11QModelIndex))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(clicked(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN17QAbstractItemView7clickedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView7clickedERK11QModelIndex(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

