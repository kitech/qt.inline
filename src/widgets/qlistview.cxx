//  header block begin
// /usr/include/qt/QtWidgets/qlistview.h
#include <qlistview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QListView is pure virtual: false
// QListView has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN9QListView5eventEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN9QListView5eventEP6QEvent(void*cbfn)
// { callback_ZN9QListView5eventEP6QEvent_fnptr = cbfn; }
// void* callback_ZN9QListView16scrollContentsByEii_fnptr = 0;
// extern "C" void set_callback_ZN9QListView16scrollContentsByEii(void*cbfn)
// { callback_ZN9QListView16scrollContentsByEii_fnptr = cbfn; }
// void* callback_ZN9QListView14resizeContentsEii_fnptr = 0;
// extern "C" void set_callback_ZN9QListView14resizeContentsEii(void*cbfn)
// { callback_ZN9QListView14resizeContentsEii_fnptr = cbfn; }
// void* callback_ZNK9QListView12contentsSizeEv_fnptr = 0;
// extern "C" void set_callback_ZNK9QListView12contentsSizeEv(void*cbfn)
// { callback_ZNK9QListView12contentsSizeEv_fnptr = cbfn; }
// void* callback_ZN9QListView12rowsInsertedERK11QModelIndexii_fnptr = 0;
// extern "C" void set_callback_ZN9QListView12rowsInsertedERK11QModelIndexii(void*cbfn)
// { callback_ZN9QListView12rowsInsertedERK11QModelIndexii_fnptr = cbfn; }
// void* callback_ZN9QListView20rowsAboutToBeRemovedERK11QModelIndexii_fnptr = 0;
// extern "C" void set_callback_ZN9QListView20rowsAboutToBeRemovedERK11QModelIndexii(void*cbfn)
// { callback_ZN9QListView20rowsAboutToBeRemovedERK11QModelIndexii_fnptr = cbfn; }
// void* callback_ZN9QListView14mouseMoveEventEP11QMouseEvent_fnptr = 0;
// extern "C" void set_callback_ZN9QListView14mouseMoveEventEP11QMouseEvent(void*cbfn)
// { callback_ZN9QListView14mouseMoveEventEP11QMouseEvent_fnptr = cbfn; }
// void* callback_ZN9QListView17mouseReleaseEventEP11QMouseEvent_fnptr = 0;
// extern "C" void set_callback_ZN9QListView17mouseReleaseEventEP11QMouseEvent(void*cbfn)
// { callback_ZN9QListView17mouseReleaseEventEP11QMouseEvent_fnptr = cbfn; }
// void* callback_ZN9QListView10wheelEventEP11QWheelEvent_fnptr = 0;
// extern "C" void set_callback_ZN9QListView10wheelEventEP11QWheelEvent(void*cbfn)
// { callback_ZN9QListView10wheelEventEP11QWheelEvent_fnptr = cbfn; }
// void* callback_ZN9QListView10timerEventEP11QTimerEvent_fnptr = 0;
// extern "C" void set_callback_ZN9QListView10timerEventEP11QTimerEvent(void*cbfn)
// { callback_ZN9QListView10timerEventEP11QTimerEvent_fnptr = cbfn; }
// void* callback_ZN9QListView11resizeEventEP12QResizeEvent_fnptr = 0;
// extern "C" void set_callback_ZN9QListView11resizeEventEP12QResizeEvent(void*cbfn)
// { callback_ZN9QListView11resizeEventEP12QResizeEvent_fnptr = cbfn; }
// void* callback_ZN9QListView13dragMoveEventEP14QDragMoveEvent_fnptr = 0;
// extern "C" void set_callback_ZN9QListView13dragMoveEventEP14QDragMoveEvent(void*cbfn)
// { callback_ZN9QListView13dragMoveEventEP14QDragMoveEvent_fnptr = cbfn; }
// void* callback_ZN9QListView14dragLeaveEventEP15QDragLeaveEvent_fnptr = 0;
// extern "C" void set_callback_ZN9QListView14dragLeaveEventEP15QDragLeaveEvent(void*cbfn)
// { callback_ZN9QListView14dragLeaveEventEP15QDragLeaveEvent_fnptr = cbfn; }
// void* callback_ZN9QListView9dropEventEP10QDropEvent_fnptr = 0;
// extern "C" void set_callback_ZN9QListView9dropEventEP10QDropEvent(void*cbfn)
// { callback_ZN9QListView9dropEventEP10QDropEvent_fnptr = cbfn; }
// void* callback_ZN9QListView9startDragE6QFlagsIN2Qt10DropActionEE_fnptr = 0;
// extern "C" void set_callback_ZN9QListView9startDragE6QFlagsIN2Qt10DropActionEE(void*cbfn)
// { callback_ZN9QListView9startDragE6QFlagsIN2Qt10DropActionEE_fnptr = cbfn; }
// void* callback_ZNK9QListView11viewOptionsEv_fnptr = 0;
// extern "C" void set_callback_ZNK9QListView11viewOptionsEv(void*cbfn)
// { callback_ZNK9QListView11viewOptionsEv_fnptr = cbfn; }
// void* callback_ZN9QListView10paintEventEP11QPaintEvent_fnptr = 0;
// extern "C" void set_callback_ZN9QListView10paintEventEP11QPaintEvent(void*cbfn)
// { callback_ZN9QListView10paintEventEP11QPaintEvent_fnptr = cbfn; }
// void* callback_ZNK9QListView16horizontalOffsetEv_fnptr = 0;
// extern "C" void set_callback_ZNK9QListView16horizontalOffsetEv(void*cbfn)
// { callback_ZNK9QListView16horizontalOffsetEv_fnptr = cbfn; }
// void* callback_ZNK9QListView14verticalOffsetEv_fnptr = 0;
// extern "C" void set_callback_ZNK9QListView14verticalOffsetEv(void*cbfn)
// { callback_ZNK9QListView14verticalOffsetEv_fnptr = cbfn; }
// void* callback_ZN9QListView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE_fnptr = 0;
// extern "C" void set_callback_ZN9QListView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void*cbfn)
// { callback_ZN9QListView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE_fnptr = cbfn; }
// void* callback_ZNK9QListView12rectForIndexERK11QModelIndex_fnptr = 0;
// extern "C" void set_callback_ZNK9QListView12rectForIndexERK11QModelIndex(void*cbfn)
// { callback_ZNK9QListView12rectForIndexERK11QModelIndex_fnptr = cbfn; }
// void* callback_ZN9QListView19setPositionForIndexERK6QPointRK11QModelIndex_fnptr = 0;
// extern "C" void set_callback_ZN9QListView19setPositionForIndexERK6QPointRK11QModelIndex(void*cbfn)
// { callback_ZN9QListView19setPositionForIndexERK6QPointRK11QModelIndex_fnptr = cbfn; }
// void* callback_ZN9QListView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE_fnptr = 0;
// extern "C" void set_callback_ZN9QListView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void*cbfn)
// { callback_ZN9QListView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE_fnptr = cbfn; }
// void* callback_ZNK9QListView24visualRegionForSelectionERK14QItemSelection_fnptr = 0;
// extern "C" void set_callback_ZNK9QListView24visualRegionForSelectionERK14QItemSelection(void*cbfn)
// { callback_ZNK9QListView24visualRegionForSelectionERK14QItemSelection_fnptr = cbfn; }
// void* callback_ZN9QListView16updateGeometriesEv_fnptr = 0;
// extern "C" void set_callback_ZN9QListView16updateGeometriesEv(void*cbfn)
// { callback_ZN9QListView16updateGeometriesEv_fnptr = cbfn; }
// void* callback_ZNK9QListView13isIndexHiddenERK11QModelIndex_fnptr = 0;
// extern "C" void set_callback_ZNK9QListView13isIndexHiddenERK11QModelIndex(void*cbfn)
// { callback_ZNK9QListView13isIndexHiddenERK11QModelIndex_fnptr = cbfn; }
// void* callback_ZN9QListView16selectionChangedERK14QItemSelectionS2__fnptr = 0;
// extern "C" void set_callback_ZN9QListView16selectionChangedERK14QItemSelectionS2_(void*cbfn)
// { callback_ZN9QListView16selectionChangedERK14QItemSelectionS2__fnptr = cbfn; }
// void* callback_ZN9QListView14currentChangedERK11QModelIndexS2__fnptr = 0;
// extern "C" void set_callback_ZN9QListView14currentChangedERK11QModelIndexS2_(void*cbfn)
// { callback_ZN9QListView14currentChangedERK11QModelIndexS2__fnptr = cbfn; }
// void* callback_ZNK9QListView16viewportSizeHintEv_fnptr = 0;
// extern "C" void set_callback_ZNK9QListView16viewportSizeHintEv(void*cbfn)
// { callback_ZNK9QListView16viewportSizeHintEv_fnptr = cbfn; }

class MyQListView : public QListView {
public:
  virtual ~MyQListView() {}
// void QListView(class QWidget *)
MyQListView(QWidget * parent) : QListView(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN9QListView5eventEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    return QListView::event(e);
  }
  }
// void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , int, int))(callback_ZN9QListView16scrollContentsByEii_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , dx, dy);
    // }
    QListView::scrollContentsBy(dx, dy);
  }
  }
// void resizeContents(int, int)
  virtual void resizeContents(int width, int height) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeContents", &handled, 2, (uint64_t)width, (uint64_t)height, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , int, int))(callback_ZN9QListView14resizeContentsEii_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , width, height);
    // }
    QListView::resizeContents(width, height);
  }
  }
// QSize contentsSize()
  virtual QSize contentsSize() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contentsSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    // auto fnptr = ((QSize (*)(void* ))(callback_ZNK9QListView12contentsSizeEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    return QListView::contentsSize();
  }
  }
// void rowsInserted(const class QModelIndex &, int, int)
  virtual void rowsInserted(const QModelIndex & parent, int start, int end) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QModelIndex*, int, int))(callback_ZN9QListView12rowsInsertedERK11QModelIndexii_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QModelIndex*)&parent, start, end);
    // }
    QListView::rowsInserted(parent, start, end);
  }
  }
// void rowsAboutToBeRemoved(const class QModelIndex &, int, int)
  virtual void rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowsAboutToBeRemoved", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QModelIndex*, int, int))(callback_ZN9QListView20rowsAboutToBeRemovedERK11QModelIndexii_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QModelIndex*)&parent, start, end);
    // }
    QListView::rowsAboutToBeRemoved(parent, start, end);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN9QListView14mouseMoveEventEP11QMouseEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    QListView::mouseMoveEvent(e);
  }
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN9QListView17mouseReleaseEventEP11QMouseEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    QListView::mouseReleaseEvent(e);
  }
  }
// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QWheelEvent *))(callback_ZN9QListView10wheelEventEP11QWheelEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    QListView::wheelEvent(e);
  }
  }
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QTimerEvent *))(callback_ZN9QListView10timerEventEP11QTimerEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    QListView::timerEvent(e);
  }
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QResizeEvent *))(callback_ZN9QListView11resizeEventEP12QResizeEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    QListView::resizeEvent(e);
  }
  }
// void dragMoveEvent(class QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QDragMoveEvent *))(callback_ZN9QListView13dragMoveEventEP14QDragMoveEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    QListView::dragMoveEvent(e);
  }
  }
// void dragLeaveEvent(class QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QDragLeaveEvent *))(callback_ZN9QListView14dragLeaveEventEP15QDragLeaveEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    QListView::dragLeaveEvent(e);
  }
  }
// void dropEvent(class QDropEvent *)
  virtual void dropEvent(QDropEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QDropEvent *))(callback_ZN9QListView9dropEventEP10QDropEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    QListView::dropEvent(e);
  }
  }
// void startDrag(Qt::DropActions)
  virtual void startDrag(QFlags<Qt::DropAction> supportedActions) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"startDrag", &handled, 1, (uint64_t)supportedActions, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QFlags<Qt::DropAction>))(callback_ZN9QListView9startDragE6QFlagsIN2Qt10DropActionEE_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , supportedActions);
    // }
    QListView::startDrag(supportedActions);
  }
  }
// QStyleOptionViewItem viewOptions()
  virtual QStyleOptionViewItem viewOptions() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"viewOptions", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QStyleOptionViewItem*)(irv);
      // RecordRecordQStyleOptionViewItem
    } else {
    // auto fnptr = ((QStyleOptionViewItem (*)(void* ))(callback_ZNK9QListView11viewOptionsEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    return QListView::viewOptions();
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QPaintEvent *))(callback_ZN9QListView10paintEventEP11QPaintEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    QListView::paintEvent(e);
  }
  }
// int horizontalOffset()
  virtual int horizontalOffset() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"horizontalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    // auto fnptr = ((int (*)(void* ))(callback_ZNK9QListView16horizontalOffsetEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    return QListView::horizontalOffset();
  }
  }
// int verticalOffset()
  virtual int verticalOffset() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"verticalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    // auto fnptr = ((int (*)(void* ))(callback_ZNK9QListView14verticalOffsetEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    return QListView::verticalOffset();
  }
  }
// QModelIndex moveCursor(enum QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveCursor", &handled, 2, (uint64_t)cursorAction, (uint64_t)modifiers, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndex*)(irv);
      // RecordRecordQModelIndex
    } else {
    // auto fnptr = ((QModelIndex (*)(void* , QAbstractItemView::CursorAction, QFlags<Qt::KeyboardModifier>))(callback_ZN9QListView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , cursorAction, modifiers);
    // }
    return QListView::moveCursor(cursorAction, modifiers);
  }
  }
// QRect rectForIndex(const class QModelIndex &)
  virtual QRect rectForIndex(const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rectForIndex", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRect*)(irv);
      // RecordRecordQRect
    } else {
    // auto fnptr = ((QRect (*)(void* , QModelIndex*))(callback_ZNK9QListView12rectForIndexERK11QModelIndex_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QModelIndex*)&index);
    // }
    return QListView::rectForIndex(index);
  }
  }
// void setPositionForIndex(const class QPoint &, const class QModelIndex &)
  virtual void setPositionForIndex(const QPoint & position, const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setPositionForIndex", &handled, 2, (uint64_t)&position, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QPoint*, QModelIndex*))(callback_ZN9QListView19setPositionForIndexERK6QPointRK11QModelIndex_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QPoint*)&position, (QModelIndex*)&index);
    // }
    QListView::setPositionForIndex(position, index);
  }
  }
// void setSelection(const class QRect &, class QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)command, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QRect*, QFlags<QItemSelectionModel::SelectionFlag>))(callback_ZN9QListView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QRect*)&rect, command);
    // }
    QListView::setSelection(rect, command);
  }
  }
// QRegion visualRegionForSelection(const class QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"visualRegionForSelection", &handled, 1, (uint64_t)&selection, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRegion*)(irv);
      // RecordRecordQRegion
    } else {
    // auto fnptr = ((QRegion (*)(void* , QItemSelection*))(callback_ZNK9QListView24visualRegionForSelectionERK14QItemSelection_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QItemSelection*)&selection);
    // }
    return QListView::visualRegionForSelection(selection);
  }
  }
// void updateGeometries()
  virtual void updateGeometries() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* ))(callback_ZN9QListView16updateGeometriesEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    QListView::updateGeometries();
  }
  }
// bool isIndexHidden(const class QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"isIndexHidden", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QModelIndex*))(callback_ZNK9QListView13isIndexHiddenERK11QModelIndex_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QModelIndex*)&index);
    // }
    return QListView::isIndexHidden(index);
  }
  }
// void selectionChanged(const class QItemSelection &, const class QItemSelection &)
  virtual void selectionChanged(const QItemSelection & selected, const QItemSelection & deselected) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"selectionChanged", &handled, 2, (uint64_t)&selected, (uint64_t)&deselected, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QItemSelection*, QItemSelection*))(callback_ZN9QListView16selectionChangedERK14QItemSelectionS2__fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QItemSelection*)&selected, (QItemSelection*)&deselected);
    // }
    QListView::selectionChanged(selected, deselected);
  }
  }
// void currentChanged(const class QModelIndex &, const class QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & previous) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&previous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QModelIndex*, QModelIndex*))(callback_ZN9QListView14currentChangedERK11QModelIndexS2__fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QModelIndex*)&current, (QModelIndex*)&previous);
    // }
    QListView::currentChanged(current, previous);
  }
  }
// QSize viewportSizeHint()
  virtual QSize viewportSizeHint() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"viewportSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    // auto fnptr = ((QSize (*)(void* ))(callback_ZNK9QListView16viewportSizeHintEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    return QListView::viewportSizeHint();
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QListView10metaObjectEv(void *this_) {
  return (void*)((QListView*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:81
// [-2] void QListView(class QWidget *)
extern "C"
void* C_ZN9QListViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQListView*)(0);
  return  new MyQListView(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:82
// [-2] void ~QListView()
extern "C"
void C_ZN9QListViewD2Ev(void *this_) {
  delete (QListView*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:84
// [-2] void setMovement(enum QListView::Movement)
extern "C"
void C_ZN9QListView11setMovementENS_8MovementE(void *this_, QListView::Movement movement) {
  ((QListView*)this_)->setMovement(movement);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:85
// [4] QListView::Movement movement()
extern "C"
QListView::Movement C_ZNK9QListView8movementEv(void *this_) {
  return (QListView::Movement)((QListView*)this_)->movement();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:87
// [-2] void setFlow(enum QListView::Flow)
extern "C"
void C_ZN9QListView7setFlowENS_4FlowE(void *this_, QListView::Flow flow) {
  ((QListView*)this_)->setFlow(flow);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:88
// [4] QListView::Flow flow()
extern "C"
QListView::Flow C_ZNK9QListView4flowEv(void *this_) {
  return (QListView::Flow)((QListView*)this_)->flow();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:90
// [-2] void setWrapping(_Bool)
extern "C"
void C_ZN9QListView11setWrappingEb(void *this_, bool enable) {
  ((QListView*)this_)->setWrapping(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:91
// [1] bool isWrapping()
extern "C"
bool C_ZNK9QListView10isWrappingEv(void *this_) {
  return (bool)((QListView*)this_)->isWrapping();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:93
// [-2] void setResizeMode(enum QListView::ResizeMode)
extern "C"
void C_ZN9QListView13setResizeModeENS_10ResizeModeE(void *this_, QListView::ResizeMode mode) {
  ((QListView*)this_)->setResizeMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:94
// [4] QListView::ResizeMode resizeMode()
extern "C"
QListView::ResizeMode C_ZNK9QListView10resizeModeEv(void *this_) {
  return (QListView::ResizeMode)((QListView*)this_)->resizeMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:96
// [-2] void setLayoutMode(enum QListView::LayoutMode)
extern "C"
void C_ZN9QListView13setLayoutModeENS_10LayoutModeE(void *this_, QListView::LayoutMode mode) {
  ((QListView*)this_)->setLayoutMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:97
// [4] QListView::LayoutMode layoutMode()
extern "C"
QListView::LayoutMode C_ZNK9QListView10layoutModeEv(void *this_) {
  return (QListView::LayoutMode)((QListView*)this_)->layoutMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:99
// [-2] void setSpacing(int)
extern "C"
void C_ZN9QListView10setSpacingEi(void *this_, int space) {
  ((QListView*)this_)->setSpacing(space);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:100
// [4] int spacing()
extern "C"
int C_ZNK9QListView7spacingEv(void *this_) {
  return (int)((QListView*)this_)->spacing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:102
// [-2] void setBatchSize(int)
extern "C"
void C_ZN9QListView12setBatchSizeEi(void *this_, int batchSize) {
  ((QListView*)this_)->setBatchSize(batchSize);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:103
// [4] int batchSize()
extern "C"
int C_ZNK9QListView9batchSizeEv(void *this_) {
  return (int)((QListView*)this_)->batchSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:105
// [-2] void setGridSize(const class QSize &)
extern "C"
void C_ZN9QListView11setGridSizeERK5QSize(void *this_, QSize* size) {
  ((QListView*)this_)->setGridSize(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:106
// [8] QSize gridSize()
extern "C"
void* C_ZNK9QListView8gridSizeEv(void *this_) {
  auto rv = ((QListView*)this_)->gridSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:108
// [-2] void setViewMode(enum QListView::ViewMode)
extern "C"
void C_ZN9QListView11setViewModeENS_8ViewModeE(void *this_, QListView::ViewMode mode) {
  ((QListView*)this_)->setViewMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:109
// [4] QListView::ViewMode viewMode()
extern "C"
QListView::ViewMode C_ZNK9QListView8viewModeEv(void *this_) {
  return (QListView::ViewMode)((QListView*)this_)->viewMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:111
// [-2] void clearPropertyFlags()
extern "C"
void C_ZN9QListView18clearPropertyFlagsEv(void *this_) {
  ((QListView*)this_)->clearPropertyFlags();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:113
// [1] bool isRowHidden(int)
extern "C"
bool C_ZNK9QListView11isRowHiddenEi(void *this_, int row) {
  return (bool)((QListView*)this_)->isRowHidden(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:114
// [-2] void setRowHidden(int, _Bool)
extern "C"
void C_ZN9QListView12setRowHiddenEib(void *this_, int row, bool hide) {
  ((QListView*)this_)->setRowHidden(row, hide);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:116
// [-2] void setModelColumn(int)
extern "C"
void C_ZN9QListView14setModelColumnEi(void *this_, int column) {
  ((QListView*)this_)->setModelColumn(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:117
// [4] int modelColumn()
extern "C"
int C_ZNK9QListView11modelColumnEv(void *this_) {
  return (int)((QListView*)this_)->modelColumn();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:119
// [-2] void setUniformItemSizes(_Bool)
extern "C"
void C_ZN9QListView19setUniformItemSizesEb(void *this_, bool enable) {
  ((QListView*)this_)->setUniformItemSizes(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:120
// [1] bool uniformItemSizes()
extern "C"
bool C_ZNK9QListView16uniformItemSizesEv(void *this_) {
  return (bool)((QListView*)this_)->uniformItemSizes();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:122
// [-2] void setWordWrap(_Bool)
extern "C"
void C_ZN9QListView11setWordWrapEb(void *this_, bool on) {
  ((QListView*)this_)->setWordWrap(on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:123
// [1] bool wordWrap()
extern "C"
bool C_ZNK9QListView8wordWrapEv(void *this_) {
  return (bool)((QListView*)this_)->wordWrap();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:125
// [-2] void setSelectionRectVisible(_Bool)
extern "C"
void C_ZN9QListView23setSelectionRectVisibleEb(void *this_, bool show) {
  ((QListView*)this_)->setSelectionRectVisible(show);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:126
// [1] bool isSelectionRectVisible()
extern "C"
bool C_ZNK9QListView22isSelectionRectVisibleEv(void *this_) {
  return (bool)((QListView*)this_)->isSelectionRectVisible();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:128
// [16] QRect visualRect(const class QModelIndex &)
extern "C"
void* C_ZNK9QListView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QListView*)this_)->visualRect(*index);
return new QRect(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:129
// [-2] void scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void C_ZN9QListView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QListView*)this_)->scrollTo(*index, hint);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:130
// [24] QModelIndex indexAt(const class QPoint &)
extern "C"
void* C_ZNK9QListView7indexAtERK6QPoint(void *this_, QPoint* p) {
  auto rv = ((QListView*)this_)->indexAt(*p);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:132
// [-2] void doItemsLayout()
extern "C"
void C_ZN9QListView13doItemsLayoutEv(void *this_) {
  ((QListView*)this_)->doItemsLayout();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:133
// [-2] void reset()
extern "C"
void C_ZN9QListView5resetEv(void *this_) {
  ((QListView*)this_)->reset();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:134
// [-2] void setRootIndex(const class QModelIndex &)
extern "C"
void C_ZN9QListView12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QListView*)this_)->setRootIndex(*index);
}
//  main block end
