//  header block begin
// /usr/include/qt/QtWidgets/qabstractitemview.h
#include <qabstractitemview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractItemView is pure virtual: true
// QAbstractItemView has virtual projected: true
//  header block end

//  main block begin

class MyQAbstractItemView : public QAbstractItemView {
public:
  virtual ~MyQAbstractItemView() {}
// void QAbstractItemView(class QWidget *)
MyQAbstractItemView(QWidget * parent) : QAbstractItemView(parent) {}
// void rowsInserted(const class QModelIndex &, int, int)
  virtual void rowsInserted(const QModelIndex & parent, int start, int end) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::rowsInserted(parent, start, end);
  }
  }
// void rowsAboutToBeRemoved(const class QModelIndex &, int, int)
  virtual void rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowsAboutToBeRemoved", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
  }
  }
// void selectionChanged(const class QItemSelection &, const class QItemSelection &)
  virtual void selectionChanged(const QItemSelection & selected, const QItemSelection & deselected) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"selectionChanged", &handled, 2, (uint64_t)&selected, (uint64_t)&deselected, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::selectionChanged(selected, deselected);
  }
  }
// void currentChanged(const class QModelIndex &, const class QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & previous) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&previous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::currentChanged(current, previous);
  }
  }
// void updateEditorData()
  virtual void updateEditorData() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateEditorData", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::updateEditorData();
  }
  }
// void updateEditorGeometries()
  virtual void updateEditorGeometries() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateEditorGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::updateEditorGeometries();
  }
  }
// void updateGeometries()
  virtual void updateGeometries() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::updateGeometries();
  }
  }
// void verticalScrollbarAction(int)
  virtual void verticalScrollbarAction(int action) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"verticalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::verticalScrollbarAction(action);
  }
  }
// void horizontalScrollbarAction(int)
  virtual void horizontalScrollbarAction(int action) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"horizontalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::horizontalScrollbarAction(action);
  }
  }
// void verticalScrollbarValueChanged(int)
  virtual void verticalScrollbarValueChanged(int value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"verticalScrollbarValueChanged", &handled, 1, (uint64_t)value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::verticalScrollbarValueChanged(value);
  }
  }
// void horizontalScrollbarValueChanged(int)
  virtual void horizontalScrollbarValueChanged(int value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"horizontalScrollbarValueChanged", &handled, 1, (uint64_t)value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::horizontalScrollbarValueChanged(value);
  }
  }
// void closeEditor(class QWidget *, class QAbstractItemDelegate::EndEditHint)
  virtual void closeEditor(QWidget * editor, QAbstractItemDelegate::EndEditHint hint) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closeEditor", &handled, 2, (uint64_t)editor, (uint64_t)hint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::closeEditor(editor, hint);
  }
  }
// void commitData(class QWidget *)
  virtual void commitData(QWidget * editor) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"commitData", &handled, 1, (uint64_t)editor, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::commitData(editor);
  }
  }
// void editorDestroyed(class QObject *)
  virtual void editorDestroyed(QObject * editor) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"editorDestroyed", &handled, 1, (uint64_t)editor, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::editorDestroyed(editor);
  }
  }
// void setHorizontalStepsPerItem(int)
  virtual void setHorizontalStepsPerItem(int steps) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setHorizontalStepsPerItem", &handled, 1, (uint64_t)steps, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::setHorizontalStepsPerItem(steps);
  }
  }
// int horizontalStepsPerItem()
  virtual int horizontalStepsPerItem() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"horizontalStepsPerItem", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QAbstractItemView::horizontalStepsPerItem();
  }
  }
// void setVerticalStepsPerItem(int)
  virtual void setVerticalStepsPerItem(int steps) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setVerticalStepsPerItem", &handled, 1, (uint64_t)steps, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::setVerticalStepsPerItem(steps);
  }
  }
// int verticalStepsPerItem()
  virtual int verticalStepsPerItem() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"verticalStepsPerItem", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QAbstractItemView::verticalStepsPerItem();
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
    return QAbstractItemView::moveCursor(cursorAction, modifiers);
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
    return QAbstractItemView::horizontalOffset();
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
    return QAbstractItemView::verticalOffset();
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
    return QAbstractItemView::isIndexHidden(index);
  }
  }
// void setSelection(const class QRect &, class QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)command, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::setSelection(rect, command);
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
    return QAbstractItemView::visualRegionForSelection(selection);
  }
  }
// bool edit(const class QModelIndex &, enum QAbstractItemView::EditTrigger, class QEvent *)
  virtual bool edit(const QModelIndex & index, QAbstractItemView::EditTrigger trigger, QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"edit", &handled, 3, (uint64_t)&index, (uint64_t)trigger, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractItemView::edit(index, trigger, event);
  }
  }
// QItemSelectionModel::SelectionFlags selectionCommand(const class QModelIndex &, const class QEvent *)
  virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex & index, const QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"selectionCommand", &handled, 2, (uint64_t)&index, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QItemSelectionModel::SelectionFlags)(int)(irv);
      // ElaboratedRecordQFlags<QItemSelectionModel::SelectionFlag>
    } else {
    return QAbstractItemView::selectionCommand(index, event);
  }
  }
// void startDrag(Qt::DropActions)
  virtual void startDrag(QFlags<Qt::DropAction> supportedActions) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"startDrag", &handled, 1, (uint64_t)supportedActions, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::startDrag(supportedActions);
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
    return QAbstractItemView::viewOptions();
  }
  }
// QAbstractItemView::State state()
  virtual QAbstractItemView::State state() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractItemView::State)(int)(irv);
      // EnumEnumQAbstractItemView::State
    } else {
    return QAbstractItemView::state();
  }
  }
// void setState(enum QAbstractItemView::State)
  virtual void setState(QAbstractItemView::State state) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setState", &handled, 1, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::setState(state);
  }
  }
// void scheduleDelayedItemsLayout()
  virtual void scheduleDelayedItemsLayout() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"scheduleDelayedItemsLayout", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::scheduleDelayedItemsLayout();
  }
  }
// void executeDelayedItemsLayout()
  virtual void executeDelayedItemsLayout() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"executeDelayedItemsLayout", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::executeDelayedItemsLayout();
  }
  }
// void setDirtyRegion(const class QRegion &)
  virtual void setDirtyRegion(const QRegion & region) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setDirtyRegion", &handled, 1, (uint64_t)&region, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::setDirtyRegion(region);
  }
  }
// void scrollDirtyRegion(int, int)
  virtual void scrollDirtyRegion(int dx, int dy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"scrollDirtyRegion", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::scrollDirtyRegion(dx, dy);
  }
  }
// QPoint dirtyRegionOffset()
  virtual QPoint dirtyRegionOffset() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dirtyRegionOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QPoint*)(irv);
      // RecordRecordQPoint
    } else {
    return QAbstractItemView::dirtyRegionOffset();
  }
  }
// void startAutoScroll()
  virtual void startAutoScroll() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"startAutoScroll", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::startAutoScroll();
  }
  }
// void stopAutoScroll()
  virtual void stopAutoScroll() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"stopAutoScroll", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::stopAutoScroll();
  }
  }
// void doAutoScroll()
  virtual void doAutoScroll() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"doAutoScroll", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::doAutoScroll();
  }
  }
// bool focusNextPrevChild(_Bool)
  virtual bool focusNextPrevChild(bool next) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractItemView::focusNextPrevChild(next);
  }
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractItemView::event(event);
  }
  }
// bool viewportEvent(class QEvent *)
  virtual bool viewportEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"viewportEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractItemView::viewportEvent(event);
  }
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::mousePressEvent(event);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::mouseMoveEvent(event);
  }
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::mouseReleaseEvent(event);
  }
  }
// void mouseDoubleClickEvent(class QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::mouseDoubleClickEvent(event);
  }
  }
// void dragEnterEvent(class QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::dragEnterEvent(event);
  }
  }
// void dragMoveEvent(class QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::dragMoveEvent(event);
  }
  }
// void dragLeaveEvent(class QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::dragLeaveEvent(event);
  }
  }
// void dropEvent(class QDropEvent *)
  virtual void dropEvent(QDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::dropEvent(event);
  }
  }
// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::focusInEvent(event);
  }
  }
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::focusOutEvent(event);
  }
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::keyPressEvent(event);
  }
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::resizeEvent(event);
  }
  }
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::timerEvent(event);
  }
  }
// void inputMethodEvent(class QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemView::inputMethodEvent(event);
  }
  }
// QAbstractItemView::DropIndicatorPosition dropIndicatorPosition()
  virtual QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropIndicatorPosition", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractItemView::DropIndicatorPosition)(int)(irv);
      // EnumEnumQAbstractItemView::DropIndicatorPosition
    } else {
    return QAbstractItemView::dropIndicatorPosition();
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
    return QAbstractItemView::viewportSizeHint();
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:63
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK17QAbstractItemView10metaObjectEv(void *this_) {
  return (void*)((QAbstractItemView*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:127
// [-2] void QAbstractItemView(class QWidget *)
extern "C"
void* C_ZN17QAbstractItemViewC1EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractItemView*)(0);
  return 0; // new MyQAbstractItemView(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:128
// [-2] void ~QAbstractItemView()
extern "C"
void C_ZN17QAbstractItemViewD2Ev(void *this_) {
  delete (QAbstractItemView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:130
// [-2] void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN17QAbstractItemView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QAbstractItemView*)this_)->setModel(model);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:131
// [8] QAbstractItemModel * model()
extern "C"
void* C_ZNK17QAbstractItemView5modelEv(void *this_) {
  return (void*)((QAbstractItemView*)this_)->model();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:133
// [-2] void setSelectionModel(class QItemSelectionModel *)
extern "C"
void C_ZN17QAbstractItemView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QAbstractItemView*)this_)->setSelectionModel(selectionModel);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:134
// [8] QItemSelectionModel * selectionModel()
extern "C"
void* C_ZNK17QAbstractItemView14selectionModelEv(void *this_) {
  return (void*)((QAbstractItemView*)this_)->selectionModel();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:136
// [-2] void setItemDelegate(class QAbstractItemDelegate *)
extern "C"
void C_ZN17QAbstractItemView15setItemDelegateEP21QAbstractItemDelegate(void *this_, QAbstractItemDelegate * delegate) {
  ((QAbstractItemView*)this_)->setItemDelegate(delegate);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:137
// [8] QAbstractItemDelegate * itemDelegate()
extern "C"
void* C_ZNK17QAbstractItemView12itemDelegateEv(void *this_) {
  return (void*)((QAbstractItemView*)this_)->itemDelegate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:139
// [-2] void setSelectionMode(class QAbstractItemView::SelectionMode)
extern "C"
void C_ZN17QAbstractItemView16setSelectionModeENS_13SelectionModeE(void *this_, QAbstractItemView::SelectionMode mode) {
  ((QAbstractItemView*)this_)->setSelectionMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:140
// [4] QAbstractItemView::SelectionMode selectionMode()
extern "C"
QAbstractItemView::SelectionMode C_ZNK17QAbstractItemView13selectionModeEv(void *this_) {
  return (QAbstractItemView::SelectionMode)((QAbstractItemView*)this_)->selectionMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:142
// [-2] void setSelectionBehavior(class QAbstractItemView::SelectionBehavior)
extern "C"
void C_ZN17QAbstractItemView20setSelectionBehaviorENS_17SelectionBehaviorE(void *this_, QAbstractItemView::SelectionBehavior behavior) {
  ((QAbstractItemView*)this_)->setSelectionBehavior(behavior);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:143
// [4] QAbstractItemView::SelectionBehavior selectionBehavior()
extern "C"
QAbstractItemView::SelectionBehavior C_ZNK17QAbstractItemView17selectionBehaviorEv(void *this_) {
  return (QAbstractItemView::SelectionBehavior)((QAbstractItemView*)this_)->selectionBehavior();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:145
// [24] QModelIndex currentIndex()
extern "C"
void* C_ZNK17QAbstractItemView12currentIndexEv(void *this_) {
  auto rv = ((QAbstractItemView*)this_)->currentIndex();
return new QModelIndex(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:146
// [24] QModelIndex rootIndex()
extern "C"
void* C_ZNK17QAbstractItemView9rootIndexEv(void *this_) {
  auto rv = ((QAbstractItemView*)this_)->rootIndex();
return new QModelIndex(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:148
// [-2] void setEditTriggers(QAbstractItemView::EditTriggers)
extern "C"
void C_ZN17QAbstractItemView15setEditTriggersE6QFlagsINS_11EditTriggerEE(void *this_, QFlags<QAbstractItemView::EditTrigger> triggers) {
  ((QAbstractItemView*)this_)->setEditTriggers(triggers);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:149
// [4] QAbstractItemView::EditTriggers editTriggers()
extern "C"
void C_ZNK17QAbstractItemView12editTriggersEv(void *this_) {
  auto rv = ((QAbstractItemView*)this_)->editTriggers();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:151
// [-2] void setVerticalScrollMode(enum QAbstractItemView::ScrollMode)
extern "C"
void C_ZN17QAbstractItemView21setVerticalScrollModeENS_10ScrollModeE(void *this_, QAbstractItemView::ScrollMode mode) {
  ((QAbstractItemView*)this_)->setVerticalScrollMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:152
// [4] QAbstractItemView::ScrollMode verticalScrollMode()
extern "C"
QAbstractItemView::ScrollMode C_ZNK17QAbstractItemView18verticalScrollModeEv(void *this_) {
  return (QAbstractItemView::ScrollMode)((QAbstractItemView*)this_)->verticalScrollMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:153
// [-2] void resetVerticalScrollMode()
extern "C"
void C_ZN17QAbstractItemView23resetVerticalScrollModeEv(void *this_) {
  ((QAbstractItemView*)this_)->resetVerticalScrollMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:155
// [-2] void setHorizontalScrollMode(enum QAbstractItemView::ScrollMode)
extern "C"
void C_ZN17QAbstractItemView23setHorizontalScrollModeENS_10ScrollModeE(void *this_, QAbstractItemView::ScrollMode mode) {
  ((QAbstractItemView*)this_)->setHorizontalScrollMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:156
// [4] QAbstractItemView::ScrollMode horizontalScrollMode()
extern "C"
QAbstractItemView::ScrollMode C_ZNK17QAbstractItemView20horizontalScrollModeEv(void *this_) {
  return (QAbstractItemView::ScrollMode)((QAbstractItemView*)this_)->horizontalScrollMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:157
// [-2] void resetHorizontalScrollMode()
extern "C"
void C_ZN17QAbstractItemView25resetHorizontalScrollModeEv(void *this_) {
  ((QAbstractItemView*)this_)->resetHorizontalScrollMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:159
// [-2] void setAutoScroll(_Bool)
extern "C"
void C_ZN17QAbstractItemView13setAutoScrollEb(void *this_, bool enable) {
  ((QAbstractItemView*)this_)->setAutoScroll(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:160
// [1] bool hasAutoScroll()
extern "C"
bool C_ZNK17QAbstractItemView13hasAutoScrollEv(void *this_) {
  return (bool)((QAbstractItemView*)this_)->hasAutoScroll();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:162
// [-2] void setAutoScrollMargin(int)
extern "C"
void C_ZN17QAbstractItemView19setAutoScrollMarginEi(void *this_, int margin) {
  ((QAbstractItemView*)this_)->setAutoScrollMargin(margin);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:163
// [4] int autoScrollMargin()
extern "C"
int C_ZNK17QAbstractItemView16autoScrollMarginEv(void *this_) {
  return (int)((QAbstractItemView*)this_)->autoScrollMargin();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:165
// [-2] void setTabKeyNavigation(_Bool)
extern "C"
void C_ZN17QAbstractItemView19setTabKeyNavigationEb(void *this_, bool enable) {
  ((QAbstractItemView*)this_)->setTabKeyNavigation(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:166
// [1] bool tabKeyNavigation()
extern "C"
bool C_ZNK17QAbstractItemView16tabKeyNavigationEv(void *this_) {
  return (bool)((QAbstractItemView*)this_)->tabKeyNavigation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:169
// [-2] void setDropIndicatorShown(_Bool)
extern "C"
void C_ZN17QAbstractItemView21setDropIndicatorShownEb(void *this_, bool enable) {
  ((QAbstractItemView*)this_)->setDropIndicatorShown(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:170
// [1] bool showDropIndicator()
extern "C"
bool C_ZNK17QAbstractItemView17showDropIndicatorEv(void *this_) {
  return (bool)((QAbstractItemView*)this_)->showDropIndicator();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:172
// [-2] void setDragEnabled(_Bool)
extern "C"
void C_ZN17QAbstractItemView14setDragEnabledEb(void *this_, bool enable) {
  ((QAbstractItemView*)this_)->setDragEnabled(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:173
// [1] bool dragEnabled()
extern "C"
bool C_ZNK17QAbstractItemView11dragEnabledEv(void *this_) {
  return (bool)((QAbstractItemView*)this_)->dragEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:175
// [-2] void setDragDropOverwriteMode(_Bool)
extern "C"
void C_ZN17QAbstractItemView24setDragDropOverwriteModeEb(void *this_, bool overwrite) {
  ((QAbstractItemView*)this_)->setDragDropOverwriteMode(overwrite);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:176
// [1] bool dragDropOverwriteMode()
extern "C"
bool C_ZNK17QAbstractItemView21dragDropOverwriteModeEv(void *this_) {
  return (bool)((QAbstractItemView*)this_)->dragDropOverwriteMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:187
// [-2] void setDragDropMode(enum QAbstractItemView::DragDropMode)
extern "C"
void C_ZN17QAbstractItemView15setDragDropModeENS_12DragDropModeE(void *this_, QAbstractItemView::DragDropMode behavior) {
  ((QAbstractItemView*)this_)->setDragDropMode(behavior);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:188
// [4] QAbstractItemView::DragDropMode dragDropMode()
extern "C"
QAbstractItemView::DragDropMode C_ZNK17QAbstractItemView12dragDropModeEv(void *this_) {
  return (QAbstractItemView::DragDropMode)((QAbstractItemView*)this_)->dragDropMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:190
// [-2] void setDefaultDropAction(Qt::DropAction)
extern "C"
void C_ZN17QAbstractItemView20setDefaultDropActionEN2Qt10DropActionE(void *this_, Qt::DropAction dropAction) {
  ((QAbstractItemView*)this_)->setDefaultDropAction(dropAction);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:191
// [4] Qt::DropAction defaultDropAction()
extern "C"
Qt::DropAction C_ZNK17QAbstractItemView17defaultDropActionEv(void *this_) {
  return (Qt::DropAction)((QAbstractItemView*)this_)->defaultDropAction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:194
// [-2] void setAlternatingRowColors(_Bool)
extern "C"
void C_ZN17QAbstractItemView23setAlternatingRowColorsEb(void *this_, bool enable) {
  ((QAbstractItemView*)this_)->setAlternatingRowColors(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:195
// [1] bool alternatingRowColors()
extern "C"
bool C_ZNK17QAbstractItemView20alternatingRowColorsEv(void *this_) {
  return (bool)((QAbstractItemView*)this_)->alternatingRowColors();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:197
// [-2] void setIconSize(const class QSize &)
extern "C"
void C_ZN17QAbstractItemView11setIconSizeERK5QSize(void *this_, QSize* size) {
  ((QAbstractItemView*)this_)->setIconSize(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:198
// [8] QSize iconSize()
extern "C"
void* C_ZNK17QAbstractItemView8iconSizeEv(void *this_) {
  auto rv = ((QAbstractItemView*)this_)->iconSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:200
// [-2] void setTextElideMode(Qt::TextElideMode)
extern "C"
void C_ZN17QAbstractItemView16setTextElideModeEN2Qt13TextElideModeE(void *this_, Qt::TextElideMode mode) {
  ((QAbstractItemView*)this_)->setTextElideMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:201
// [4] Qt::TextElideMode textElideMode()
extern "C"
Qt::TextElideMode C_ZNK17QAbstractItemView13textElideModeEv(void *this_) {
  return (Qt::TextElideMode)((QAbstractItemView*)this_)->textElideMode();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:203
// [-2] void keyboardSearch(const class QString &)
extern "C"
void C_ZN17QAbstractItemView14keyboardSearchERK7QString(void *this_, QString* search) {
  ((QAbstractItemView*)this_)->keyboardSearch(*search);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:205
// [16] QRect visualRect(const class QModelIndex &)
extern "C"
void* C_ZNK17QAbstractItemView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractItemView*)this_)->visualRect(*index);
return new QRect(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:206
// [-2] void scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void C_ZN17QAbstractItemView8scrollToERK11QModelIndexNS_10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QAbstractItemView*)this_)->scrollTo(*index, hint);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:207
// [24] QModelIndex indexAt(const class QPoint &)
extern "C"
void* C_ZNK17QAbstractItemView7indexAtERK6QPoint(void *this_, QPoint* point) {
  auto rv = ((QAbstractItemView*)this_)->indexAt(*point);
return new QModelIndex(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:209
// [8] QSize sizeHintForIndex(const class QModelIndex &)
extern "C"
void* C_ZNK17QAbstractItemView16sizeHintForIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractItemView*)this_)->sizeHintForIndex(*index);
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:210
// [4] int sizeHintForRow(int)
extern "C"
int C_ZNK17QAbstractItemView14sizeHintForRowEi(void *this_, int row) {
  return (int)((QAbstractItemView*)this_)->sizeHintForRow(row);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:211
// [4] int sizeHintForColumn(int)
extern "C"
int C_ZNK17QAbstractItemView17sizeHintForColumnEi(void *this_, int column) {
  return (int)((QAbstractItemView*)this_)->sizeHintForColumn(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:213
// [-2] void openPersistentEditor(const class QModelIndex &)
extern "C"
void C_ZN17QAbstractItemView20openPersistentEditorERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->openPersistentEditor(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:214
// [-2] void closePersistentEditor(const class QModelIndex &)
extern "C"
void C_ZN17QAbstractItemView21closePersistentEditorERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->closePersistentEditor(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:215
// [1] bool isPersistentEditorOpen(const class QModelIndex &)
extern "C"
bool C_ZNK17QAbstractItemView22isPersistentEditorOpenERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QAbstractItemView*)this_)->isPersistentEditorOpen(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:217
// [-2] void setIndexWidget(const class QModelIndex &, class QWidget *)
extern "C"
void C_ZN17QAbstractItemView14setIndexWidgetERK11QModelIndexP7QWidget(void *this_, QModelIndex* index, QWidget * widget) {
  ((QAbstractItemView*)this_)->setIndexWidget(*index, widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:218
// [8] QWidget * indexWidget(const class QModelIndex &)
extern "C"
void* C_ZNK17QAbstractItemView11indexWidgetERK11QModelIndex(void *this_, QModelIndex* index) {
  return (void*)((QAbstractItemView*)this_)->indexWidget(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:220
// [-2] void setItemDelegateForRow(int, class QAbstractItemDelegate *)
extern "C"
void C_ZN17QAbstractItemView21setItemDelegateForRowEiP21QAbstractItemDelegate(void *this_, int row, QAbstractItemDelegate * delegate) {
  ((QAbstractItemView*)this_)->setItemDelegateForRow(row, delegate);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:221
// [8] QAbstractItemDelegate * itemDelegateForRow(int)
extern "C"
void* C_ZNK17QAbstractItemView18itemDelegateForRowEi(void *this_, int row) {
  return (void*)((QAbstractItemView*)this_)->itemDelegateForRow(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:223
// [-2] void setItemDelegateForColumn(int, class QAbstractItemDelegate *)
extern "C"
void C_ZN17QAbstractItemView24setItemDelegateForColumnEiP21QAbstractItemDelegate(void *this_, int column, QAbstractItemDelegate * delegate) {
  ((QAbstractItemView*)this_)->setItemDelegateForColumn(column, delegate);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:224
// [8] QAbstractItemDelegate * itemDelegateForColumn(int)
extern "C"
void* C_ZNK17QAbstractItemView21itemDelegateForColumnEi(void *this_, int column) {
  return (void*)((QAbstractItemView*)this_)->itemDelegateForColumn(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:226
// [8] QAbstractItemDelegate * itemDelegate(const class QModelIndex &)
extern "C"
void* C_ZNK17QAbstractItemView12itemDelegateERK11QModelIndex(void *this_, QModelIndex* index) {
  return (void*)((QAbstractItemView*)this_)->itemDelegate(*index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:228
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C"
void* C_ZNK17QAbstractItemView16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery query) {
  auto rv = ((QAbstractItemView*)this_)->inputMethodQuery(query);
return new QVariant(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:233
// [-2] void reset()
extern "C"
void C_ZN17QAbstractItemView5resetEv(void *this_) {
  ((QAbstractItemView*)this_)->reset();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:234
// [-2] void setRootIndex(const class QModelIndex &)
extern "C"
void C_ZN17QAbstractItemView12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->setRootIndex(*index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:235
// [-2] void doItemsLayout()
extern "C"
void C_ZN17QAbstractItemView13doItemsLayoutEv(void *this_) {
  ((QAbstractItemView*)this_)->doItemsLayout();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:236
// [-2] void selectAll()
extern "C"
void C_ZN17QAbstractItemView9selectAllEv(void *this_) {
  ((QAbstractItemView*)this_)->selectAll();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:237
// [-2] void edit(const class QModelIndex &)
extern "C"
void C_ZN17QAbstractItemView4editERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->edit(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:238
// [-2] void clearSelection()
extern "C"
void C_ZN17QAbstractItemView14clearSelectionEv(void *this_) {
  ((QAbstractItemView*)this_)->clearSelection();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:239
// [-2] void setCurrentIndex(const class QModelIndex &)
extern "C"
void C_ZN17QAbstractItemView15setCurrentIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->setCurrentIndex(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:240
// [-2] void scrollToTop()
extern "C"
void C_ZN17QAbstractItemView11scrollToTopEv(void *this_) {
  ((QAbstractItemView*)this_)->scrollToTop();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:241
// [-2] void scrollToBottom()
extern "C"
void C_ZN17QAbstractItemView14scrollToBottomEv(void *this_) {
  ((QAbstractItemView*)this_)->scrollToBottom();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:242
// [-2] void update(const class QModelIndex &)
extern "C"
void C_ZN17QAbstractItemView6updateERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->update(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:262
// [-2] void pressed(const class QModelIndex &)
extern "C"
void C_ZN17QAbstractItemView7pressedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->pressed(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:263
// [-2] void clicked(const class QModelIndex &)
extern "C"
void C_ZN17QAbstractItemView7clickedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->clicked(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:264
// [-2] void doubleClicked(const class QModelIndex &)
extern "C"
void C_ZN17QAbstractItemView13doubleClickedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->doubleClicked(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:266
// [-2] void activated(const class QModelIndex &)
extern "C"
void C_ZN17QAbstractItemView9activatedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->activated(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:267
// [-2] void entered(const class QModelIndex &)
extern "C"
void C_ZN17QAbstractItemView7enteredERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->entered(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:268
// [-2] void viewportEntered()
extern "C"
void C_ZN17QAbstractItemView15viewportEnteredEv(void *this_) {
  ((QAbstractItemView*)this_)->viewportEntered();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:270
// [-2] void iconSizeChanged(const class QSize &)
extern "C"
void C_ZN17QAbstractItemView15iconSizeChangedERK5QSize(void *this_, QSize* size) {
  ((QAbstractItemView*)this_)->iconSizeChanged(*size);
}
//  main block end
