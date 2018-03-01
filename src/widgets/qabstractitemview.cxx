//  header block begin
// /usr/include/qt/QtWidgets/qabstractitemview.h
#ifndef protected
#define protected public
#endif
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
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// QModelIndexList selectedIndexes()
  virtual QModelIndexList selectedIndexes() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"selectedIndexes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndexList*)(irv);
      // TypedefRecordQList<QModelIndex>
    } else {
    return QAbstractItemView::selectedIndexes();
  }
  }

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:246
// [-2] void rowsInserted(const class QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView12rowsInsertedERK11QModelIndexii(void *this_, QModelIndex* parent, int start, int end) {
  ((QAbstractItemView*)this_)->QAbstractItemView::rowsInserted(*parent, start, end);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:247
// [-2] void rowsAboutToBeRemoved(const class QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView20rowsAboutToBeRemovedERK11QModelIndexii(void *this_, QModelIndex* parent, int start, int end) {
  ((QAbstractItemView*)this_)->QAbstractItemView::rowsAboutToBeRemoved(*parent, start, end);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:248
// [-2] void selectionChanged(const class QItemSelection &, const class QItemSelection &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView16selectionChangedERK14QItemSelectionS2_(void *this_, QItemSelection* selected, QItemSelection* deselected) {
  ((QAbstractItemView*)this_)->QAbstractItemView::selectionChanged(*selected, *deselected);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:249
// [-2] void currentChanged(const class QModelIndex &, const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14currentChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QAbstractItemView*)this_)->QAbstractItemView::currentChanged(*current, *previous);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:250
// [-2] void updateEditorData()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView16updateEditorDataEv(void *this_) {
  ((QAbstractItemView*)this_)->QAbstractItemView::updateEditorData();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:251
// [-2] void updateEditorGeometries()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView22updateEditorGeometriesEv(void *this_) {
  ((QAbstractItemView*)this_)->QAbstractItemView::updateEditorGeometries();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:252
// [-2] void updateGeometries()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView16updateGeometriesEv(void *this_) {
  ((QAbstractItemView*)this_)->QAbstractItemView::updateGeometries();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:253
// [-2] void verticalScrollbarAction(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView23verticalScrollbarActionEi(void *this_, int action) {
  ((QAbstractItemView*)this_)->QAbstractItemView::verticalScrollbarAction(action);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:254
// [-2] void horizontalScrollbarAction(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView25horizontalScrollbarActionEi(void *this_, int action) {
  ((QAbstractItemView*)this_)->QAbstractItemView::horizontalScrollbarAction(action);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:255
// [-2] void verticalScrollbarValueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView29verticalScrollbarValueChangedEi(void *this_, int value) {
  ((QAbstractItemView*)this_)->QAbstractItemView::verticalScrollbarValueChanged(value);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:256
// [-2] void horizontalScrollbarValueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView31horizontalScrollbarValueChangedEi(void *this_, int value) {
  ((QAbstractItemView*)this_)->QAbstractItemView::horizontalScrollbarValueChanged(value);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:257
// [-2] void closeEditor(class QWidget *, class QAbstractItemDelegate::EndEditHint)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView11closeEditorEP7QWidgetN21QAbstractItemDelegate11EndEditHintE(void *this_, QWidget * editor, QAbstractItemDelegate::EndEditHint hint) {
  ((QAbstractItemView*)this_)->QAbstractItemView::closeEditor(editor, hint);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:258
// [-2] void commitData(class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView10commitDataEP7QWidget(void *this_, QWidget * editor) {
  ((QAbstractItemView*)this_)->QAbstractItemView::commitData(editor);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:259
// [-2] void editorDestroyed(class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15editorDestroyedEP7QObject(void *this_, QObject * editor) {
  ((QAbstractItemView*)this_)->QAbstractItemView::editorDestroyed(editor);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:275
// [-2] void setHorizontalStepsPerItem(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView25setHorizontalStepsPerItemEi(void *this_, int steps) {
  ((QAbstractItemView*)this_)->QAbstractItemView::setHorizontalStepsPerItem(steps);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:276
// [4] int horizontalStepsPerItem()
extern "C" Q_DECL_EXPORT
int C_ZNK17QAbstractItemView22horizontalStepsPerItemEv(void *this_) {
  return (int)((QAbstractItemView*)this_)->QAbstractItemView::horizontalStepsPerItem();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:277
// [-2] void setVerticalStepsPerItem(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView23setVerticalStepsPerItemEi(void *this_, int steps) {
  ((QAbstractItemView*)this_)->QAbstractItemView::setVerticalStepsPerItem(steps);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:278
// [4] int verticalStepsPerItem()
extern "C" Q_DECL_EXPORT
int C_ZNK17QAbstractItemView20verticalStepsPerItemEv(void *this_) {
  return (int)((QAbstractItemView*)this_)->QAbstractItemView::verticalStepsPerItem();
}

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:283
// [24] QModelIndex moveCursor(enum QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:286
// [4] int horizontalOffset()
extern "C" Q_DECL_EXPORT
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:287
// [4] int verticalOffset()
extern "C" Q_DECL_EXPORT
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:289
// [1] bool isIndexHidden(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:291
// [-2] void setSelection(const class QRect &, class QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:292
// [8] QRegion visualRegionForSelection(const class QItemSelection &)
extern "C" Q_DECL_EXPORT
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:293
// [8] QModelIndexList selectedIndexes()
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK17QAbstractItemView15selectedIndexesEv(void *this_) {
  auto rv = ((QAbstractItemView*)this_)->QAbstractItemView::selectedIndexes();
return new QModelIndexList(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:295
// [1] bool edit(const class QModelIndex &, enum QAbstractItemView::EditTrigger, class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QAbstractItemView4editERK11QModelIndexNS_11EditTriggerEP6QEvent(void *this_, QModelIndex* index, QAbstractItemView::EditTrigger trigger, QEvent * event) {
  return (bool)((QAbstractItemView*)this_)->QAbstractItemView::edit(*index, trigger, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:297
// [4] QItemSelectionModel::SelectionFlags selectionCommand(const class QModelIndex &, const class QEvent *)
extern "C" Q_DECL_EXPORT
QItemSelectionModel::SelectionFlags C_ZNK17QAbstractItemView16selectionCommandERK11QModelIndexPK6QEvent(void *this_, QModelIndex* index, const QEvent * event) {
  return (QItemSelectionModel::SelectionFlags)((QAbstractItemView*)this_)->QAbstractItemView::selectionCommand(*index, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:301
// [-2] void startDrag(Qt::DropActions)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView9startDragE6QFlagsIN2Qt10DropActionEE(void *this_, QFlags<Qt::DropAction> supportedActions) {
  ((QAbstractItemView*)this_)->QAbstractItemView::startDrag(supportedActions);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:304
// [192] QStyleOptionViewItem viewOptions()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView11viewOptionsEv(void *this_) {
  auto rv = ((QAbstractItemView*)this_)->QAbstractItemView::viewOptions();
return new QStyleOptionViewItem(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:316
// [4] QAbstractItemView::State state()
extern "C" Q_DECL_EXPORT
QAbstractItemView::State C_ZNK17QAbstractItemView5stateEv(void *this_) {
  return (QAbstractItemView::State)((QAbstractItemView*)this_)->QAbstractItemView::state();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:317
// [-2] void setState(enum QAbstractItemView::State)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView8setStateENS_5StateE(void *this_, QAbstractItemView::State state) {
  ((QAbstractItemView*)this_)->QAbstractItemView::setState(state);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:319
// [-2] void scheduleDelayedItemsLayout()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView26scheduleDelayedItemsLayoutEv(void *this_) {
  ((QAbstractItemView*)this_)->QAbstractItemView::scheduleDelayedItemsLayout();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:320
// [-2] void executeDelayedItemsLayout()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView25executeDelayedItemsLayoutEv(void *this_) {
  ((QAbstractItemView*)this_)->QAbstractItemView::executeDelayedItemsLayout();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:322
// [-2] void setDirtyRegion(const class QRegion &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14setDirtyRegionERK7QRegion(void *this_, QRegion* region) {
  ((QAbstractItemView*)this_)->QAbstractItemView::setDirtyRegion(*region);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:323
// [-2] void scrollDirtyRegion(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView17scrollDirtyRegionEii(void *this_, int dx, int dy) {
  ((QAbstractItemView*)this_)->QAbstractItemView::scrollDirtyRegion(dx, dy);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:324
// [8] QPoint dirtyRegionOffset()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView17dirtyRegionOffsetEv(void *this_) {
  auto rv = ((QAbstractItemView*)this_)->QAbstractItemView::dirtyRegionOffset();
return new QPoint(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:326
// [-2] void startAutoScroll()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15startAutoScrollEv(void *this_) {
  ((QAbstractItemView*)this_)->QAbstractItemView::startAutoScroll();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:327
// [-2] void stopAutoScroll()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14stopAutoScrollEv(void *this_) {
  ((QAbstractItemView*)this_)->QAbstractItemView::stopAutoScroll();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:328
// [-2] void doAutoScroll()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView12doAutoScrollEv(void *this_) {
  ((QAbstractItemView*)this_)->QAbstractItemView::doAutoScroll();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:330
// [1] bool focusNextPrevChild(_Bool)
extern "C" Q_DECL_EXPORT
bool C_ZN17QAbstractItemView18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QAbstractItemView*)this_)->QAbstractItemView::focusNextPrevChild(next);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:331
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QAbstractItemView5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QAbstractItemView*)this_)->QAbstractItemView::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:332
// [1] bool viewportEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QAbstractItemView13viewportEventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QAbstractItemView*)this_)->QAbstractItemView::viewportEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:333
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:334
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:335
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::mouseReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:336
// [-2] void mouseDoubleClickEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::mouseDoubleClickEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:338
// [-2] void dragEnterEvent(class QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::dragEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:339
// [-2] void dragMoveEvent(class QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::dragMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:340
// [-2] void dragLeaveEvent(class QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::dragLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:341
// [-2] void dropEvent(class QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView9dropEventEP10QDropEvent(void *this_, QDropEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::dropEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:343
// [-2] void focusInEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:344
// [-2] void focusOutEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::focusOutEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:345
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:346
// [-2] void resizeEvent(class QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:347
// [-2] void timerEvent(class QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView10timerEventEP11QTimerEvent(void *this_, QTimerEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::timerEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:348
// [-2] void inputMethodEvent(class QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::inputMethodEvent(event);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:352
// [4] QAbstractItemView::DropIndicatorPosition dropIndicatorPosition()
extern "C" Q_DECL_EXPORT
QAbstractItemView::DropIndicatorPosition C_ZNK17QAbstractItemView21dropIndicatorPositionEv(void *this_) {
  return (QAbstractItemView::DropIndicatorPosition)((QAbstractItemView*)this_)->QAbstractItemView::dropIndicatorPosition();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:355
// [8] QSize viewportSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView16viewportSizeHintEv(void *this_) {
  auto rv = ((QAbstractItemView*)this_)->QAbstractItemView::viewportSizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:63
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView10metaObjectEv(void *this_) {
  return (void*)((QAbstractItemView*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:127
// [-2] void QAbstractItemView(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAbstractItemViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractItemView*)(0);
  return 0; // new MyQAbstractItemView(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:128
// [-2] void ~QAbstractItemView()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemViewD2Ev(void *this_) {
  delete (QAbstractItemView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:130
// [-2] void setModel(class QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QAbstractItemView*)this_)->setModel(model);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:131
// [8] QAbstractItemModel * model()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView5modelEv(void *this_) {
  return (void*)((QAbstractItemView*)this_)->model();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:133
// [-2] void setSelectionModel(class QItemSelectionModel *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QAbstractItemView*)this_)->setSelectionModel(selectionModel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:134
// [8] QItemSelectionModel * selectionModel()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView14selectionModelEv(void *this_) {
  return (void*)((QAbstractItemView*)this_)->selectionModel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:136
// [-2] void setItemDelegate(class QAbstractItemDelegate *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15setItemDelegateEP21QAbstractItemDelegate(void *this_, QAbstractItemDelegate * delegate) {
  ((QAbstractItemView*)this_)->setItemDelegate(delegate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:137
// [8] QAbstractItemDelegate * itemDelegate()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView12itemDelegateEv(void *this_) {
  return (void*)((QAbstractItemView*)this_)->itemDelegate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:139
// [-2] void setSelectionMode(class QAbstractItemView::SelectionMode)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView16setSelectionModeENS_13SelectionModeE(void *this_, QAbstractItemView::SelectionMode mode) {
  ((QAbstractItemView*)this_)->setSelectionMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:140
// [4] QAbstractItemView::SelectionMode selectionMode()
extern "C" Q_DECL_EXPORT
QAbstractItemView::SelectionMode C_ZNK17QAbstractItemView13selectionModeEv(void *this_) {
  return (QAbstractItemView::SelectionMode)((QAbstractItemView*)this_)->selectionMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:142
// [-2] void setSelectionBehavior(class QAbstractItemView::SelectionBehavior)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView20setSelectionBehaviorENS_17SelectionBehaviorE(void *this_, QAbstractItemView::SelectionBehavior behavior) {
  ((QAbstractItemView*)this_)->setSelectionBehavior(behavior);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:143
// [4] QAbstractItemView::SelectionBehavior selectionBehavior()
extern "C" Q_DECL_EXPORT
QAbstractItemView::SelectionBehavior C_ZNK17QAbstractItemView17selectionBehaviorEv(void *this_) {
  return (QAbstractItemView::SelectionBehavior)((QAbstractItemView*)this_)->selectionBehavior();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:145
// [24] QModelIndex currentIndex()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView12currentIndexEv(void *this_) {
  auto rv = ((QAbstractItemView*)this_)->currentIndex();
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:146
// [24] QModelIndex rootIndex()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView9rootIndexEv(void *this_) {
  auto rv = ((QAbstractItemView*)this_)->rootIndex();
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:148
// [-2] void setEditTriggers(QAbstractItemView::EditTriggers)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15setEditTriggersE6QFlagsINS_11EditTriggerEE(void *this_, QFlags<QAbstractItemView::EditTrigger> triggers) {
  ((QAbstractItemView*)this_)->setEditTriggers(triggers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:149
// [4] QAbstractItemView::EditTriggers editTriggers()
extern "C" Q_DECL_EXPORT
QAbstractItemView::EditTriggers* C_ZNK17QAbstractItemView12editTriggersEv(void *this_) {
  auto rv = ((QAbstractItemView*)this_)->editTriggers();
return new QAbstractItemView::EditTriggers(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:151
// [-2] void setVerticalScrollMode(enum QAbstractItemView::ScrollMode)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView21setVerticalScrollModeENS_10ScrollModeE(void *this_, QAbstractItemView::ScrollMode mode) {
  ((QAbstractItemView*)this_)->setVerticalScrollMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:152
// [4] QAbstractItemView::ScrollMode verticalScrollMode()
extern "C" Q_DECL_EXPORT
QAbstractItemView::ScrollMode C_ZNK17QAbstractItemView18verticalScrollModeEv(void *this_) {
  return (QAbstractItemView::ScrollMode)((QAbstractItemView*)this_)->verticalScrollMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:153
// [-2] void resetVerticalScrollMode()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView23resetVerticalScrollModeEv(void *this_) {
  ((QAbstractItemView*)this_)->resetVerticalScrollMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:155
// [-2] void setHorizontalScrollMode(enum QAbstractItemView::ScrollMode)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView23setHorizontalScrollModeENS_10ScrollModeE(void *this_, QAbstractItemView::ScrollMode mode) {
  ((QAbstractItemView*)this_)->setHorizontalScrollMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:156
// [4] QAbstractItemView::ScrollMode horizontalScrollMode()
extern "C" Q_DECL_EXPORT
QAbstractItemView::ScrollMode C_ZNK17QAbstractItemView20horizontalScrollModeEv(void *this_) {
  return (QAbstractItemView::ScrollMode)((QAbstractItemView*)this_)->horizontalScrollMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:157
// [-2] void resetHorizontalScrollMode()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView25resetHorizontalScrollModeEv(void *this_) {
  ((QAbstractItemView*)this_)->resetHorizontalScrollMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:159
// [-2] void setAutoScroll(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView13setAutoScrollEb(void *this_, bool enable) {
  ((QAbstractItemView*)this_)->setAutoScroll(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:160
// [1] bool hasAutoScroll()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QAbstractItemView13hasAutoScrollEv(void *this_) {
  return (bool)((QAbstractItemView*)this_)->hasAutoScroll();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:162
// [-2] void setAutoScrollMargin(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView19setAutoScrollMarginEi(void *this_, int margin) {
  ((QAbstractItemView*)this_)->setAutoScrollMargin(margin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:163
// [4] int autoScrollMargin()
extern "C" Q_DECL_EXPORT
int C_ZNK17QAbstractItemView16autoScrollMarginEv(void *this_) {
  return (int)((QAbstractItemView*)this_)->autoScrollMargin();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:165
// [-2] void setTabKeyNavigation(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView19setTabKeyNavigationEb(void *this_, bool enable) {
  ((QAbstractItemView*)this_)->setTabKeyNavigation(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:166
// [1] bool tabKeyNavigation()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QAbstractItemView16tabKeyNavigationEv(void *this_) {
  return (bool)((QAbstractItemView*)this_)->tabKeyNavigation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:169
// [-2] void setDropIndicatorShown(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView21setDropIndicatorShownEb(void *this_, bool enable) {
  ((QAbstractItemView*)this_)->setDropIndicatorShown(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:170
// [1] bool showDropIndicator()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QAbstractItemView17showDropIndicatorEv(void *this_) {
  return (bool)((QAbstractItemView*)this_)->showDropIndicator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:172
// [-2] void setDragEnabled(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14setDragEnabledEb(void *this_, bool enable) {
  ((QAbstractItemView*)this_)->setDragEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:173
// [1] bool dragEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QAbstractItemView11dragEnabledEv(void *this_) {
  return (bool)((QAbstractItemView*)this_)->dragEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:175
// [-2] void setDragDropOverwriteMode(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView24setDragDropOverwriteModeEb(void *this_, bool overwrite) {
  ((QAbstractItemView*)this_)->setDragDropOverwriteMode(overwrite);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:176
// [1] bool dragDropOverwriteMode()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QAbstractItemView21dragDropOverwriteModeEv(void *this_) {
  return (bool)((QAbstractItemView*)this_)->dragDropOverwriteMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:187
// [-2] void setDragDropMode(enum QAbstractItemView::DragDropMode)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15setDragDropModeENS_12DragDropModeE(void *this_, QAbstractItemView::DragDropMode behavior) {
  ((QAbstractItemView*)this_)->setDragDropMode(behavior);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:188
// [4] QAbstractItemView::DragDropMode dragDropMode()
extern "C" Q_DECL_EXPORT
QAbstractItemView::DragDropMode C_ZNK17QAbstractItemView12dragDropModeEv(void *this_) {
  return (QAbstractItemView::DragDropMode)((QAbstractItemView*)this_)->dragDropMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:190
// [-2] void setDefaultDropAction(Qt::DropAction)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView20setDefaultDropActionEN2Qt10DropActionE(void *this_, Qt::DropAction dropAction) {
  ((QAbstractItemView*)this_)->setDefaultDropAction(dropAction);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:191
// [4] Qt::DropAction defaultDropAction()
extern "C" Q_DECL_EXPORT
Qt::DropAction C_ZNK17QAbstractItemView17defaultDropActionEv(void *this_) {
  return (Qt::DropAction)((QAbstractItemView*)this_)->defaultDropAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:194
// [-2] void setAlternatingRowColors(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView23setAlternatingRowColorsEb(void *this_, bool enable) {
  ((QAbstractItemView*)this_)->setAlternatingRowColors(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:195
// [1] bool alternatingRowColors()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QAbstractItemView20alternatingRowColorsEv(void *this_) {
  return (bool)((QAbstractItemView*)this_)->alternatingRowColors();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:197
// [-2] void setIconSize(const class QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView11setIconSizeERK5QSize(void *this_, QSize* size) {
  ((QAbstractItemView*)this_)->setIconSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:198
// [8] QSize iconSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView8iconSizeEv(void *this_) {
  auto rv = ((QAbstractItemView*)this_)->iconSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:200
// [-2] void setTextElideMode(Qt::TextElideMode)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView16setTextElideModeEN2Qt13TextElideModeE(void *this_, Qt::TextElideMode mode) {
  ((QAbstractItemView*)this_)->setTextElideMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:201
// [4] Qt::TextElideMode textElideMode()
extern "C" Q_DECL_EXPORT
Qt::TextElideMode C_ZNK17QAbstractItemView13textElideModeEv(void *this_) {
  return (Qt::TextElideMode)((QAbstractItemView*)this_)->textElideMode();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:203
// [-2] void keyboardSearch(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14keyboardSearchERK7QString(void *this_, QString* search) {
  ((QAbstractItemView*)this_)->keyboardSearch(*search);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:205
// [16] QRect visualRect(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractItemView*)this_)->visualRect(*index);
return new QRect(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:206
// [-2] void scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView8scrollToERK11QModelIndexNS_10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QAbstractItemView*)this_)->scrollTo(*index, hint);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:207
// [24] QModelIndex indexAt(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView7indexAtERK6QPoint(void *this_, QPoint* point) {
  auto rv = ((QAbstractItemView*)this_)->indexAt(*point);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:209
// [8] QSize sizeHintForIndex(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView16sizeHintForIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractItemView*)this_)->sizeHintForIndex(*index);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:210
// [4] int sizeHintForRow(int)
extern "C" Q_DECL_EXPORT
int C_ZNK17QAbstractItemView14sizeHintForRowEi(void *this_, int row) {
  return (int)((QAbstractItemView*)this_)->sizeHintForRow(row);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:211
// [4] int sizeHintForColumn(int)
extern "C" Q_DECL_EXPORT
int C_ZNK17QAbstractItemView17sizeHintForColumnEi(void *this_, int column) {
  return (int)((QAbstractItemView*)this_)->sizeHintForColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:213
// [-2] void openPersistentEditor(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView20openPersistentEditorERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->openPersistentEditor(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:214
// [-2] void closePersistentEditor(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView21closePersistentEditorERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->closePersistentEditor(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:215
// [1] bool isPersistentEditorOpen(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QAbstractItemView22isPersistentEditorOpenERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QAbstractItemView*)this_)->isPersistentEditorOpen(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:217
// [-2] void setIndexWidget(const class QModelIndex &, class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14setIndexWidgetERK11QModelIndexP7QWidget(void *this_, QModelIndex* index, QWidget * widget) {
  ((QAbstractItemView*)this_)->setIndexWidget(*index, widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:218
// [8] QWidget * indexWidget(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView11indexWidgetERK11QModelIndex(void *this_, QModelIndex* index) {
  return (void*)((QAbstractItemView*)this_)->indexWidget(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:220
// [-2] void setItemDelegateForRow(int, class QAbstractItemDelegate *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView21setItemDelegateForRowEiP21QAbstractItemDelegate(void *this_, int row, QAbstractItemDelegate * delegate) {
  ((QAbstractItemView*)this_)->setItemDelegateForRow(row, delegate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:221
// [8] QAbstractItemDelegate * itemDelegateForRow(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView18itemDelegateForRowEi(void *this_, int row) {
  return (void*)((QAbstractItemView*)this_)->itemDelegateForRow(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:223
// [-2] void setItemDelegateForColumn(int, class QAbstractItemDelegate *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView24setItemDelegateForColumnEiP21QAbstractItemDelegate(void *this_, int column, QAbstractItemDelegate * delegate) {
  ((QAbstractItemView*)this_)->setItemDelegateForColumn(column, delegate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:224
// [8] QAbstractItemDelegate * itemDelegateForColumn(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView21itemDelegateForColumnEi(void *this_, int column) {
  return (void*)((QAbstractItemView*)this_)->itemDelegateForColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:226
// [8] QAbstractItemDelegate * itemDelegate(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView12itemDelegateERK11QModelIndex(void *this_, QModelIndex* index) {
  return (void*)((QAbstractItemView*)this_)->itemDelegate(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:228
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery query) {
  auto rv = ((QAbstractItemView*)this_)->inputMethodQuery(query);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:233
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView5resetEv(void *this_) {
  ((QAbstractItemView*)this_)->reset();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:234
// [-2] void setRootIndex(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->setRootIndex(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:235
// [-2] void doItemsLayout()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView13doItemsLayoutEv(void *this_) {
  ((QAbstractItemView*)this_)->doItemsLayout();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:236
// [-2] void selectAll()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView9selectAllEv(void *this_) {
  ((QAbstractItemView*)this_)->selectAll();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:237
// [-2] void edit(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView4editERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->edit(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:238
// [-2] void clearSelection()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14clearSelectionEv(void *this_) {
  ((QAbstractItemView*)this_)->clearSelection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:239
// [-2] void setCurrentIndex(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15setCurrentIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->setCurrentIndex(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:240
// [-2] void scrollToTop()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView11scrollToTopEv(void *this_) {
  ((QAbstractItemView*)this_)->scrollToTop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:241
// [-2] void scrollToBottom()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14scrollToBottomEv(void *this_) {
  ((QAbstractItemView*)this_)->scrollToBottom();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:242
// [-2] void update(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView6updateERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->update(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:262
// [-2] void pressed(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView7pressedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->pressed(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:263
// [-2] void clicked(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView7clickedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->clicked(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:264
// [-2] void doubleClicked(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView13doubleClickedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->doubleClicked(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:266
// [-2] void activated(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView9activatedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->activated(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:267
// [-2] void entered(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView7enteredERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->entered(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:268
// [-2] void viewportEntered()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15viewportEnteredEv(void *this_) {
  ((QAbstractItemView*)this_)->viewportEntered();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:270
// [-2] void iconSizeChanged(const class QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15iconSizeChangedERK5QSize(void *this_, QSize* size) {
  ((QAbstractItemView*)this_)->iconSizeChanged(*size);
}

//  main block end
