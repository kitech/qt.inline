//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(itemviews)
// /usr/include/qt/QtWidgets/qabstractitemview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractitemview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractItemView is pure virtual: true
// QAbstractItemView has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractItemView_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractItemView_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractItemView_t qt_meta_stringdata_MyQAbstractItemView = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQAbstractItemView"
  },
  "MyQAbstractItemView"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractItemView[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQAbstractItemView : public QAbstractItemView {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractItemView::staticMetaObject,
  qt_meta_stringdata_MyQAbstractItemView.data,
  qt_meta_data_MyQAbstractItemView,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractItemView.stringdata0))
      return static_cast<void*>(this);
  return QAbstractItemView::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractItemView::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQAbstractItemView() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QRect visualRect(const QModelIndex &)
  virtual QRect visualRect(const QModelIndex & index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visualRect", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRect){};}
    auto prv = (QRect*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRect
    } else {
    return (QRect){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void scrollTo(const QModelIndex &, QAbstractItemView::ScrollHint)
  virtual void scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollTo", &handled, 2, (uint64_t)&index, (uint64_t)hint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractItemView::scrollTo(index, hint);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [24] QModelIndex indexAt(const QPoint &)
  virtual QModelIndex indexAt(const QPoint & point) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"indexAt", &handled, 1, (uint64_t)&point, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QModelIndex){};}
    auto prv = (QModelIndex*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QModelIndex
    } else {
    return (QModelIndex){};
  }
  }

// void QAbstractItemView(QWidget *)
MyQAbstractItemView(QWidget * parent) : QAbstractItemView(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void dataChanged(const QModelIndex &, const QModelIndex &, const QVector<int> &)
  virtual void dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QVector<int> & roles)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dataChanged", &handled, 3, (uint64_t)&topLeft, (uint64_t)&bottomRight, (uint64_t)&roles, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void rowsInserted(const QModelIndex &, int, int)
  virtual void rowsInserted(const QModelIndex & parent, int start, int end_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end_, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::rowsInserted(parent, start, end_);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void rowsAboutToBeRemoved(const QModelIndex &, int, int)
  virtual void rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowsAboutToBeRemoved", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end_, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::rowsAboutToBeRemoved(parent, start, end_);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void selectionChanged(const QItemSelection &, const QItemSelection &)
  virtual void selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectionChanged", &handled, 2, (uint64_t)&selected, (uint64_t)&deselected, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::selectionChanged(selected, deselected);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & previous)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&previous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::currentChanged(current, previous);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateEditorData()
  virtual void updateEditorData()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateEditorData", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::updateEditorData();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateEditorGeometries()
  virtual void updateEditorGeometries()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateEditorGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::updateEditorGeometries();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateGeometries()
  virtual void updateGeometries()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::updateGeometries();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void verticalScrollbarAction(int)
  virtual void verticalScrollbarAction(int action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::verticalScrollbarAction(action);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void horizontalScrollbarAction(int)
  virtual void horizontalScrollbarAction(int action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::horizontalScrollbarAction(action);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void verticalScrollbarValueChanged(int)
  virtual void verticalScrollbarValueChanged(int value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalScrollbarValueChanged", &handled, 1, (uint64_t)value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::verticalScrollbarValueChanged(value);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void horizontalScrollbarValueChanged(int)
  virtual void horizontalScrollbarValueChanged(int value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalScrollbarValueChanged", &handled, 1, (uint64_t)value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::horizontalScrollbarValueChanged(value);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void closeEditor(QWidget *, QAbstractItemDelegate::EndEditHint)
  virtual void closeEditor(QWidget * editor, QAbstractItemDelegate::EndEditHint hint)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"closeEditor", &handled, 2, (uint64_t)editor, (uint64_t)hint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::closeEditor(editor, hint);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void commitData(QWidget *)
  virtual void commitData(QWidget * editor)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"commitData", &handled, 1, (uint64_t)editor, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::commitData(editor);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void editorDestroyed(QObject *)
  virtual void editorDestroyed(QObject * editor)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"editorDestroyed", &handled, 1, (uint64_t)editor, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::editorDestroyed(editor);
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveCursor", &handled, 2, (uint64_t)cursorAction, (uint64_t)modifiers, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QModelIndex){};}
    auto prv = (QModelIndex*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QModelIndex
    } else {
    return (QModelIndex){};
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// [4] int horizontalOffset()
  virtual int horizontalOffset() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// [4] int verticalOffset()
  virtual int verticalOffset() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// [1] bool isIndexHidden(const QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isIndexHidden", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)command, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractItemView::setSelection(rect, command);
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// [8] QRegion visualRegionForSelection(const QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visualRegionForSelection", &handled, 1, (uint64_t)&selection, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRegion){};}
    auto prv = (QRegion*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRegion
    } else {
    return (QRegion){};
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QModelIndexList selectedIndexes()
  virtual QModelIndexList selectedIndexes() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectedIndexes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndexList*)(irv);
      // Typedef Record QList<QModelIndex>
    } else {
    return QAbstractItemView::selectedIndexes();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool edit(const QModelIndex &, QAbstractItemView::EditTrigger, QEvent *)
  virtual bool edit(const QModelIndex & index, QAbstractItemView::EditTrigger trigger, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"edit", &handled, 3, (uint64_t)&index, (uint64_t)trigger, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractItemView::edit(index, trigger, event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex &, const QEvent *)
  virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex & index, const QEvent * event) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectionCommand", &handled, 2, (uint64_t)&index, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QItemSelectionModel::SelectionFlags)(int)(irv);
      // Elaborated Record QFlags<QItemSelectionModel::SelectionFlag>
    } else {
    return QAbstractItemView::selectionCommand(index, event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void startDrag(Qt::DropActions)
  virtual void startDrag(QFlags<Qt::DropAction> supportedActions)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"startDrag", &handled, 1, (uint64_t)supportedActions, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::startDrag(supportedActions);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [192] QStyleOptionViewItem viewOptions()
  virtual QStyleOptionViewItem viewOptions() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewOptions", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStyleOptionViewItem){};}
    auto prv = (QStyleOptionViewItem*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStyleOptionViewItem
    } else {
    return QAbstractItemView::viewOptions();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool focusNextPrevChild(bool)
  virtual bool focusNextPrevChild(bool next)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractItemView::focusNextPrevChild(next);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractItemView::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool viewportEvent(QEvent *)
  virtual bool viewportEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractItemView::viewportEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::mouseMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::mouseReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::mouseDoubleClickEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragEnterEvent(QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::dragEnterEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragMoveEvent(QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::dragMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::dragLeaveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::dropEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::focusInEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::focusOutEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::timerEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void inputMethodEvent(QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractItemView::inputMethodEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractItemView::eventFilter(object, event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QSize viewportSizeHint()
  virtual QSize viewportSizeHint() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return QAbstractItemView::viewportSizeHint();
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAbstractItemView_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractItemView* qo = (MyQAbstractItemView*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:205
// [16] QRect visualRect(const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:206
// [-2] void scrollTo(const QModelIndex &, QAbstractItemView::ScrollHint)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:207
// [24] QModelIndex indexAt(const QPoint &)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:245
// [-2] void dataChanged(const QModelIndex &, const QModelIndex &, const QVector<int> &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView11dataChangedERK11QModelIndexS2_RK7QVectorIiE(void *this_, QModelIndex* topLeft, QModelIndex* bottomRight, QVector<int>* roles) {
  ((QAbstractItemView*)this_)->QAbstractItemView::dataChanged(*topLeft, *bottomRight, *roles);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:246
// [-2] void rowsInserted(const QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView12rowsInsertedERK11QModelIndexii(void *this_, QModelIndex* parent, int start, int end_) {
  ((QAbstractItemView*)this_)->QAbstractItemView::rowsInserted(*parent, start, end_);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:247
// [-2] void rowsAboutToBeRemoved(const QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView20rowsAboutToBeRemovedERK11QModelIndexii(void *this_, QModelIndex* parent, int start, int end_) {
  ((QAbstractItemView*)this_)->QAbstractItemView::rowsAboutToBeRemoved(*parent, start, end_);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:248
// [-2] void selectionChanged(const QItemSelection &, const QItemSelection &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView16selectionChangedERK14QItemSelectionS2_(void *this_, QItemSelection* selected, QItemSelection* deselected) {
  ((QAbstractItemView*)this_)->QAbstractItemView::selectionChanged(*selected, *deselected);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:249
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
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
// since 4.4
// /usr/include/qt/QtWidgets/qabstractitemview.h:252
// [-2] void updateGeometries()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView16updateGeometriesEv(void *this_) {
  ((QAbstractItemView*)this_)->QAbstractItemView::updateGeometries();
}
#endif // QT_VERSION >= 0x040400

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
// [-2] void closeEditor(QWidget *, QAbstractItemDelegate::EndEditHint)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView11closeEditorEP7QWidgetN21QAbstractItemDelegate11EndEditHintE(void *this_, QWidget * editor, QAbstractItemDelegate::EndEditHint hint) {
  ((QAbstractItemView*)this_)->QAbstractItemView::closeEditor(editor, hint);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:258
// [-2] void commitData(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView10commitDataEP7QWidget(void *this_, QWidget * editor) {
  ((QAbstractItemView*)this_)->QAbstractItemView::commitData(editor);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:259
// [-2] void editorDestroyed(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15editorDestroyedEP7QObject(void *this_, QObject * editor) {
  ((QAbstractItemView*)this_)->QAbstractItemView::editorDestroyed(editor);
}

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:283
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:286
// [4] int horizontalOffset()
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:287
// [4] int verticalOffset()
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:289
// [1] bool isIndexHidden(const QModelIndex &)
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:291
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:292
// [8] QRegion visualRegionForSelection(const QItemSelection &)
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
// [1] bool edit(const QModelIndex &, QAbstractItemView::EditTrigger, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QAbstractItemView4editERK11QModelIndexNS_11EditTriggerEP6QEvent(void *this_, QModelIndex* index, QAbstractItemView::EditTrigger trigger, QEvent * event) {
  return (bool)((QAbstractItemView*)this_)->QAbstractItemView::edit(*index, trigger, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:297
// [4] QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex &, const QEvent *)
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:330
// [1] bool focusNextPrevChild(bool)
extern "C" Q_DECL_EXPORT
bool C_ZN17QAbstractItemView18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QAbstractItemView*)this_)->QAbstractItemView::focusNextPrevChild(next);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:331
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QAbstractItemView5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QAbstractItemView*)this_)->QAbstractItemView::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:332
// [1] bool viewportEvent(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QAbstractItemView13viewportEventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QAbstractItemView*)this_)->QAbstractItemView::viewportEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:333
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:334
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:335
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::mouseReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:336
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::mouseDoubleClickEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:338
// [-2] void dragEnterEvent(QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::dragEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:339
// [-2] void dragMoveEvent(QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::dragMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:340
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::dragLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:341
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView9dropEventEP10QDropEvent(void *this_, QDropEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::dropEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:343
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:344
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::focusOutEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:345
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:346
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:347
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView10timerEventEP11QTimerEvent(void *this_, QTimerEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::timerEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:348
// [-2] void inputMethodEvent(QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * event) {
  ((QAbstractItemView*)this_)->QAbstractItemView::inputMethodEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:349
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QAbstractItemView11eventFilterEP7QObjectP6QEvent(void *this_, QObject * object, QEvent * event) {
  return (bool)((QAbstractItemView*)this_)->QAbstractItemView::eventFilter(object, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:356
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

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:63
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAbstractItemView11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractItemView*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:63
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QAbstractItemView11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractItemView*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:63
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAbstractItemView2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractItemView::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:63
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAbstractItemView6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractItemView::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:127
// [-2] void QAbstractItemView(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAbstractItemViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractItemView*)(0);
  return  new MyQAbstractItemView(parent);
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
// [-2] void setModel(QAbstractItemModel *)
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
// [-2] void setSelectionModel(QItemSelectionModel *)
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
// [-2] void setItemDelegate(QAbstractItemDelegate *)
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
// [-2] void setSelectionMode(QAbstractItemView::SelectionMode)
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
// [-2] void setSelectionBehavior(QAbstractItemView::SelectionBehavior)
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
// [-2] void setVerticalScrollMode(QAbstractItemView::ScrollMode)
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
// [-2] void setHorizontalScrollMode(QAbstractItemView::ScrollMode)
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
// [-2] void setAutoScroll(bool)
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
// [-2] void setTabKeyNavigation(bool)
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
// [-2] void setDropIndicatorShown(bool)
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
// [-2] void setDragEnabled(bool)
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
// [-2] void setDragDropOverwriteMode(bool)
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
// [-2] void setDragDropMode(QAbstractItemView::DragDropMode)
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
// [-2] void setAlternatingRowColors(bool)
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
// [-2] void setIconSize(const QSize &)
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
// [-2] void keyboardSearch(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14keyboardSearchERK7QString(void *this_, QString* search) {
  ((QAbstractItemView*)this_)->keyboardSearch(*search);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:205
// [16] QRect visualRect(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractItemView*)this_)->visualRect(*index);
return new QRect(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:206
// [-2] void scrollTo(const QModelIndex &, QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView8scrollToERK11QModelIndexNS_10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QAbstractItemView*)this_)->scrollTo(*index, hint);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:207
// [24] QModelIndex indexAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView7indexAtERK6QPoint(void *this_, QPoint* point) {
  auto rv = ((QAbstractItemView*)this_)->indexAt(*point);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:209
// [8] QSize sizeHintForIndex(const QModelIndex &)
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
// [-2] void openPersistentEditor(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView20openPersistentEditorERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->openPersistentEditor(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:214
// [-2] void closePersistentEditor(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView21closePersistentEditorERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->closePersistentEditor(*index);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtWidgets/qabstractitemview.h:215
// [1] bool isPersistentEditorOpen(const QModelIndex &)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK17QAbstractItemView22isPersistentEditorOpenERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QAbstractItemView*)this_)->isPersistentEditorOpen(*index);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qabstractitemview.h:217
// [-2] void setIndexWidget(const QModelIndex &, QWidget *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14setIndexWidgetERK11QModelIndexP7QWidget(void *this_, QModelIndex* index, QWidget * widget) {
  ((QAbstractItemView*)this_)->setIndexWidget(*index, widget);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qabstractitemview.h:218
// [8] QWidget * indexWidget(const QModelIndex &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView11indexWidgetERK11QModelIndex(void *this_, QModelIndex* index) {
  return (void*)((QAbstractItemView*)this_)->indexWidget(*index);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractitemview.h:220
// [-2] void setItemDelegateForRow(int, QAbstractItemDelegate *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView21setItemDelegateForRowEiP21QAbstractItemDelegate(void *this_, int row, QAbstractItemDelegate * delegate) {
  ((QAbstractItemView*)this_)->setItemDelegateForRow(row, delegate);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractitemview.h:221
// [8] QAbstractItemDelegate * itemDelegateForRow(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView18itemDelegateForRowEi(void *this_, int row) {
  return (void*)((QAbstractItemView*)this_)->itemDelegateForRow(row);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractitemview.h:223
// [-2] void setItemDelegateForColumn(int, QAbstractItemDelegate *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView24setItemDelegateForColumnEiP21QAbstractItemDelegate(void *this_, int column, QAbstractItemDelegate * delegate) {
  ((QAbstractItemView*)this_)->setItemDelegateForColumn(column, delegate);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractitemview.h:224
// [8] QAbstractItemDelegate * itemDelegateForColumn(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAbstractItemView21itemDelegateForColumnEi(void *this_, int column) {
  return (void*)((QAbstractItemView*)this_)->itemDelegateForColumn(column);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:226
// [8] QAbstractItemDelegate * itemDelegate(const QModelIndex &)
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
// [-2] void setRootIndex(const QModelIndex &)
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
// [-2] void edit(const QModelIndex &)
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
// [-2] void setCurrentIndex(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15setCurrentIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->setCurrentIndex(*index);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qabstractitemview.h:240
// [-2] void scrollToTop()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView11scrollToTopEv(void *this_) {
  ((QAbstractItemView*)this_)->scrollToTop();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qabstractitemview.h:241
// [-2] void scrollToBottom()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView14scrollToBottomEv(void *this_) {
  ((QAbstractItemView*)this_)->scrollToBottom();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qabstractitemview.h:242
// [-2] void update(const QModelIndex &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView6updateERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->update(*index);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:262
// [-2] void pressed(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView7pressedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->pressed(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:263
// [-2] void clicked(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView7clickedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->clicked(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:264
// [-2] void doubleClicked(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView13doubleClickedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->doubleClicked(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:266
// [-2] void activated(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView9activatedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QAbstractItemView*)this_)->activated(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:267
// [-2] void entered(const QModelIndex &)
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
// [-2] void iconSizeChanged(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractItemView15iconSizeChangedERK5QSize(void *this_, QSize* size) {
  ((QAbstractItemView*)this_)->iconSizeChanged(*size);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(itemviews)
#endif // #ifndef QT_MINIMAL
//  footer block end
