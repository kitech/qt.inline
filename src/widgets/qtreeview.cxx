//  header block begin
// /usr/include/qt/QtWidgets/qtreeview.h
#include <qtreeview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTreeView is pure virtual: false
// QTreeView has virtual projected: true
//  header block end

//  main block begin

class MyQTreeView : public QTreeView {
public:
  virtual ~MyQTreeView() {}
// void QTreeView(class QWidget *)
MyQTreeView(QWidget * parent) : QTreeView(parent) {}
// void columnResized(int, int, int)
  virtual void columnResized(int column, int oldSize, int newSize) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"columnResized", &handled, 3, (uint64_t)column, (uint64_t)oldSize, (uint64_t)newSize, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::columnResized(column, oldSize, newSize);
  }
  }
// void columnCountChanged(int, int)
  virtual void columnCountChanged(int oldCount, int newCount) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"columnCountChanged", &handled, 2, (uint64_t)oldCount, (uint64_t)newCount, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::columnCountChanged(oldCount, newCount);
  }
  }
// void columnMoved()
  virtual void columnMoved() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"columnMoved", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::columnMoved();
  }
  }
// void reexpand()
  virtual void reexpand() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"reexpand", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::reexpand();
  }
  }
// void rowsRemoved(const class QModelIndex &, int, int)
  virtual void rowsRemoved(const QModelIndex & parent, int first, int last) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowsRemoved", &handled, 3, (uint64_t)&parent, (uint64_t)first, (uint64_t)last, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::rowsRemoved(parent, first, last);
  }
  }
// void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::scrollContentsBy(dx, dy);
  }
  }
// void rowsInserted(const class QModelIndex &, int, int)
  virtual void rowsInserted(const QModelIndex & parent, int start, int end) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::rowsInserted(parent, start, end);
  }
  }
// void rowsAboutToBeRemoved(const class QModelIndex &, int, int)
  virtual void rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowsAboutToBeRemoved", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::rowsAboutToBeRemoved(parent, start, end);
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
    return QTreeView::moveCursor(cursorAction, modifiers);
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
    return QTreeView::horizontalOffset();
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
    return QTreeView::verticalOffset();
  }
  }
// void setSelection(const class QRect &, class QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)command, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::setSelection(rect, command);
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
    return QTreeView::visualRegionForSelection(selection);
  }
  }
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::timerEvent(event);
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::paintEvent(event);
  }
  }
// void drawTree(class QPainter *, const class QRegion &)
  virtual void drawTree(QPainter * painter, const QRegion & region) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"drawTree", &handled, 2, (uint64_t)painter, (uint64_t)&region, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::drawTree(painter, region);
  }
  }
// void drawRow(class QPainter *, const class QStyleOptionViewItem &, const class QModelIndex &)
  virtual void drawRow(QPainter * painter, const QStyleOptionViewItem & options, const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"drawRow", &handled, 3, (uint64_t)painter, (uint64_t)&options, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::drawRow(painter, options, index);
  }
  }
// void drawBranches(class QPainter *, const class QRect &, const class QModelIndex &)
  virtual void drawBranches(QPainter * painter, const QRect & rect, const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"drawBranches", &handled, 3, (uint64_t)painter, (uint64_t)&rect, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::drawBranches(painter, rect, index);
  }
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::mousePressEvent(event);
  }
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::mouseReleaseEvent(event);
  }
  }
// void mouseDoubleClickEvent(class QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::mouseDoubleClickEvent(event);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::mouseMoveEvent(event);
  }
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::keyPressEvent(event);
  }
  }
// void dragMoveEvent(class QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::dragMoveEvent(event);
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
    return QTreeView::viewportEvent(event);
  }
  }
// void updateGeometries()
  virtual void updateGeometries() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::updateGeometries();
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
    return QTreeView::viewportSizeHint();
  }
  }
// int sizeHintForColumn(int)
  virtual int sizeHintForColumn(int column) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sizeHintForColumn", &handled, 1, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QTreeView::sizeHintForColumn(column);
  }
  }
// int indexRowSizeHint(const class QModelIndex &)
  virtual int indexRowSizeHint(const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"indexRowSizeHint", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QTreeView::indexRowSizeHint(index);
  }
  }
// int rowHeight(const class QModelIndex &)
  virtual int rowHeight(const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowHeight", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QTreeView::rowHeight(index);
  }
  }
// void horizontalScrollbarAction(int)
  virtual void horizontalScrollbarAction(int action) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"horizontalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::horizontalScrollbarAction(action);
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
    return QTreeView::isIndexHidden(index);
  }
  }
// void selectionChanged(const class QItemSelection &, const class QItemSelection &)
  virtual void selectionChanged(const QItemSelection & selected, const QItemSelection & deselected) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"selectionChanged", &handled, 2, (uint64_t)&selected, (uint64_t)&deselected, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::selectionChanged(selected, deselected);
  }
  }
// void currentChanged(const class QModelIndex &, const class QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & previous) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&previous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTreeView::currentChanged(current, previous);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QTreeView10metaObjectEv(void *this_) {
  return (void*)((QTreeView*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:71
// [-2] void QTreeView(class QWidget *)
extern "C"
void* C_ZN9QTreeViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTreeView*)(0);
  return  new MyQTreeView(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:72
// [-2] void ~QTreeView()
extern "C"
void C_ZN9QTreeViewD2Ev(void *this_) {
  delete (QTreeView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:74
// [-2] void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN9QTreeView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QTreeView*)this_)->setModel(model);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:75
// [-2] void setRootIndex(const class QModelIndex &)
extern "C"
void C_ZN9QTreeView12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTreeView*)this_)->setRootIndex(*index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:76
// [-2] void setSelectionModel(class QItemSelectionModel *)
extern "C"
void C_ZN9QTreeView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QTreeView*)this_)->setSelectionModel(selectionModel);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:78
// [8] QHeaderView * header()
extern "C"
void* C_ZNK9QTreeView6headerEv(void *this_) {
  return (void*)((QTreeView*)this_)->header();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:79
// [-2] void setHeader(class QHeaderView *)
extern "C"
void C_ZN9QTreeView9setHeaderEP11QHeaderView(void *this_, QHeaderView * header) {
  ((QTreeView*)this_)->setHeader(header);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:81
// [4] int autoExpandDelay()
extern "C"
int C_ZNK9QTreeView15autoExpandDelayEv(void *this_) {
  return (int)((QTreeView*)this_)->autoExpandDelay();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:82
// [-2] void setAutoExpandDelay(int)
extern "C"
void C_ZN9QTreeView18setAutoExpandDelayEi(void *this_, int delay) {
  ((QTreeView*)this_)->setAutoExpandDelay(delay);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:84
// [4] int indentation()
extern "C"
int C_ZNK9QTreeView11indentationEv(void *this_) {
  return (int)((QTreeView*)this_)->indentation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:85
// [-2] void setIndentation(int)
extern "C"
void C_ZN9QTreeView14setIndentationEi(void *this_, int i) {
  ((QTreeView*)this_)->setIndentation(i);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:86
// [-2] void resetIndentation()
extern "C"
void C_ZN9QTreeView16resetIndentationEv(void *this_) {
  ((QTreeView*)this_)->resetIndentation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:88
// [1] bool rootIsDecorated()
extern "C"
bool C_ZNK9QTreeView15rootIsDecoratedEv(void *this_) {
  return (bool)((QTreeView*)this_)->rootIsDecorated();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:89
// [-2] void setRootIsDecorated(_Bool)
extern "C"
void C_ZN9QTreeView18setRootIsDecoratedEb(void *this_, bool show) {
  ((QTreeView*)this_)->setRootIsDecorated(show);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:91
// [1] bool uniformRowHeights()
extern "C"
bool C_ZNK9QTreeView17uniformRowHeightsEv(void *this_) {
  return (bool)((QTreeView*)this_)->uniformRowHeights();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:92
// [-2] void setUniformRowHeights(_Bool)
extern "C"
void C_ZN9QTreeView20setUniformRowHeightsEb(void *this_, bool uniform) {
  ((QTreeView*)this_)->setUniformRowHeights(uniform);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:94
// [1] bool itemsExpandable()
extern "C"
bool C_ZNK9QTreeView15itemsExpandableEv(void *this_) {
  return (bool)((QTreeView*)this_)->itemsExpandable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:95
// [-2] void setItemsExpandable(_Bool)
extern "C"
void C_ZN9QTreeView18setItemsExpandableEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setItemsExpandable(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:97
// [1] bool expandsOnDoubleClick()
extern "C"
bool C_ZNK9QTreeView20expandsOnDoubleClickEv(void *this_) {
  return (bool)((QTreeView*)this_)->expandsOnDoubleClick();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:98
// [-2] void setExpandsOnDoubleClick(_Bool)
extern "C"
void C_ZN9QTreeView23setExpandsOnDoubleClickEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setExpandsOnDoubleClick(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:100
// [4] int columnViewportPosition(int)
extern "C"
int C_ZNK9QTreeView22columnViewportPositionEi(void *this_, int column) {
  return (int)((QTreeView*)this_)->columnViewportPosition(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:101
// [4] int columnWidth(int)
extern "C"
int C_ZNK9QTreeView11columnWidthEi(void *this_, int column) {
  return (int)((QTreeView*)this_)->columnWidth(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:102
// [-2] void setColumnWidth(int, int)
extern "C"
void C_ZN9QTreeView14setColumnWidthEii(void *this_, int column, int width) {
  ((QTreeView*)this_)->setColumnWidth(column, width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:103
// [4] int columnAt(int)
extern "C"
int C_ZNK9QTreeView8columnAtEi(void *this_, int x) {
  return (int)((QTreeView*)this_)->columnAt(x);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:105
// [1] bool isColumnHidden(int)
extern "C"
bool C_ZNK9QTreeView14isColumnHiddenEi(void *this_, int column) {
  return (bool)((QTreeView*)this_)->isColumnHidden(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:106
// [-2] void setColumnHidden(int, _Bool)
extern "C"
void C_ZN9QTreeView15setColumnHiddenEib(void *this_, int column, bool hide) {
  ((QTreeView*)this_)->setColumnHidden(column, hide);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:108
// [1] bool isHeaderHidden()
extern "C"
bool C_ZNK9QTreeView14isHeaderHiddenEv(void *this_) {
  return (bool)((QTreeView*)this_)->isHeaderHidden();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:109
// [-2] void setHeaderHidden(_Bool)
extern "C"
void C_ZN9QTreeView15setHeaderHiddenEb(void *this_, bool hide) {
  ((QTreeView*)this_)->setHeaderHidden(hide);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:111
// [1] bool isRowHidden(int, const class QModelIndex &)
extern "C"
bool C_ZNK9QTreeView11isRowHiddenEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QTreeView*)this_)->isRowHidden(row, *parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:112
// [-2] void setRowHidden(int, const class QModelIndex &, _Bool)
extern "C"
void C_ZN9QTreeView12setRowHiddenEiRK11QModelIndexb(void *this_, int row, QModelIndex* parent, bool hide) {
  ((QTreeView*)this_)->setRowHidden(row, *parent, hide);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:114
// [1] bool isFirstColumnSpanned(int, const class QModelIndex &)
extern "C"
bool C_ZNK9QTreeView20isFirstColumnSpannedEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QTreeView*)this_)->isFirstColumnSpanned(row, *parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:115
// [-2] void setFirstColumnSpanned(int, const class QModelIndex &, _Bool)
extern "C"
void C_ZN9QTreeView21setFirstColumnSpannedEiRK11QModelIndexb(void *this_, int row, QModelIndex* parent, bool span) {
  ((QTreeView*)this_)->setFirstColumnSpanned(row, *parent, span);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:117
// [1] bool isExpanded(const class QModelIndex &)
extern "C"
bool C_ZNK9QTreeView10isExpandedERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QTreeView*)this_)->isExpanded(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:118
// [-2] void setExpanded(const class QModelIndex &, _Bool)
extern "C"
void C_ZN9QTreeView11setExpandedERK11QModelIndexb(void *this_, QModelIndex* index, bool expand) {
  ((QTreeView*)this_)->setExpanded(*index, expand);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:120
// [-2] void setSortingEnabled(_Bool)
extern "C"
void C_ZN9QTreeView17setSortingEnabledEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setSortingEnabled(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:121
// [1] bool isSortingEnabled()
extern "C"
bool C_ZNK9QTreeView16isSortingEnabledEv(void *this_) {
  return (bool)((QTreeView*)this_)->isSortingEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:123
// [-2] void setAnimated(_Bool)
extern "C"
void C_ZN9QTreeView11setAnimatedEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setAnimated(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:124
// [1] bool isAnimated()
extern "C"
bool C_ZNK9QTreeView10isAnimatedEv(void *this_) {
  return (bool)((QTreeView*)this_)->isAnimated();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:126
// [-2] void setAllColumnsShowFocus(_Bool)
extern "C"
void C_ZN9QTreeView22setAllColumnsShowFocusEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setAllColumnsShowFocus(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:127
// [1] bool allColumnsShowFocus()
extern "C"
bool C_ZNK9QTreeView19allColumnsShowFocusEv(void *this_) {
  return (bool)((QTreeView*)this_)->allColumnsShowFocus();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:129
// [-2] void setWordWrap(_Bool)
extern "C"
void C_ZN9QTreeView11setWordWrapEb(void *this_, bool on) {
  ((QTreeView*)this_)->setWordWrap(on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:130
// [1] bool wordWrap()
extern "C"
bool C_ZNK9QTreeView8wordWrapEv(void *this_) {
  return (bool)((QTreeView*)this_)->wordWrap();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:132
// [-2] void setTreePosition(int)
extern "C"
void C_ZN9QTreeView15setTreePositionEi(void *this_, int logicalIndex) {
  ((QTreeView*)this_)->setTreePosition(logicalIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:133
// [4] int treePosition()
extern "C"
int C_ZNK9QTreeView12treePositionEv(void *this_) {
  return (int)((QTreeView*)this_)->treePosition();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:135
// [-2] void keyboardSearch(const class QString &)
extern "C"
void C_ZN9QTreeView14keyboardSearchERK7QString(void *this_, QString* search) {
  ((QTreeView*)this_)->keyboardSearch(*search);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:137
// [16] QRect visualRect(const class QModelIndex &)
extern "C"
void* C_ZNK9QTreeView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QTreeView*)this_)->visualRect(*index);
return new QRect(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:138
// [-2] void scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void C_ZN9QTreeView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QTreeView*)this_)->scrollTo(*index, hint);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:139
// [24] QModelIndex indexAt(const class QPoint &)
extern "C"
void* C_ZNK9QTreeView7indexAtERK6QPoint(void *this_, QPoint* p) {
  auto rv = ((QTreeView*)this_)->indexAt(*p);
return new QModelIndex(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:140
// [24] QModelIndex indexAbove(const class QModelIndex &)
extern "C"
void* C_ZNK9QTreeView10indexAboveERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QTreeView*)this_)->indexAbove(*index);
return new QModelIndex(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:141
// [24] QModelIndex indexBelow(const class QModelIndex &)
extern "C"
void* C_ZNK9QTreeView10indexBelowERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QTreeView*)this_)->indexBelow(*index);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:143
// [-2] void doItemsLayout()
extern "C"
void C_ZN9QTreeView13doItemsLayoutEv(void *this_) {
  ((QTreeView*)this_)->doItemsLayout();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:144
// [-2] void reset()
extern "C"
void C_ZN9QTreeView5resetEv(void *this_) {
  ((QTreeView*)this_)->reset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:146
// [-2] void sortByColumn(int, Qt::SortOrder)
extern "C"
void C_ZN9QTreeView12sortByColumnEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTreeView*)this_)->sortByColumn(column, order);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:149
// [-2] void selectAll()
extern "C"
void C_ZN9QTreeView9selectAllEv(void *this_) {
  ((QTreeView*)this_)->selectAll();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:152
// [-2] void expanded(const class QModelIndex &)
extern "C"
void C_ZN9QTreeView8expandedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTreeView*)this_)->expanded(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:153
// [-2] void collapsed(const class QModelIndex &)
extern "C"
void C_ZN9QTreeView9collapsedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTreeView*)this_)->collapsed(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:156
// [-2] void hideColumn(int)
extern "C"
void C_ZN9QTreeView10hideColumnEi(void *this_, int column) {
  ((QTreeView*)this_)->hideColumn(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:157
// [-2] void showColumn(int)
extern "C"
void C_ZN9QTreeView10showColumnEi(void *this_, int column) {
  ((QTreeView*)this_)->showColumn(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:158
// [-2] void expand(const class QModelIndex &)
extern "C"
void C_ZN9QTreeView6expandERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTreeView*)this_)->expand(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:159
// [-2] void collapse(const class QModelIndex &)
extern "C"
void C_ZN9QTreeView8collapseERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTreeView*)this_)->collapse(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:160
// [-2] void resizeColumnToContents(int)
extern "C"
void C_ZN9QTreeView22resizeColumnToContentsEi(void *this_, int column) {
  ((QTreeView*)this_)->resizeColumnToContents(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:161
// [-2] void sortByColumn(int)
extern "C"
void C_ZN9QTreeView12sortByColumnEi(void *this_, int column) {
  ((QTreeView*)this_)->sortByColumn(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:162
// [-2] void expandAll()
extern "C"
void C_ZN9QTreeView9expandAllEv(void *this_) {
  ((QTreeView*)this_)->expandAll();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:163
// [-2] void collapseAll()
extern "C"
void C_ZN9QTreeView11collapseAllEv(void *this_) {
  ((QTreeView*)this_)->collapseAll();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreeview.h:164
// [-2] void expandToDepth(int)
extern "C"
void C_ZN9QTreeView13expandToDepthEi(void *this_, int depth) {
  ((QTreeView*)this_)->expandToDepth(depth);
}
//  main block end
